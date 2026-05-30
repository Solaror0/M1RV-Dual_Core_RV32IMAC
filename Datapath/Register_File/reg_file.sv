module reg_file(
    input logic clk
    input logic WE,  //Write Enable Line
    input logic [31:0] WD3, //Written Data to Port 3
    input logic [4:0] A1, A2, A3, //A1 & 2 are for reading, A3 is for writing
    output logic [31:0] RD1, RD2 //Data Outputs


    //maybe add a rst line?
);

logic [31:0] regs [31:0]; //0 to 31 registers of 32 bits each

always_ff @(negedge clk)begin //might have to change this to posege
    if (WE & (A3 != 0)) begin //avoid writing to register 0
      regs[A3] <= WD3;
    end
end

always_comb begin
    regs[0] = 32'b0;
    RD1 = regs[A1];
    RD2 = regs[A2];
end

endmodule
