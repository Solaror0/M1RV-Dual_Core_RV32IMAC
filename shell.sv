module shell(
    input logic clk, rst,
    output logic divByZero
);

//core
logic [31:0] instr, read_data;
logic [31:0] PC, ALUResult, WriteData;
logic MemWriteM;

core core(.clk(clk),.rst(rst),.instr(instr),.read_data(read_data),.PC_OUT(PC),.ALUResult(ALUResult),.WriteData(WriteData),
            .MemWriteM(MemWriteM),.divByZero(divByZero));

//memory
i_mem i_mem(.PC_IN(PC),.instr(instr));
d_mem d_mem (.clk(clk),.WE(MemWriteM),.addr(ALUResult),.wd(WriteData),.rd(read_data));

endmodule
