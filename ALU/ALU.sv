module ALU(
    input logic [31:0] a,b,
    input logic [3:0] ALUControl,
    input logic clk,
    output logic ZeroFlag, NegativeFlag, OverflowFlag,
    output logic [31:0] ALUResult

);

logic [31:0]s;
logic multiply_start,multiply_done; //mght have to make multiply_done an output btw
logic [31:0]left_shifted;
logic [31:0] right_shifted_logic;
logic [31:0] right_shifted_arithmetic;
logic [63:0] multiplied_product;

logic cout;
carry_lookahead_adder adder (.a(a[31:0]),.b(b[31:0]),.Subtract(ALUControl[0]),.cin(0),.s(s),.cout(cout));
leftshift leftshift (.a(a[31:0]), .shamt(b[4:0]),.y(left_shifted[31:0]));
rightshiftlogic rightshiftlogic  (.a(a[31:0]), .shamt(b[4:0]),.y(right_shifted_logic[31:0]));
rightshiftarithmetic rightshiftarithmetic (.a(a[31:0]), .shamt(b[4:0]),.y(right_shifted_arithmetic[31:0]));
shift_add_multiplier shift_multiplier (.start(multiply_start),.a(a[31:0]),.b(b[31:0]),.clk(clk),.done(multiply_done), .accumulator(multiplied_product));

always_comb begin
    OverflowFlag = cin ^ cout; //study more on the overflow shit cause i dont ge tit
    case(ALUControl)
    4'b0000: ALUResult=s; //ADD
    4'b0001: ALUResult=s; //SUB
    4'b0010: ALUResult = a&b; //AND
    4'b0011: ALUResult = a | b; //OR
    4'b0100: ALUResult = a^b; //XOR
    4'b0101: ALUResult = s[31] ^ OverflowFlag;
    4'b0110: ALUResult = ~cout;                //SLTU
    4'b0111: ALUResult = left_shifted; // SLL
    4'b1000: ALUResult = right_shifted_logic; //SRL
    4'b1001: ALUResult = right_shifted_arithmetic; //SRA
    4'b1010: ALUResult = multiplied_product[31:0]; //MULT LOW
    4'b1011: ALUResult = multiplied_product[63:32]; //MULT HIGH
     //add a default
    endcase
end

always_ff (@posedge clk) begin
    if ((ALUControl[3] & ALUControl[1]) & (~multiply_done))
        multiply_start <=1;
    else 
        multiply_start <=0;

end

endmodule