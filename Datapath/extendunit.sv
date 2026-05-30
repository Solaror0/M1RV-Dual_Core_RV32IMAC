module extendunit(

    input logic [1:0] ImmSrcD,
    input logic JumpD,
    input logic [31:0] instrD, //never use an instrDuction bit under 7, this is what is being extended btw
    output logic [31:0] ImmExtD
);

always_comb begin
    case(ImmSrcD)
    2'b00: ImmExtD = {{20{instrD[31]}}, instrD[31:20]};
    2'b01: ImmExtD = {{20{instrD[31]}}, instrD[31:25], instrD[11:7]};
    2'b10: ImmExtD = {{20{instrD[31]}}, instrD[7], instrD[30:25], instrD[11:8], 1'b0};
    2'b11: ImmExtD = JumpD ? {{11{instrD[31]}},instrD[31], instrD[19:12], instrD[20], instrD[30:21], 1'b0} : {instrD[31:12],12'b0};
    default: ImmExtD = 32'b0;
    endcase
end

endmodule
