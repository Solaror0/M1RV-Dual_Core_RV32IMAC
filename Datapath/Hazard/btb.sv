//btb takes in PC, PCE, PCPLus4
//outputs PCPlus4F and/or the branch target as PC NEXT
`timescale 1ns / 1ps // Defines the time unit (1ns) and precision (1ps)

module BTB(
    input logic [31:0] PC, PCE, PCPlus4, PCTargetE,
    input logic PCSrcE, clk, rst,
    output logic [31:0] PC_NEXT,
    output logic MisPredictE,

   (* mark_debug = "true" *)  input logic [1:0] BTB_StateE,
    (* mark_debug = "true" *) input logic BTB_HitE,
    (* mark_debug = "true" *) output logic [1:0] BTB_StateF,
   (* mark_debug = "true" *)  output logic BTB_HitF


);

// (Index) 10 PC Digits [11:2]

logic [6:0] index;
logic [1:0] state;
logic [30:0] target;
logic valid;
logic [52:0] BTB_TABLE [128];
logic [127:0] BTB_VALID;


// (Rest of PC) 20 [31:12] + (State) 2 bits Information + (Target) [31:1] Branch Addr (31) + 1 valid bit from BTB_VALID
// PC [53:34] State [33:32] Target [31:1] + Valid[0]

always_comb begin
    
   
    index = PC[8:2];
    state = BTB_TABLE[index][33:32];
    target = BTB_TABLE[index][31:1];
    valid = BTB_VALID[index];

    BTB_StateF = state;
    BTB_HitF = (valid & (BTB_TABLE[index][52:34] == PC[31:12]));
    //for reading
    //check the PC against the table
    // if state is 11 or 10 then branch, 00 or 01 then PC out is the same as PC, else its branching

    
    if ((state[1])&BTB_HitF) begin
        PC_NEXT = {target,1'b0};
    end else begin
        PC_NEXT = PCPlus4;
    end
    
    if(BTB_HitE)begin
        MisPredictE = (PCSrcE != BTB_StateE[1]);
    end else begin
        MisPredictE = PCSrcE;
    end

end

always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            // invalidate the entire table on reset
            for (int i = 0; i < 1024; i++) begin
                BTB_TABLE[i] <= 54'b0;
            end
        end else begin
            if (PCSrcE) begin
                if (BTB_HitE) begin
                    case(BTB_StateE)
                    2'b00: BTB_TABLE[PCE[11:2]][33:32] <= 2'b01;
                    2'b01: BTB_TABLE[PCE[11:2]][33:32] <= 2'b10;
                    2'b10: BTB_TABLE[PCE[11:2]][33:32] <= 2'b11;
                    2'b11: BTB_TABLE[PCE[11:2]][33:32] <= 2'b11;
                    default: BTB_TABLE[PCE[11:2]][33:32] <= 2'b01;
                    endcase

                end else begin
                    BTB_TABLE[PCE[11:2]] <= {PCE[31:12],2'b10,PCTargetE[31:1],1'b1};
                end
            end
            else begin
                if (BTB_HitE) begin
                    case(BTB_StateE)
                    2'b00: BTB_TABLE[PCE[11:2]][33:32] <= 2'b00;
                    2'b01: BTB_TABLE[PCE[11:2]][33:32] <= 2'b00;
                    2'b10: BTB_TABLE[PCE[11:2]][33:32] <= 2'b01;
                    2'b11: BTB_TABLE[PCE[11:2]][33:32] <= 2'b10;
                    default: BTB_TABLE[PCE[11:2]][33:32]<= 2'b01;
                    endcase

                end
            end
        end
end
endmodule
