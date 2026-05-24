#include "Vdivider.h"
#include "verilated.h"
#include "Vdivider___024root.h" 
#include <iostream>
#include <cstdint>
#include <bitset>
#include <string>
#include <cmath>
#include <random>
#include <sstream>

// Helper function to convert Verilator's 3-word wide signals (VlWide<3>) into a usable std::bitset<66>
inline std::bitset<64> to_bitset64(const auto& wide_var) {
    return std::bitset<64>(wide_var[0]) |
           (std::bitset<64>(wide_var[1]) << 32) |
           (std::bitset<64>(wide_var[2]) << 64);
}

void printDebug(int i, Vdivider* dut){
     // 5. Print the gorgeous dashboard
            std::cout << "================================================================================\n"
                      << " [ CLOCK CYCLE: " << i << " ]   |   Raw P: " << dut->a << "   |   Raw D: " << dut->d << "\n"
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


// verilator --cc --Wall --exe --build --public divider.sv pd_lut.sv  tb_divider.cpp
int main(int argc, char ** argv){
    VerilatedContext* ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);
    Vdivider* dut = new Vdivider{ctx};
    std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<int> dist(1, 2147483647);
    int p, d;
    int pass, fail;
    std::string prevPass;
    std::stringstream ss;
    //p = rand() % 31 + 1;
    //d = rand() % 31 + 1;

    

    for (int j = 0; j<100000000; j++) {
        p = dist(rng); // also try 1024/2
        d = dist(rng); //note 98743283/32932; 780/90
        
        dut->a = p;
        dut->d = d;
        dut->rst = 1;
        for (int i = 0; i < 64; i++){
            dut->clk = 0;
            dut->eval();
            dut->clk = 1;
            dut->eval();

            if(dut->done){
                
                if((int)(p/d) != (int)(dut->q)){
                  //  std::cout << prevPass << std::endl;
                    std::cout << j << " P: " << p << " D: " << d << " Real: " << (int)(p/d) << " Dut Result: " << int(dut->q) << " Signal(4 bits D, then 6 bits P) " <<  std::bitset<10>(dut->rootp->divider__DOT__signal) <<"\n" <<  std::endl;
                    fail++;
                } else{
                   // std::cout << p << " " << d << " " << (int)(p/d) << " " << int(dut->q) << std::endl;
                    pass++;
                    ss.str(""); 
                    ss.clear();
                    ss  << j << " " << p << " " << d << " " << (int)(p/d) << " " << int(dut->q) << " " << std::bitset<10>(dut->rootp->divider__DOT__signal);
                    prevPass = ss.str();
                }
                break;
            }
        }
    }

    std::cout << pass << " " << fail << std::endl;
    dut->final();
    delete dut;
    delete ctx;
    return 0;
}