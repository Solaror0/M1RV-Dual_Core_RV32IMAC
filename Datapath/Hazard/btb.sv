//btb takes in PC, PCE, PCPLus4
//outputs PCPlus4F and/or the branch target as PC NEXT

module BTB(
    input logic [31:0] PC, PCE, PCPlus4, PCPlus4E, PCTargetE,
    input logic PCSrcE, clk, rst,
    output logic [31:0] PC_NEXT,
    output logic MisPredictE
);

// (Index) 10 PC Digits [11:2]

logic [9:0] index;
logic [1:0] state;
logic [30:0] target;
logic valid;
logic [53:0] BTB_TABLE [1024];


// (Rest of PC) 20 [31:12] + (State) 2 bits Information + (Target) [31:1] Branch Addr (31) + 1 valid bit
// PC [53:34] State [33:32] Target [31:1] + Valid[0]

logic [53:0] item; //for writing purposes
always_comb begin
    
    item = BTB_TABLE[PCE[11:2]];
    index = PC[11:2];
    state = BTB_TABLE[index][33:32];
    target = BTB_TABLE[index][31:1];
    valid = BTB_TABLE[index][0];
    //for reading
    //check the PC against the table
    // if state is 11 or 10 then branch, 00 or 01 then PC out is the same as PC, else its branching

    if ((state == 2'b11 | state == 2'b10)&(BTB_TABLE[index][53:34] == PC[31:12])&(valid)) begin
        PC_NEXT = {target,1'b0};
    end else begin
        PC_NEXT = PCPlus4;
    end

//for writing

    if(item[0] & (PCE[31:12] == item[53:34]))begin
        MisPredictE = (PCSrcE != item[33]);
    end else begin
        MisPredictE = PCSrcE;
    end

end

always_ff @(posedge clk or negedge rst) begin
        if (!rst) begin
            // invalidate the entire table on reset
            for (int i = 0; i < 1024; i++) begin
                BTB_TABLE[i] <= 54'b0;
            end
        end else begin
            if (PCSrcE) begin
                if (item[0] & (PCE[31:12] == item[53:34])) begin
                    case(item[33:32])
                    2'b00: BTB_TABLE[PCE[11:2]][33:32] <= 2'b01;
                    2'b01: BTB_TABLE[PCE[11:2]][33:32] <= 2'b10;
                    2'b10: BTB_TABLE[PCE[11:2]][33:32] <= 2'b11;
                    2'b11: BTB_TABLE[PCE[11:2]][33:32] <= 2'b11;
                    default: BTB_TABLE[PCE[11:2]][33:32] <= 2'b01;
                    endcase

                end else begin
                    BTB_TABLE[PCE[11:2]] <= {PCE[31:12],2'b10,PCTargetE[31:1],1};
                end
            end
            else begin
                if (item[0] & (PCE[31:12] == item[53:34])) begin
                    case(item[33:32])
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
