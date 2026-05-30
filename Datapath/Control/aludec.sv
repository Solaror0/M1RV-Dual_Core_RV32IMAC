module aludec(
    input logic funct7b5,funct7b1, op5,
    input logic [1:0] ALUOp,
    input logic [2:0] funct3,
    output logic [4:0] ALUControlD
);

always_comb begin
    case(ALUOp)
    2'b00: ALUControlD = 5'b00000;
    2'b01: ALUControlD = 5'b00010;
    2'b10: 
        begin
            case(funct3)
            3'b000: ALUControlD = (funct7b5&op5) ?  5'b00001 : ((funct7b1&op5) ? 5'b01100 : 5'b00000); //sum mul add
            3'b001: ALUControlD = (funct7b1&op5) ? 5'b01101 : 5'b00111; //mulh sll
            3'b010: ALUControlD = (funct7b1&op5) ? 5'b01110 : 5'b00101; //mulhsu slt 
            3'b011: ALUControlD = (funct7b1&op5) ? 5'b01111 : 5'b00110; //mulhu sltu
            3'b100: ALUControlD = (funct7b1&op5) ? 5'b10000 : 5'b00100; //div xor
            3'b101: ALUControlD = (funct7b5) ? 5'b01001 : ((funct7b1 & op5) ? 5'b10001 : 5'b01000); //sra divu srl
            3'b110: ALUControlD = (funct7b1&op5) ? 5'b10010 : 5'b00011; //rem or
            3'b111: ALUControlD = (funct7b1&op5) ? 5'b10011 : 5'b00010; //remu and
            endcase

        end
    default: ALUControlD = 5'b00000;
    endcase
end

endmodule
