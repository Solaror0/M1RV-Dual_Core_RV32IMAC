module DE_REG(
    input logic clk;
    input logic [31:0] RD1, RD2, PC_IN, PC_PLUS, ImmExt,
    input logic RegWrite, MemWrite, Jump, Branch, ALUSrc,
    input logic [3:0] ALUControl,
    input logic [1:0] ResultSRC, ImmSrc
    input logic [4:0] RdD


    output logic [31:0] RD1E, RD2E, PC_E, PC_PLUS_E, ImmExtE,
    output logic RegWriteE, MemWriteE, JumpE, BranchE, ALUSrcE,
    output logic [3:0] ALUControlE,
    output logic [1:0] ResultSRC_E, ImmSrcE,
    output logic [4:0] RdE,
);


always_ff @(posedge clk) begin
    RD1E <= RD1; 
    RD2E <= RD2; 
    PC_E <= PC_IN; 
    PC_PLUS_E <=PC_PLUS; 
    ImmExtE <= ImmExt; 
    RegWriteE <= RegWrite; 
    MemWriteE <= MemWrite; 
    JumpE <= Jump;
    BranchE <= Branch;
    ALUSrcE <= ALUSrc; 
    ALUControlE <= ALUControl; 
    ALUSrcE <= ALUSrc; 
    ALUControlE <= ALUControl; 
    ResultSRC_E <= ResultSRC; 
    ImmSrcE <= ImmSrc;
    RdE <= RdD;
end

endmodule