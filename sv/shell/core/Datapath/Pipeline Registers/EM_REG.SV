`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module EM_REG(
   input logic clk,

   input logic [31:0] ALUResult, WD, PC_PLUS,
   input logic [4:0] Rd,
   input logic RegWrite, MemWrite, scE,
   input logic [1:0] ResultSrc,

   output logic[31:0] ALUResultM, WD_M, PC_PLUS_M,
   output logic [4:0] RdM,
   output logic RegWriteM, MemWriteM, scM,
   output logic [1:0] ResultSrcM
);


always_ff @(posedge clk) begin
   ALUResultM <= ALUResult; WD_M <= WD; PC_PLUS_M <= PC_PLUS; 
   RdM <= Rd; RegWriteM <= RegWrite; MemWriteM <= MemWrite; ResultSrcM <= ResultSrc;
   scM<=scE;
end

endmodule
