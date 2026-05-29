module core(
    input logic clk, rst,
    input logic [31:0] instr, read_data,
    output logic [31:0] PC_OUT, ALUResult, WriteData
    output logic MemWriteM,
    output logic divByZero

);
//this is not the top level module, the top level module is shell.sv!

logic  RegWriteD, MemWriteD, JumpD, BranchD,  AlUSrcD,
logic  [1:0] ResultSrcD, ImmSrcD,
logic  [4:0] ALUControlD


logic[31:0] ALUResultM, PC_OUT, WriteDataM

controlunit cu (.op(instr[6:0]),.funct3(instr[14:12]),.funct7b5(instr[30]),.funct7b1(instr[25]),.RegWriteD(RegWriteD),.MemwriteD(MemWriteD),
                         .JumpD(JumpD),.BranchD(BranchD),.ALUSrcD(ALUSrcD),.ResultSrcD(ResultSrcD),.ImmSrcD(ImmSrcD),.ALUControlD(ALUControlD));

datapath dp(.ALUControlD(ALUControlD),.clk(clk),.rst(rst),.JumpD(JumpD),.BranchD(BranchD),.RegWriteD(RegWriteD),ALUSrcD(ALUSrcD),.MemwriteD(MemWriteD),
            .ResultSrcD(ResultSrcD),.ImmSrcD(ImmSrcD),.instrF(instr),.ReadDataM(read_data),.PC_OUT(PC_OUT),.ALUResult(ALUResultM),.MemWriteM(MemWriteM),
            .WriteDataM(WriteData),.divByZero(divByZero))


//datapath

endmodule
