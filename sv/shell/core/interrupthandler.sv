`timescale 1ns / 1ps


module interrupthandler(
    input logic clk, rst,
    input logic whichCore,
    input logic [2:0] doorbell0, doorbell1,
    input logic [31:0] mailbox0, mailbox1,
    output logic core_interrupt, 
    output logic [31:0] interrupt_instr
    );
    

logic interrupt;
logic int_type;
logic [2:0] myDoorbell;
logic [31:0] myMailbox;

assign myDoorbell = whichCore ? doorbell1 : doorbell0;
assign myMailbox = whichCore ? mailbox1 : mailbox0;

always_ff @(posedge clk) begin 


    if (rst) begin 
    
    core_interrupt <=0; 
    
    end
    
    else if(interrupt) begin 
        core_interrupt <= 1;        
        case(int_type)
            2'b00: begin 
                interrupt_instr = {myMailbox[16:5],5'b0,3'b0,myMailbox[4:0],7'b1100111};   //JALR   imm = 16:5, rd = 4:0            
            end 
            
            2'b01: begin
                interrupt_instr = {myMailbox[25], myMailbox[15:6], myMailbox[16],myMailbox[24:17],myMailbox[4:0],7'b1101111};
            end
            
            default: interrupt_instr = 32'h00000013;
        endcase               
    end else begin core_interrupt <=0; end
end

always_comb begin 
    interrupt = myDoorbell[0];
    int_type = myDoorbell [2:1]; //00 = PC JALR, 01 = PC J, 10 = Data, 11 = Address  
end

endmodule

