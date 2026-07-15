`timescale 1ns / 1ps


module memory_ic(
    input logic clk, rst, 
    input logic [1:0] WE, FlushD, StallD, scM, lrE, doorbell_heard,
    input logic [1:0][31:0] PC, addr, WD, uart_tx, ALUResultE,
    input logic [15:0] SWITCH,
    output logic [1:0][31:0] read_data, instrD,
    output logic reading_rst, memory_reading,
    output logic [1:0] compressed,  reserve_valid, 
    output logic [15:0] LED,
    
    output logic [2:0] doorbell0, doorbell1,
    output logic [31:0] mailbox0, mailbox1

    );
    
    
 //
 
 
 
logic [1:0] cs_dmem, cs_led, cs_switch, cs_mailbox, cs_doorbell; 

logic [1:0][31:0] dmem_data, led_data, switch_data, mailbox_data;
logic [1:0][2:0] doorbell_data; 

logic [31:0] mailbox [0:1];
logic [2:0] doorbell [0:1];

assign doorbell0 = doorbell[0];
assign doorbell1 = doorbell[1];
assign mailbox0 = mailbox[0];
assign mailbox1 = mailbox[1]; 

always_ff @(posedge clk) begin  //led and switch registers
    if(rst) begin 
        LED <= 16'b0;
        mailbox[0] <=0;
        mailbox[1] <=0;
        doorbell[0] <=0;
        doorbell[1] <=0;
        
    end else begin 
    
        if(cs_led[0] & WE[0]) begin 
            LED[addr[0][3:0]] = WD[0][0]; 
        end else if (cs_mailbox[0] & WE[0]) begin 
            mailbox[addr[0][1]] <= WD[0];
        end else if (cs_doorbell[0] & WE[0]) begin 
            doorbell[addr[0][1]] <= WD[0];        
        end
        
        if(cs_led[1] & WE[1]) begin 
            LED[addr[1][3:0]] = WD[1][0]; 
        end else if (cs_mailbox[1] & WE[1]) begin 
            mailbox[addr[1][1]] <= WD[1];
        end else if (cs_doorbell[1] & WE[1]) begin 
            doorbell[addr[1][1]] <= WD[1];        
        end
        
        
        
        if(doorbell_heard[0]) begin 
            doorbell[0] <= 0;
        end
        
        if(doorbell_heard[1]) begin 
            doorbell[1] <= 0;
        end
        
        led_data[0] <= LED[addr[0][3:0]];
        switch_data[0] <= SWITCH[addr[0][3:0]]; //same here
        mailbox_data[0] <= mailbox[addr[0][1]]; //check this
        doorbell_data[0] <= doorbell [addr[0][1]]; //check this
        
        led_data[1] <= LED[addr[1][3:0]];
        switch_data[1] <= SWITCH[addr[1][3:0]]; 
        mailbox_data[1] <= mailbox[addr[1][1]]; //check this
        doorbell_data[1] <= doorbell [addr[1][1]]; //check this
        
    
    end
end


always_comb begin
    cs_dmem[0] = 0; cs_dmem[1] = 0;
    cs_led[0] = 0;  cs_led[1] = 0;
    cs_switch[0] = 0; cs_switch[1] = 0;
    cs_mailbox[0] = 0; cs_mailbox[1] = 0;
    cs_doorbell[0] = 0;  cs_doorbell[1] = 0;
    
    if(addr[0][31:10] == 22'b0) begin //dmem
    
        cs_dmem[0] = 1;
        read_data[0] = dmem_data[0];
               
    end else begin
    
        if(addr[0][31:4]  == 28'h0000040) begin //leds and switches?
            cs_led[0] = 1;
            read_data[0] = led_data[0];
            
            end else if (addr[0][31:4] == 28'h0000041) begin 
            cs_switch[0] = 1;
            read_data[0] = switch_data[0];        
            end else if(addr[0][31:4] == 28'h00000042) begin 
                if(addr[0][3:0] == 4'h0) begin cs_mailbox[0] = 1; read_data[0] = mailbox_data[0]; end
                else if(addr[0][3:0] == 4'h1) begin cs_doorbell[0] = 1; read_data[0] = doorbell_data[0]; end
                else if(addr[0][3:0] == 4'h2) begin cs_mailbox[0] = 1; read_data[0] = mailbox_data[0]; end
                else if(addr[0][3:0] == 4'h3) begin cs_doorbell[0] = 1; read_data[0] = doorbell_data[0]; end
            
            end
        

  
    end
    
    
    if(addr[1][31:10] == 22'b0) begin //dmem
    
        cs_dmem[1] = 1;
        read_data[1] = dmem_data[1];
               
    end else begin
    
        if(addr[1][31:4]  == 28'h0000040) begin //leds and switches?
        cs_led[1] = 1;
        read_data[1] = led_data[1];
        
        end else if (addr[1][31:4] == 28'h0000041) begin 
        cs_switch[1] = 1;
        read_data[1] = switch_data[1];        
        end else if(addr[1][31:4] == 28'h00000042) begin 
            if(addr[1][3:0] == 4'h0) begin cs_mailbox[1] = 1; read_data[1] = mailbox_data[1]; end
            else if(addr[1][3:0] == 4'h1) begin cs_doorbell[1] = 1; read_data[1] = doorbell_data[1]; end
            else if(addr[1][3:0] == 4'h2) begin cs_mailbox[1] = 1; read_data[1] = mailbox_data[1]; end
            else if(addr[1][3:0] == 4'h3) begin cs_doorbell[1] = 1; read_data[1] = doorbell_data[1]; end
        
        end
              
    
    end
    
    
            
    
end


logic [31:0] uart_data;
logic data_ready, error;
logic reading0, reading1;

assign reading_rst = reading0 | reading1;

reservation_unit ru (.clk(clk),.rst(rst),.lrE(lrE),.scM(scM),.WE(WE),.ALUResultE(ALUResultE),.ALUResultM(addr),
                    .valid(reserve_valid));

uart_rx uart_rx(.raw_sig(uart_tx),.clk(clk),.rst(rst),.data_ready(data_ready),.error(error),.data(uart_data));

i_mem i_mem0(.rst(rst),.data_ready(data_ready),.uart_data(uart_data),.clk(clk),.PC_IN(PC[0]),
            .instrD(instrD[0]),.FlushD(FlushD[0]),.StallD(StallD[0]),.reading_rst(reading0),
            .compressed(compressed[0]));
            
i_mem i_mem1(.rst(rst),.data_ready(data_ready),.uart_data(uart_data),.clk(clk),.PC_IN(PC[1]),
            .instrD(instrD[1]),.FlushD(FlushD[1]),.StallD(StallD[1]),.reading_rst(reading1),
            .compressed(compressed[1]));
            
d_mem d_mem (.data_ready(data_ready),.reading_rst(memory_reading),.uart_data(uart_data),
             .clk(clk),.WE(WE),.addr(addr),.wd(WD),
             .rd(dmem_data),.rst(rst),.reserve_valid(reserve_valid),.scM(scM));


   
    
endmodule
