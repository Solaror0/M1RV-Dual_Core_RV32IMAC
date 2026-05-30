module DE_REG(
    input logic clk;
    input logic [31:0] RD1, RD2, PC_IN, PC_PLUS, ImmExt,
    input logic RegWrite, MemWrite, Jump, Branch, ALUSrc, clr,
    input logic [4:0] ALUControl, rs1D, rs2D,
    input logic [1:0] ResultSRC, ImmSrc
    input logic [4:0] RdD


    output logic [31:0] RD1E, RD2E, PC_E, PC_PLUS_E, ImmExtE,
    output logic RegWriteE, MemWriteE, JumpE, BranchE, ALUSrcE,
    output logic [4:0] ALUControlE, rs1E, rs2E,
    output logic [1:0] ResultSRC_E, ImmSrcE,
    output logic [4:0] RdE
);


always_ff @(posedge clk) begin
    RD1E <= RD1; 
    RD2E <= RD2; 
    PC_E <= PC_IN; 
    PC_PLUS_E <=PC_PLUS; 
    ImmExtE <= ImmExt; 
    RdE <= RdD;
    ImmSrcE <= ImmSrc;
    rs1E <= rs1D;
    rs2E <= rs2D;

    if(clr) begin 
    RegWriteE <= 0; 
    MemWriteE <= 0;
    JumpE <= 0;
    BranchE <=0;
    ALUSrcE <= 0;
    ALUControlE <=0;
    ALUSrcE <= 0; 
    ResultSRC_E <= 0;
    end
    else begin
    RegWriteE <= RegWrite; 
    MemWriteE <= MemWrite; 
    JumpE <= Jump;
    BranchE <= Branch;
    ALUSrcE <= ALUSrc; 
    ALUControlE <= ALUControl; 
    ALUSrcE <= ALUSrc; 
    ResultSRC_E <= ResultSRC; 
    
    end
end

endmodule
