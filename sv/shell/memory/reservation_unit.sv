`timescale 1ns / 1ps


module reservation_unit(
    input logic clk, rst,
    input logic [1:0] lrE, scM, WE, 
    input logic [1:0][31:0] ALUResultE, ALUResultM,
    output logic [1:0] valid
 
    );
    
    
logic reservation_set [0:1023];

always_comb  begin

    if(scM[0]) begin
        valid[0] = reservation_set[ALUResultM[0][10:0]];
    end
    
    if(lrE[0]) begin
        reservation_set[ALUResultE[0][10:0]] = 1;
    end
    
    
    if(scM[1]) begin
        valid[1] = reservation_set[ALUResultM[1][10:0]];
    end
    
    if(lrE[1]) begin
        reservation_set[ALUResultE[1][10:0]] = 1;
    end
    
    
end

always_ff @(posedge clk) begin

    if(WE[0]) begin
        reservation_set[ALUResultM[0][10:0]] <=0;
    end
    
    if(WE[1]) begin
        reservation_set[ALUResultM[1][10:0]] <=0;
    end
    
    
end

endmodule


