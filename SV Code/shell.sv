`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module shell(
    (* mark_debug = "true" *) input logic clk, rst, uart_tx,
    output logic divByZero
);

//core
(* dont_touch = "true" *) logic [31:0] instrD, read_data;
(* mark_debug = "true" *) logic [31:0] PC, ALUResult, WriteData;
(* mark_debug = "true" *) logic MemWriteM;
logic FlushD, StallD;
logic [31:0] uart_data;
logic data_ready, error, reading_rst, memory_reading;
logic compressed;

core core(.clk(clk),.rst(rst | reading_rst | memory_reading),.instrD(instrD),.read_data(read_data),.PC_OUT(PC),.ALUResult(ALUResult),.WriteData(WriteData),
            .MemWriteM(MemWriteM),.divByZero(divByZero),.FlushD(FlushD),.StallD(StallD),
            .compressed(compressed));

//memory
uart_rx uart_rx(.raw_sig(uart_tx),.clk(clk),.rst(rst),.data_ready(data_ready),.error(error),.data(uart_data));

i_mem i_mem(.rst(rst),.data_ready(data_ready),.uart_data(uart_data),.clk(clk),.PC_IN(PC),
            .instrD(instrD),.FlushD(FlushD),.StallD(StallD),.reading_rst(reading_rst),
            .compressed(compressed));
            
d_mem d_mem (.data_ready(data_ready),.reading_rst(memory_reading),.uart_data(uart_data),
             .clk(clk),.WE(MemWriteM),.addr(ALUResult),.wd(WriteData),
             .rd(read_data),.rst(rst));

endmodule
