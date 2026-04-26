module MW_REG(
    input logic clk,
    input logic [31:0] ALUResult, ReadData, PC_PLUS, 
    input logic [4:0] Rd,
    input logic RegWrite,
    input logic [1:0] ResultSrc,


    output logic [31:0] AluResultW, ReadData_W, PC_PLUS_W,
    output logic [4:0] RdW,
    output logic RegWriteW,
    output logic[1:0] ResultSrcW,
);

always_ff (@posedge clk)begin
    ALUResultW <= ALUResult; ReadData_W <= ReadData; PC_PLUS_W <= PC_PLUS; 
    RdW <= Rd; RegWriteW <= RegWrite; ResultSrcW <= ResultSrc;

end


endmodule