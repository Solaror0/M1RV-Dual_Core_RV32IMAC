`timescale 1ns / 1ps

module amo_feeder(

    input logic start, clk, rst, StallD, ALUResult, reserve_valid, Zero,
    input logic [31:0] AMOinstr,
    output logic active, specialReg, lr, sc, lrsc_on,
    output logic [31:0] sub_instrD //substitute instrD
);

logic [31:0] decoded_instr [4:0];
logic [31:0] AMOinstrlatch;

logic [4:0] rd, addrTrue, rs1, rs2, funct5;
logic [2:0] funct3, alu_funct3;
logic [2:0] count, count_target;
logic addrConflict;

always_comb begin
    rd = AMOinstrlatch [11:7];
    funct3 = AMOinstrlatch [14:12];
    rs1 = AMOinstrlatch [19:15];
    rs2 = AMOinstrlatch [24:20];
    funct5 = AMOinstrlatch [31:27];
    addrConflict = (rd==rs1);
    addrTrue = addrConflict ? 5'b00101 : rs1;
    
    case (funct5)
        5'b00000: alu_funct3 = 3'b000; // amoadd   -> ALU_ADD (Same as ADD)
        5'b00100: alu_funct3 = 3'b100; // amoxor   -> ALU_XOR (Same as XOR)
        5'b01000: alu_funct3 = 3'b110; // amoor    -> ALU_OR  (Same as OR)
        5'b01100: alu_funct3 = 3'b111; // amoand   -> ALU_AND (Same as AND)
        
        // min/max operations require comparison via subtraction
        5'b10000: alu_funct3 = 3'b010; // amomin   -> ALU_SUB (Use SUB to compare signed)
        5'b10100: alu_funct3 = 3'b010; // amomax   -> ALU_SUB (Use SUB to compare signed)
        5'b11000: alu_funct3 = 3'b011; // amominu  -> ALU_SUB (Use SUB to compare unsigned)
        5'b11100: alu_funct3 = 3'b011; // amomaxu  -> ALU_SUB (Use SUB to compare unsigned)
        
        // amoswap handles routing data directly without arithmetic alterations
        5'b00001: alu_funct3 = 3'b000; // amoswap  -> ALU_PASS_B (Pass rs2 directly to memory)
        
        default:  alu_funct3 = 3'b000; // Default fallback
    endcase
    
   
    
    if (funct5[1]) begin  //LR SC
    lrsc_on = funct5[1] & (active | start);
        if(funct5[0]) begin //SC
        decoded_instr[0] = {12'b0,addrTrue,funct3,5'b00111,7'b0000011}; //lw
        decoded_instr[1] = {7'b0,rs2,addrTrue,funct3,5'b0,7'b0100011};  //sw
        decoded_instr[2] = {7'b0100000,5'b00111,5'b00110,3'b0,5'b0,7'b0110011}; //SUB to get Zero
        decoded_instr[3] = 32'h00000013;
        decoded_instr[4] = (reserve_valid & Zero) ? {12'b0,5'b0,3'b0,rd,7'b0010011} : {{11'b0,1'b1},5'b0,3'b0,rd,7'b0010011};//addi 0 or 1 to rd
        count_target = 3'd5;
        end 
        else begin //LR     
        decoded_instr[0] = {12'b0,rs1,funct3,rd,7'b0000011}; //lw
        decoded_instr[1] = {12'b0,rd,3'b000,5'b00110,7'b0010011}; //addi to t1, saving the data from the lw, change this to a CSR i guess 
        count_target = 3'd2;
        end
        
    end else begin
    lrsc_on = 0;
    
        decoded_instr[0] = {12'b0,rs1,funct3,rd,7'b0000011}; //lw
        if(funct5[4]) begin  //AMO MAX MIN 
            lr = 0;
            decoded_instr[1] = {7'b0,rs2,rd,alu_funct3,5'b0,7'b0110011}; //SLT instruction, dont care about where the result is stored hence x0 which won't enter
            decoded_instr[2] = 32'h00000013; //might not be necessary..?
            count_target = 3'd4;
            case(funct5[3:2]) 
                2'b00: decoded_instr[3] = ALUResult ? {7'b0,rd,addrTrue,funct3,5'b0,7'b0100011} :  {7'b0,rs2,addrTrue,funct3,5'b0,7'b0100011}; 
                2'b01: decoded_instr[3] = ALUResult ? {7'b0,rs2,addrTrue,funct3,5'b0,7'b0100011} : {7'b0,rd,addrTrue,funct3,5'b0,7'b0100011} ;
                2'b10: decoded_instr[3] = ALUResult ? {7'b0,rs2,addrTrue,funct3,5'b0,7'b0100011} : {7'b0,rd,addrTrue,funct3,5'b0,7'b0100011}; 
                2'b11: decoded_instr[3] = ALUResult ?  {7'b0,rd,addrTrue,funct3,5'b0,7'b0100011} :  {7'b0,rs2,addrTrue,funct3,5'b0,7'b0100011};
            endcase
        end
        else begin  //AMO ADD SUB etc
            lr = 0;
            count_target = 3'd3;
            if(funct5==5'b00001)
            begin
                decoded_instr[1] = 32'h00000013; //for a swap, just passing along
            end else begin 
                decoded_instr[1] = {7'b0,rs2,rd,alu_funct3,rs2,7'b0110011}; //might have to change the second rs2 to rd
            end
            
            decoded_instr[2] = {7'b0,rs2,addrTrue,funct3,5'b0,7'b0100011}; 
            decoded_instr[3] = 32'h00000013;
        end
    end
end


always_ff@(posedge clk)begin
    if (rst) begin
        sub_instrD<=32'h00000013;
        active<=0;
        specialReg <=0;
    end
    else if(active) begin
        
        if (count == 3'd2 & addrConflict) begin
        specialReg <= 1;
        end else specialReg <=0;
               
        if(count==count_target) begin
           
             if(~StallD) begin
                 active<=0;
                 count<=0;
             end else begin
                 count<= count-1;
             end
             
        end else begin
            if(~StallD) begin
             sub_instrD<=decoded_instr[count];
             count<=count+1;
            end
        end
        
//        if(lrsc_on & (count==0)) begin
//            if(funct5[0]) begin sc<=1; end else begin lr <=1; end
//        end else begin 
//            sc<=0;
//            lr <=0;
//        end
        
        if(lrsc_on & (count == 1) & funct5[0]) begin
           sc<=1;
        end else begin
           sc<=0;
        end
      
        if(lrsc_on & (count == 0) & ~funct5[0]) begin
           lr<=1;
        end else begin
           lr<=0;
        end
          
    end else if(start) begin //try testing it out with sending out the 0 deocded instr 
       active<=1;
       count<=0;
       AMOinstrlatch <= AMOinstr;
       
      
    end
end


endmodule
