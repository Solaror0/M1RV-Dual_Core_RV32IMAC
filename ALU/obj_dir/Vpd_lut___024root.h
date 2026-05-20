// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpd_lut.h for the primary calling header

#ifndef VERILATED_VPD_LUT___024ROOT_H_
#define VERILATED_VPD_LUT___024ROOT_H_  // guard

#include "verilated.h"


class Vpd_lut__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpd_lut___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(p,5,0);
    VL_IN8(d,4,0);
    VL_OUT8(q,2,0);
    CData/*5:0*/ pd_lut__DOT__p;
    CData/*4:0*/ pd_lut__DOT__d;
    CData/*2:0*/ pd_lut__DOT__q;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*10:0*/ pd_lut__DOT__signal;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpd_lut__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpd_lut___024root(Vpd_lut__Syms* symsp, const char* v__name);
    ~Vpd_lut___024root();
    VL_UNCOPYABLE(Vpd_lut___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
