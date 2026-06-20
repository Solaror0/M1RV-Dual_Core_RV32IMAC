#include "Vmultiplier.h"
#include "verilated.h"
#include <iostream>
#include <cstdint>
#include <bitset>
#include <string>
#include <cmath>
#include <random>

int main(int argc, char ** argv){
    VerilatedContext* ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);
    Vmultiplier* dut = new Vmultiplier{ctx};
    std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<int> dist(-65536, 65536);
    int pass = 0, fail = 0;
    int expected_prod,real_prod, clk;

    for(int i = 0; i<100000000; i++){
        dut->rst = 1;
        dut->a = dist(rng);
        dut->b = dist(rng);
        dut->clk = 0;
        clk = 0;

        while(!dut->done){
            clk = !clk;
            dut->clk = clk;
            dut->eval();
            expected_prod = (int)(dut->a * dut->b);
            real_prod = (int)dut->output_product;
        }
        if(expected_prod!=real_prod){
            
            fail++;
            std::cout << i << " " << (int)dut->a << " " << (int)dut->b << " " << expected_prod << " " << real_prod << " " << (int)dut->done << std::endl;
        }else{
            pass++;
        }

        clk = !clk;
        dut->clk = clk;
        dut->eval();
       
    }
    std::cout<<pass << " " << fail << std::endl;
    dut->final();
    delete dut;
    delete ctx;
    return 0;
}