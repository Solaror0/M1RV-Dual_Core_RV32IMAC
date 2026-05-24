module divider(
    input logic clk, rst,
    input logic [31:0] a, d,
    output logic [31:0] q,
    output logic [32:0] rem,
    output logic done, running
);

logic [64:0] regPA,regPA_temp, regPA_TS;
logic [63:0] pBig;
logic [32:0] dNorm;
logic [5:0] clz;
logic [32:0] p, pNext;

always_comb begin
    pBig = {32'b0, a}; //maybe change this to 35?? idk
    clz = 6'b100000; // Default if all bits are 0
    for (int i = 31; i >= 0; i--) begin
        if (d[i]) begin
            clz = 6'd31 - i[4:0]; //error chance
            break; // The break tells the tool to prioritize higher bits
        end
    end
    dNorm ={1'b0,d << clz};
    regPA_temp = {1'b0,pBig << clz}; 
end

logic [2:0] qC;
logic [5:0] topBits;
logic [32:0] dC, dLS, dM, dMLS;


pd_lut lut(.q(qC),.p(topBits),.d(dNorm[31:28]));

always_comb begin
    dLS = {dNorm<<1};
    dM = ~dNorm + 1;
    dMLS = ~dLS + 1;
    topBits = regPA[64:59];
    
    case(qC)
        3'b110: dC = dMLS;
        3'b111: dC = dM;
        3'b000: dC = 33'b0;
        3'b001: dC = dNorm;
        3'b010: dC = dLS;
        default: dC = dNorm;
    endcase //might wanna change this back from bein ginverted
    
    regPA_TS = regPA <<2;
    pNext = regPA_TS[64:32]-(dC);
end

logic [4:0] count;
logic [31:0] Qm, Qp;
logic [32:0] rem_temp;
logic [31:0] aLow;
always_ff @(posedge clk) begin
if(rst & ~running) 
        begin 
            count <=0; running <=1; done<=0; 
            q<=0; rem <=0; rem_temp <=0;
            regPA <= regPA_temp;
            
            p <= regPA[64:32];
            Qp<=0;
            Qm <=-1;
        end
        
    if(running) begin  
        if(count == 5'b10000) begin  //might need to extend this by 1 cycle
            running <=0; 
            done<=1;
            if(regPA[64]) begin
                rem <= (regPA[64:32]+dNorm) >>(clz);
                q <= (Qm);
            end 
            else 
            begin //weird behaviours here, gotta fix, may have to do with the final qC picked, like the sign.
                q <= (Qp);
                rem <= (regPA[64:32]) >>(clz);
            end

        end
        else begin
            count <= count + 1;
            p<=pNext;
            rem_temp<=p;
            regPA <= {pNext[32:0],regPA_TS[31:0]};

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
