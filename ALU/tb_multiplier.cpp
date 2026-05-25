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

    for(int i = 0; i < 2; i++){
        // Set inputs while rst=0, clk=0
        dut->rst = 0;
        dut->clk = 0;
        dut->a = dist(rng);
        dut->b = dist(rng);
        dut->eval();

        // Pulse rst for one full clock cycle
        dut->rst = 0;
        dut->clk = 1; dut->eval();
        dut->clk = 0; dut->eval();
        dut->rst = 1;

        int a = (int)dut->a;
        int b = (int)dut->b;
        int j = 0;
        int timeout = 100;

        while(!dut->done && timeout-- > 0){
            dut->clk = 1; dut->eval();

            int product = (int)dut->output_product;
            // std::cout << i << " " << j << " A: " << a << "  B: " << b
            //           << " REAL: " << product
            //           << " EXPECTED: " << a * b
            //           << " running=" << (int)dut->running
            //           << " done=" << (int)dut->done
            //           << " rst=" << (int)dut->rst
            //           << std::endl;

            dut->clk = 0; dut->eval();
            j++;
        }

        // Sample output_product the cycle done goes high
        // done goes high in state 111 which also latches output_product
        // so read it once more after the final falling edge
        int product = (int)dut->output_product;
        std::cout << i << " " << j << " A: " << a << "  B: " << b
                  << " REAL: " << product
                  << " EXPECTED: " << a * b
                  << " running=" << (int)dut->running
                  << " done=" << (int)dut->done
                  << " rst=" << (int)dut->rst
                  << " <-- FINAL" << std::endl;

        if(timeout <= 0){
            std::cout << "TIMEOUT i=" << i << std::endl;
            fail++;
        } else if(product == a * b){
            pass++;
            std::cout << "PASS i=" << i << std::endl;
        } else {
            fail++;
            std::cout << "FAIL i=" << i << " GOT=" << product << " EXPECTED=" << a*b << std::endl;
        }

        std::cout << "----------" << std::endl;
    }

    std::cout << "\nPASS: " << pass << " FAIL: " << fail << std::endl;

    dut->final();
    delete dut;
    delete ctx;
    return 0;
}