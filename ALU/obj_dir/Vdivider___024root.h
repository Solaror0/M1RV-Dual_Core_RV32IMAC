// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdivider.h for the primary calling header

#ifndef VERILATED_VDIVIDER___024ROOT_H_
#define VERILATED_VDIVIDER___024ROOT_H_  // guard

#include "verilated.h"


class Vdivider__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdivider___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(done,0,0);
    VL_OUT8(running,0,0);
    CData/*0:0*/ divider__DOT__clk;
    CData/*0:0*/ divider__DOT__rst;
    CData/*0:0*/ divider__DOT__done;
    CData/*0:0*/ divider__DOT__running;
    CData/*5:0*/ divider__DOT__clz;
    CData/*2:0*/ divider__DOT__qC;
    CData/*4:0*/ divider__DOT__count;
    CData/*5:0*/ divider__DOT__lut__DOT__p;
    CData/*3:0*/ divider__DOT__lut__DOT__d;
    CData/*2:0*/ divider__DOT__lut__DOT__q;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ divider__DOT__lut__DOT__signal;
    VL_IN(a,31,0);
    VL_IN(d,31,0);
    VL_OUT(q,31,0);
    IData/*31:0*/ divider__DOT__a;
    IData/*31:0*/ divider__DOT__d;
    IData/*31:0*/ divider__DOT__q;
    VlWide<3>/*64:0*/ divider__DOT__regPA;
    IData/*31:0*/ divider__DOT__Qm;
    IData/*31:0*/ divider__DOT__Qp;
    IData/*31:0*/ divider__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VL_OUT64(rem,32,0);
    QData/*32:0*/ divider__DOT__rem;
    QData/*63:0*/ divider__DOT__pBig;
    QData/*32:0*/ divider__DOT__dNorm;
    QData/*32:0*/ divider__DOT__p;
    QData/*32:0*/ divider__DOT__pNext;
    QData/*32:0*/ divider__DOT__dC;
    QData/*32:0*/ divider__DOT__dLS;
    QData/*32:0*/ divider__DOT__dM;
    QData/*32:0*/ divider__DOT__dMLS;
    QData/*32:0*/ divider__DOT__rem_temp;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdivider__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdivider___024root(Vdivider__Syms* symsp, const char* v__name);
    ~Vdivider___024root();
    VL_UNCOPYABLE(Vdivider___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
