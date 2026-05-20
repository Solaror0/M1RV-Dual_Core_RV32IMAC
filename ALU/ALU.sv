module ALU(
    input logic [31:0] a,b,
    input logic [4:0] ALUControl,
    input logic clk, cin,
    output logic ZeroFlag, NegativeFlag, OverflowFlag, CarryOutFlag,
    output logic [31:0] ALUResult,
    output logic multiply_done, multiply_running
);


logic multiply_rst; 
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
    5'b00000: ALUResult=s; //ADD
    5'b00001: ALUResult=s; //SUB
    5'b00010: ALUResult = a&b; //AND
    5'b00011: ALUResult = a | b; //OR
    5'b00100: ALUResult = a^b; //XOR
    5'b00101: ALUResult = {{31{1'b0}},{(s[31] ^ OverflowFlag)}}; //SLT
    5'b00110: ALUResult = {{31{1'b0}},{~cout}};                //SLTU
    5'b00111: ALUResult = left_shifted; // SLL
    5'b01000: ALUResult = right_shifted_logic; //SRL
    5'b01001: ALUResult = right_shifted_arithmetic; //SRA
    5'b01010: 
    5'b01011: 
    5'b01100: ALUResult = multiplied_product[31:0]; //MULT LOW
    5'b01101: ALUResult = multiplied_product[63:32]; //MULT HIGH
    5'b01110: //MULTHSU
    5'b01111: //the other mult
    5'b10000: //DIV
    5'b10001: //DIVU
    5'b10010: //REM
    5'b10011: //REMU
    5'b10100:
    5'b10101:
    5'b10110:

    

    default ALUResult = 5'b0;
    endcase;
end

always_ff @(posedge clk) begin
    if ((ALUControl[3] & ALUControl[2]) & (~multiply_done))
        multiply_rst <=1; //you may have to allow the clock to cycle twice before starting each time. this is annoying but true
    else 
        multiply_rst <=0;

end

endmodule
