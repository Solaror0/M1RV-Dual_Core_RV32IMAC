`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module controlunit(
    input logic compressed,
    input logic [31:0] instrD,

    output logic RegWriteD, MemwriteD, JumpD, BranchD,  ALUSrcD,
    output logic [1:0] ResultSrcD, ImmSrcD, uSrc,
    output logic [4:0] ALUControlD
);

//ALUDec
logic [1:0] ALUOp;
logic [12:0] controls;

logic [6:0] op;
logic [1:0] opC; //for compressed
logic [2:0] funct2, funct3, funct4, funct6;
logic funct7b5, funct7b1;




aludec aludec(.op5(op[5]),.funct7b5(funct7b5),.funct7b1(funct7b1),.ALUOp(ALUOp),.funct3(funct3),.ALUControlD(ALUControlD));
assign{uSrc, RegWriteD,ImmSrcD, ALUSrcD, MemwriteD,ResultSrcD, BranchD, ALUOp, JumpD}  = controls;

always_comb begin 
    if(~compressed) begin
        op = instrD[6:0];
        funct3 = instrD[14:12];
        funct7b5 = instrD[30];
        funct7b1 = instrD[25];

        case(op)                    //uSRC, RegWriteD,ImmSrcD, AluSrcE, MemwriteD,ResultSrcD, BranchD, ALUOp, JumpD
            7'b0000011: controls = 13'b00_1_00_1_0_01_0_00_0; // lw
            7'b0010011: controls = 13'b00_1_00_1_0_00_0_10_0; // I–type ALU
            7'b0010111: controls = 13'b01_1_11_1_0_00_0_00_0; //auipc
            7'b0110111: controls = 13'b10_1_11_1_0_00_0_00_0; //lui
            7'b0100011: controls = 13'b00_0_01_1_1_00_0_00_0; // sw
            7'b0110011: controls = 13'b00_1_00_0_0_00_0_10_0; // R–type
            7'b1100011: controls = 13'b00_0_10_0_0_00_1_01_0; // beq
            7'b1100111: controls = 13'b00_1_00_1_0_10_0_00_1; //jalr, I type
            7'b1101111: controls = 13'b00_1_11_0_0_10_0_00_1; // jal
            default: controls    = 13'b00_0_00_0_0_00_0_00_0; // ???
        endcase

    end else begin 
        opC = instr[1:0];
        funct3 = instrD[15:13];
        funct4 = instrD[15:12];
        funct2 = instrD[6:5];
        funct6 = instrD[15:10];

         case(opC)              
            2'b00:  //C0
            2'b01: //c1
            2'b10: //c2
           
    
        endcase




    end

 
    
end


endmodule
