module datapath(
    input logic [4:0] ALUControlD
    input logic clk, rst, JumpD, BranchD,  RegWriteD, ALUSrcD, MemwriteD
    input logic [1:0] ResultSrcD, ImmSrcD
    input logic [31:0] instrF, ReadDataM,
    output logic[31:0] ALUResultM, PC_OUT, WriteDataM
    output logic Zero, MemWriteM
    output logic [31:0] ResultW

);

//for final checks:
// check that every memory has the WE
// do the hazard shit and connect it, ADD EN To PC, ADD THE EXTEND UNIT

hazardunit hazard_unit (.RS1E(RS1E),.RS2E(RS2E),.RS1D(RS1D),.RS2D(RS2D),.RdE(RdE),.RdM(RdM),.RdW(RdW),.RegWriteW(RegWriteW),.RegWriteM(RegWriteM),
    .PCSrcE(PCSrcE),.MisPredictE(MisPredictE),.ResultSrcE(ResultSrcE),.FlushD(FlushD),.FlushE(FlushE),.StallF(StallF),.StallD(StallD),
    .ForwardAE(ForwardAE),.ForwardBE(ForwardBE));

logic FlushD, FlushE, StallF, StallD, MisPredictE;

//F Section
logic ZeroE, PCSrcE;
logic [31:0] PC_NEXT, PCPlus4D, PCPlus4F, instrD, PCD;
assign PCSrcE = (ZeroE & BranchE) | JumpE;
pc PC(.rst(rst),.clk(clk),.PCSrcE(PCSrcE),.PC_OUT(PC_OUT),.branch_addr(PCTargetE).en(StallF));

carry_lookahead_adder pc_adder (.a(PC_OUT[31:0]),.b(4),.Subtract(0),.cin(0),.s(PC_NEXT),.cout()); //no cout needed..will tihs bug?

btb BTB(.PC(PC_OUT),.PCE(PCE),.PCPlus4(PC_NEXT),.PCPlus4E(PCPlus4E),.PCTargetE(PCTargetE),.PCSrcE(PCSrcE),.PC_NEXT(PCPlus4F),.MisPredictE(MisPredictE));
//MISPREDICT


FD_REG FD_REG (.clk(clk),.en(StallD),.clr(FlushD),.instrF(instrF),.PCF(PC_OUT),.PCPlus4F(PCPlus4F),.PCD(PCD),.PCPlus4D(PCPlus4D),.instrD(instrD))
//ADD EN AND CLR SECTIONS AKA HAZARDS

//D Section
logic [4:0] rs1D, rs2D, RdD;
logic [31:0] RD1D, RD2D, ImmExtD;
assign rs1D = instrF[19:15];
assign rs2D = instrF[24:20];
assign RdD = instrF[11:7];

reg_file REG_FILE (.clk(clk),.WE(RegWriteE),.WD3(ResultW),.A1(rs1D),.A2(rs2D),.A3(),.RD1(RD1D),.RD2(RD2)) //A1 & 2 are for reading, A3 is for writing
//RdW GOES INTO A3
//Result W goes into WD3, resultW is controlled by ResultSrc
//RegWriteE goes into WE

extendunit extendunit(.ImmSrcD(ImmSrcD),.ImmExtD(ImmExtD),.instrD(instrD),.JumpD(JumpD));
//add Extend Unit, ImmIn ImmSrcD and ImmExtD, also intakes Jump

DE_REG DE_REG(.clk(clk),.RD1(RD1D),.RD2(RD2D),.PC_IN(PCD),.PC_PLUS(PCPlus4D),.ImmExt(ImmExtD),.RegWrite(RegWriteD),
                .MemWrite(MemwriteD),.Jump(JumpD),.Branch(BranchD),.ALUSrc(ALUSrcD),.ALUControl(ALUControlD),.ResultSRC(ResultSrcD),
                .ImmSrc(ImmSrcD),.RdD(RdD),.RD1E(RD1E),.RD2E(RD2E),.PC_E(PCE),.PC_PLUS_E(PCPlus4E),.ImmExtE(ImmExtE),.RegWriteE(RegWriteE),
                .MemWriteE(MemWriteE),.JumpE(JumpE),.BranchE(BranchE),.ALUSrcE(AluSrcE),.ALUControlE(ALUControlE),.ResultSRC_E(ResultSrcE),
                .ImmSrcE(ImmSrcE),.RdE(RdE).clr(FlushE));
//ADD CLR SIGNAL in both module and here x


logic [31:0] RD1E, RD2E, PCE, PCPlus4E, ImmExtE;
logic RegWriteE, MemWriteE, JumpE, BranchE, ALUSrcE;
logic [4:0] ALUControlE;
logic [1:0] ResultSrcE, ImmSrcE;
logic [4:0] RdE;

//EXECUTE SECTION

logic[1:0] ForwardAE, ForwardBE; //hazard signals
logic [31:0] SrcAE, SrcBE, SrcBE_0,SrcBE_1; //srcBE_0 and 1 are the options for SRCBE
logic [31:0] WriteDataE, PCTargetE,ALUResultE;

always_comb begin
    case (ForwardAE)
        2'b00: SrcAE = RD1E;
        2'b01: SrcAE =  ResultW;
        2'b10: SrcAE = ALUResultM
        default: SrcAE = RD1E;
    endcase

    case(ForwardBE)
    2'b00: SrcBE_0 = RD2E;
    2'b01: SrcBE_0 =  ResultW;
    2'b10: SrcBE_0 = ALUResultM;
    endcase

    SrcBE = AluSrcE ? SrcBE_0 : SrcBE_1;
    WriteDataE = SrcBE_0;
end

logic useless_cout;
carry_lookahead_adder PCTargetEGenerator (.a(PCE),.B(ImmExtE),.Subtract(0),.cin(0),.cout(useless_cout),.output(PCTargetE));

ALU ALU(.a(SrcAE),.b(SrcBE),.ALUControl(ALUControlE),.cin(0),.ZeroE(ZeroFlag),.ALUResult(ALUResultE),.clk(clk),.multiply_running(multiply_running));
//flag and multiply_done not connected
//figure out how the fuck do to do the clock shit
//maybe like.. if the alucontrol says its multiply stall until multiply done?

EM_REG EM_REG (.clk(clk),.ALUResult(ALUResultE),.WD(WriteDataE),.PC_PLUS(PCPlus4E),.RegWrite(RegWriteE),.MemWrite(MemWriteE),.ResultSrc(ResultSrcE),
                .ALUResult(ALUResultM),.WD_M(WriteDataM),.PC_PLUS_M(PCPlus4M),.RdM(RdM),.RegWriteM(RegWriteM),.MemWriteM(MemWriteM), .ResultSrcM(ResultSrcM))


logic[31:0] PCPlus4M;
logic [4:0] RdM
logic RegWriteM, MemWriteM
logic [1:0] ResultSrcM

//MEMORY SECTION
//DMEM connected here using ALUResultM and WriteDataM

MW_REG MW_REG (.clk(clk),.ALUResult(ALUResultM),.ReadData(ReadDataM),.Rd(RdM),.RegWrite(RegWriteM),.ResultSrc(ResultSrcM),.PC_PLUS(PCPlus4M),
                .AluResultW(AluResultW),.ReadDataW(ReadDataW),.PCPlusW(PCPlus4W),.RdW(RdW),.RegWriteW(RegWriteW),.ResultSrcW(ResultSrcW));

logic [31:0] AluResultW, ReadDataW, PCPlus4W;
logic [4:0] RdW;
logic RegWriteW;
logic[1:0] ResultSrcW;

always_comb begin
   case (ResultSrcW)
   2'b00: ResultW = AluResultW;
   2'b01: ResultW = ReadDataW;
   2'b10: ResultW = PCPlus4W;
   endcase
end


endmodule
