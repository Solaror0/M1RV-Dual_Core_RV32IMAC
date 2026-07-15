`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module hazardunit (
    input logic clk, calculation_stall, amoActive, amoFlush,
    input logic [4:0] Rs1D, Rs2D,
    input logic [4:0] RdE, RdM, RdW, Rs1E, Rs2E,
    input logic RegWriteW, RegWriteM, PCSrcE, MisPredictE, rst, core_interrupt, otherAmoPause,
    input logic [1:0] ResultSrcE,

    output logic FlushD, FlushE, StallF, StallD, StallE,
    output logic [1:0] ForwardAE, ForwardBE,
    output logic lwStall
);

logic MisPredictDelay;

always_comb begin
    
    if (((Rs1E == RdM) & RegWriteM) & (Rs1E != 0))begin 
        ForwardAE = 2'b10;
    end
    else if (((Rs1E == RdW) & RegWriteW) & (Rs1E != 0)) begin
       ForwardAE = 2'b01;
    end
    else
    begin ForwardAE = 2'b00; end


    if (((Rs2E == RdM) & RegWriteM) & (Rs2E != 0))begin 
    ForwardBE = 2'b10;
    end
    else if (((Rs2E == RdW) & RegWriteW) & (Rs2E != 0)) begin
       ForwardBE = 2'b01;
    end
    else
    begin ForwardBE = 2'b00; end

    lwStall = ResultSrcE[0] & ((Rs1D == RdE) | (Rs2D == RdE));
    StallF = lwStall | (calculation_stall) | amoActive | otherAmoPause;
    StallD = lwStall | (calculation_stall) | amoActive | core_interrupt | otherAmoPause;
    StallE = calculation_stall | otherAmoPause;

    FlushD = MisPredictE | rst | amoFlush ;
    FlushE = lwStall | MisPredictE | amoFlush | rst;  

end


endmodule
