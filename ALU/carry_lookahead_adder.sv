module carry_lookahead_adder(
    input logic [31:0]a,b,
    input logic Subtract, // bit 30 of funct7
    input logic cin,
    output logic [31:0] s,
    output logic cout
);

logic [7:1] c;
logic [31:0] b_in;
logic cin_effective;
assign b_in = Subtract ? ~b : b;
assign cin_effective = Subtract ? 1'b1 : cin;


carry_lookahead_block block0 (.a(a[3:0]),.b(b_in[3:0]),.cin(cin_effective),.s(s[3:0]),.cout(c[1]));
carry_lookahead_block block1 (.a(a[7:4]),.b(b_in[7:4]),.cin(c[1]),.s(s[7:4]),.cout(c[2]));
carry_lookahead_block block2 (.a(a[11:8]),.b(b_in[11:8]),.cin(c[2]),.s(s[11:8]),.cout(c[3]));
carry_lookahead_block block3 (.a(a[15:12]),.b(b_in[15:12]),.cin(c[3]),.s(s[15:12]),.cout(c[4]));
carry_lookahead_block block4 (.a(a[19:16]),.b(b_in[19:16]),.cin(c[4]),.s(s[19:16]),.cout(c[5]));
carry_lookahead_block block5 (.a(a[23:20]),.b(b_in[23:20]),.cin(c[5]),.s(s[23:20]),.cout(c[6]));
carry_lookahead_block block6 (.a(a[27:24]),.b(b_in[27:24]),.cin(c[6]),.s(s[27:24]),.cout(c[7]));
carry_lookahead_block block7 (.a(a[31:28]),.b(b_in[31:28]),.cin(c[7]),.s(s[31:28]),.cout(cout));

endmodule
