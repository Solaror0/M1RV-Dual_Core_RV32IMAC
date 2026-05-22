module divider(
    input logic clk, rst,
    input logic [31:0] d, p,
    output logic [31:0] q, rem,
    output logic done, running
);

logic [63:0] pBig;
logic [65:0] pNorm;
logic [65:0] dNormExt;
logic [31:0] dNorm;

logic [5:0] clz;
always_comb begin
    pBig = {32'b0, p}; //maybe change this to 35?? idk
    clz = 6'b100000; // Default if all bits are 0
    for (int i = 31; i >= 0; i--) begin
        if (d[i]) begin
            clz = 6'd31 - i[4:0]; //error chance
            break; // The break tells the tool to prioritize higher bits
        end
    end

    dNorm = d << clz;
    pNorm = {2'b0,pBig << clz};
    dNormExt = {2'b0, dNorm, 32'b0};
end

logic [2:0] qC;
logic[65:0] pS, pC, pNS, pNC, pTrunc, pNow,pNext;
logic [65:0] dC, dLS, dM, dMLS;
logic [10:0] signal;

/*Option 1  -> Sign Magnitude
_ _ _ _ _ _ _
S M D D D D D

pNorm = [63:58] = Start
move that into [69:64] 
where PN[63] and PN[62] are at 65:64
when [63] -> [69], 62->68, 61 -> 67, 60 -> 66, 59 -> 65, 58->64
*/

/*Option 2 -> Sign Magnitude Decimal
_ _ _ _ _ _ _
S M D D D D D

Move [63:58] of PNorm
pNorm = [63:58] = Start
move that into [69:64] 
where PN[63] and PN[62], PN[61] are at 66:64
when [63] -> [69], 62->68, 61 -> 67, 60 -> 66, 59 -> 65, 58->64
*/


always_comb begin
    //CHOOSING QD
    pTrunc = pS + pC;
    signal = {dNorm[31:27], pNow[65:60]};

    dLS = {1'b0,dNormExt[63:0],1'b0};
    dM = ~dNormExt + 1;
    dMLS = ~dLS + 1;
    
    case(qC)
        3'b110: dC = dMLS;
        3'b111: dC = dM;
        3'b000: dC = 66'b0;
        3'b001: dC = dNormExt;
        3'b010: dC = dLS;
        default: dC = dNormExt;
    endcase //might wanna change this back from bein ginverted


    //CSA
    pNS = (pS ^ pC ^ dC) << 2;
    pNC = ((pS & pC) | (pS & dC) | (pC & dC)) <<3;
    pNext = (pNow + (~dC+1))<<2;
    
end
pd_lut lut(.q(qC),.p(pNow[65:60]),.d(dNorm[31:27]));

logic [3:0] count;
logic [31:0] Qm, Qp;
always_ff @(posedge clk) begin
if(rst & ~running) 
        begin 
            count <=0; running <=1; done<=0; 
            q<=0; rem <=0;

            //pTrunc <= pBig;
            pS <= pNorm;
            pC <= 0;
            pNow <= pNorm;
        end
        
    if(running) begin  
        if(count == 4'b1111) begin  //might need to extend this by 1 cycle
            running <=0; 
            done<=1;
            q <= (Qp); //no clue on this one either
          //  rem<= (((pS+pC)>>clz>>16)); //lowk idk
        end
        else begin
            count <= count + 1;
            

            pS <= pNS;
            pC <= pNC;
            pNow<=pNext;

            case(qC)
            3'b110: begin Qp<=({Qm[29:0],2'b10}); Qm <= ({Qm[29:0],2'b01}); end
            3'b111: begin Qp<={Qm[29:0],2'b11}; Qm <= {Qm[29:0],2'b10}; end
            3'b000:  begin  Qp<={Qp[29:0],2'b00}; Qm <= {Qm[29:0],2'b11}; end //possible error
            3'b001:  begin Qp<={Qp[29:0],2'b01}; Qm <= {Qp[29:0],2'b00}; end
            3'b010:  begin Qp<={Qp[29:0],2'b10}; Qm <= {Qp[29:0],2'b01}; end
            default: begin  Qp<={Qp[29:0],2'b00}; Qm <= {Qm[29:0],2'b11}; end
            endcase  
            // case(qC)
            //     // Digit = -2: Q = 4Q - 2  -> Shift both, append 2 to Qm
            //     3'b110: begin 
            //         Qp <= {Qp[29:0], 2'b00}; 
            //         Qm <= {Qm[29:0], 2'b10}; 
            //     end
                
            //     // Digit = -1: Q = 4Q - 1  -> Shift both, append 1 to Qm
            //     3'b111: begin 
            //         Qp <= {Qp[29:0], 2'b00}; 
            //         Qm <= {Qm[29:0], 2'b01}; 
            //     end
                
            //     // Digit =  0: Q = 4Q      -> Shift both, append 0 to both
            //     3'b000: begin 
            //         Qp <= {Qp[29:0], 2'b00}; 
            //         Qm <= {Qm[29:0], 2'b00}; 
            //     end 
                
            //     // Digit = +1: Q = 4Q + 1  -> Shift both, append 1 to Qp
            //     3'b001: begin 
            //         Qp <= {Qp[29:0], 2'b01}; 
            //         Qm <= {Qm[29:0], 2'b00}; 
            //     end
                
            //     // Digit = +2: Q = 4Q + 2  -> Shift both, append 2 to Qp
            //     3'b010: begin 
            //         Qp <= {Qp[29:0], 2'b10}; 
            //         Qm <= {Qm[29:0], 2'b00}; 
            //     end
                
            //     // Safe default: catch-all behaves like an idle (0) cycle
            //     default: begin 
            //         Qp <= {Qp[29:0], 2'b00}; 
            //         Qm <= {Qm[29:0], 2'b00}; 
            //     end
            // endcase
        end
    end

end

endmodule
