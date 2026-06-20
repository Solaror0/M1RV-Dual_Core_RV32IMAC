#include "Vshift_add.h"
#include "verilated.h"
#include <iostream>
#include<cstdint>
#include <bitset>
#include <string>
#include <cmath>

int main(int argc, char ** argv){
    VerilatedContext* ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);
    Vshift_add* dut = new Vshift_add{ctx};
    dut->clk = 0;
    int start = 1;
    int count;
    int done;
    int running;
    dut->start = start;
    dut->a = 2400;
    dut->b = 2400;


    for (int i = 0; i<150; i++){
        dut->clk = !(dut->clk);
        dut->eval();
        count = dut->count;
        done = dut->done;
        running = dut->running;
        std::cout << count << " " << "" << (dut->a) << " " <<  std::bitset<32>(dut->b_in) << " " << std::bitset<64>(dut->shifted_upper) << " " << std::bitset<64>(dut->shifted_lower) << " " << std::bitset<64>(dut->sum_holder) << " " << std::bitset<64>(dut -> accumulator) << " " << done << " " << running << std::endl;
        std::cout << " " << std::endl;
        if (done){
            dut->start = 0;
        }
    } 

    dut-> final();
    delete dut;
    delete ctx;
    return 1;

}
