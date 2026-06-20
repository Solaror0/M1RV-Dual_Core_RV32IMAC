
module shift_add(
  
    input logic start,
    input logic clk,
    input logic [31:0] a,b,
    output logic [$clog2(65)-1:0] count,
    output logic [63:0] accumulator,
    output logic done,
    output logic running,


    //outputs that you need to move after
    output logic [63:0] padded_a, sum_holder, shifted_upper, shifted_lower,
    output logic [31:0] b_in, b_shifted

);

typedef enum logic[1:0] {
    IDLE,
    RUNNING,
    DONE
} state_t;

state_t state;
logic [63:0] shifted_lower_corrected;

logic cout_lower,cout_upper;
carry_lookahead_adder adder_lower (.a(accumulator[31:0]),.b(padded_a[31:0]),.Subtract(0),.cin(0),.s(sum_holder[31:0]),.cout(cout_lower));
carry_lookahead_adder adder_upper (.a(accumulator[63:32]),.b(padded_a[63:32]),.Subtract(0),.cin(cout_lower),.s(sum_holder[63:32]),.cout(cout_upper));
rightshiftlogic rightshift_upper (.a(accumulator[63:32]),.shamt(1),.y(shifted_upper[63:32]));
rightshiftlogic rightshift_lower (.a(accumulator[31:0]),.shamt(1),.y(shifted_lower[31:0]));
rightshiftlogic rightshift_b(.a(b_in),.shamt(5'b00001),.y(b_shifted[31:0]));

//logic running;
logic start_pulse;


always_ff @( posedge clk ) begin 

    if(start_pulse) begin count <= 0; b_in <= b; accumulator<=0; end
    else if (running) begin 
        count <= count+1; 
        if (count % 2 == 1) begin
            if(b_in[0] == 1) begin
                accumulator <= sum_holder;
            end
            b_in <= b_shifted;
        end
        else begin
        accumulator <= (shifted_upper | shifted_lower_corrected);
        end
    end

    case(state)
    IDLE: if(start_pulse) state<=RUNNING;
    RUNNING: if(done) state<=DONE;
    DONE: state<=IDLE;
    default state <= IDLE;
    endcase
    
    

end

always_comb begin
    done = (count == 65) ? 1 : 0;
    running = (state == RUNNING) & ~done;
    start_pulse = (running) ? 0 : start;
    
    padded_a = {a,32'b0};
    shifted_lower_corrected = {shifted_lower[63:32], accumulator[32], shifted_lower[30:0]};
   

end



//1011
//1010


//shift b i times >>
//if b[0] = 1 then this variable = a
//shift this variable i times <<
//add to accumulator



endmodule
