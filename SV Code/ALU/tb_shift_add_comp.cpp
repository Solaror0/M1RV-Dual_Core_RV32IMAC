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
    int count, done, running;
    int a, b;
    int a_in, b_in;

    for (int j = 0; j<100; j++){
        dut->start = 1;
        int a = rand() % 65535 + 1;
        int b = rand() % 65535 + 1;

        for (int i = 0; i<150; i++){  
            dut->clk = !(dut ->clk);
            dut->eval();
            count = dut->count;
            done = dut->done;
            running = dut->running;
            dut->a = a;
            dut->b = b;

            if (done){
                std::cout << j  << " " << i << " " << " " <<  count << " " <<  dut->a << " " <<  dut->b  << " " << a*b << " " << std::bitset<64>(dut -> accumulator) << " " << (dut->accumulator) << std::endl;
                std::cout << " " << std::endl;
                dut->start = 0;  
                dut->eval();
                break; 
            } 
        }
    }
    

    dut -> final();
    delete dut;
    delete ctx;
    return 1;

}
