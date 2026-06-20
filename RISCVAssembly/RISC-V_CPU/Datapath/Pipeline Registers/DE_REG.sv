`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module DE_REG(
    input logic clk, clr, en,
    input logic [31:0] RD1, RD2, PC_IN, PC_PLUS, ImmExt, instrD,
    input logic RegWrite, MemWrite, Jump, Branch, ALUSrc, BTB_HitD,
    input logic [4:0] ALUControl, rs1D, rs2D,
    input logic [1:0] ResultSRC, ImmSrc, BTB_StateD,
    input logic [4:0] RdD,


    output logic [31:0] RD1E, RD2E, PC_E, PC_PLUS_E, ImmExtE, instrE,
    output logic RegWriteE, MemWriteE, JumpE, BranchE, ALUSrcE,  BTB_HitE,
    output logic [4:0] ALUControlE, rs1E, rs2E,
    output logic [1:0] ResultSRC_E, ImmSrcE, BTB_StateE,
    output logic [4:0] RdE
);


always_ff @(posedge clk) begin

   

    if(clr) begin 
    RegWriteE <= 0; 
    MemWriteE <= 0;
    JumpE <= 0;
    BranchE <=0;
    ALUSrcE <= 0;
    ALUControlE <=0;
    ALUSrcE <= 0; 
    ResultSRC_E <= 0;
    BTB_HitE <= 0;
    BTB_StateE <= 0;
    instrE <= 32'h00000013;
    end
    else begin
    
        if(en) begin
            RD1E <= RD1; 
            RD2E <= RD2; 
            PC_E <= PC_IN; 
            PC_PLUS_E <=PC_PLUS; 
            ImmExtE <= ImmExt; 
            RdE <= RdD;
            ImmSrcE <= ImmSrc;
            rs1E <= rs1D;
            rs2E <= rs2D;
            RegWriteE <= RegWrite; 
            MemWriteE <= MemWrite; 
            JumpE <= Jump;
            BranchE <= Branch;
            ALUSrcE <= ALUSrc; 
            ALUControlE <= ALUControl; 
            ALUSrcE <= ALUSrc; 
            ResultSRC_E <= ResultSRC; 
            BTB_HitE <= BTB_HitD;
            BTB_StateE <= BTB_StateD;
            instrE <= instrD;
        end else begin
        
            RD1E <= RD1E; 
            RD2E <= RD2E; 
            PC_E <= PC_E; 
            PC_PLUS_E <=PC_PLUS_E; 
            ImmExtE <= ImmExtE; 
            RdE <= RdE;
            ImmSrcE <= ImmSrcE;
            rs1E <= rs1E;
            rs2E <= rs2E;
            
            RegWriteE <= RegWriteE; 
            MemWriteE <= MemWriteE; 
            JumpE <= JumpE;
            BranchE <= BranchE;
            ALUSrcE <= ALUSrcE; 
            ALUControlE <= ALUControlE; 
            ALUSrcE <= ALUSrcE; 
            ResultSRC_E <= ResultSRC_E; 
            BTB_HitE <= BTB_HitE;
            BTB_StateE <= BTB_StateE;
            instrE <= instrE;   
        end
        
    end
end

endmodule
