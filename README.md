
## Introduction

A 2-Core RV32IMAC CPU project to learn SystemVerilog and the RISC-V ISA. Implemented on a Nexys A7-100t FPGA using Vivado.

The core specs are listed  below:
- 5 Stage Pipeline
- M, A, & C Extension Instructions
- Supports code update using pySerial & UART
- Branch Prediction (BTB)
- Radix-4-SRT Division
- Radix-4 Booth-Wallace Multiplicationz

This code is available for anyone to observe and learn from. As a long term project where I improved drastically throughout, it may have some changes over-time in coding style.

## The Numbers
LUTS: XXXX
LUTRAM:
BRAM:
Frequency: Tested at XX MHz. Nexys A7 goes up to XX MHz
Instruction Memory: 
Data Memory: 
BTB: 128-Entry


## Running a Program
All usage of this project has been done through implementation on the Nexys A7 FPGA using C code. The code is compiled using riscv64-unknown-elf-gcc & elf2hex. 
Upon writing a program, simply run the commands listed in workflow.txt to compile. The compilation will result in separate instruction and data files, i.e one file will contain
the instructions for the Instruction ROM, and the other contains the data to be given to the Data Memory.

The commands return the following:
- Bin, elf, and hex files containing the program and data
- A disassembly file

Upon synthesis, the memory modules will read from the hex data using readmemh. However once implemented, the code can be overwritten using the pySerial module.
The process is simple: write new code, compile with workflow.txt, and run the python script. 


