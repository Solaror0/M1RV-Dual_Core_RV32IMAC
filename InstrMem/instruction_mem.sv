module i_mem(
    input logic clk,
    input logic[31:0] PC_IN,
    output logic [31:0] instr,
);

logic [31:0] instructions [262144]; //we can upgrade this easily i guess

always_comb begin
    instr = instructions[PC_IN[31:2]];
end


endmodule
