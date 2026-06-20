`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)


module i_mem(
    input logic clk, rst,
    (* mark_debug = "true" *) input logic data_ready,
    (* mark_debug = "true" *) input logic [31:0] uart_data,
    input logic[31:0] PC_IN,
    
    input logic FlushD, StallD,
    (* mark_debug = "true" *) output logic [31:0] instrD,
    (* mark_debug = "true" *) output logic reading_rst
);

(* ram_style = "block" *) logic [31:0] instructions [0:1023]; //we can upgrade this easily i guess

initial begin
    // Make sure program.hex is in the same directory as simulation 
    $readmemh("C:/Users/junnu/Downloads/RV32M/for_imem/program.hex", instructions); 
end

(* mark_debug = "true" *) logic [10:0] index; //index of instruction memory, 0-1023.
(* mark_debug = "true" *) logic reading_data; //sets HIGH when data is being read, all instructions set to NOP
logic data_valid; 

assign reading_rst = reading_data;



always_ff @(posedge clk) begin
    if(rst) begin 
        index <=0;
        reading_data<=0;
        data_valid<=1; 
        
    end
    else if(data_ready & data_valid) begin
    
        data_valid<=0; //avoiding same instruction being stored multiple times, bc uart_rx clock is divided
        
        if(~reading_data) begin
            if(uart_data == 32'hBDFEBCAF) begin //hex that CANNOT be a riscv instruction to mark the start
                reading_data <=1;
                index <= 0;
            end     
        end 
        else if (uart_data == 32'hD2AF59FB) begin //another hex that CANT be riscv to mark end
            reading_data <=0;
        end else begin
            instructions[index] <= uart_data;
            index<=index+1;
    
        end 
           
    end else if (~data_ready) begin
    data_valid<=1; //basically has to wait until data_ready is 0 (reached new data transmission)
    end
end


always_ff @(posedge clk) begin
    if(FlushD | reading_data) begin 
        instrD<=32'h00000013;
    end
    else if (StallD) begin
        instrD<=instrD;
    end
    else begin
        instrD <= instructions[PC_IN[31:2]];
    end
    
end


endmodule
