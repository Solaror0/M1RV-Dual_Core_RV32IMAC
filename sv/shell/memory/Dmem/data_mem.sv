`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module d_mem(
    input logic rst,
    input logic clk,
    input logic [1:0] WE, data_ready, reserve_valid, scM, cs_dmem,
     input logic [1:0][31:0] addr, wd,
    input logic [31:0] uart_data,
     output logic [1:0][31:0] rd,
    output logic reading_rst
);

(* ram_style = "block" *) logic [31:0] data_mem [0:1023]; //we can upgrade this easily i guess

initial begin
   
    $readmemh("FILE HERE", data_mem); 
end

(* mark_debug = "true" *) logic [9:0] index; //index of instruction memory, 0-1023.
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

logic [31:0] portA_write, portB_write;
logic [9:0] portA_addr, portB_addr;
logic portA_en, portB_en;


always_comb begin

    if(uart_write_en) begin 
                                 
        portA_addr = {index};
        portA_en = uart_write_en;
        portA_write = uart_data;
       
        portB_addr  = 10'b0;
        portB_en = 1'b0;
        portB_write = 30'b0;     
    
    end else begin 
    
        portA_write = wd[0];
        portA_addr = addr[0][11:2];
        portA_en = (WE[0] & ~reading_data & cs_dmem[0]) & (~scM[0] | reserve_valid[0]);
                
        portB_write = wd[1];
        portB_addr = addr[1][11:2];
        portB_en = WE[1] & ~reading_data & cs_dmem[1] & (~scM[1] | reserve_valid[1]);
       
    end

end

always_ff @(posedge clk) begin

        if(portA_en) begin             
            data_mem[portA_addr] <= portA_write;           
        end 
               
        rd[0] <= data_mem[portA_addr]; //allowing dual port memory?
       
       
end

always_ff @(posedge clk) begin 
     
        if(portB_en) begin                  
            data_mem[portB_addr] <= portB_write;
        end 
        
         rd[1] <= data_mem[portB_addr];
end




endmodule
