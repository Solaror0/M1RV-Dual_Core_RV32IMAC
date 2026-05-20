module divider(
    input logic clk, rst,
    input logic [31:0] d, p,
    output logic [31:0] q, rem,
    output logic done, running
);

logic [63:0] pBig, pNorm, dNormExt;
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
    pNorm = pBig << clz;
    dNormExt = {dNorm, 32'b0};
end

logic [2:0] qC;
logic[63:0] dC, pS, pC, pNS, pNC, pTrunc;
logic [63:0] dLS, dM, dMLS;
logic [10:0] signal;

/*Option 1 
_ _ _ _ _ _ _
S M D D D D D

pNorm = [63:58] = Start
move that into [69:64] 
where PN[63] and PN[62] are at 65:64
when [63] -> [69], 62->68, 61 -> 67, 60 -> 66, 59 -> 65, 58->64
*/

/*Option 2
_ _ _ _ _ _ _
S M D D D D D

Move [63:58] of PNorm
pNorm = [63:58] = Start
move that into [69:64] 
where PN[63] and PN[62], PN[61] are at 66:64
when [63] -> [69], 62->68, 61 -> 67, 60 -> 66, 59 -> 65, 58->64
*/

pd_lut lut(.q(qC),.p(pTrunc[63:58]),.d(dNorm[31:27]));

always_comb begin
    //CHOOSING QD
    pTrunc = pS + pC;
    signal = {dNorm[31:27], pTrunc[63:58]};
    dLS = {dNormExt[62:0],1'b0};
    dM = ~dNormExt + 1;
    dMLS = ~dLS + 1;
    case(qC)
        3'b110: dC = dMLS;
        3'b111: dC = dM;
        3'b000: dC = 0;
        3'b001: dC = dNormExt;
        3'b010: dC = dLS;
        default: dC = dNormExt;
    endcase


    //CSA
    pNS = (pS ^ pC ^ dC) << 2;
    pNC = ((pS & pC) | (pS & dC) | (pC & dC)) <<3;
    
end

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

            case(qC)
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
