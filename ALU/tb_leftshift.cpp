#include "Vleftshift.h"
#include "verilated.h"
#include <iostream>
#include<cstdint>
#include <bitset>
#include <cmath>

int main(int argc, char ** argv){
    VerilatedContext* ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);
     Vleftshift* dut = new Vleftshift{ctx};
    int output;

     for(int i = 0; i<256; i++){

        int shift = rand() % 24 + 1;
       
        dut->a = i;
        dut->shamt = shift;
        dut->eval();
        output = dut->y;

        int expected = i* pow(2,shift);

        std::cout << i << " " << shift << " " << output << " " << expected << std::endl;


     }
}
