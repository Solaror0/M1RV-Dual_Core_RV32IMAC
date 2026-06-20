#include "Vmultiplier_old.h"
#include "verilated.h"
#include <iostream>
#include<cstdint>
#include <bitset>
#include <string>
#include <cmath>
#include <random>

int main(int argc, char ** argv){
    VerilatedContext* ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);
    Vmultiplier_old* dut = new Vmultiplier_old{ctx};
    int a, b;

    for (int i = 0; i<10; i++){
        a = rand() % 31 + 1;
        b = rand() % 31 + 1;
        dut->a = a;
        dut->b = b;
        dut->eval();
        std::cout << (int)dut->a <<  " " <<(int)dut->b <<  " " << std::bitset<12>(a*b) << " " << std::bitset<12>(dut->output_product) << " " << std::bitset<16>(((int)dut->output_product - a*b)) << std::endl;
        dut->a = 0;
        dut->b = 0;
        dut->eval();
          std::cout << (int)dut->a <<  " " <<(int)dut->b <<  " " << std::bitset<12>(0) << " " << std::bitset<12>(dut->output_product) << " " << std::bitset<16>(((int)dut->output_product - 0)) << std::endl;
    }


    dut-> final();
    delete dut;
    delete ctx;
    return 1;

}
