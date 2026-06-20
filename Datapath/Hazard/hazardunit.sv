`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module hazardunit (
    input logic clk, calculation_stall,
    input logic [4:0] Rs1D, Rs2D,
    input logic [4:0] RdE, RdM, RdW, Rs1E, Rs2E,
    input logic RegWriteW, RegWriteM, PCSrcE, MisPredictE, rst,
    input logic [1:0] ResultSrcE,

    output logic FlushD, FlushE, StallF, StallD, StallE,
    output logic [1:0] ForwardAE, ForwardBE
);

logic lwStall, MisPredictDelay;

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
    StallF = lwStall | (calculation_stall);
    StallD = lwStall | (calculation_stall);
    StallE = calculation_stall;

    FlushD = MisPredictE | rst ;
    FlushE = lwStall | MisPredictE | rst; 

end

//always_ff @(posedge clk) begin
//    MisPredictDelay <= MisPredictE;
//end


endmodule
