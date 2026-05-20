#include "Vpd_lut.h"
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
    Vpd_lut* dut = new Vpd_lut{ctx};
    int p;
    int d;
    p = 0b010000;
    d = 0b11010;
    dut->p = p;
    dut->d = d;
    dut->eval();
    std::cout << std::bitset<3>(dut->q) << std::endl;



    dut-> final();
    delete dut;
    delete ctx;
    return 1;

}
