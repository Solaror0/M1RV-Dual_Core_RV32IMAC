module extendunit(

    input logic [1:0] ImmSrcD,
    input logic JumpD,
    input logic [31:0] instrD, //never use an instruction bit under 7, this is what is being extended btw
    output logic [31:0] ImmExtD
);

always_comb begin
    case(ImmSrcD)
    2'b00: ImmExtD = {{20{Instr[31]}}, Instr[31:20]};
    2'b01: ImmExtD = {{20{Instr[31]}}, Instr[31:25], Instr[11:7]};
    2'b10: ImmExtD = {{20{Instr[31]}}, Instr[7], Instr[30:25], Instr[11:8], 1'b0};
    2'b11: ImmExtD = JumpD ? {instr[31], instr[19:12], instr[20], instr[30:21], 1'b0} : {instrD[31:12],12'b0};
    default:
    endcase
end

endmodule