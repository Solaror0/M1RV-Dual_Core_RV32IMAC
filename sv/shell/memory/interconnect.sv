`timescale 1ns / 1ps


module memory_ic(
    input logic clk, rst, WE, FlushD, StallD, scM, lrE,
    input logic [31:0] PC, addr, WD, uart_tx, ALUResultE,
    input logic [15:0] SWITCH,
    output logic [31:0] read_data, instrD,
    output logic reading_rst, compressed,  reserve_valid, memory_reading,
    output logic [15:0] LED

    );
    
    
 //
 
logic cs_dmem, cs_led, cs_switch; 

logic [31:0] dmem_data, led_data, switch_data; 

always_ff @(posedge clk) begin  //led and switch registers
    if(rst) begin 
        LED <= 16'b0;
    end else begin 
    
        if(cs_led & WE) begin 
            LED[addr[3:0]] = WD; //edit this part for the actual addressing,
        end
        
        led_data <= LED[addr[3:0]];
        switch_data <= SWITCH[addr[3:0]]; //same here
    
    end
end


always_comb begin
    cs_dmem = 0;
    cs_led = 0;
    cs_switch = 0;
    
    if(addr[31:10] == 22'b0) begin //dmem
    
        cs_dmem = 1;
        read_data = dmem_data;
               
    end else begin
    
        if(addr[31:4]  == 28'h0000040) begin //leds and switches?
        cs_led = 1;
        read_data = led_data;
        
        end else if (addr[31:4] == 28'h0000041) begin 
        cs_switch = 1;
        read_data = switch_data;        
        end
    
    end
end


logic [31:0] uart_data;
logic data_ready, error;

reservation_unit ru (.clk(clk),.rst(rst),.lrE(lrE),.scM(scM),.WE(WE),.ALUResultE(ALUResultE),.ALUResultM(addr),
                    .valid(reserve_valid));

uart_rx uart_rx(.raw_sig(uart_tx),.clk(clk),.rst(rst),.data_ready(data_ready),.error(error),.data(uart_data));

i_mem i_mem(.rst(rst),.data_ready(data_ready),.uart_data(uart_data),.clk(clk),.PC_IN(PC),
            .instrD(instrD),.FlushD(FlushD),.StallD(StallD),.reading_rst(reading_rst),
            .compressed(compressed));
            
d_mem d_mem (.data_ready(data_ready),.reading_rst(memory_reading),.uart_data(uart_data),
             .clk(clk),.WE(WE),.addr(addr),.wd(WD),
             .rd(dmem_data),.rst(rst),.reserve_valid(reserve_valid),.scM(scM));


   
    
endmodule
