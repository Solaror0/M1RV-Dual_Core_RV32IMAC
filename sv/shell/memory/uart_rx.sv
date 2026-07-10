module uart_rx #(

    parameter int CPU_CLK = 25000000,
    parameter int BAUDRATE = 115200,
    parameter int SAMPLING = 16,
    parameter int BaudRate_Gen = CPU_CLK/(BAUDRATE*SAMPLING)

)(
    input logic clk, rst, raw_sig,
    (* mark_debug = "true" *) output logic [31:0] data,
    (* mark_debug = "true" *) output logic data_ready, error
);



typedef enum logic[1:0] {
    IDLE,
    START,
    DATA,
    DONE
} state_t;

(* mark_debug = "true" *) state_t state;
(* mark_debug = "true" *) logic sig;
(* mark_debug = "true" *) logic [1:0] shift_reg;

//synchronizer

always_ff @(posedge clk) begin
    shift_reg <= {shift_reg[0], raw_sig};
end

assign sig = shift_reg[1];



//clock divider/baud rate generator
(* mark_debug = "true" *) logic [$clog2(BaudRate_Gen)-1:0] in_count;
(* mark_debug = "true" *) logic tick;
always_ff@(posedge clk) begin
    if(rst) begin
        in_count <=0;
        tick<=0;
    end

    if(in_count == BaudRate_Gen) begin
        tick<=1;
        in_count<=0;
    end else begin
        tick<=0;
        in_count<=in_count+1;
    end

end

//FSM
(* mark_debug = "true" *) logic [$clog2(SAMPLING)-1:0] count; //not related to badrategenerator, used to mark the sampling halfpoint
(* mark_debug = "true" *) logic [3:0] bit_count; //used to count the filling of the 8 bit data
(* mark_debug = "true" *) logic [7:0] in_data; //8 bit inputs from TX

(* mark_debug = "true" *) logic [1:0] byte_count; // used to count each time 8 bits of the 32 bit instruction is filled
(* mark_debug = "true" *) logic data_bit;

always_ff @(posedge clk) begin
    if(tick)begin 
        case(state)
        IDLE: 
            begin
                count<=0;
                error<=0; //initialize this just incase
                if(~sig) begin state<=START; end else begin state<=IDLE; end
            end

        START:
            begin          
                
                error<=0;
                if(count==(SAMPLING/2)) begin
                    if(~sig) begin  //checking that sig is still 0
                        count<=0;
                        bit_count <=0;
                        state <=DATA;
                    end else begin
                        state<=IDLE;
                    end
                end else begin
                    count<=count+1;
                end

            end

        DATA:
            begin
                 data_ready <=0;
                 
                 if(count == SAMPLING-1) begin //counting every 16 from now on
                        count<=0;
                        in_data <= {sig,in_data[7:1]};
                        
                        if(bit_count==3'd7) begin //filled all data
                            count<=0;
                            state<=DONE;
                        end else begin                       
                        bit_count<=bit_count+1;
                        end
                    end else begin
                        count<=count+1;
                    end
                    
   
            end
        DONE:
            begin
            
                if(count == SAMPLING-1) begin

                    if(sig) begin

                        data<={in_data,data[31:8]}; //TX instruction data coming in is little endian, riscv expects little endian, so have to preserve little endina order? verify this 
                        state <=IDLE;
                        error<=0;

                        if(byte_count==2'b11) begin
                            data_ready<=1;
                            byte_count<=0;
                        end
                        else begin
                            byte_count<= byte_count+1;
                            data_ready<=0;
                        end


                    end else begin
                        error<=1; //use this signal to ask transmitter to resend 
                    end
                end else begin 
                        count<=count+1;
                end
            
            
            end
        default: state = IDLE;
        endcase
    end

   

end


endmodule
