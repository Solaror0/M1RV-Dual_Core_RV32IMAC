//btb takes in PC, PCE, PCPLus4
//outputs PCPlus4F and/or the branch target as PC NEXT

module BTB(
    input logic [31:0] PC, PCE, PCPlus4, PCPlus4E, PCTargetE,
    input logic PCSrcE,
    output logic [31:0] PC_NEXT,
    output logic MisPredictE
);

// (Index) 10 PC Digits [11:2]

assign logic [9:0] index = PC[11:2];
logic [53:0] BTB_TABLE [1024];

assign logic [1:0] state = BTB_TABLE[index][33:32];
assign logic [30:0] target = BTB_TABLE[index][31:1];
assign logic filled = BTB[index][0];
// (Rest of PC) 20 [31:12] + (State) 2 bits Information + (Target) [31:1] Branch Addr (31) + 1 valid bit
// PC [53:34] State [33:32] Target [31:1] + Valid[0]

logic [53:0] item; //for writing purposes
always_comb begin

  
//for reading
    //check the PC against the table
    // if state is 11 or 10 then branch, 00 or 01 then PC out is the same as PC, else its branching
    if (state == 2'b00 | state == 2'b01 | (BTB_TABLE[index][53:24] == PC[31:12]) )begin
        PC_OUT = PCPlus4;
    end
    else begin
        PC_OUT = {target,1'b0};
    end


//for writing
   
    item = BTB_TABLE[PC[11:2]];
    if (PCSrcE) begin
        if (PCE[31:12] == item[53:34]) begin
            case(item[33:32]):
            2'b00: item[33:32] = 2'b01;
            2'b01: item[33:32] = 2'b10;
            2'b10: item[33:32] = 2'b11;
            2'b11: item[33:32] = 2'b11;
            default: item[33:32] = 2'b01;
            endcase

        end else begin
            item = {PCE[31:12],2'b10,PCTargetE[31:1],1};
        end
    else begin
         if (PCE[31:12] == item[53:34]) begin
            case(item[33:32]):
            2'b00: item[33:32] = 2'b00;
            2'b01: item[33:32] = 2'b00;
            2'b10: item[33:32] = 2'b01;
            2'b11: item[33:32] = 2'b10;
            default: item[33:32] = 2'b01;
            endcase

            if(item[33:32] == 2'b10 | item[33:32] == 2'b11): MisPredictE = 1;
            else MisPredictE = 0;

        end else begin
            item = {PCE[31:12],2'b01,PCPlus4E[31:1],1};
        end
    end

    end 
    //if PCSrcE is 1, check the index
        // if its not the same as PCE, then write in PCE with state 10
        // if it is the same, then upgrade the state closer to branch
    //if PCSrcE is 0, and is not the index take PCE and write in 10 -> use PCPlus4E for the target
        //if it is in the table, then move closer to pc_next



end




endmodule