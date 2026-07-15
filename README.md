## Introduction

<p align="center">
  <b>A 2-Core RV32IMAC CPU project to learn SystemVerilog and the RISC-V ISA. Implemented on a Nexys A7-100t FPGA using Vivado.</b>
</p>

---

### Key Features

| 🏛️ Architecture | 🧮 Arithmetic | 💾 Memory |
| :--- | :--- | :--- |
| <ul><li>M, A, & C Extension Instructions</li><li>Harvard Architecture</li><li>5 Stage Pipeline (F, D, E, M, W)<ul><li>RAW Hazard Detection & Forwarding</li><li>Branch Prediction with 128-Entry BTB</li></ul></li></ul> | <ul><li>Radix-4-SRT Division</li><li>Radix-4-Booth Wallace Multiplication (Multicycle)</li><li>CLA Adder</li></ul> | <ul><li>Memory Mapped IO (MMIO) Supporting LEDs & Switches</li><li>Core to Core communication through mailbox registers</li><li>Harvard Architecture: 4 KB Instruction Memory, 4 KB Data Memory</li><li>UART Receiver, supports code & data update using pySerial</li></ul> |

> This code is available for anyone to observe and learn from. As a long term project where I improved drastically throughout, it may have some changes over-time in coding style & skill. 

---
## Usage of AI

AI was at times supremely useful throughout this project, and at other times not very useful. I  avoided using it for generating a module or outright creating things for me, as that would defeat the purpose of a learning project. I tried to use it where it would save me time but not impact my learning. Here are the following ways I used AI:
* Information about specification data, e.g finding an opcode - later verified 
* Learning about the different extensions and what make them up
* Generating simple C code & Python code - however did 2 core usage code by hand as I would of course be more familiar with my memory organization
* Asking if something is possible on SystemVerilog  - e.g how/if for loops work, typedef details, etc.

There were some things that AI was utterly useless at. For example, Radix-4-SRT division confounded both me and Gemini for the longest time. Oftentimes it would give me incorrect information from conflicting sources, and I quickly realized it was making stuff up. Radix-4-SRT was my main moment of weakness where out of desperation I asked Gemini to generate some code (possibly the combinational part + the LUT generation script), but to no avail. In the end that was for the better since it forced me to restart and actually figure it out. 

In the cases where I suspected that I was being given wrong information or I needed to understand more beyond what AI knew, I simply looked at textbooks, papers, and the RISCV ISA.

---

## Diagrams 

### Top Diagram (1 Core Diagram)
<p align="center">
  <img width="641" height="266" alt="Top Diagram drawio" src="https://github.com/user-attachments/assets/6a2d3b0e-d215-4187-a775-f36599e7a2fd" />
</p>

### Dual Core Interaction
Note here that each core has its own instruction memory. (explained further in future steps)
<img width="471" height="361" alt="Dual Core Interaction Diagram drawio" src="https://github.com/user-attachments/assets/9e088364-a68a-4586-a3e6-5e9425f6d434" />
^Kind of looks like a person! 

### Memory Organization
<img width="324" height="271" alt="Memory Organization" src="https://github.com/user-attachments/assets/927578f0-1687-49eb-a798-7624bc336ac1" />



### Pipeline Diagram
**Omitted Details**: Control Signals, Hazard signals, Many signals are represented by 1 arrow. 
<p align="center">
  <img width="970" height="427" alt="PipelineDiagram drawio" src="https://github.com/user-attachments/assets/38a666d5-ceec-42fa-aa4b-dbfbfb405b95" />
</p>

---

## The Numbers

| Hardware Metric | Specification / Status |
| :--- | :--- |
| **LUTS** | 8500 x (2 Cores) + 2000 (Memory related modules) |
| **LUTRAM** | 212 |
| **BRAM** | 5 tiles |
| **Frequency** | Tested at 40 MHz.|
| **Instruction Memory** | 4KB |
| **Data Memory** | 4KB |
| **BTB** | 128-Entry, 212 LUTRAM |

Currently working on cleaning up timing to get to 100mHz

---

## Running a Program

The code is compiled using `riscv64-unknown-elf-gcc` & `elf2hex`. 

Upon writing a program, simply run the commands listed in `workflow.txt` to compile. The compilation will result in separate instruction and data files, i.e one file will contain the instructions for the Instruction ROM, and the other contains the data to be given to the Data Memory.

The commands return the following:
* Bin, elf, and hex files containing the program and data
* A disassembly file

Upon synthesis, the memory modules will read from the hex data using `readmemh`. However once the FPGA is programmed, any code can be overwritten using the `pySerial` module. 

The process is simple: write new code, compile with `workflow.txt`, and run the python script. 

---

## 2 Core Usage

Of the two cores, 1 is treated as the Master core. The other core goes to a specific PC address which should be set to immediately loop as a trap. Each core can speak to each other through a memory-mapped mailbox and doorbell system. Both cores can talk to the other, and the cores can also write to their own mailbox.

The doorbell (3 bits) is activated by setting the LSB to 1. Bits 2:1 are used to tell the receiving core & program what kind of message it is receiving & what it should do. 

| Bits | Message Type & Mailbox Format |
| :---: | :--- |
| **00** | JALR Instruction, Mailbox formatted as [12-bit immediate, rs1, rd]. |
| **01** | JAL Instruction, Mailbox formatted as [20-bit immediate, rd]. |
| **10** | The mailbox contains data. NOP instruction to pipeline. |
| **11** | The mailbox contains an address. NOP instruction to pipeline. |

This configuration allows the programmer some flexibility in how they use the cores to communicate with each other. Upon an interrupt the core simply stalls the pipeline & inserts the pipeline. After the interrupt the doorbell is immediately flipped however the data in the mailbox remains untouched. 

Technically speaking, since the 10 and 11 configurations don't trigger any hardcoded events, the programmer can also just use them to indicate whatever they want.

Below is an example of a very simple C program where core 0 tells core 1 to complete a function.
```C
#include <stdint.h>
int main(void) {
  
    volatile uint32_t *ptr = (volatile uint32_t *)1058;
    volatile uint32_t *ptr2 = (volatile uint32_t *)1059;
    

    //JALR, J unconditionally to address 24 (hex) - location of core2Mult function
    *ptr = 1152;
    *ptr2 = 1;


}

//1056 = mailbox 0, 1057 = doorbell 0;
//1058 = mailbox 1, 1059 = doorbell 1;

volatile uint32_t a = 4;
volatile uint32_t b = 8;

int core2Mult() {

  int core2return = a*b;
  volatile uint32_t *ptr = (volatile uint32_t *)1056;
  volatile uint32_t *ptr2 = (volatile uint32_t *)1057;

  *ptr = core2return;
  *ptr2 = 5;  //"data deposited"

}

```

---

## Brief Implementation Details

Briefly going however how I implemented significant portions of the CPU:

* **M:** Implemented Radix-4 Booth Wallace Tree for Multiplication, and Radix-4-SRT (This was a challenge) for Division. Then involved integrating with the ALU + Pipeline timing/hazards.
* **C:** Modified instruction fetching to detect compressed instructions, accounted for different instruction alignments by pulling both PC & PC+4 instructions & applying combinational logic. After the compressed instruction is received it goes through a decompression unit which expands to a full 32-bit instruction, so the datapath except the PC doesn't care. Had to play around with the PC incrementation.
* **A:** For AMO instructions: designed a decoder that intakes a 32-bit AMO instruction and expands the RMW to base instructions (LW, MISC-ALU, SW) + pauses the 2 cores. Similar to implementing AMO instructions in software using LR/SC. Gets a little more complicated for MAX/MIN, and then more hectic for LR and SC. Had to mess around a lot with hazards/timing & special cases (e.g RS1==RD). I strongly believe that I could have done a better implementation and suspect it would have been easier if I implemented a memory controller. This implementation ultimately works, but is definitely inefficient and not as elegant as it can be.
* **BTB:** 128 entry cache with a 2 bit saturating counter, indexes using concatenated PC and assigns a valid bit if the cache entry is filled, stores state and rest of the PC. The BTB's "Mispredict" signal considers PCSrcE and takes over its role.

---

## Future Plans & Improvements

* Improving the A-Extension Implementation
* Implementing instruction fetch queue or some way to make the two instruction memories into 1. Right now they are the same exact memories, but duplicated. The reason being that 1 core requires 2 ports - due to the way I implemented the C extension, it needs to see the current instruction and the PC+4 instruction. Therefore 1 imem module cannot support both cores and still be interpreted as TDP BRAM.


* Upgrade the pipeline or improve combinational logic to allow faster clock speeds
* Implementing zicsr Extension/Timer & Interrupt Support
* Further testing of BTB
* Stress testing of longer programs with sensitive timing
