module decompressionunit(
    logic input [31:0] instrD,
    logic input compressed,
    logic output [31:0] processedInstrD
);

logic [4:0] rs2, rs1, rd;
logic [6:0] op, funct7;
logic [2:0] funct3;

logic [2:0] crd, cfunct3;
logic [2:0] crs1;
logic [1:0] cop;

always_comb begin
    crd = instrD[4:2];
    crs1 = instrD[9:7];
    cop = instrD[1:0];
    cfunct3 = instrD[15:13];

    if(compressed) begin

        case({cfunct3,cop})

        5'b000_00: begin
            rd = {2'b01, crd};
            rs1 = 5'b00010;
            op = 7'b0010011;
            processedInstrD = {2'b00,instrD[10:7],instrD[12:11],instrD[5],instrD[6],2'b00,rs1,cfunct3,rd,op}; 
        end
            
        5'b000_01: begin
            rs1 = instrD[11:7];
            rd = instrD[11:7];
            op = 7'b0010011;
            if(rd == 0) processedInstrD = 32'h00000013;
            else processedInstrD = {{7{instrD[12]}},instrD[6:2],rs1,cfunct3,rd,op};
        end
           
        5'b000_10: begin
            op = 7'b0010011;
            funct3 = 3'b001;
            rs1 = instrD[11:7];
            rd = instrD[11:7]; 
            funct7 = {7'b0000000};
            processedInstrD = {funct7,instrD[6:2],rs1,funct3,rd,op}; 
        end

        5'b001_01: begin
            rd = 5'b00001;
            op = 7'b1101111;
            processedInstrD = {
                instrD[12],                                                          
                instrD[8], instrD[10:9], instrD[6], instrD[7], instrD[2], instrD[11], instrD[5:3], 
                instrD[12],                                                          
                {8{instrD[12]}},                                                     
                rd,                                                                  
                op                                                                   
            }; 
        end

        5'b010_00: begin
            rd = {2'b01, crd};
            rs1 = {2'b01, crs1};
            op = 7'b0000011;
            processedInstrD = {{5'b00000,instrD[5],instrD[12:10],instrD[6],2'b00},rs1,cfunct3,rd,op};
        end

        5'b010_01: begin
            rs1 = 0;
            rd = instrD[11:7];
            op = 7'b0010011;
            processedInstrD = {{7{instrD[12]}},instrD[6:2],rs1,3'b000,rd,op};
        end

        5'b010_10: begin
            rd = instrD[11:7];
            rs1 = 5'b00010;
            op = 7'b0000011;
            funct3 = 3'b010;
            processedInstrD = {4'b0000,instrD[3:2],instrD[12],instrD[6:4],2'b00,rs1,funct3,rd,op};
        end

        5'b011_01: begin
            rd = instrD[11:7];
            if (rd == 5'd2) begin 
                op = 7'b0010011; 
                processedInstrD = {
                    {3{instrD[12]}}, instrD[4:3], instrD[5], instrD[2], instrD[6], 4'b0000, 
                    rd, 
                    3'b000,   
                    rd, 
                    op        
                };
            end else begin 
                op = 7'b0110111;
                processedInstrD = {{15{instrD[12]}}, instrD[6:2], rd, op };
            end
        end
            
        5'b100_01: begin
            if(instrD[10]&instrD[11]) begin 
                op = 7'b0110011;
                case(instrD[6:5])
                    2'b00: begin funct3 = 3'b000; funct7 = 7'b0100000; end
                    2'b01: begin funct3 = 3'b100; funct7 = 7'b0000000; end
                    2'b10: begin funct3 = 3'b110; funct7 = 7'b0000000; end
                    2'b11: begin funct3 = 3'b111; funct7 = 7'b0000000; end
                endcase
                rs1 = {2'b01,crs1};
                rd = {2'b01,crs1};
                rs2 = {2'b01,instrD[4:2]};
                processedInstrD = {funct7,rs2,rs1,funct3,rd,op};
            end
            else begin 
                op = 7'b0010011;
                rs1 = {2'b01,crs1};
                rd = {2'b01,crs1};
                if(instrD[11]) begin  
                    funct3 = 3'b111;
                    processedInstrD = {{7{instrD[12]}},instrD[6:2],rs1,funct3,rd,op};
                end else begin 
                   funct3 = 3'b101;
                   funct7 = {1'b0,instrD[10],5'b00000};
                   processedInstrD = {funct7,instrD[6:2],rs1,funct3,rd,op};
                end
            end
        end

        5'b100_10: begin
            if(!instrD[12]) begin 
                rs1 = instrD[11:7];
                rs2 = instrD[6:2];
                if(rs2==0) begin 
                    op = 7'b1100111;
                    processedInstrD = {12'b0,rs1,3'b000,5'b00000,op};
                end else begin 
                    op = 7'b0110011;
                    processedInstrD = {7'b0000000,rs2,5'b00000,3'b000,rs1,op};
                end
            end else begin 
                rs1 = instrD[11:7];
                rs2 = instrD[6:2];
                if(rs1 == 0 & rs2 == 0) begin 
                    processedInstrD = 32'h00100073; 
                end else if (rs2 == 0) begin 
                    op = 7'b1100111;
                    processedInstrD = {12'b0,rs1,3'b000,5'b00001,op};
                end else begin  
                    op = 7'b0110011;
                    processedInstrD = {7'b0000000,rs2,rs1,3'b000,rs1,op}; 
                end
            end 
        end

        5'b101_01: begin
            rd = 5'b00000;
            op = 7'b1101111;
            processedInstrD = {
                instrD[12],                                                          
                instrD[8], instrD[10:9], instrD[6], instrD[7], instrD[2], instrD[11], instrD[5:3], 
                instrD[12],                                                          
                {8{instrD[12]}},                                                     
                rd,                                                                  
                op                                                                   
            }; 
        end

        5'b110_00: begin
            rs2 = {2'b01, crd};
            rs1 = {2'b01, crs1}; 
            op = 7'b0100011;
            processedInstrD = {{5'b00000,instrD[5],instrD[12]},rs2,rs1,cfunct3,{instrD[11:10],instrD[6],2'b00},op};
        end

        5'b110_01: begin
            op = 7'b1100011;
            rs1 = {2'b01,crs1};
            processedInstrD = {
                {4{instrD[12]}}, instrD[6:5], instrD[2],
                5'b00000, 
                rs1,      
                3'b000,   
                instrD[11:10], instrD[4:3], instrD[12],
                op        
            };
        end

        5'b110_10: begin
            rs2 = instrD[6:2];
            rs1 = 5'b00010;
            op = 7'b0100011;
            processedInstrD = {4'b0000,instrD[8:7],instrD[12],rs2,rs1,3'b010,instrD[11:9],2'b00,op};
        end

        5'b111_01: begin
            op = 7'b1100011;
            rs1 = {2'b01,crs1};
            processedInstrD = {       
                {4{instrD[12]}}, instrD[6:5], instrD[2],
                5'b00000, 
                rs1,      
                3'b001,   
                instrD[11:10], instrD[4:3], instrD[12],
                op        
            };
        end

        endcase
        
    end else begin
        processedInstrD = instrD;
    end

end

endmodule