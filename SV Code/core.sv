`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module core(
    (* mark_debug = "true" *) input logic clk, rst, compressed,
    input logic [31:0] instrD, read_data,
    output logic [31:0] PC_OUT, ALUResult, WriteData,
    output logic MemWriteM, FlushD, StallD,
    output logic divByZero

);
//this is not the top level module, the top level module is shell.sv!

logic  RegWriteD, JumpD, BranchD,  ALUSrcD;
(* mark_debug = "true" *) logic MemWriteExposed;
assign MemWriteExposed = MemWriteM;

logic  [1:0] ResultSrcD, ImmSrcD, uSrc;
logic  [4:0] ALUControlD;

logic [31:0] instrDConfirmed; 

controlunit cu (.compressed(compressed),.instrD(instrD),.RegWriteD(RegWriteD),.MemwriteD(MemWriteD),
                .JumpD(JumpD),.BranchD(BranchD),.ALUSrcD(ALUSrcD),.ResultSrcD(ResultSrcD),.ImmSrcD(ImmSrcD),.ALUControlD(ALUControlD),.uSrc(uSrc));

datapath dp(.ALUControlD(ALUControlD),.clk(clk),.rst(rst),.JumpD(JumpD),.BranchD(BranchD),.RegWriteD(RegWriteD),.ALUSrcD(ALUSrcD),.MemwriteD(MemWriteD),
            .ResultSrcD(ResultSrcD),.ImmSrcD(ImmSrcD),.instrD(instrD),.ReadDataW(read_data),.PC_OUT(PC_OUT),.ALUResultM(ALUResult),.MemWriteM(MemWriteM),
            .WriteDataM(WriteData),.divByZero(divByZero),.uSrc(uSrc),.instrDConfirmed(instrDConfirmed),
            .FlushD(FlushD),.StallD(StallD),.compressed(compressed));


//datapath

endmodule
