module divider (
    input logic [31:0] P,D,
    input logic clk, rst,
    output logic [31:0] q, Qm, Qp, //adx these back
    output logic [63:0]remainder,
    output logic running, done,
    output logic [31:0] D_Chosen,
    output logic [2:0] q_chosen,
    output logic [31:0] p_trunc,
    output logic [5:0] lz_count,
    output logic [6:0] lz_p,
    output logic [31:0] D_norm,
    output logic [63:0] P_big, P_shifted, P_norm,
    output logic csout,
    output logic [63:0] Ps_now, Pc_now, Ps_next, Pc_next,
    output logic [11:0] signal,
    output logic [8:0] p_sum_trunc
);

//normalizing

logic [32/2-1:0] iterations;
logic [32+2:0]  D_star;
logic [32+5:0] 	P_star;
logic [32/2-1:0] recovery;

pre_processing u1(

.start(rst),

.dividend(P),
.divisor(D),
	

.iterations(iterations),
.divisor_star(D_star),
.dividend_star(P_star),
.recovery(recovery)

);

// always_comb begin
//     P_big = {32'b0, P};
//     lz_count = 6'b100000; // Default if all bits are 0
//     for (int i = 31; i >= 0; i--) begin
//         if (D[i]) begin
//             lz_count = 6'd31 - i[4:0]; //error chance
//             break; // The break tells the tool to prioritize higher bits
//         end
//     end

//     D_norm = D << lz_count;
//     P_shifted = P_big << lz_count; ///IMPORTANT: ADD A DIVISION BY 0 FLAG

//     lz_p = 7'b1000000; // Default if all bits are 0
//     for (int j = 63; j >= 0; j--) begin
//         if (P_shifted[j]) begin
//             lz_p = 6'b111111 - j[5:0]; //error chance
//             break; // The break tells the tool to prioritize higher bits
//         end
//     end
//     P_norm = P_shifted<< (lz_p-1);

// end





//setup the -2, -1, 0, 1, 2
logic [31:0] D_mls, D_m, D_ls;
assign D_ls = {D_norm[30:0],1'b0};
assign D_m = ~D_norm + 1;
assign D_mls = ~D_ls + 1;




//lookup table god knows how

//carry_lookahead_adder adder (.a({Ps_now[63:58],26'b0}),.b({Pc_now[63:58],26'b0}),.Subtract(0),.cin(0),.s(p_trunc),.cout(csout));


//assign {csout, p_trunc} = {Ps_now[63:58],58'b0} + {Pc_now[63:58],58'b0};
//very big chance of error with the cout

//pd_lut pd_lut(.p({csout,p_trunc[63:59]}),.d(D_norm[31:27]),.q(q_chosen)); //errorchance w 30:26 , try 31:27



logic [63:0] D_extended;

always_comb begin
   // {csout, p_trunc} = {Ps_now[63:58],58'b0} + {Pc_now[63:58],58'b0};

    //basically choose D_Chosen based off the lookup table (use P and D)
    //assign q and remember to store it
    case(q_chosen)
    3'b110: D_Chosen = D_mls;
    3'b111: D_Chosen = D_m;
    3'b000: D_Chosen = 0;
    3'b001: D_Chosen = D_norm;
    3'b010: D_Chosen = D_ls;
    default: D_Chosen = D_norm;
    endcase

    p_sum_trunc = Ps_now[63:55] + Pc_now[63:55];
    signal = {D_norm[31:27],{p_sum_trunc[8:2]}};
    D_extended = {D_Chosen, 32'b0};
    Ps_next = (Ps_now ^ Pc_now ^ D_extended) << 2; //change this equation, maybe make this combinational
    Pc_next = ((Ps_now & Pc_now) | (Pc_now & D_extended) | (Ps_now & D_extended)) << 3; //maybe just shift this by 2? but itthink its 3
   

end

pd_lut pd_lut(.p({p_sum_trunc[8:2]}),.d(D_norm[31:27]),.q(q_chosen)); //errorchance w 30:26 , try 31:27
//dividing algorithm (P_next  = 4*(P_now - D_Chosen) (aka QD))
//logic [63:0] Ps_now, Pc_now, Ps_next, Pc_next;
logic [3:0] count;


always_ff @(posedge clk) begin
    if(rst & ~running) 
        begin 
            count <=0; running <=1; done<=0; 
            q<=0; remainder <=0;
            Ps_now <= P_norm; 
            Pc_now <=0;
        end

    if(running) begin  
        if(count == 4'b1111) begin  //might need to extend this by 1 cycle
            running <=0; 
            done<=1;
            q<= (Qp >> lz_count);
            remainder<= (((Ps_now+Pc_now)>>lz_count)>>lz_p); //change this to CLA
        end
        else begin
            count <= count + 1;
            

            Ps_now <= Ps_next;
            Pc_now <= Pc_next;

       
            case(q_chosen)
            3'b110: begin Qp<=({Qm[29:0],2'b10}); Qm <= ({Qm[29:0],2'b01}); end
            3'b111: begin Qp<={Qm[29:0],2'b11}; Qm <= {Qm[29:0],2'b10}; end
            3'b000:  begin  Qp<={Qp[29:0],2'b00}; Qm <= {Qm[29:0],2'b11}; end //possible error
            3'b001:  begin Qp<={Qp[29:0],2'b01}; Qm <= {Qp[29:0],2'b00}; end
            3'b010:  begin Qp<={Qp[29:0],2'b10}; Qm <= {Qp[29:0],2'b01}; end
            default: begin  Qp<={Qp[29:0],2'b00}; Qm <= {Qm[29:0],2'b11}; end
            endcase  
        end
    end

end

endmodule
