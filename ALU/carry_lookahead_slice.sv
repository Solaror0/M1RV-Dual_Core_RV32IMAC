module carry_lookahead_slice
    (
        input  a, b,
        output G, P
    );

    assign P = a^b;
    assign G = a&b; 
   



endmodule
