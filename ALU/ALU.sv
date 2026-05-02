module ALU(
    input logic [31:0] a,b,
    input logic [3:0] ALUControl,
    input logic clk, cin,
    output logic ZeroFlag, NegativeFlag, OverflowFlag, CarryOutFlag,
    output logic [31:0] ALUResult,
    output logic multiply_done
);


logic multiply_rst, multiply_running; //mght have to make multiply_done an output btw
logic [31:0]left_shifted;
logic [31:0]s;
logic [31:0] right_shifted_logic;
logic [31:0] right_shifted_arithmetic;
logic [63:0] multiplied_product;

logic cout;
carry_lookahead_adder adder (.a(a[31:0]),.b(b[31:0]),.Subtract((ALUControl[0] | ALUControl[1])),.cin(cin),.s(s),.cout(cout));
leftshift leftshift (.a(a[31:0]), .shamt(b[4:0]),.y(left_shifted[31:0]));
rightshiftlogic rightshiftlogic  (.a(a[31:0]), .shamt(b[4:0]),.y(right_shifted_logic[31:0]));
rightshiftarithmetic rightshiftarithmetic (.a(a[31:0]), .shamt(b[4:0]),.y(right_shifted_arithmetic[31:0]));
multiplier multiplier(.a(a[31:0]),.b(b[31:0]),.clk(clk),.rst(multiply_rst),.output_product(multiplied_product),.done(multiply_done),.running(multiply_running));

always_comb begin
    OverflowFlag =  (a[31] ^ b[31]) & (a[31] ^ s[31]); // ((ALUControl[0] | ALUControl[1]) ? 1'b1 : cin) ^ cout; //study more on the overflow shit cause i dont ge tit
    CarryOutFlag = cout;
   // SLTChecker =  ((a[31] ^ b[31]) & (a[31] ^ s[31])) ^ cout;
    case(ALUControl)
    4'b0000: ALUResult=s; //ADD
    4'b0001: ALUResult=s; //SUB
    4'b0010: ALUResult = a&b; //AND
    4'b0011: ALUResult = a | b; //OR
    4'b0100: ALUResult = a^b; //XOR
    4'b0101: ALUResult = {{31{1'b0}},{(s[31] ^ OverflowFlag)}}; //SLT
    4'b0110: ALUResult = {{31{1'b0}},{~cout}};                //SLTU
    4'b0111: ALUResult = left_shifted; // SLL
    4'b1000: ALUResult = right_shifted_logic; //SRL
    4'b1001: ALUResult = right_shifted_arithmetic; //SRA
    4'b1010: ALUResult = multiplied_product[31:0]; //MULT LOW
    4'b1011: ALUResult = multiplied_product[63:32]; //MULT HIGH
    default ALUResult = 32'b0;
    endcase;
end

always_ff @(posedge clk) begin
    if ((ALUControl[3] & ALUControl[1]) & (~multiply_done))
        multiply_rst <=1; //you may have to allow the clock to cycle twice before starting each time. this is annoying but true
    else 
        multiply_rst <=0;

end

endmodule
