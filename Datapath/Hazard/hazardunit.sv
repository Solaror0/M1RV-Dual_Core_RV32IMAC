module hazardunit (
    input logic [31:0] RS1E, RS2E, RS1D, RS2D,
    input logic [4:0] RdE, RdM, RdW,
    input logic RegWriteW, RegWriteM, PCSrcE, MisPredictE, multiply_running, divide_running,
    input logic [1:0] ResultSrcE,

    output logic FlushD, FlushE, StallF, StallD,
    output logic [1:0] ForwardAE, ForwardBE
);

logic lwStall;

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
    StallF = lwStall | (multiply_running | divide_running);
    StallD = lwStall | (multiply_running | divide_running);

    FlushD = MisPredictE;
    FlushE = lwStall | MisPredictE; 

end

endmodule
