module carry_lookahead_block(

    input logic [3:0]a,b,
    input logic cin,
    output logic [3:0]s, 
    output logic cout);

logic [3:0] P, G;
logic c0,c1,c2;

carry_lookahead_slice slice0 (.a(a[0]), .b(b[0]),.G(G[0]),.P(P[0]));
carry_lookahead_slice slice1 (.a(a[1]), .b(b[1]),.G(G[1]),.P(P[1]));
carry_lookahead_slice slice2 (.a(a[2]), .b(b[2]),.G(G[2]),.P(P[2]));
carry_lookahead_slice slice3 (.a(a[3]), .b(b[3]),.G(G[3]),.P(P[3]));

assign c0 = G[0] | (P[0] * cin); //1
assign c1 = G[1] | P[1]*c0; //0
assign c2 = G[2] | P[2]*c1; //0
assign cout = G[3] | P[3]*c2; //0

assign s[0] = P[0] ^ cin; // 1
assign s[1] = P[1] ^ c0; 
assign s[2] = P[2] ^ c1; 
assign s[3] = P[3] ^ c2; 

endmodule

