`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module pc(
    input logic rst, en,
    input logic clk,
    input logic PCSrcE,
    input logic[31:0] branch_addr, PC_NEXT,
    output logic [31:0] PC_OUT
);


always_ff @(posedge clk) begin
    if(en) begin
        if (rst) begin PC_OUT <= 0; end
        else if (~PCSrcE) begin PC_OUT <= PC_NEXT; end
        else if (PCSrcE) begin PC_OUT <= branch_addr; end
    end else begin
        PC_OUT <= PC_OUT;
    end
end

endmodule
