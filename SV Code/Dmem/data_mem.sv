`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module d_mem(
    input logic rst,
    input logic clk,
    input logic WE, data_ready,
    (* dont_touch = "true" *) input logic[31:0] addr, wd, uart_data,
    (* mark_debug = "true" *) output logic [31:0] rd,
    output logic reading_rst
);

 logic [31:0] data_mem [0:1023]; //we can upgrade this easily i guess

initial begin
    // Make sure "program.mem" is in the same directory as your simulation simulation
    $readmemh("C:/Users/junnu/Downloads/RV32M/for_imem/dmem.hex", data_mem); 
end

(* mark_debug = "true" *) logic [10:0] index; //index of instruction memory, 0-1023.
(* mark_debug = "true" *) logic reading_data; //sets HIGH when data is being read, all instructions set to NOP
logic data_valid; 

assign reading_rst = reading_data;

logic uart_write_en;
assign uart_write_en = (data_ready & data_valid & reading_data & (uart_data != 32'hBCFEBCA3));

always_ff @(posedge clk) begin
    if(rst) begin 
        index <=0;
        reading_data<=0;
        data_valid<=1; 
        
    end
    else if(data_ready & data_valid) begin
    
        data_valid<=0; //avoiding same instruction being stored multiple times, bc uart_rx clock is divided
        
        if(~reading_data) begin
            if(uart_data == 32'hD2AF59FB) begin //hex that CANNOT be a riscv instruction to mark the start
                reading_data <=1;
                index <= 0;
            end     
        end 
        else if (uart_data == 32'hBCFEBCA3) begin //another hex that CANT be riscv to mark end
            reading_data <=0;
        end else begin
            
            index<=index+1;
    
        end 
           
    end else if (~data_ready) begin
    data_valid<=1; //basically has to wait until data_ready is 0 (reached new data transmission)
    end
end


always_ff @(posedge clk) begin

    if(uart_write_en) begin
         data_mem[index] <= uart_data;   
    end
    else if(WE & ~reading_data) begin
        data_mem[addr[31:2]] <= wd;
    end else begin 
        data_mem[addr[31:2]] <= data_mem[addr[31:2]];
    end

    rd <= data_mem[addr[31:2]]; //allowing dual port memory?
end




endmodule
