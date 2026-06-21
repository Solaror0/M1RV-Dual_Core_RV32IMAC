`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)


module i_mem(
    input logic clk, rst,
    (* mark_debug = "true" *) input logic data_ready,
    (* mark_debug = "true" *) input logic [31:0] uart_data,
    input logic[31:0] PC_IN,
    
    input logic FlushD, StallD,
    (* mark_debug = "true" *) output logic [31:0] instrD,
    (* mark_debug = "true" *) output logic reading_rst,
    (* mark_debug = "true" *) output logic compressed
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

logic countedbyTwo;


always_comb begin //instrD filtering
    
    compressed = countedbyTwo ?  ~(fetch0[17:16] == 2'b11) : ~(fetch0[1:0] == 2'b11); //being sent out of the imem to the datapath

    if(countedbyTwo) begin
        if(~(fetch0[17:16] == 2'b11)) begin //checking if the upper boundary of fetch0 is a compressed
            instrD = {16'b0,fetch0[31:16]}; 
        end else begin
            instrD = {fetch1[15:0],fetch0[31:16]};
        end
    end else begin
        instrD = fetch0; //maybe add a compresed check but not rlly necessary
    end

end

logic [31:0] fetch0, fetch1;
always_ff @(posedge clk) begin
    if(FlushD | reading_data) begin 
        fetch0<=32'h00000013;
        fetch1 <= 32'h00000013; //arguably not necessary but safety ig
    end
    else if (StallD) begin
        fetch0<= fetch0;
        fetch1 <= fetch1;
        
    end
    else begin
      
        fetch0 <=instructions[PC_IN[31:2]];
        fetch1 <= instructions[PC_IN[31:2]+1];
        countedbyTwo <= (PC_IN[1]);

    end   
end


endmodule
