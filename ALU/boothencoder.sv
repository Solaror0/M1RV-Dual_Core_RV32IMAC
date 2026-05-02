module boothencoder(
    input logic [31:0] a,
    input logic [2:0] triplet,
    input logic [4:0] shamt,
    output logic [63:0] partial_product
);

logic[63:0] product;
logic[63:0] minus_a;
logic [63:0] sign_ext_a;

always_comb begin
    sign_ext_a = {{32{a[31]}}, a};
    minus_a = ~sign_ext_a + 1;
    case (triplet)
    3'b000: product = 64'b0;
    3'b001: product = sign_ext_a;
    3'b010: product = sign_ext_a;
    3'b011: product = {{31{sign_ext_a[63]}}, sign_ext_a[31:0], 1'b0};
    3'b100: product = {{31{minus_a[63]}}, minus_a[31:0], 1'b0};
    3'b101: product =  minus_a;
    3'b110: product =  minus_a;
    3'b111: product = 64'b0;
    endcase

    partial_product =  $signed(product) <<< shamt;
end


endmodule
