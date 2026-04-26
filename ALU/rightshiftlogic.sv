module rightshiftlogic(
    input [31:0]a,
    input [4:0] shamt,
    output[31:0]y
);

logic [31:0] stage[4:0];

always_comb begin
    stage[0] = shamt[0] ? {1'b0, a[31:1]} : a;
    stage[1] = shamt[1] ? {2'b0, stage[0][29:0]} : stage[0];
    stage[2] = shamt[2] ? {4'b0, stage[1][27:0]} : stage[1];
    stage[3] = shamt[3] ? {8'b0, stage[2][23:0]} : stage[2];
    stage[4] = shamt[4] ? {16'b0, stage[3][15:0]} : stage[3];

end

assign y = stage[4];

endmodule

