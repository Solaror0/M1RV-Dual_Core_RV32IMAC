#include "Vdivider.h"
#include "verilated.h"
#include "Vdivider___024root.h" 
#include <iostream>
#include<cstdint>
#include <bitset>
#include <string>
#include <cmath>
#include <random>
//verilator --cc --Wall --exe --build --public divider.sv pd_lut.sv  tb_divider.cpp
int main(int argc, char ** argv){
    VerilatedContext* ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);
    Vdivider* dut = new Vdivider{ctx};
    long int p, d, clk, rst;
    //p = rand() % 31 + 1;
    //d = rand() % 31 + 1;
    p = 1024000000; //also try 1024/2
    d = 1;
    
    dut->p = p;
    dut->d = d;
    dut->rst = 1;
   
    int cycle = 0;
    for (int i = 0; i<64; i++){

        if(!(dut->done)){
        dut->clk = 0;
        dut->eval();
        dut->clk = 1;
        dut->eval();
     int q_val = 0;
int qC_raw = dut->rootp->divider__DOT__qC;
if      (qC_raw == 6) q_val = -2; // 3'b110
else if (qC_raw == 7) q_val = -1; // 3'b111
else if (qC_raw == 0) q_val = 0;  // 3'b000
else if (qC_raw == 1) q_val = 1;  // 3'b001
else if (qC_raw == 2) q_val = 2;  // 3'b010

// 2. Extract and decode P as a signed fixed-point value (3 integer, 3 fractional bits)
int p_bits = (dut->rootp->divider__DOT__pTrunc >> 58) & 0x3F;
int p_signed = (p_bits & 0x20) ? (p_bits - 64) : p_bits;
double p_val = p_signed / 8.0;

// 3. Extract and decode D as an unsigned fraction (5 bits, MSB is 0.5)
int d_bits = (dut->rootp->divider__DOT__dNorm >> 27) & 0x1F;
double d_val = d_bits / 32.0;

// 4. Run the SRT mathematical check
double p_next = 4.0 * (p_val - q_val * d_val);
double srt_bound = (8.0 / 3.0) * d_val;
bool srt_valid = (std::abs(p_next) <= srt_bound + 1e-5);

// 5. Print the gorgeous dashboard
std::cout << "================================================================================\n"
          << " [ CLOCK CYCLE: " << i << " ]   |   Raw P: " << dut->p << "   |   Raw D: " << dut->d << "\n"
          << "================================================================================\n"
          << "--- REMAINDER (P) PATH ---\n"
          << "  pReal:    " << std::string(32, ' ') << std::bitset<32>(dut->p) << " (Lower 32 bits)\n"
          << "  pNorm:    " << std::bitset<64>(dut->rootp->divider__DOT__pNorm) << "\n"
          << "  pS:       " << std::bitset<64>(dut->rootp->divider__DOT__pS) << "\n"
          << "  pC:       " << std::bitset<64>(dut->rootp->divider__DOT__pC) << "\n"
          << "  pTrunc:   " << std::bitset<64>(dut->rootp->divider__DOT__pTrunc) << "\n\n"
          << "--- DIVISOR (D) PATH ---\n"
          << "  dNormExt: " << std::bitset<64>(dut->rootp->divider__DOT__dNormExt) << "\n"
          << "  dC (qD):  " << std::bitset<64>(dut->rootp->divider__DOT__dC) << "\n"
          << "  dNorm:    " << std::string(32, ' ') << std::bitset<32>(dut->rootp->divider__DOT__dNorm) << " (Lower 32 bits)\n\n"
          << "--- CONTROL & LUT STATE ---\n"
          << "  signal:   " << std::bitset<11>(dut->rootp->divider__DOT__signal) << "\n"
          << "  qC:       " << std::bitset<3>(qC_raw) << " (Decoded: " << q_val << ")\n"
          << "  qP:       " << std::bitset<31>(dut->rootp->divider__DOT__Qp) << "\n"
          << "  qM:       " << std::bitset<31>(dut->rootp->divider__DOT__Qm) << "\n"
          << "  R:        " << std::bitset<1>(dut->running) << "   |   Done: " << std::bitset<1>(dut->done) << "\n"
          << "--------------------------------------------------------------------------------\n"
          << "  SRT MATH VALIDATION: " << (srt_valid ? "✅ VALID" : "❌ INVALID CRITICAL OVERFLOW") << "\n"
          << "  Mapped LUT Inputs  ->  P: " << p_val << ", D: " << d_val << "\n"
          << "  Calculated P_next  ->  " << p_next << " (Allowed Max Bound: ±" << srt_bound << ")\n"
          << "================================================================================\n" << std::endl;}
          else{
            break;
          }
        
    }
     std::cout << std::bitset<32>(p) << " " << std::bitset<32>(d) << " " << (int)(p/d) << " " << (int)(dut->q) << std::endl;

    dut-> final();
    delete dut;
    delete ctx;
    return 1;

}
