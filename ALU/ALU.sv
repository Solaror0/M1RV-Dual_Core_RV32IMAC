module ALU(
    input logic [31:0] a,b,
    input logic [4:0] ALUControl,
    input logic clk, cin,
    output logic ZeroFlag, NegativeFlag, OverflowFlag, CarryOutFlag,
    output logic [31:0] ALUResult,
    output logic multiply_done, multiply_running,
    output logic divide_done, divide_running, divByZero
);


logic multdiv_rst; 
logic [31:0]left_shifted;
logic [31:0]s;
logic [31:0] right_shifted_logic;
logic [31:0] right_shifted_arithmetic;
logic [63:0] multiplied_product;
logic [31:0] quotient;
logic [34:0] remainder;

logic cout, sBit, unsignedA, unsignDiv;
carry_lookahead_adder adder (.a(a[31:0]),.b(b[31:0]),.Subtract((ALUControl[0] | ALUControl[1])),.cin(cin),.s(s),.cout(cout));
leftshift leftshift (.a(a[31:0]), .shamt(b[4:0]),.y(left_shifted[31:0]));
rightshiftlogic rightshiftlogic  (.a(a[31:0]), .shamt(b[4:0]),.y(right_shifted_logic[31:0]));
rightshiftarithmetic rightshiftarithmetic (.a(a[31:0]), .shamt(b[4:0]),.y(right_shifted_arithmetic[31:0]));
multiplier multiplier(.a(a[31:0]),.unsignedA(unsignedA),.b({sBit, b[31:0]}),.clk(clk),.rst(multdiv_rst),.output_product(multiplied_product),.done(multiply_done),.running(multiply_running));
divider divider (.a(a[31:0]),.d(b[31:0]),.clk(clk),.rst(multdiv_rst),.q(quotient),.rem(remainder),.running(divide_running),.done(divide_done),.divByZero(divByZero),.unsign(unsignDiv));

always_comb begin
    OverflowFlag =  (a[31] ^ b[31]) & (a[31] ^ s[31]); // ((ALUControl[0] | ALUControl[1]) ? 1'b1 : cin) ^ cout; //study more on the overflow shit cause i dont ge tit
    CarryOutFlag = cout;
   // SLTChecker =  ((a[31] ^ b[31]) & (a[31] ^ s[31])) ^ cout;

//avoiding latches, could make this more efficient and only examine select bits
   if (ALUControl == 5'b01111) begin unsignedA = 1; end else begin unsignedA = 0; end
   if (ALUControl == 5'b01100 | ALUControl == 5'b01101) begin sBit = b[31]; end else begin  sBit = 0; end
   if (ALUControl == 5'b10001 | ALUControl == 5'b10011) begin unsignDiv = 1; end else begin unsignDiv = 0; end
   
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
    5'b01010: ALUResult = 0;
    5'b01011: ALUResult = 0;
    5'b01100: begin unsignedA = 0; sBit = b[31]; ALUResult = multiplied_product[31:0]; end //MULT LOW
    5'b01101: begin unsignedA = 0; sBit = b[31]; ALUResult = multiplied_product[63:32]; end //MULT HIGH
    5'b01110: begin unsignedA = 0; sBit = 0; ALUResult = multiplied_product[63:32]; end //MULTHSU  
    5'b01111: begin unsignedA = 1; sBit = 0; ALUResult = multiplied_product[63:32]; end //MULTHU
    5'b10000: ALUResult = quotient;//DIV
    5'b10001: ALUResult = quotient;//DIVU
    5'b10010: ALUResult = remainder[31:0];//REM
    5'b10011: ALUResult = remainder[31:0];//REMU
    5'b10100: ALUResult = 0;
    5'b10101: ALUResult = 0;
    5'b10110: ALUResult = 0;
    default ALUResult = 32'b0;
    endcase;
end

always_ff @(posedge clk) begin
    if ((ALUControl[3] & ALUControl[2]) & (~multiply_done))
        multdiv_rst <=1; //you may have to allow the clock to cycle twice before starting each time. this is annoying but true
    else 
        multdiv_rst <=0;

    if (ALUControl[4] & (~divide_done))
        multdiv_rst <=1; //you may have to allow the clock to cycle twice before starting each time. this is annoying but true
    else 
        multdiv_rst <=0;
    

end

endmodule
