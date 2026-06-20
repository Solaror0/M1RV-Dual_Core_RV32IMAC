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
    int32_t a,b;
    int V, Z, N, C;
    pass = 0; fail = 0;
    std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<int> dist(-2147483647, 2147483647);
    std::string operation;
    uint32_t ua;
    int mult_count;

    for (int i = 0; i<100000000; i++) {
        choice= rand() % 11 + 0; //choose from operation 1 to 11
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
            a = dist(rng);
            b = dist(rng);
        case 11:
            a = dist(rng);
            b = dist(rng);
        
        default:
            break;
        }
        
        int32_t real_prod;
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
                std::cout << std::bitset<32>(dut->a) <<  " " << (int32_t)dut->b  <<  " " << std::bitset<32>(expected) <<  " " << std::bitset<32>(dut->ALUResult) <<  " " << std::bitset<4>(dut->ALUControl) <<  " " << operation <<  " " <<  std::string(int((uint32_t)expected != dut->ALUResult), 'f')<< std::endl;
              //  std::cout << V << " " << N << " " << C << " " << Z  << " " << std::bitset<32>(dut->s) << " " << std::bitset<1>(dut->SLTChecker) << std::endl;
            }
        } else{
            mult_count++;
            dut->a = a;
            dut->b = b;
            int64_t full_product = (int64_t)(int32_t)dut->a * (int64_t)(int32_t)dut->b;
            int32_t half_product;
            if (choice == 10){
                half_product = (int32_t)full_product ;
            }else{
                half_product = (int32_t)(full_product>>32);
            }

            while(!dut->multiply_done){
                clk = !clk;
                dut->clk = clk;
                dut->eval();

             
                real_prod = (int32_t)dut->ALUResult;
            }
            if(half_product!=real_prod){
                fail++;
                std::cout << i << " " << (int)dut->a << " " << (int)dut->b << " " << half_product << " " << real_prod << " " << (int)dut->multiply_done << "MULT F" << std::endl;
            }else{
                //std::cout << i << " " << (int)dut->a << " " << (int)dut->b << " " << half_product << " " << real_prod << " " << (int)dut->multiply_done << "MULT" << std::endl;
                pass++;
            }

            clk = !clk;
            dut->clk = clk;
            dut->eval();

            clk = !clk;
            dut->clk = clk;
            dut->eval();
       
       

        }

    
    }

    std::cout << pass << " " << fail << " " << mult_count << std::endl;
    dut-> final();
    delete dut;
    delete ctx;
    return 1;

}
