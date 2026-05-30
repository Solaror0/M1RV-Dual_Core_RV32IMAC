module core(
    input logic clk, rst,
    input logic [31:0] instr, read_data,
    output logic [31:0] PC_OUT, ALUResult, WriteData,
    output logic MemWriteM,
    output logic divByZero

);
//this is not the top level module, the top level module is shell.sv!

logic  RegWriteD, MemWriteD, JumpD, BranchD,  ALUSrcD;
logic  [1:0] ResultSrcD, ImmSrcD, uSrc;
logic  [4:0] ALUControlD;

controlunit cu (.op(instr[6:0]),.funct3(instr[14:12]),.funct7b5(instr[30]),.funct7b1(instr[25]),.RegWriteD(RegWriteD),.MemwriteD(MemWriteD),
                         .JumpD(JumpD),.BranchD(BranchD),.ALUSrcD(ALUSrcD),.ResultSrcD(ResultSrcD),.ImmSrcD(ImmSrcD),.ALUControlD(ALUControlD),.uSrc(uSrc));

datapath dp(.ALUControlD(ALUControlD),.clk(clk),.rst(rst),.JumpD(JumpD),.BranchD(BranchD),.RegWriteD(RegWriteD),.ALUSrcD(ALUSrcD),.MemwriteD(MemWriteD),
            .ResultSrcD(ResultSrcD),.ImmSrcD(ImmSrcD),.instrF(instr),.ReadDataM(read_data),.PC_OUT(PC_OUT),.ALUResultM(ALUResult),.MemWriteM(MemWriteM),
            .WriteDataM(WriteData),.divByZero(divByZero),.uSrc(uSrc));


//datapath

endmodule
