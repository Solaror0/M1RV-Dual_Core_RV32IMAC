#include "Vcarry_lookahead_block.h"
#include "verilated.h"
#include <iostream>
#include<cstdint>
#include <bitset>

int main(int argc, char ** argv){
    VerilatedContext* ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);
    Vcarry_lookahead_block* dut = new Vcarry_lookahead_block{ctx};
    
    int pass = 0, fail = 0;

    // For loop C = 1, C= 0;
    // A goes through 0000 to 1111 (0 to 15)
    // B goes through 0000 to 1111 (0 to 15)

    for(int c=0; c<2; c++){

        for(int a=0; a<16; a++){

            for (int b=0; b<16; b++){

                dut->a = a;
                dut->b = b;
                dut->cin = c;
                dut->eval();

                int sum_expected = a+b+c;
                int output = (dut->cout << 4) | dut->s;

                std::cout << a << " " << b << " " << c << " " << sum_expected << " " << output << std::endl;

                if (output == sum_expected){
                    pass++;
                }
                else{
                    fail++;
                }

            }
        }
    }

    std::cout << pass << " " << fail << std::endl;
    
    dut->final();
    delete dut;
    delete ctx;
    return 1;

    // dut->a = 0B1111;
    // dut->b = 0B1111;
    // dut->cin = 0B0000;
    // dut->eval();

    // int expected_sum = dut->a + dut->b;
    // int expected_cout = (expected_sum >> 4) & 1;
    

    // std::cout << "Testing: a=5, b=3, cin=0. Expected s=" << expected_sum << ", cout=" << expected_cout
    //         << ". Got s=" << (int)dut->s << ", cout=" << (int)dut->cout << std::endl;


    



}

