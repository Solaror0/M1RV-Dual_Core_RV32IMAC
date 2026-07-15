`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module FD_REG(

    input logic clk, en, clr,
    input logic BTB_HitF,
    input logic[1:0] BTB_StateF,
    input logic[31:0] PCPlus4F, PCF,
    input logic [31:0] instrD,
    output logic BTB_HitD,
    output logic[1:0] BTB_StateD,

    output logic [31:0] PCPlus4D, PCD
);

logic [31:0] PCPlus4Delay,PCDelay;


always_ff @(posedge clk)begin

    if(clr) begin
        PCPlus4D   <= 32'b0;
        PCD        <= 32'b0;
        BTB_HitD   <= 1'b0;
        BTB_StateD <= 2'b0;
    end
    else begin
        if(en) begin
            PCPlus4D <= PCPlus4F; //undid delay by the way.
            PCD <= PCF;
            
            PCPlus4Delay <= PCPlus4F;
            PCDelay <= PCF;
            
            BTB_HitD <= BTB_HitF;
            BTB_StateD <= BTB_StateF;
        end else  begin
           
            PCPlus4D <= PCPlus4D;
            PCD<=PCD;
           
            PCPlus4Delay <= PCPlus4Delay;
            PCDelay <= PCDelay;
            BTB_HitD <= BTB_HitD;
            BTB_StateD <= BTB_StateD;
            
        end

    end
end

endmodule
