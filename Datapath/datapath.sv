module datapath(
    input logic [4:0] ALUControlD,
    input logic clk, rst, JumpD, BranchD,  RegWriteD, ALUSrcD, MemwriteD
    input logic [1:0] ResultSrcD, ImmSrcD, uSrc,
    input logic [31:0] instrF, ReadDataM,
    output logic[31:0] ALUResultM, PC_OUT, WriteDataM,
    output logic MemWriteM, divByZero

);
logic [31:0] ResultW

/* To Do:

special note on immextDsrc
*/

/*done but not double checked*
i have no clue if jalr and jal will work..
*/

/* done done 
// check that every memory has the WE, 
Follow every signal from start to finish
Make sure the rst signal actually does something..
Add A3 to regfile
ADD THE EXTEND UNIT
ADD EN To PC,
Check stall and flushing logic/run through different scenarios, same with BTB
do the hazard shit and connect it,
Add Divide by Zero Logic involving flushes and stalls and in ALU itself
Run through the control unit/Add it to the core and make sure all the wires work out
*/

hazardunit hazard_unit (.RS1E(rs1E),.RS2E(rs2E),.RS1D(rs1D),.RS2D(rs2D),.RdE(RdE),.RdM(RdM),.RdW(RdW),.RegWriteW(RegWriteW),.RegWriteM(RegWriteM),
    .PCSrcE(PCSrcE),.MisPredictE(MisPredictE),.ResultSrcE(ResultSrcE),.FlushD(FlushD),.FlushE(FlushE),.StallF(StallF),.StallD(StallD),
    .ForwardAE(ForwardAE),.ForwardBE(ForwardBE),.multiply_running(multiply_running),.divide_running(divide_running),.rst(rst));

logic FlushD, FlushE, StallF, StallD, MisPredictE, multiply_running, divide_running;

//F Section
logic ZeroE, PCSrcE;
logic [31:0] PC_NEXT, PCPlus4D, PCPlus4F, instrD, PCD;
assign PCSrcE = (ZeroE & BranchE) | JumpE;
pc PC(.rst(rst),.clk(clk),.PCSrcE(PCSrcE),.PC_OUT(PC_OUT),.branch_addr(PCTargetE),.en(~StallF));

logic dummycout;
carry_lookahead_adder pc_adder (.a(PC_OUT[31:0]),.b(32'd4),.Subtract(0),.cin(0),.s(PC_NEXT),.cout(dummycout)); 


logic [1:0]  BTB_StateF, BTB_StateE,  BTB_StateD;
logic BTB_HitE, BTB_HitF,  BTB_HitD;

btb BTB(.clk(clk),.rst(rst),.PC(PC_OUT),.PCE(PCE),.PCPlus4(PC_NEXT),.PCTargetE(PCTargetE),.PCSrcE(PCSrcE),.PC_NEXT(PCPlus4F),
        .MisPredictE(MisPredictE),.BTB_StateE(BTB_StateE),.BTB_HitE(BTB_HitE),.BTB_StateF(BTB_StateF),.BTB_HitF(BTB_HitF));

FD_REG FD_REG (.clk(clk),.en(~StallD),.clr(FlushD),.instrF(instrF),.PCF(PC_OUT),.PCPlus4F(PCPlus4F),.PCD(PCD),.PCPlus4D(PCPlus4D),.instrD(instrD),
              .BTB_StateF(BTB_StateF),.BTB_HitF(BTB_HitF),.BTB_StateD(BTB_StateD),.BTB_HitD(BTB_HitD));

//D Section
logic [4:0] rs1D, rs2D, RdD;
logic [31:0] RD1D, RD2D, ImmExtD;
assign rs1D = instrD[19:15];
assign rs2D = instrD[24:20];
assign RdD = instrD[11:7];

reg_file REG_FILE (.clk(clk),.WE(RegWriteW),.WD3(ResultW),.A1(rs1D),.A2(rs2D),.A3(RdW),.RD1(RD1D),.RD2(RD2D)); //A1 & 2 are for reading, A3 is for writing

extendunit extendunit(.ImmSrcD(ImmSrcD),.ImmExtD(ImmExtD),.instrD(instrD),.JumpD(JumpD));

DE_REG DE_REG(.clk(clk),.RD1(RD1D),.RD2(RD2D),.PC_IN(PCD),.PC_PLUS(PCPlus4D),.ImmExt(ImmExtD),.RegWrite(RegWriteD),
                .MemWrite(MemwriteD),.Jump(JumpD),.Branch(BranchD),.ALUSrc(ALUSrcD),.ALUControl(ALUControlD),.ResultSRC(ResultSrcD),
                .ImmSrc(ImmSrcD),.RdD(RdD),.RD1E(RD1E),.RD2E(RD2E),.PC_E(PCE),.PC_PLUS_E(PCPlus4E),.ImmExtE(ImmExtE),.RegWriteE(RegWriteE),
                .MemWriteE(MemWriteE),.JumpE(JumpE),.BranchE(BranchE),.ALUSrcE(ALUSrcE),.ALUControlE(ALUControlE),.ResultSRC_E(ResultSrcE),
                .ImmSrcE(ImmSrcE),.RdE(RdE),.clr(FlushE),.rs1D(rs1D),.rs2D(rs2D),.rs1E(rs1E),.rs2E(rs2E),
                .BTB_StateD(BTB_StateD),.BTB_HitD(BTB_HitD),.BTB_StateE(BTB_StateE),.BTB_HitE(BTB_HitE));

logic [31:0] RD1E, RD2E, PCE, PCPlus4E, ImmExtE;
logic RegWriteE, MemWriteE, JumpE, BranchE, ALUSrcE;
logic [4:0] ALUControlE;
logic [1:0] ResultSrcE, ImmSrcE;
logic [4:0] RdE, rs1E, rs2E;

//EXECUTE SECTION

logic [1:0] ForwardAE, ForwardBE; //hazard signals
logic [31:0] SrcAE, SrcBE, SrcBE_0, SrcBE_1; //srcBE_0 and 1 are the options for SRCBE
logic [31:0] WriteDataE, PCTargetE, ALUResultE;

always_comb begin
    case (ForwardAE)
        2'b00: 
        begin
            case(uSrc):
            2'b00: SrcAE = RD1E;
            2'b01: SrcAE = PCE;
            2'b10: SrcAE = 32'b0;
            default: SrcAE = RD1E;
            endcase
            
        end
        2'b01: SrcAE =  ResultW;
        2'b10: SrcAE = ALUResultM;
        default: SrcAE = RD1E;
    endcase

    case(ForwardBE)
    2'b00: SrcBE_0 = RD2E;
    2'b01: SrcBE_0 =  ResultW;
    2'b10: SrcBE_0 = ALUResultM;
    default: SrcBE_0 = RD2E;
    endcase

    SrcBE_1 = ImmExtE;

    SrcBE = AluSrcE ? SrcBE_0 : SrcBE_1;
    WriteDataE = SrcBE_0;
end

logic useless_cout;
carry_lookahead_adder PCTargetEGenerator (.a(PCE),.b(ImmExtE),.Subtract(0),.cin(0),.cout(useless_cout),.output(PCTargetE));

ALU ALU(.a(SrcAE),.b(SrcBE),.ALUControl(ALUControlE),.cin(0),.ZeroE(ZeroE),.ALUResult(ALUResultE),.clk(clk),
        .multiply_running(multiply_running),.divide_running(divide_running),.divByZero(divByZero));
//flag and multiply_done not connected
//figure out how the fuck do to do the clock shit
//maybe like.. if the alucontrol says its multiply stall until multiply done?

EM_REG EM_REG (.clk(clk),.ALUResult(ALUResultE),.WD(WriteDataE),.PC_PLUS(PCPlus4E),.RegWrite(RegWriteE),.MemWrite(MemWriteE),.ResultSrc(ResultSrcE),
                .ALUResultM(ALUResultM),.WD_M(WriteDataM),.PC_PLUS_M(PCPlus4M),.RdM(RdM),.RegWriteM(RegWriteM),.MemWriteM(MemWriteM), .ResultSrcM(ResultSrcM))


logic[31:0] PCPlus4M;
logic [4:0] RdM;
logic RegWriteM, MemWriteM;
logic [1:0] ResultSrcM;

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
   default ResultW = 32'b0;
   endcase
end


endmodule
