`timescale 1ns / 1ps


module reservation_unit(
    input logic clk, rst, lrE, scM, WE, 
    input logic [31:0] ALUResultE, ALUResultM,
    output logic valid
 
    );
    
    
logic reservation_set [0:1023];

always_comb  begin

    if(scM) begin
        valid = reservation_set[ALUResultM[10:0]];
    end
    
    if(lrE) begin
        reservation_set[ALUResultE[10:0]] = 1;
    end
    
end

always_ff @(posedge clk) begin

    if(WE) begin
        reservation_set[ALUResultM[10:0]] <=0;
    end
    
end

endmodule


