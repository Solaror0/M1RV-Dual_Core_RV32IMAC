`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module core(
    (* mark_debug = "true" *) input logic clk, rst, compressed, reserve_valid,
    input logic [31:0] instrD, read_data,
    output logic [31:0] PC_OUT, ALUResultM, ALUResultE, WriteData,
    output logic MemWriteM, FlushD, StallD, lrE, scM,
    output logic divByZero

);
//this is not the top level module, the top level module is shell.sv!

logic  RegWriteD, JumpD, BranchD,  ALUSrcD,ZeroE;
(* mark_debug = "true" *) logic MemWriteExposed;
assign MemWriteExposed = MemWriteM;

logic  [1:0] ResultSrcD, ImmSrcD, uSrc;
logic  [4:0] ALUControlD;

logic [31:0] instrDConfirmed, instrDProcessed,  sub_instrD;  //delete instrD confirmed
logic amo_det, amo_feed, specialReg, lr, lwStall;

decompressionunit decompressionunit(.instrD(instrD),.compressed(compressed),.processedInstrD(instrDProcessed));
amo_feeder amo_feeder (.StallD(lwStall),.rst(rst),.start(amo_det),.clk(clk),
                       .AMOinstr(instrDProcessed),.active(amo_feed),
                       .sub_instrD(sub_instrD),.ALUResult(ALUResultE[0]),.specialReg(specialReg),.lr(lr),.sc(sc),
                       .reserve_valid(reserve_valid),.Zero(ZeroE));

controlunit cu (.instrD(instrDProcessed),.sub_instrD(sub_instrD),.RegWriteD(RegWriteD),.MemwriteD(MemWriteD),
                .JumpD(JumpD),.BranchD(BranchD),.ALUSrcD(ALUSrcD),.ResultSrcD(ResultSrcD),.ImmSrcD(ImmSrcD),
                .ALUControlD(ALUControlD),.uSrc(uSrc),.amo_feed(amo_feed),.amo_det(amo_det));

datapath dp(.ALUControlD(ALUControlD),.clk(clk),.rst(rst),.JumpD(JumpD),.BranchD(BranchD),.RegWriteD(RegWriteD),.ALUSrcD(ALUSrcD),.MemwriteD(MemWriteD),
            .ResultSrcD(ResultSrcD),.ImmSrcD(ImmSrcD),.instrD(amo_feed ? sub_instrD : instrDProcessed),.ReadDataW(read_data),.PC_OUT(PC_OUT),.ALUResultM(ALUResultM),.MemWriteM(MemWriteM),
            .WriteDataM(WriteData),.divByZero(divByZero),.uSrc(uSrc),.instrDConfirmed(instrDConfirmed),
            .FlushD(FlushD),.StallD(StallD),.compressed(compressed),
            .amoActive(amo_det | amo_feed),.amoFlush(amo_det),.lwStall(lwStall),.ALUResultE(ALUResultE),.specialReg(specialReg),.lr(lr),.sc(sc),
            .lrE(lrE),.scM(scM),.ZeroE(ZeroE));


//datapath

endmodule
