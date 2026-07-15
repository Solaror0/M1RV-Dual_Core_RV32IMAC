`timescale 1ns / 1ps


module instructionhandler(
    input logic  amo_feed, core_interrupt,
    (* mark_debug = "true" *)  input logic [31:0] instrDProcessed, amoSubInstrD, interruptInstrD,
    (* mark_debug = "true" *)   output logic [31:0] instrD
    );
    
    
    
always_comb begin 

    if(core_interrupt) begin 
        instrD = interruptInstrD;
    end 
    else if (amo_feed) begin  
        instrD = amoSubInstrD; 
    end else begin 
        instrD = instrDProcessed;
    end


end
endmodule
