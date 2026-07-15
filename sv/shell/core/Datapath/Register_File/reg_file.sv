`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module reg_file(
    input logic clk, specialReg,
    input logic WE,  //Write Enable Line
    input logic [31:0] WD3, //Written Data to Port 3
    input logic [4:0] A1, A2, A3, //A1 & 2 are for reading, A3 is for writing
    output logic [31:0] RD1, RD2 //Data Outputs


    //maybe add a rst line?
);

(* mark_debug = "true" *) logic [31:0] regs [31:0]; //0 to 31 registers of 32 bits each


initial begin
    // Initialize all entries to 0
    for (int i = 0; i < 32; i++) begin
        regs[i] = 32'b0;
    end
end


always_ff @(posedge clk)begin //might have to change this to posege
    if (WE & (A3 != 0)) begin //avoid writing to register 0
      regs[A3] <= WD3;
      
      if(specialReg) begin 
        regs[5'b00101] <= regs[A3];
      end
    end
end

always_comb begin
    regs[0] = 32'b0;
    
    if (WE & (A3 == A1) & (A1!=0)) begin
    RD1 = WD3;
    end else begin
    RD1 = regs[A1];
    end
    
        
    if (WE & (A3 == A2) & (A2!=0)) begin
    RD2 = WD3;
    end else begin
    RD2 = regs[A2];
    end
    
    

end

endmodule
