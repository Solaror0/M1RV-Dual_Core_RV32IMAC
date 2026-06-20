`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module rightshiftarithmetic(
    input [31:0]a,
    input [4:0] shamt,
    output[31:0]y
);

logic [31:0] stage[4:0];

always_comb begin
    stage[0] = shamt[0] ? {{1{a[31]}}, a[31:1]} : a;
    stage[1] = shamt[1] ? {{2{a[31]}}, stage[0][31:2]} : stage[0];
    stage[2] = shamt[2] ? {{4{a[31]}}, stage[1][31:4]} : stage[1];
    stage[3] = shamt[3] ? {{8{a[31]}}, stage[2][31:8]} : stage[2];
    stage[4] = shamt[4] ? {{16{a[31]}}, stage[3][31:16]} : stage[3];

end

assign y = stage[4];

endmodule

