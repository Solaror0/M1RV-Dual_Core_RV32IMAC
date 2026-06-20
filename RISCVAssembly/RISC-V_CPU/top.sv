`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module top(
    input logic clk_in,
    input logic uart_tx,
    (* mark_debug = "true" *) input logic rst_btn,
    output logic LED15
    );

    (* mark_debug = "true" *) logic clk_cpu, locked, safe_rst;
    
    clk_wiz_0 clockWizard(
        .clk_fpga(clk_in),
        .clk_cpu(clk_cpu),
        .reset(rst_btn),
        .locked(locked)
       );
    
    assign safe_rst = rst_btn | (~locked);

    shell shell(.uart_tx(uart_tx),.clk(clk_cpu),.rst(safe_rst),.divByZero(LED15));


endmodule
