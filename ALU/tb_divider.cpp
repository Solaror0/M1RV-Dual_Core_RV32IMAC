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
inline std::bitset<64> to_bitset64(const auto& wide_var) {
    return std::bitset<64>(wide_var[0]) |
           (std::bitset<64>(wide_var[1]) << 32) |
           (std::bitset<64>(wide_var[2]) << 64);
}

// verilator --cc --Wall --exe --build --public divider.sv pd_lut.sv  tb_divider.cpp
int main(int argc, char ** argv){
    VerilatedContext* ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);
    Vdivider* dut = new Vdivider{ctx};
    long int p, d;
    
    //p = rand() % 31 + 1;
    //d = rand() % 31 + 1;
    // p = 33166; // also try 1024/2
    // d = 24773; //note 98743283/32932; 780/90
    p = -1140600350; 
    d = 2044979940;

    dut->a = p;
    dut->d = d;
    dut->unsign = 1;
    dut->rst = 1;
   
    for (int i = 0; i < 32; i++){

        if(!(dut->done)){
            dut->clk = 0;
            dut->eval();
            dut->clk = 1;
            dut->eval();
            

            // 5. Print the gorgeous dashboard
            std::cout << "================================================================================\n"
                      << " [ CLOCK CYCLE: " << i << " ]   |   Raw P: " << dut->a << "   |   Raw D: " << dut->d << " clz: " <<(int)(dut->rootp->divider__DOT__clz) <<  "\n"
                      << "================================================================================\n"
                      << "--- REMAINDER (P) PATH ---\n"
                      << "  A:       " << std::string(32, ' ') << std::bitset<32>(dut->a) << " (Lower 32 bits)\n"
                      << "  regPA:   " << to_bitset64(dut->rootp->divider__DOT__regPA) << "\n"
                      << "  p:       " << std::bitset<33>(dut->rootp->divider__DOT__p) << "\n"
                      << "  pNext:   " << std::bitset<33>(dut->rootp->divider__DOT__pNext) << "\n"
                      << "--- DIVISOR (D) PATH ---\n"
                      << "  dNorm:    " << std::bitset<33>(dut->rootp->divider__DOT__dNorm) << "\n"
                      << "  dC (qD):  " << std::bitset<33>(dut->rootp->divider__DOT__dC) << "\n"
                      << "--- CONTROL & LUT STATE ---\n"
                      << "  qC:       " << std::bitset<3>(dut->rootp->divider__DOT__qC) << "\n"
                      << "  qP:       " << std::bitset<32>(dut->rootp->divider__DOT__Qp) << "\n"
                      << "  qM:       " << std::bitset<32>(dut->rootp->divider__DOT__Qm) << "\n"
                      << "  rem:      " << std::bitset<33>(dut->rootp->divider__DOT__rem_temp) << "\n"
                      << "  R:        " << std::bitset<1>(dut->running) << "   |   Done: " << std::bitset<1>(dut->done) << "\n"
                      << "--------------------------------------------------------------------------------\n"
                      << "================================================================================\n" << std::endl;
        }
        else {
            break;
        }
    }
    
    std::cout << std::bitset<32>(p) << " " << std::bitset<32>(d) << " " << int(p/d) << " " << uint32_t(p)%d << " " << int(dut->q) << " " << uint32_t(dut->rem) <<std::endl;

    dut->final();
    delete dut;
    delete ctx;
    return 0;
}