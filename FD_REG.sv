module FD_REG(

    input logic clk, en, clr,
    input logic [31:0] instrF, PCPlus4F,PCF,
    output logic [31:0] instrD, PCPlus4D, PCD
);

always_ff @(posedge clk)begin

    instrD <= instrF;
    PCPlus4D <= PCPlus4F;
    PCD <= PCF;

end
//ADD HAZARD CAPABILITY..

endmodule