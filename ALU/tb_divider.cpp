#include "Vdivider.h"
#include "verilated.h"
#include "Vdivider___024root.h" 
#include <iostream>
#include <cstdint>
#include <bitset>
#include <string>
#include <cmath>
#include <random>

// Helper function to convert Verilator's 3-word wide signals (VlWide<3>) into a usable std::bitset<66>
inline std::bitset<66> to_bitset66(const auto& wide_var) {
    return std::bitset<66>(wide_var[0]) |
           (std::bitset<66>(wide_var[1]) << 32) |
           (std::bitset<66>(wide_var[2]) << 64);
}

// verilator --cc --Wall --exe --build --public divider.sv pd_lut.sv  tb_divider.cpp
int main(int argc, char ** argv){
    VerilatedContext* ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);
    Vdivider* dut = new Vdivider{ctx};
    long int p, d;
    
    //p = rand() % 31 + 1;
    //d = rand() % 31 + 1;
    p = 1024; // also try 1024/2
    d = 1;
    
    dut->p = p;
    dut->d = d;
    dut->rst = 1;
   
    for (int i = 0; i < 64; i++){

        if(!(dut->done)){
            dut->clk = 0;
            dut->eval();
            dut->clk = 1;
            dut->eval();
            
            // Re-enabled the decode variables so the dashboard can reference them
            int q_val = 0;
            int qC_raw = dut->rootp->divider__DOT__qC;
            if      (qC_raw == 6) q_val = -2; // 3'b110
            else if (qC_raw == 7) q_val = -1; // 3'b111
            else if (qC_raw == 0) q_val = 0;  // 3'b000
            else if (qC_raw == 1) q_val = 1;  // 3'b001
            else if (qC_raw == 2) q_val = 2;  // 3'b010

            // 5. Print the gorgeous dashboard
            std::cout << "================================================================================\n"
                      << " [ CLOCK CYCLE: " << i << " ]   |   Raw P: " << dut->p << "   |   Raw D: " << dut->d << "\n"
                      << "================================================================================\n"
                      << "--- REMAINDER (P) PATH ---\n"
                      << "  pReal:    " << std::string(32, ' ') << std::bitset<32>(dut->p) << " (Lower 32 bits)\n"
                      << "  pNorm:    " << to_bitset66(dut->rootp->divider__DOT__pNorm) << "\n"
                      << "  pS:       " << to_bitset66(dut->rootp->divider__DOT__pS) << "\n"
                      << "  pC:       " << to_bitset66(dut->rootp->divider__DOT__pC) << "\n"
                      << "  pTrunc:   " << to_bitset66(dut->rootp->divider__DOT__pTrunc) << "\n\n"
                      << "--- DIVISOR (D) PATH ---\n"
                      << "  dNormExt: " << to_bitset66(dut->rootp->divider__DOT__dNormExt) << "\n"
                      << "  dC (qD):  " << to_bitset66(dut->rootp->divider__DOT__dC) << "\n"
                      << "  dNorm:    " << std::string(32, ' ') << std::bitset<32>(dut->rootp->divider__DOT__dNorm) << " (Lower 32 bits)\n\n"
                      << "--- CONTROL & LUT STATE ---\n"
                      << "  signal:   " << std::bitset<11>(dut->rootp->divider__DOT__signal) << "\n"
                      << "  qC:       " << std::bitset<3>(qC_raw) << " (Decoded: " << q_val << ")\n"
                      << "  qP:       " << std::bitset<31>(dut->rootp->divider__DOT__Qp) << "\n"
                      << "  qM:       " << std::bitset<31>(dut->rootp->divider__DOT__Qm) << "\n"
                      << "  R:        " << std::bitset<1>(dut->running) << "   |   Done: " << std::bitset<1>(dut->done) << "\n"
                      << "--------------------------------------------------------------------------------\n"
                      << "Psnext ->  " << to_bitset66(dut->rootp->divider__DOT__pNS) << " "
                      << "\nPcNext ->  " << to_bitset66(dut->rootp->divider__DOT__pNC) << "\n"
                      << "\nPNow ->    " << to_bitset66(dut->rootp->divider__DOT__pNow) << "\n"
                      << "\nPNext ->   " << to_bitset66(dut->rootp->divider__DOT__pNext) << "\n"
                      << "================================================================================\n" << std::endl;
        }
        else {
            break;
        }
    }
    
    std::cout << std::bitset<32>(p) << " " << std::bitset<32>(d) << " " << std::bitset<32>(p/d) << " " << std::bitset<32>(dut->q) << std::endl;

    dut->final();
    delete dut;
    delete ctx;
    return 0;
}