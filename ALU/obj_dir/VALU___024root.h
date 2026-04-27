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
    VALU_carry_lookahead_adder* __PVT__ALU__DOT__shift_multiplier__DOT__adder_lower;
    VALU_carry_lookahead_adder* __PVT__ALU__DOT__shift_multiplier__DOT__adder_upper;

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
        VL_OUT8(SLTChecker,0,0);
        CData/*3:0*/ ALU__DOT__ALUControl;
        CData/*0:0*/ ALU__DOT__clk;
        CData/*0:0*/ ALU__DOT__cin;
        CData/*0:0*/ ALU__DOT__ZeroFlag;
        CData/*0:0*/ ALU__DOT__NegativeFlag;
        CData/*0:0*/ ALU__DOT__OverflowFlag;
        CData/*0:0*/ ALU__DOT__CarryOutFlag;
        CData/*0:0*/ ALU__DOT__SLTChecker;
        CData/*0:0*/ ALU__DOT__multiply_start;
        CData/*0:0*/ ALU__DOT__multiply_done;
        CData/*0:0*/ ALU__DOT__cout;
        CData/*4:0*/ ALU__DOT__leftshift__DOT__shamt;
        CData/*4:0*/ ALU__DOT__rightshiftlogic__DOT__shamt;
        CData/*4:0*/ ALU__DOT__rightshiftarithmetic__DOT__shamt;
        CData/*0:0*/ ALU__DOT__shift_multiplier__DOT__start;
        CData/*0:0*/ ALU__DOT__shift_multiplier__DOT__clk;
        CData/*0:0*/ ALU__DOT__shift_multiplier__DOT__done;
        CData/*6:0*/ ALU__DOT__shift_multiplier__DOT__count;
        CData/*0:0*/ ALU__DOT__shift_multiplier__DOT__running;
        CData/*1:0*/ ALU__DOT__shift_multiplier__DOT__state;
        CData/*0:0*/ ALU__DOT__shift_multiplier__DOT__cout_lower;
        CData/*0:0*/ ALU__DOT__shift_multiplier__DOT__cout_upper;
        CData/*0:0*/ ALU__DOT__shift_multiplier__DOT__start_pulse;
        CData/*4:0*/ ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__shamt;
        CData/*4:0*/ ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__shamt;
        CData/*4:0*/ ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__shamt;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        VL_IN(a,31,0);
        VL_IN(b,31,0);
        VL_OUT(ALUResult,31,0);
        VL_OUT(s,31,0);
        IData/*31:0*/ ALU__DOT__a;
        IData/*31:0*/ ALU__DOT__b;
        IData/*31:0*/ ALU__DOT__ALUResult;
        IData/*31:0*/ ALU__DOT__s;
        IData/*31:0*/ ALU__DOT__left_shifted;
        IData/*31:0*/ ALU__DOT__right_shifted_logic;
        IData/*31:0*/ ALU__DOT__right_shifted_arithmetic;
        IData/*31:0*/ ALU__DOT__leftshift__DOT__a;
        IData/*31:0*/ ALU__DOT__leftshift__DOT__y;
        IData/*31:0*/ ALU__DOT__rightshiftlogic__DOT__a;
        IData/*31:0*/ ALU__DOT__rightshiftlogic__DOT__y;
        IData/*31:0*/ ALU__DOT__rightshiftarithmetic__DOT__a;
        IData/*31:0*/ ALU__DOT__rightshiftarithmetic__DOT__y;
        IData/*31:0*/ ALU__DOT__shift_multiplier__DOT__a;
        IData/*31:0*/ ALU__DOT__shift_multiplier__DOT__b;
        IData/*31:0*/ ALU__DOT__shift_multiplier__DOT__b_in;
        IData/*31:0*/ ALU__DOT__shift_multiplier__DOT__b_shifted;
        IData/*31:0*/ ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__a;
        IData/*31:0*/ ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__y;
        IData/*31:0*/ ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__a;
        IData/*31:0*/ ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__y;
        IData/*31:0*/ ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__a;
    };
    struct {
        IData/*31:0*/ ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__y;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ALU__DOT__multiplied_product;
        QData/*63:0*/ ALU__DOT__shift_multiplier__DOT__accumulator;
        QData/*63:0*/ ALU__DOT__shift_multiplier__DOT__padded_a;
        QData/*63:0*/ ALU__DOT__shift_multiplier__DOT__sum_holder;
        QData/*63:0*/ ALU__DOT__shift_multiplier__DOT__shifted_upper;
        QData/*63:0*/ ALU__DOT__shift_multiplier__DOT__shifted_lower;
        QData/*63:0*/ ALU__DOT__shift_multiplier__DOT__shifted_lower_corrected;
        VlUnpacked<IData/*31:0*/, 5> ALU__DOT__leftshift__DOT__stage;
        VlUnpacked<IData/*31:0*/, 5> ALU__DOT__rightshiftlogic__DOT__stage;
        VlUnpacked<IData/*31:0*/, 5> ALU__DOT__rightshiftarithmetic__DOT__stage;
        VlUnpacked<IData/*31:0*/, 5> ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__stage;
        VlUnpacked<IData/*31:0*/, 5> ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__stage;
        VlUnpacked<IData/*31:0*/, 5> ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__stage;
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
