module pc(
    input logic rst,
    input logic clk,
    input logic PCSrcE,
    input logic[31:0] branch_addr,
    output logic [31:0] PC_OUT;
    output logic [31:0] PC_NEXT;
);
logic cout;

carry_lookahead_adder adder (.a(PC_OUT[31:0]),.b(4),.Subtract(0),.cin(0),.s(PC_NEXT),.cout(cout));
always_ff(@posedge clk)begin
    if (rst) PC_OUT <=0;
    else if (~PCSrcE) PC_OUT <= PC_NEXT;
    else if (PCSrcE) PC_OUT <= branch_addr;

end

endmodule