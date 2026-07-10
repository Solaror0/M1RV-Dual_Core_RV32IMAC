

## Introduction

A 2-Core RV32IMAC CPU project to learn SystemVerilog and the RISC-V ISA. Implemented on a Nexys A7-100t FPGA using Vivado.

The core specs are listed  below:
- 5 Stage Pipeline
- M, A, & C Extension Instructions
- Custom UART Receiver, supports code update using pySerial
- Branch Prediction (BTB)
- Radix-4-SRT Division
- Radix-4 Booth-Wallace Multiplication (Multicycle)

This code is available for anyone to observe and learn from. As a long term project where I improved drastically throughout, it may have some changes over-time in coding style & skill. 

## Diagrams

### Top Diagram
<img width="641" height="266" alt="Top Diagram drawio" src="https://github.com/user-attachments/assets/6a2d3b0e-d215-4187-a775-f36599e7a2fd" />

### Pipeline Diagram
**Omitted Details**: Control Signals, Hazard signals, Many signals are represented by 1 arrow. 
<img width="970" height="427" alt="PipelineDiagram drawio" src="https://github.com/user-attachments/assets/38a666d5-ceec-42fa-aa4b-dbfbfb405b95" />



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

## Brief Implementation Details
Briefly going however how I implemented significant portions of the CPU:

M: Implemented Radix-4 Booth Wallace Tree for Multiplication, and Radix-4-SRT (This was a challenge) for Division. Then involved integrating with the ALU + Pipeline timing/hazards.
C: Modified instruction fetching to detect compressed instructions, accounted for different instruction alignments by pulling both PC & PC+4 instructions & applying combinational logic. After the compressed instruction is received it goes through a decompression unit which expands to a full 32-bit instruction, so the datapath except the PC doesn't care. Had to play around with the PC incrementation.
A: For AMO instructions: designed a decoder that intakes a 32-bit AMO instruction and expands the RMW to base instructions (LW, MISC-ALU, SW). Similar to implementing AMO instructions using LR/SC except in hardware. Gets a little more complicated for MAX/MIN, and then more hectic for LR and SC. Had to mess around a lot with hazards/timing & special cases (e.g RS1==RD). I strongly believe that I could have done a better implementation and suspect it would have been easier if I implemented a memory controller. This implementation ultimately works, but is definitely inefficient and not as elegant as it can be.

BTB: 128 entry cache with a 2 bit saturating counter, indexes using concatenated PC and assigns a valid bit if the cache entry is filled, stores state and rest of the PC. The BTB's "Mispredict" signal considers PCSrcE and takes over its role.

UART Receiver:

