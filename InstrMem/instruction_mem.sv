module i_mem(
    input logic[31:0] PC_IN,
    output logic [31:0] instr
);

logic [31:0] instructions [1024]; //we can upgrade this easily i guess


initial begin
    // Make sure "program.hex" is in the same directory as your simulation simulation
    $readmemh("program.hex", instructions); 
end

always_comb begin
    instr = instructions[PC_IN[31:2]];
end


endmodule
