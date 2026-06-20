#include "VALU.h"
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
    VALU* dut = new VALU{ctx};


    int choice, pass, fail,expected,clk;
    uint32_t a,b;
    int V, Z, N, C;
    pass = 0; fail = 0;
    std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<int> dist(-2147483647, 2147483647);
    std::string operation;
    uint32_t ua;
    uint32_t real_prod;
    uint32_t chosen_prod;

    operation = "MULTHSU";
    if(operation == "MULTHU"){
        dut->ALUControl = 14;
    } else if (operation == "MULTHSU"){
        dut -> ALUControl = 15;
    }

    for (int i = 0; i<10000; i++) {
            a = dist(rng);
            b = dist(rng);
            dut->a = a;
            dut->b = b;
            uint64_t multU = (uint64_t)a * (uint64_t)b;
            uint64_t multSU = (int64_t)(int32_t)a * (int64_t)(uint32_t)b;

            while(!dut->multiply_done){
                clk = !clk;
                dut->clk = clk;
                dut->eval();
                real_prod = dut->ALUResult;
            }

            if(operation == "MULTHU"){
                chosen_prod = (uint32_t)(multU >>32);
            } else if (operation == "MULTHSU"){
                chosen_prod = (uint32_t)(multSU >>32);
            }
            
            if(real_prod != chosen_prod ){
                fail++;
                std::cout << i << " " << (int)dut->a << " " << (int)dut->b << " " << chosen_prod << " " << real_prod << " " << (int)dut->multiply_done << operation << std::endl;
            }else{
                pass++;
            }

            clk = !clk;
            dut->clk = clk;
            dut->eval();

            clk = !clk;
            dut->clk = clk;
            dut->eval();
       
       

        }

    

    std::cout << pass << " " << fail << std::endl;
    dut-> final();
    delete dut;
    delete ctx;
    return 1;

}
