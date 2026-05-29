module FD_REG(

    input logic clk, en, clr,
    input logic [31:0] instrF, PCPlus4F,PCF,
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
        end else  begin
            instrD<=instrD;
            PCPlus4D <= PCPlus4D;
            PCD<=PCD;
        end

    end
end

endmodule
