`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module leftshift(
    input [31:0]a,
    input [4:0] shamt,
    output[31:0]y

);

logic [31:0] stage[4:0];

always_comb begin
    stage[0] = shamt[0] ? {a[30:0], 1'b0}  : a;
    stage[1] = shamt[1] ? {stage[0][29:0], 2'b0}  : stage[0];
    stage[2] = shamt[2] ? {stage[1][27:0], 4'b0}  : stage[1];
    stage[3] = shamt[3] ? {stage[2][23:0], 8'b0}  : stage[2];
    stage[4] = shamt[4] ? {stage[3][15:0], 16'b0} : stage[3];   
end

assign y = stage[4];
endmodule

