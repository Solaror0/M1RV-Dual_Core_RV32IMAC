`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module shell(
    (* mark_debug = "true" *) input logic clk, rst, uart_tx,
    output logic divByZero,
    output logic [15:0] LED, SWITCH
);

//core
(* dont_touch = "true" *) logic [31:0]  read_data, instrDUnprocessed;
(* mark_debug = "true" *) logic [31:0] PC, ALUResultM, ALUResultE, WriteData;
(* mark_debug = "true" *) logic MemWriteM;
logic FlushD, StallD;


core core(.clk(clk),.rst(rst | reading_rst | memory_reading),.instrD(instrDUnprocessed),.read_data(read_data),.PC_OUT(PC),.ALUResultM(ALUResultM),.WriteData(WriteData),
            .MemWriteM(MemWriteM),.divByZero(divByZero),.FlushD(FlushD),.StallD(StallD),.compressed(compressed),
            .ALUResultE(ALUResultE),.lrE(lrE),.scM(scM),.reserve_valid(reserve_valid));

//memory
memory_ic memory_ic (.clk(clk),.rst(rst),.lrE(lrE),.scM(scM),.WE(MemWriteM),.addr(ALUResultM),
                     .ALUResultE(ALUResultE),.reserve_valid(reserve_valid),
                     .uart_tx(uart_tx), .reading_rst(reading_rst), .memory_reading(memory_reading),
                     .PC(PC),.instrD(instrDUnprocessed),.FlushD(FlushD),.StallD(StallD), .compressed(compressed),
                     .WD(WriteData),.read_data(read_data),.LED(LED),.SWITCH(SWITCH));


//(* dont_touch = "true" *) logic [31:0]  read_data_1, instrDUnprocessed_1;
//(* mark_debug = "true" *) logic [31:0] PC_1, ALUResultM_1, ALUResultE_1, WriteData_1;
//(* mark_debug = "true" *) logic MemWriteM_1;
//logic FlushD_1, StallD_1;


//core core_1(.clk(clk),.rst(rst | reading_rst | memory_reading),
//            .instrD(instrDUnprocessed_1),.read_data(read_data_1),.PC_OUT(PC_1),
//            .ALUResultM(ALUResultM_1),.WriteData(WriteData_1),
//            .MemWriteM(MemWriteM_1),.FlushD(FlushD_1),.StallD(StallD_1),
//            .compressed(compressed_1), .ALUResultE(ALUResultE_1),.lrE(lrE_1),
//            .scM(scM_1),.reserve_valid(reserve_valid_1));




//logic [31:0] uart_data;
logic  reading_rst, memory_reading;
logic compressed, lrE, scM,reserve_valid;
//logic data_ready, error;

//reservation_unit ru (.clk(clk),.rst(rst),.lrE(lrE),.scM(scM),.WE(MemWriteM),.ALUResultE(ALUResultE),.ALUResultM(ALUResultM),
//                    .valid(reserve_valid));

//uart_rx uart_rx(.raw_sig(uart_tx),.clk(clk),.rst(rst),.data_ready(data_ready),.error(error),.data(uart_data));

//i_mem i_mem(.rst(rst),.data_ready(data_ready),.uart_data(uart_data),.clk(clk),.PC_IN(PC),
//            .instrD(instrDUnprocessed),.FlushD(FlushD),.StallD(StallD),.reading_rst(reading_rst),
//            .compressed(compressed));
            
//d_mem d_mem (.data_ready(data_ready),.reading_rst(memory_reading),.uart_data(uart_data),
//             .clk(clk),.WE(MemWriteM),.addr(ALUResultM),.wd(WriteData),
//             .rd(read_data),.rst(rst),.reserve_valid(reserve_valid),.scM(scM));

endmodule
