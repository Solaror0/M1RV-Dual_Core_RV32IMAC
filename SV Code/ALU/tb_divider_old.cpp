#include "Vdivider.h"
#include "verilated.h"
#include <iostream>
#include<cstdint>
#include <bitset>
#include <string>
#include <cmath>
#include <random>
//verilator --cc --Wall --exe --build --public divider.sv pd_lut.sv  tb_divider.cpp
int main(int argc, char ** argv){
    VerilatedContext* ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);
    Vdivider* dut = new Vdivider{ctx};
    int p, d, clk, rst;
    //p = rand() % 31 + 1;
    //d = rand() % 31 + 1;
    p = 102400000;
    d = 1;
    dut->P = p;
    dut->D = d;
    
    dut->rst = 1;
   
    int cycle = 0;
    for (int i = 0; i<24; i++){
        dut->clk = 0;
        dut->eval();

        //  std::cout  << std::bitset<3>(dut->q_chosen)  << " " <<  std::bitset<32>(dut->D_Chosen) <<  " " <<  std::bitset<1>(dut->csout) <<  " " <<  std::bitset<32>(dut->p_trunc) << " " <<  std::bitset<32>(dut->D_norm) << " " << std::bitset<32>(dut->Qp) << " " <<  std::bitset<32>(dut->Qm) << std::endl;
        //  std::cout <<  std::bitset<64>(dut->Ps_now) << "  " << std::bitset<64>(dut->Pc_now) << "  " << std::bitset<64>(dut->Ps_next) << "  " <<  std::bitset<64>(dut->Pc_next) << "  " << std::endl;
         std::cout << std::bitset<12>(dut->signal) << " " << (int)dut->running << std::endl;
         std::cout << std::endl;
         dut->clk = 1;
        dut->eval();
        cycle = i;

        std::cout  << cycle << " Q " << std::bitset<3>(dut->q_chosen)  << " DChosen: " <<  std::bitset<32>(dut->D_Chosen) <<  " CSOUT: " <<  std::bitset<1>(dut->csout) <<  " P_TRUNC: " <<  std::bitset<8>(dut->p_sum_trunc) << " D_NORM: " << std::bitset<32>(dut->D_norm) << " QP: " <<  (int)dut->Qp << " QM: " << (int)dut->Qm << std::endl;
        std::cout <<  std::bitset<64>(dut->Ps_now) << " PC_NOW:   " << std::bitset<64>(dut->Pc_now) << "  PS_NEXT: " << std::bitset<64>(dut->Ps_next) << " PC_NEXT:  " <<  std::bitset<64>(dut->Pc_next) << "  " << std::endl;        
         std::cout << std::endl;
        if(dut->done) {
            break;
        }
    }

    int q = dut->q;
    int rem = dut->remainder;


    std::cout << "lzD"  << " " << (int)(dut->lz_count) << " " << 
                 "lzP"  << " " << (int)(dut->lz_p) << " " << 
                 "\ndnorm" << " " << std::bitset<32>(dut->D_norm) << " " << 
                 "\npshifted" << " " << std::bitset<64>(dut->P_shifted) << " " << 
                 "\npnorm" << " " << std::bitset<64>(dut->P_norm) << " " <<
                 "\nptrunc" << " " << std::bitset<32>(dut->p_trunc) << " " <<
                 std::endl;


    std::cout << "CYCLE:"  << " " << cycle << " " << 
                 "\nPinp:" << " " << std::bitset<32>(p) << " " <<
                "\nDinp:" << " " << std::bitset<32>(d)  << " " << 
                "\nP:" << " " << (int)dut->P << " " << 
                "\nD:" << " " << (int) dut->D << " " << 
                "\nACC:" << " " << (int)(p/d) << " " << 
                "\nQ:"  << " " << q << " " << 
                "\nREM" << " " << std::bitset<64>(rem) << " " <<
                 (int)dut->running << " " << (int)dut->done << std::endl;


    dut-> final();
    delete dut;
    delete ctx;
    return 1;

}
