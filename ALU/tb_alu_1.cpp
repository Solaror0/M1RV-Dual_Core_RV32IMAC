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


    int choice, pass, fail,expected;
    int32_t a,b;
    int V, Z, N, C;
    pass = 0; fail = 0;
    std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<int> dist(-2147483647, 2147483647);
    std::string operation;
    uint32_t ua;

    for (int i = 0; i<1000000; i++) {
        choice= rand() % 9 + 0; //choose from operation 1 to 11
        dut->ALUControl = choice;

        switch (choice)
        {
        case 0:
            a = dist(rng);
            b = dist(rng);
            expected = a+b;
            operation = "ADD";

            break;
        case 1:
            a = dist(rng);
            b = dist(rng);  
            expected = a-b;   
            operation = "SUB";  
            break;
        case 2:
            a = dist(rng);
            b = dist(rng);
            expected = a&b;
            operation = "AND";
            break;
        case 3:
            a = dist(rng);
            b = dist(rng);
            expected = a|b;
            operation = "OR";
            break;
        case 4:
            a = dist(rng);
            b = dist(rng);
            expected = a^b;
            operation = "XOR";
            break;
        case 5:
            a = dist(rng);
            b = dist(rng);
            expected = (a<b);
            operation = "SLT";
            break;
        case 6:
            a = dist(rng);
            b = dist(rng);
            expected = ((uint32_t)(a)<(uint32_t)(b));
            operation = "SLTU";
            break;
        case 7:
            a = dist(rng);
            b = rand() % 31 + 0;
            expected = a << b;
            operation = "SLL";
            break;
        case 8:
            ua = uint32_t(dist(rng));
            a = ua;
            b = rand() % 31 + 0;
            expected = ua>>b;
            operation = "SRL";
            break;
        case 9:
            a = dist(rng);
            b = rand() %31 + 0;
            expected = a>>b;
            operation = "SRA";
            break;
        case 10:
            break;
        case 11:
            break;    
        
        default:
            break;
        }

        if((choice != 11) & (choice!=10)){
            dut->a = a;
            dut->b = b; 
            dut->eval();
            Z = dut->ZeroFlag;
            N = dut->NegativeFlag;
            V = dut->OverflowFlag;
            C = dut->CarryOutFlag;
           
            if ((uint32_t)expected == (uint32_t)dut->ALUResult){
                pass++;
            }else{
                fail++;
                std::cout << (int32_t)dut->a <<  " " << (int32_t)dut->b  <<  " " << std::bitset<32>(expected) <<  " " << std::bitset<32>(dut->ALUResult) <<  " " << std::bitset<4>(dut->ALUControl) <<  " " << operation <<  " " <<  std::string(int((uint32_t)expected != dut->ALUResult), 'f')<< std::endl;
              //  std::cout << V << " " << N << " " << C << " " << Z  << " " << std::bitset<32>(dut->s) << " " << std::bitset<1>(dut->SLTChecker) << std::endl;
            }
        }

    
    }

    std::cout << pass << " " << fail << std::endl;
    dut-> final();
    delete dut;
    delete ctx;
    return 1;

}
