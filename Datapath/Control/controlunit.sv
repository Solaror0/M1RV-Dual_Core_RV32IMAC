module controlunit(
    input logic funct7b5, funct7b1,
    input logic [6:0] op,
    input logic [2:0] funct3,
    output logic RegWriteD, MemwriteD, JumpD, BranchD,  AlUSrcD,
    output logic [1:0] ResultSrcD, ImmSrcD,
    output logic [4:0] ALUControlD
);

//ALUDec
aludec aludec(.funct7b5(funct7b5),.funct7b1(funct7b1),.ALUOp(ALUOp),.funct3(funct3),.ALUControlD(ALUControlD));
logic [1:0] ALUOp;
logic [10:0] controls;
assign{RegWriteD,ImmSrcD, AluSrcD, MemwriteD,ResultSrcD, BranchD, ALUOp, JumpD}  = controls;


always_comb begin 
    case(op)                    //RegWriteD,ImmSrcD, AluSrcE, MemwriteD,ResultSrcD, BranchD, ALUOp, JumpD
        7'b0000011: controls = 11'b1_00_1_0_01_0_00_0; // lw
        7'b0010011: controls = 11'b1_00_1_0_00_0_10_0; // I–type ALU
        7'b0010111: controls = 11'b1_11_1_0_00_0_00_0; //auipc
        7'b0110111: controls = 11'b1_11_1_0_01_0_00_0; //lui
        7'b0100011: controls = 11'b0_01_1_1_00_0_00_0; // sw
        7'b0110011: controls = 11'b1_xx_0_0_00_0_10_0; // R–type
        7'b1100011: controls = 11'b0_10_0_0_00_1_01_0; // beq
        7'b1100111: controls = 11'b1_00_1_0_10_0_00_1; //jalr, I type
        7'b1101111: controls = 11'b1_11_0_0_10_0_00_1; // jal
        default: controls = 11'bx_xx_x_x_xx_x_xx_x; // ???
    endcase
    
end


endmodule