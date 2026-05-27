module pc(
    input logic rst, en,
    input logic clk,
    input logic PCSrcE,
    input logic[31:0] branch_addr,
    output logic [31:0] PC_OUT;
);
logic cout;


always_comb begin
    if(en) begin
        if (rst) PC_OUT =0;
        else if (~PCSrcE) PC_OUT = PC_NEXT;
        else if (PCSrcE) PC_OUT = branch_addr;
    end else begin
        PC_OUT <= PC_OUT;
    end
end

endmodule
