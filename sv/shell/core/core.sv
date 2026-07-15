`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module core(
    input logic clk, rst, compressed, reserve_valid, whichCore,
    input logic otherAmo, otherLRSC,
    input logic [31:0] instrD, read_data, mailbox0, mailbox1,
    input logic [2:0] doorbell0, doorbell1,
    output logic [31:0] PC_OUT, ALUResultM, ALUResultE, WriteData,
    output logic MemWriteM, FlushD, StallD, lrE, scM, lrscOut, amoActiveOut,
    output logic divByZero, core_interrupted

);
//this is not the top level module, the top level module is shell.sv & then top.sv!

logic  RegWriteD, JumpD, BranchD,  ALUSrcD,ZeroE;
logic  [1:0] ResultSrcD, ImmSrcD, uSrc;
logic  [4:0] ALUControlD;
logic [31:0] instrDFinal, instrDProcessed,  sub_instrD, interruptInstrD;  
logic amo_det, amo_feed, specialReg, lr, lwStall;
assign amoActiveOut = amo_feed | amo_det;


decompressionunit decompressionunit(.instrD(instrD),.compressed(compressed),.processedInstrD(instrDProcessed));

amo_feeder amo_feeder (.StallD(lwStall),.rst(rst),.start(amo_det),.clk(clk),
                       .AMOinstr(instrDProcessed),.active(amo_feed),
                       .sub_instrD(sub_instrD),.ALUResult(ALUResultE[0]),.specialReg(specialReg),.lr(lr),.sc(sc),
                       .reserve_valid(reserve_valid),.Zero(ZeroE),.lrsc_on(lrscOut));


instructionhandler instructionhandler (.instrD(instrDFinal),.instrDProcessed( instrDProcessed),.amoSubInstrD(sub_instrD),.interruptInstrD(interruptInstrD),
                                       .amo_feed(amo_feed),.core_interrupt(core_interrupted));


interrupthandler interrupthandler(.clk(clk),.rst(rst),.whichCore(whichCore),.doorbell0(doorbell0),.doorbell1(doorbell1),.mailbox0(mailbox0),.mailbox1(mailbox1),.core_interrupt(core_interrupted),
                                   .interrupt_instr(interruptInstrD));

controlunit cu (.instrD(instrDFinal),.RegWriteD(RegWriteD),.MemwriteD(MemWriteD),
                .JumpD(JumpD),.BranchD(BranchD),.ALUSrcD(ALUSrcD),.ResultSrcD(ResultSrcD),.ImmSrcD(ImmSrcD),
                .ALUControlD(ALUControlD),.uSrc(uSrc),.amo_feed(amo_feed),.amo_det(amo_det));

datapath dp(.ALUControlD(ALUControlD),.clk(clk),.rst(rst),.JumpD(JumpD),.BranchD(BranchD),.RegWriteD(RegWriteD),.ALUSrcD(ALUSrcD),.MemwriteD(MemWriteD),
            .ResultSrcD(ResultSrcD),.ImmSrcD(ImmSrcD),.instrD(instrDFinal),.ReadDataW(read_data),.PC_OUT(PC_OUT),.ALUResultM(ALUResultM),.MemWriteM(MemWriteM),
            .WriteDataM(WriteData),.divByZero(divByZero),.uSrc(uSrc),
            .FlushD(FlushD),.StallD(StallD),.compressed(compressed),
            .amoActive(amo_det | amo_feed),.amoFlush(amo_det),.lwStall(lwStall),.ALUResultE(ALUResultE),.specialReg(specialReg),.lr(lr),.sc(sc),
            .lrE(lrE),.scM(scM),.ZeroE(ZeroE),.core_interrupt(core_interrupted),
            .otherAmoPause(~otherLRSC & otherAmo),.whichCore(whichCore));


//datapath

endmodule
