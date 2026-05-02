// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALU.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"
class VALU_carry_lookahead_adder;


class VALU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VALU___024root final : public VerilatedModule {
  public:
    // CELLS
    VALU_carry_lookahead_adder* __PVT__ALU__DOT__adder;
    VALU_carry_lookahead_adder* __PVT__ALU__DOT__multiplier__DOT__fast_adder_lower;
    VALU_carry_lookahead_adder* __PVT__ALU__DOT__multiplier__DOT__fast_adder_upper;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(ALUControl,3,0);
        VL_IN8(cin,0,0);
        VL_OUT8(ZeroFlag,0,0);
        VL_OUT8(NegativeFlag,0,0);
        VL_OUT8(OverflowFlag,0,0);
        VL_OUT8(CarryOutFlag,0,0);
        VL_OUT8(multiply_done,0,0);
        CData/*3:0*/ ALU__DOT__ALUControl;
        CData/*0:0*/ ALU__DOT__clk;
        CData/*0:0*/ ALU__DOT__cin;
        CData/*0:0*/ ALU__DOT__ZeroFlag;
        CData/*0:0*/ ALU__DOT__NegativeFlag;
        CData/*0:0*/ ALU__DOT__OverflowFlag;
        CData/*0:0*/ ALU__DOT__CarryOutFlag;
        CData/*0:0*/ ALU__DOT__multiply_done;
        CData/*0:0*/ ALU__DOT__multiply_rst;
        CData/*0:0*/ ALU__DOT__multiply_running;
        CData/*0:0*/ ALU__DOT__cout;
        CData/*4:0*/ ALU__DOT__leftshift__DOT__shamt;
        CData/*4:0*/ ALU__DOT__rightshiftlogic__DOT__shamt;
        CData/*4:0*/ ALU__DOT__rightshiftarithmetic__DOT__shamt;
        CData/*0:0*/ ALU__DOT__multiplier__DOT__rst;
        CData/*0:0*/ ALU__DOT__multiplier__DOT__clk;
        CData/*0:0*/ ALU__DOT__multiplier__DOT__done;
        CData/*0:0*/ ALU__DOT__multiplier__DOT__running;
        CData/*2:0*/ ALU__DOT__multiplier__DOT__state;
        CData/*0:0*/ ALU__DOT__multiplier__DOT__cout;
        CData/*0:0*/ ALU__DOT__multiplier__DOT__cout_upper;
        CData/*2:0*/ ALU__DOT__multiplier__DOT__booth0__DOT__triplet;
        CData/*4:0*/ ALU__DOT__multiplier__DOT__booth0__DOT__shamt;
        CData/*2:0*/ ALU__DOT__multiplier__DOT__booth1__DOT__triplet;
        CData/*4:0*/ ALU__DOT__multiplier__DOT__booth1__DOT__shamt;
        CData/*2:0*/ ALU__DOT__multiplier__DOT__booth2__DOT__triplet;
        CData/*4:0*/ ALU__DOT__multiplier__DOT__booth2__DOT__shamt;
        CData/*2:0*/ ALU__DOT__multiplier__DOT__booth3__DOT__triplet;
        CData/*4:0*/ ALU__DOT__multiplier__DOT__booth3__DOT__shamt;
        CData/*2:0*/ ALU__DOT__multiplier__DOT__booth4__DOT__triplet;
        CData/*4:0*/ ALU__DOT__multiplier__DOT__booth4__DOT__shamt;
        CData/*2:0*/ ALU__DOT__multiplier__DOT__booth5__DOT__triplet;
        CData/*4:0*/ ALU__DOT__multiplier__DOT__booth5__DOT__shamt;
        CData/*2:0*/ ALU__DOT__multiplier__DOT__booth6__DOT__triplet;
        CData/*4:0*/ ALU__DOT__multiplier__DOT__booth6__DOT__shamt;
        CData/*2:0*/ ALU__DOT__multiplier__DOT__booth7__DOT__triplet;
        CData/*4:0*/ ALU__DOT__multiplier__DOT__booth7__DOT__shamt;
        CData/*2:0*/ ALU__DOT__multiplier__DOT__booth8__DOT__triplet;
        CData/*4:0*/ ALU__DOT__multiplier__DOT__booth8__DOT__shamt;
        CData/*2:0*/ ALU__DOT__multiplier__DOT__booth9__DOT__triplet;
        CData/*4:0*/ ALU__DOT__multiplier__DOT__booth9__DOT__shamt;
        CData/*2:0*/ ALU__DOT__multiplier__DOT__booth10__DOT__triplet;
        CData/*4:0*/ ALU__DOT__multiplier__DOT__booth10__DOT__shamt;
        CData/*2:0*/ ALU__DOT__multiplier__DOT__booth11__DOT__triplet;
        CData/*4:0*/ ALU__DOT__multiplier__DOT__booth11__DOT__shamt;
        CData/*2:0*/ ALU__DOT__multiplier__DOT__booth12__DOT__triplet;
        CData/*4:0*/ ALU__DOT__multiplier__DOT__booth12__DOT__shamt;
        CData/*2:0*/ ALU__DOT__multiplier__DOT__booth13__DOT__triplet;
        CData/*4:0*/ ALU__DOT__multiplier__DOT__booth13__DOT__shamt;
        CData/*2:0*/ ALU__DOT__multiplier__DOT__booth14__DOT__triplet;
        CData/*4:0*/ ALU__DOT__multiplier__DOT__booth14__DOT__shamt;
        CData/*2:0*/ ALU__DOT__multiplier__DOT__booth15__DOT__triplet;
        CData/*4:0*/ ALU__DOT__multiplier__DOT__booth15__DOT__shamt;
        CData/*0:0*/ __Vdly__multiply_done;
        CData/*2:0*/ __Vdly__ALU__DOT__multiplier__DOT__state;
        CData/*0:0*/ __VstlFirstIteration;
    };
    struct {
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        VL_IN(a,31,0);
        VL_IN(b,31,0);
        VL_OUT(ALUResult,31,0);
        IData/*31:0*/ ALU__DOT__a;
        IData/*31:0*/ ALU__DOT__b;
        IData/*31:0*/ ALU__DOT__ALUResult;
        IData/*31:0*/ ALU__DOT__left_shifted;
        IData/*31:0*/ ALU__DOT__s;
        IData/*31:0*/ ALU__DOT__right_shifted_logic;
        IData/*31:0*/ ALU__DOT__right_shifted_arithmetic;
        IData/*31:0*/ ALU__DOT__leftshift__DOT__a;
        IData/*31:0*/ ALU__DOT__leftshift__DOT__y;
        IData/*31:0*/ ALU__DOT__rightshiftlogic__DOT__a;
        IData/*31:0*/ ALU__DOT__rightshiftlogic__DOT__y;
        IData/*31:0*/ ALU__DOT__rightshiftarithmetic__DOT__a;
        IData/*31:0*/ ALU__DOT__rightshiftarithmetic__DOT__y;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__a;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__b;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__unnamedblk2__DOT__j;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__unnamedblk3__DOT__k;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__unnamedblk4__DOT__h;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__unnamedblk5__DOT__g;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__unnamedblk6__DOT__f;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__booth0__DOT__a;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__booth1__DOT__a;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__booth2__DOT__a;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__booth3__DOT__a;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__booth4__DOT__a;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__booth5__DOT__a;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__booth6__DOT__a;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__booth7__DOT__a;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__booth8__DOT__a;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__booth9__DOT__a;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__booth10__DOT__a;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__booth11__DOT__a;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__booth12__DOT__a;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__booth13__DOT__a;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__booth14__DOT__a;
        IData/*31:0*/ ALU__DOT__multiplier__DOT__booth15__DOT__a;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ALU__DOT__multiplied_product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__output_product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__c0;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__c1;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__c2;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__c3;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__c4;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__c5;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__c6;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__c7;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__c8;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__c9;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__c10;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__c11;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__c12;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__c13;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__s0;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__s1;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__s2;
    };
    struct {
        QData/*63:0*/ ALU__DOT__multiplier__DOT__s3;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__s4;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__s5;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__s6;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__s7;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__s8;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__s9;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__s10;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__s11;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__s12;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__s13;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__cs0;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__cs1;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__cs2;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__cs3;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__cs4;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__cs5;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__cs6;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__cs7;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__cs8;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__cs9;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__cs10;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__cs11;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__cs12;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__cs13;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth0__DOT__partial_product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth0__DOT__product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth0__DOT__minus_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth0__DOT__sign_ext_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth1__DOT__partial_product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth1__DOT__product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth1__DOT__minus_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth1__DOT__sign_ext_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth2__DOT__partial_product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth2__DOT__product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth2__DOT__minus_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth2__DOT__sign_ext_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth3__DOT__partial_product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth3__DOT__product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth3__DOT__minus_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth3__DOT__sign_ext_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth4__DOT__partial_product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth4__DOT__product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth4__DOT__minus_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth4__DOT__sign_ext_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth5__DOT__partial_product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth5__DOT__product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth5__DOT__minus_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth5__DOT__sign_ext_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth6__DOT__partial_product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth6__DOT__product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth6__DOT__minus_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth6__DOT__sign_ext_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth7__DOT__partial_product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth7__DOT__product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth7__DOT__minus_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth7__DOT__sign_ext_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth8__DOT__partial_product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth8__DOT__product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth8__DOT__minus_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth8__DOT__sign_ext_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth9__DOT__partial_product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth9__DOT__product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth9__DOT__minus_a;
    };
    struct {
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth9__DOT__sign_ext_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth10__DOT__partial_product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth10__DOT__product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth10__DOT__minus_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth10__DOT__sign_ext_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth11__DOT__partial_product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth11__DOT__product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth11__DOT__minus_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth11__DOT__sign_ext_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth12__DOT__partial_product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth12__DOT__product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth12__DOT__minus_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth12__DOT__sign_ext_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth13__DOT__partial_product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth13__DOT__product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth13__DOT__minus_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth13__DOT__sign_ext_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth14__DOT__partial_product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth14__DOT__product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth14__DOT__minus_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth14__DOT__sign_ext_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth15__DOT__partial_product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth15__DOT__product;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth15__DOT__minus_a;
        QData/*63:0*/ ALU__DOT__multiplier__DOT__booth15__DOT__sign_ext_a;
        VlUnpacked<IData/*31:0*/, 5> ALU__DOT__leftshift__DOT__stage;
        VlUnpacked<IData/*31:0*/, 5> ALU__DOT__rightshiftlogic__DOT__stage;
        VlUnpacked<IData/*31:0*/, 5> ALU__DOT__rightshiftarithmetic__DOT__stage;
        VlUnpacked<QData/*63:0*/, 16> ALU__DOT__multiplier__DOT__layer0;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VALU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VALU___024root(VALU__Syms* symsp, const char* v__name);
    ~VALU___024root();
    VL_UNCOPYABLE(VALU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
