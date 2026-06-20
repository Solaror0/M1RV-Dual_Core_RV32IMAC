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
    int32_t a,b, result;
    pass = 0; fail = 0;
    std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<int> dist(-2147483647, 2147483647);
    std::uniform_int_distribution<int> distD(0, 2147483647);
    std::string operation;


    dut->ALUControl = 19; //16 to 19

    for (int j = 0; j < 1000000; j++){
        switch((int)(dut->ALUControl)){
            case 16: 
            operation = "DIV";
                a = dist(rng);
                b = distD(rng);
    
                if(b!=0){
                    expected = a/b;
                }
                break;

            case 17:
            operation = "DIVU";
                a = uint32_t(dist(rng));
                b = distD(rng);
    
                if(b!=0){
                    expected = ((uint32_t)(a))/b;
                }
                break; 
            case 18:
            operation = "REM";
                a = dist(rng);
                b = distD(rng);
    
                if(b!=0){
                    expected = a%b;
                }
                break;
            case 19:
            operation = "REMU";
                a = uint32_t(dist(rng));
                b = distD(rng);
                if(b!=0){
                    expected = ((uint32_t)(a)%b);
                }
            default: 
                break;
        }

        for (int i = 0; i<24; i++) {
                dut->a = a;
                dut->b = b;

                if(b==0){
                    if(dut->divByZero){
                        std::cout<<"Divide by 0 Caught " << a << " " << b << std::endl;
                    } else{
                        std::cout<<"Divide by 0 Not Caught " << a << " " << b << std::endl;
                    }
                } else{

                    dut->clk = 0;
                    dut->eval();
                    dut->clk = 1;
                    dut->eval();
                    result = dut->ALUResult;
                    if(operation == "DIV" | operation == "REM"){ result = result*(a/abs(a));  }
                    if(dut->divide_done){            
                        if(expected!=result){
                            fail++;
                           
                            std::cout << operation << "error " << a << " " << b <<" " << (expected)<< " " << uint32_t(dut->ALUResult)<< " " << std::endl;
                        } else{
                            pass++;
                        }

                        break;
                    } 
                }
            }
    }

    

    std::cout << pass << "done" << fail << std::endl;
    dut-> final();
    delete dut;
    delete ctx;
    return 1;

}
