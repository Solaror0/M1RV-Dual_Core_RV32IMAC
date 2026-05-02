module hazardunit (
    input logic [31:0] RS1E, RS2E, RS1D, RS2D
    input logic [4:0] RdE, RdM, RdW
    input logic RegWriteW, RegWriteM, PCSrcE,
    input logic [1:0] ResultSrcE

    output logic FlushD, FlushE, StallF, StallD,
    output logic [1:0] ForwardAE, ForwardBE
);


endmodule