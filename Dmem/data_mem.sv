module d_mem(
    input logic clk,
    input logic WE,
    input logic[31:0] addr, wd,
    output logic [31:0] rd
);

logic [31:0] data_mem [262144]; //we can upgrade this easily i guess

always_ff @(posedge clk) begin
    if(WE) begin
        data_mem[addr[31:2]] <= wd;
    end else begin 
        data_mem[addr[31:2]] <= data_mem[addr[31:2]];
    end

    rd <= data_mem[addr[31:2]]; //allowing dual port memory
end


endmodule
