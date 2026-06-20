`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module datapath(
    (* mark_debug = "true" *) input logic [4:0] ALUControlD,
    (* mark_debug = "true" *) input logic clk, rst, JumpD, BranchD,  RegWriteD, ALUSrcD, MemwriteD,
    input logic [1:0] ResultSrcD, ImmSrcD, uSrc,
    (* mark_debug = "true" *) input logic [31:0] instrD, ReadDataW,
    (* mark_debug = "true" *) output logic[31:0] ALUResultM, PC_OUT, WriteDataM,
    output logic MemWriteM, divByZero, FlushD, StallD,
    output logic [31:0] instrDConfirmed

);
(* mark_debug = "true" *) logic [31:0] ResultW;

hazardunit hazard_unit (.clk(clk),.Rs1E(rs1E),.Rs2E(rs2E),.Rs1D(rs1D),.Rs2D(rs2D),.RdE(RdE),.RdM(RdM),.RdW(RdW),.RegWriteW(RegWriteW),.RegWriteM(RegWriteM),
    .PCSrcE(PCSrcE),.MisPredictE(MisPredictE),.ResultSrcE(ResultSrcE),.FlushD(FlushD),.FlushE(FlushE),.StallF(StallF),.StallD(StallD), .StallE(StallE),
    .ForwardAE(ForwardAE),.ForwardBE(ForwardBE),.calculation_stall(calculation_stall),.rst(rst));

(* mark_debug = "true" *) logic  FlushE, StallF, StallE, MisPredictE;

//F Section
(* mark_debug = "true" *) logic ZeroE, PCSrcE;
(* mark_debug = "true" *) logic [31:0] PC_NEXT, PCPlus4D, PCPlus4F,  PCD;

pc PC(.rst(rst),.clk(clk),.PCSrcE(PCSrcE),.PC_OUT(PC_OUT),.branch_addr(PCTargetE),.en(~StallF),.PC_NEXT(PCPlus4F));

logic dummycout;
carry_lookahead_adder pc_adder (.a(PC_OUT[31:0]),.b(32'd4),.Subtract(1'b0),.cin(0),.s(PC_NEXT),.cout(dummycout)); 


logic [1:0]  BTB_StateF, BTB_StateE,  BTB_StateD;
logic BTB_HitE, BTB_HitF,  BTB_HitD;

BTB BTB(.clk(clk),.rst(rst),.PC(PC_OUT),.PCE(PCE),.PCPlus4(PC_NEXT),.PCTargetE(PCTargetE),.PCSrcE(PCSrcE),.PC_NEXT(PCPlus4F),
        .MisPredictE(MisPredictE),.BTB_StateE(BTB_StateE),.BTB_HitE(BTB_HitE),.BTB_StateF(BTB_StateF),.BTB_HitF(BTB_HitF));

FD_REG FD_REG (.clk(clk),.en(~StallD),.clr(FlushD),.instrD(instrD),.PCF(PC_OUT),.PCPlus4F(PCPlus4F),.PCD(PCD),.PCPlus4D(PCPlus4D),
              .BTB_StateF(BTB_StateF),.BTB_HitF(BTB_HitF),.BTB_StateD(BTB_StateD),.BTB_HitD(BTB_HitD),.instrDConfirmed(instrDConfirmed));

//D Section
logic [4:0] rs1D, rs2D, RdD;
(* mark_debug = "true" *) logic [31:0] RD1D, RD2D, ImmExtD, instrE;
assign rs1D = instrD[19:15];
assign rs2D = instrD[24:20];
assign RdD = instrD[11:7];

reg_file REG_FILE (.clk(clk),.WE(RegWriteW),.WD3(ResultW),.A1(rs1D),.A2(rs2D),.A3(RdW),.RD1(RD1D),.RD2(RD2D)); //A1 & 2 are for reading, A3 is for writing

extendunit extendunit(.ImmSrcD(ImmSrcD),.ImmExtD(ImmExtD),.instrD(instrD),.JumpD(JumpD));

DE_REG DE_REG(.clk(clk),.RD1(RD1D),.RD2(RD2D),.PC_IN(PCD),.PC_PLUS(PCPlus4D),.ImmExt(ImmExtD),.RegWrite(RegWriteD),
                .MemWrite(MemwriteD),.Jump(JumpD),.Branch(BranchD),.ALUSrc(ALUSrcD),.ALUControl(ALUControlD),.ResultSRC(ResultSrcD),
                .ImmSrc(ImmSrcD),.RdD(RdD),.RD1E(RD1E),.RD2E(RD2E),.PC_E(PCE),.PC_PLUS_E(PCPlus4E),.ImmExtE(ImmExtE),.RegWriteE(RegWriteE),
                .MemWriteE(MemWriteE),.JumpE(JumpE),.BranchE(BranchE),.ALUSrcE(ALUSrcE),.ALUControlE(ALUControlE),.ResultSRC_E(ResultSrcE),
                .ImmSrcE(ImmSrcE),.RdE(RdE),.clr(FlushE),.en(~StallE),.rs1D(rs1D),.rs2D(rs2D),.rs1E(rs1E),.rs2E(rs2E),
                .BTB_StateD(BTB_StateD),.BTB_HitD(BTB_HitD),.BTB_StateE(BTB_StateE),.BTB_HitE(BTB_HitE),
                .instrD(instrD),.instrE(instrE));

logic [31:0] RD1E, RD2E, PCE, PCPlus4E, ImmExtE;
logic RegWriteE, MemWriteE, JumpE, BranchE, ALUSrcE;
logic [4:0] ALUControlE;
logic [1:0] ResultSrcE, ImmSrcE;
logic [4:0] RdE, rs1E, rs2E;

//EXECUTE SECTION

logic [1:0] ForwardAE, ForwardBE; //hazard signals
 (* mark_debug = "true" *)  logic [31:0] SrcAE, SrcBE, SrcBE_0, SrcBE_1; //srcBE_0 and 1 are the options for SRCBE
(* mark_debug = "true" *) logic [31:0] WriteDataE, PCTargetE, ALUResultE;

always_comb begin
    case (ForwardAE)
        2'b00: 
        begin
            case(uSrc)
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

    SrcBE = ALUSrcE ? SrcBE_1 : SrcBE_0;
    WriteDataE = SrcBE_0;
end

logic useless_cout, calculation_stall;
logic OverflowE, NegativeE, CarryoutE;
carry_lookahead_adder PCTargetEGenerator (.a(PCE),.b(ImmExtE),.Subtract(0),.cin(0),.cout(useless_cout),.s(PCTargetE));

ALU ALU(.rst(rst),.a(SrcAE),.b(SrcBE),.ALUControl(ALUControlE),.cin(0),.ALUResult(ALUResultE),.clk(clk),
        .divByZero(divByZero),.calculation_stall(calculation_stall),
        .ZeroFlag(ZeroE),.NegativeFlag(NegativeE), .OverflowFlag(OverflowE), .CarryOutFlag(CarryoutE));
        
logic branch_condition;
always_comb begin
    case(instrE[14:12]) //funct3
    3'b000:  branch_condition = ZeroE;
    3'b001:  branch_condition = ~ZeroE;
    3'b100:  branch_condition = (NegativeE != OverflowE);
    3'b101:  branch_condition = (NegativeE == OverflowE);
    3'b110:  branch_condition = (CarryoutE == 1'b0);
    3'b111:  branch_condition = (CarryoutE == 1'b1);
    default: branch_condition = ZeroE;
    endcase
end
assign PCSrcE = (branch_condition & BranchE) | JumpE;
        
//flag and multiply_done not connected
//figure out how the fuck do to do the clock shit
//maybe like.. if the alucontrol says its multiply stall until multiply done?

EM_REG EM_REG (.clk(clk),.Rd(RdE),.ALUResult(ALUResultE),.WD(WriteDataE),.PC_PLUS(PCPlus4E),.RegWrite(RegWriteE),.MemWrite(MemWriteE),.ResultSrc(ResultSrcE),
                .ALUResultM(ALUResultM),.WD_M(WriteDataM),.PC_PLUS_M(PCPlus4M),.RdM(RdM),.RegWriteM(RegWriteM),.MemWriteM(MemWriteM), .ResultSrcM(ResultSrcM));


logic[31:0] PCPlus4M;
logic [4:0] RdM;
(* mark_debug = "true" *) logic RegWriteM, MemWriteM;
logic [1:0] ResultSrcM;

//MEMORY SECTION
//DMEM connected here using ALUResultM and WriteDataM

MW_REG MW_REG (.clk(clk),.ALUResult(ALUResultM),.ReadData(0),.Rd(RdM),.RegWrite(RegWriteM),.ResultSrc(ResultSrcM),.PC_PLUS(PCPlus4M),
                .AluResultW(AluResultW),.ReadData_W(),.PC_PLUS_W(PCPlus4W),.RdW(RdW),.RegWriteW(RegWriteW),.ResultSrcW(ResultSrcW));

(* mark_debug = "true" *)  logic [31:0] AluResultW, ReadDataW, PCPlus4W;
logic [4:0] RdW;
(* mark_debug = "true" *) logic RegWriteW;
(* mark_debug = "true" *)  logic[1:0] ResultSrcW;

always_comb begin
   case (ResultSrcW)
   2'b00: ResultW = AluResultW;
   2'b01: ResultW = ReadDataW;
   2'b10: ResultW = PCPlus4W;
   default ResultW = 32'b0;
   endcase
end


endmodule
