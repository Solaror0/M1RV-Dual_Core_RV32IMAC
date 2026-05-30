module FD_REG(

    input logic clk, en, clr,
    input logic BTB_HitF,
    input logic[1:0] BTB_StateF,
    input logic [31:0] instrF, PCPlus4F,PCF,

    output logic BTB_HitD,
    output logic[1:0] BTB_StateD,

    output logic [31:0] instrD, PCPlus4D, PCD
);

always_ff @(posedge clk)begin

    if(clr) begin
        instrD <= 32'b0;
        PCPlus4D <= PCPlus4F;
        PCD <= PCF;
    end
    else begin
        if(en) begin
            instrD <= instrF;
            PCPlus4D <= PCPlus4F;
            PCD <= PCF;
            BTB_HitD <= BTB_HitF;
            BTB_StateD <= BTB_StateF;
        end else  begin
            instrD<=instrD;
            PCPlus4D <= PCPlus4D;
            PCD<=PCD;
        end

    end
end

endmodule
