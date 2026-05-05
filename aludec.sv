module aludec(
    logic input funct7b5, JumpD, funct7b1;
    logic input [1:0] ALUOp,
    logic input [2:0] funct3,
    logic output [4:0] ALUControlD
);

logic [3:0] controlsig = {funct3,funct7b5};
always_comb begin
    case(ALUOp)
    2'b00: ALUControlD = 4'b0000;
    2'b01: ALUControlD = 4'b0010;
    2'b10: 
        begin
            case(funct3):
                3'b000: 
                    begin  
                        if(funct7b1) ALUControlD = 5'b01010;
                        else ALUControlD = funct7b5 ? 5'b00001 : 5'b00000
                    end
                3'b001:  if(funct7b1) ALUControlD = 5'b01011;
                        else ALUControlD =5'b00111;
                3'b010: ALUControlD = 5'b00101;
                3'b011: ALUControlD = 5'b00110;
                3'b100: ALUControlD = 5'b00100;
                3'b101: 
                    begin
                        ALUControlD = funct7b5 ? 5'b01001 : 5'b01000;
                    end
                3'b110: ALUControlD = 5'b00011;
                3'b111: ALUControlD = 5'b00010;
            endcase
        end

    endcase
end

endmodule
    // 4'b0000: ALUResult=s; //ADD x
    // 4'b0001: ALUResult=s; //SUB x
    // 4'b0010: ALUResult = a&b; //AND x
    // 4'b0011: ALUResult = a | b; //OR x
    // 4'b0100: ALUResult = a^b; //XOR x
    // 4'b0101: ALUResult = {{31{1'b0}},{(s[31] ^ OverflowFlag)}}; //SLT x
    // 4'b0110: ALUResult = {{31{1'b0}},{~cout}};                //SLTU x
    // 4'b0111: ALUResult = left_shifted; // SLL x
    // 4'b1000: ALUResult = right_shifted_logic; //SRL x
    // 4'b1001: ALUResult = right_shifted_arithmetic; //SRA x
    // 4'b1010: ALUResult = multiplied_product[31:0]; //MULT LOW
    // 4'b1011: ALUResult = multiplied_product[63:32]; //MULT HIGH