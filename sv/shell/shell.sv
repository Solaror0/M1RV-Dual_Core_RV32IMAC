`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module shell(
    (* mark_debug = "true" *) input logic clk, rst, uart_tx,
    input logic [15:0] SWITCH,
    output logic [1:0] divByZero,
    output logic [15:0] LED
);

//core
logic [1:0][31:0]  read_data, instrDUnprocessed;
(* mark_debug = "true" *) logic [1:0][31:0] PC, ALUResultM, ALUResultE, WriteData;
(* mark_debug = "true" *) logic [1:0] MemWriteM;
logic [1:0] FlushD, StallD;
logic [1:0] core_interrupted;
logic [1:0] otherAmo;
logic [2:0] doorbell0, doorbell1;
logic [31:0] mailbox0, mailbox1; 
logic [1:0] otherLRSC;

core core0(.clk(clk),.rst(rst | reading_rst | memory_reading),
            .instrD(instrDUnprocessed[0]),.read_data(read_data[0]),.PC_OUT(PC[0]),
            .ALUResultM(ALUResultM[0]),.WriteData(WriteData[0]),
            .MemWriteM(MemWriteM[0]),.divByZero(divByZero[0]),.FlushD(FlushD[0]),.StallD(StallD[0]),
            .compressed(compressed[0]),
            .ALUResultE(ALUResultE[0]),.lrE(lrE[0]),.scM(scM[0]),.reserve_valid(reserve_valid[0]),
            .mailbox0(mailbox0),.mailbox1(mailbox1),.doorbell0(doorbell0),.doorbell1(doorbell1),
            .whichCore(0),.core_interrupted(core_interrupted[0]),
            .amoActiveOut(otherAmo[1]),.lrscOut(otherLRSC[1]),
            .otherAmo(otherAmo[0]),.otherLRSC(otherLRSC[0]));
            
  
core core1(.clk(clk),.rst(rst | reading_rst | memory_reading),
            .instrD(instrDUnprocessed[1]),.read_data(read_data[1]),.PC_OUT(PC[1]),
            .ALUResultM(ALUResultM[1]),.WriteData(WriteData[1]),
            .MemWriteM(MemWriteM[1]),.divByZero(divByZero[1]),.FlushD(FlushD[1]),.StallD(StallD[1]),
            .compressed(compressed[1]),
            .ALUResultE(ALUResultE[1]),.lrE(lrE[1]),.scM(scM[1]),.reserve_valid(reserve_valid[1]),
            .mailbox0(mailbox0),.mailbox1(mailbox1),.doorbell0(doorbell0),.doorbell1(doorbell1),
            .whichCore(1),.core_interrupted(core_interrupted[1]),
            .amoActiveOut(otherAmo[0]),.lrscOut(otherLRSC[0]),
            .otherAmo(otherAmo[1]),.otherLRSC(otherLRSC[1]));
            
  
//memory
memory_ic memory_ic (.clk(clk),.rst(rst),.lrE(lrE),.scM(scM),.WE(MemWriteM),.addr(ALUResultM),
                     .ALUResultE(ALUResultE),.reserve_valid(reserve_valid),
                     .uart_tx(uart_tx), .reading_rst(reading_rst), .memory_reading(memory_reading),
                     .PC(PC),.instrD(instrDUnprocessed),.FlushD(FlushD),.StallD(StallD), .compressed(compressed),
                     .WD(WriteData),.read_data(read_data),.LED(LED),.SWITCH(SWITCH),
                     .mailbox0(mailbox0),.mailbox1(mailbox1),.doorbell0(doorbell0),.doorbell1(doorbell1), 
                     .doorbell_heard(core_interrupted));

logic  reading_rst, memory_reading;
logic [1:0] compressed, lrE, scM,reserve_valid;

endmodule
