// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultiplier.h for the primary calling header

#include "Vmultiplier__pch.h"
#include "Vmultiplier___024root.h"

VL_INLINE_OPT void Vmultiplier___024root___nba_sequent__TOP__1(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ multiplier__DOT____Vcellout__fast_adder_lower__s;
    multiplier__DOT____Vcellout__fast_adder_lower__s = 0;
    IData/*31:0*/ multiplier__DOT____Vcellout__fast_adder_upper__s;
    multiplier__DOT____Vcellout__fast_adder_upper__s = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellout__block0__s;
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block0__s = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellout__block1__s;
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block1__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block1__cin;
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block1__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellout__block2__s;
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block2__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block2__cin;
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block2__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellout__block3__s;
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block3__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block3__cin;
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block3__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellout__block4__s;
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block4__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block4__cin;
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block4__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellout__block5__s;
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block5__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block5__cin;
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block5__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellout__block6__s;
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block6__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block6__cin;
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block6__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellout__block7__s;
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block7__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block7__cin;
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block7__cin = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__G = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellout__block0__s;
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block0__s = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellout__block1__s;
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block1__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block1__cin;
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block1__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellout__block2__s;
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block2__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block2__cin;
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block2__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellout__block3__s;
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block3__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block3__cin;
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block3__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellout__block4__s;
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block4__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block4__cin;
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block4__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellout__block5__s;
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block5__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block5__cin;
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block5__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellout__block6__s;
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block6__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block6__cin;
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block6__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellout__block7__s;
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block7__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block7__cin;
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block7__cin = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__G = 0;
    // Body
    vlSelf->multiplier__DOT__state = vlSelf->__Vdly__multiplier__DOT__state;
    vlSelf->multiplier__DOT__output_product = vlSelf->output_product;
    vlSelf->multiplier__DOT__done = vlSelf->done;
    vlSelf->multiplier__DOT__running = vlSelf->running;
    vlSelf->multiplier__DOT__cs12 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c12, 1U);
    vlSelf->multiplier__DOT__cs10 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c10, 1U);
    vlSelf->multiplier__DOT__cs11 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c11, 1U);
    vlSelf->multiplier__DOT__cs8 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c8, 1U);
    vlSelf->multiplier__DOT__cs9 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c9, 1U);
    vlSelf->multiplier__DOT__cs5 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c5, 1U);
    vlSelf->multiplier__DOT__cs6 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c6, 1U);
    vlSelf->multiplier__DOT__cs7 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c7, 1U);
    vlSelf->multiplier__DOT__cs0 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c0, 1U);
    vlSelf->multiplier__DOT__cs1 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c1, 1U);
    vlSelf->multiplier__DOT__cs2 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c2, 1U);
    vlSelf->multiplier__DOT__cs3 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c3, 1U);
    vlSelf->multiplier__DOT__cs4 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c4, 1U);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__a 
        = VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                           >> 0U)), 1U);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__a 
        = (0xfU & VL_SHIFTL_III(4,4,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                 >> 0U)), 1U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 1U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 2U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 3U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, (IData)(
                                                   (vlSelf->multiplier__DOT__c13 
                                                    >> 0U)), 1U) 
                   >> 4U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 4U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 5U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 6U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 7U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, (IData)(
                                                   (vlSelf->multiplier__DOT__c13 
                                                    >> 0U)), 1U) 
                   >> 8U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 8U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 9U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0xaU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0xbU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, (IData)(
                                                   (vlSelf->multiplier__DOT__c13 
                                                    >> 0U)), 1U) 
                   >> 0xcU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0xcU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0xdU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0xeU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0xfU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, (IData)(
                                                   (vlSelf->multiplier__DOT__c13 
                                                    >> 0U)), 1U) 
                   >> 0x10U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x10U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x11U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x12U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x13U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, (IData)(
                                                   (vlSelf->multiplier__DOT__c13 
                                                    >> 0U)), 1U) 
                   >> 0x14U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x14U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x15U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x16U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x17U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, (IData)(
                                                   (vlSelf->multiplier__DOT__c13 
                                                    >> 0U)), 1U) 
                   >> 0x18U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x18U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x19U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x1aU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x1bU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, (IData)(
                                                   (vlSelf->multiplier__DOT__c13 
                                                    >> 0U)), 1U) 
                   >> 0x1cU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x1cU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x1dU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x1eU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x1fU));
    vlSelf->multiplier__DOT__cs13 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c13, 1U);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__b 
        = (IData)((vlSelf->multiplier__DOT__s13 >> 0U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 0U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice0__DOT__P 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 1U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 2U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 3U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 4U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 4U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 5U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 6U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 7U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 8U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 8U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 9U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0xaU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0xbU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 0xcU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0xcU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0xdU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0xeU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0xfU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 0x10U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x10U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x11U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x12U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x13U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 0x14U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x14U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x15U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x16U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x17U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 0x18U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x18U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x19U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x1aU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x1bU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 0x1cU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x1cU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x1dU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x1eU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x1fU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__b 
        = (IData)((vlSelf->multiplier__DOT__s13 >> 0x20U));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 0x20U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x20U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x21U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x22U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x23U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 0x24U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x24U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x25U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x26U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x27U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 0x28U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x28U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x29U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x2aU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x2bU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 0x2cU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x2cU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x2dU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x2eU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x2fU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 0x30U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x30U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x31U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x32U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x33U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 0x34U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x34U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x35U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x36U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x37U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 0x38U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x38U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x39U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x3aU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x3bU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 0x3cU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x3cU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x3dU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x3eU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x3fU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__b_in 
        = (IData)(vlSelf->multiplier__DOT__s13);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__b_in 
        = (IData)((vlSelf->multiplier__DOT__s13 >> 0x20U));
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x1fU) & (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x1fU))));
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x1fU) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x1fU))));
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x1eU) & (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x1eU))));
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x1eU) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x1eU))));
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x1dU) & (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x1dU))));
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x1dU) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x1dU))));
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x1cU) & (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x1cU))));
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x1cU) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x1cU))));
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x1bU) & (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x1bU))));
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x1bU) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x1bU))));
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x1aU) & (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x1aU))));
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x1aU) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x1aU))));
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x19U) & (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x19U))));
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x19U) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x19U))));
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x18U) & (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x18U))));
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x18U) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x18U))));
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x17U) & (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x17U))));
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x17U) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x17U))));
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x16U) & (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x16U))));
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x16U) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x16U))));
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x15U) & (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x15U))));
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x15U) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x15U))));
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x14U) & (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x14U))));
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x14U) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x14U))));
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x13U) & (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x13U))));
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x13U) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x13U))));
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x12U) & (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x12U))));
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x12U) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x12U))));
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x11U) & (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x11U))));
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x11U) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x11U))));
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x10U) & (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x10U))));
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0x10U) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                       >> 0x10U))));
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0xfU) & (IData)((vlSelf->multiplier__DOT__s13 
                                      >> 0xfU))));
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0xfU) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                      >> 0xfU))));
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0xeU) & (IData)((vlSelf->multiplier__DOT__s13 
                                      >> 0xeU))));
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0xeU) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                      >> 0xeU))));
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0xdU) & (IData)((vlSelf->multiplier__DOT__s13 
                                      >> 0xdU))));
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0xdU) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                      >> 0xdU))));
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0xcU) & (IData)((vlSelf->multiplier__DOT__s13 
                                      >> 0xcU))));
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0xcU) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                      >> 0xcU))));
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0xbU) & (IData)((vlSelf->multiplier__DOT__s13 
                                      >> 0xbU))));
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0xbU) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                      >> 0xbU))));
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0xaU) & (IData)((vlSelf->multiplier__DOT__s13 
                                      >> 0xaU))));
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 0xaU) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                      >> 0xaU))));
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 9U) & (IData)((vlSelf->multiplier__DOT__s13 
                                    >> 9U))));
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 9U) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                    >> 9U))));
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 8U) & (IData)((vlSelf->multiplier__DOT__s13 
                                    >> 8U))));
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 8U) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                    >> 8U))));
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 7U) & (IData)((vlSelf->multiplier__DOT__s13 
                                    >> 7U))));
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 7U) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                    >> 7U))));
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 6U) & (IData)((vlSelf->multiplier__DOT__s13 
                                    >> 6U))));
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 6U) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                    >> 6U))));
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 5U) & (IData)((vlSelf->multiplier__DOT__s13 
                                    >> 5U))));
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 5U) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                    >> 5U))));
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 4U) & (IData)((vlSelf->multiplier__DOT__s13 
                                    >> 4U))));
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 4U) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                    >> 4U))));
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 3U) & (IData)((vlSelf->multiplier__DOT__s13 
                                    >> 3U))));
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 3U) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                    >> 3U))));
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 2U) & (IData)((vlSelf->multiplier__DOT__s13 
                                    >> 2U))));
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 2U) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                    >> 2U))));
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__G 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 1U) & (IData)((vlSelf->multiplier__DOT__s13 
                                    >> 1U))));
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, (IData)(vlSelf->multiplier__DOT__c13), 1U) 
                  >> 1U) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                    >> 1U))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__a 
        = (IData)((vlSelf->multiplier__DOT__cs13 >> 0x20U));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__a 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__cs13 
                           >> 0x20U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x20U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x21U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x22U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x23U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__a 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__cs13 
                           >> 0x24U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x24U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x25U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x26U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x27U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__a 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__cs13 
                           >> 0x28U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x28U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x29U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x2aU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x2bU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__a 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__cs13 
                           >> 0x2cU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x2cU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x2dU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x2eU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x2fU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__a 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__cs13 
                           >> 0x30U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x30U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x31U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x32U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x33U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__a 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__cs13 
                           >> 0x34U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x34U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x35U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x36U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x37U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__a 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__cs13 
                           >> 0x38U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x38U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x39U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x3aU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x3bU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__a 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__cs13 
                           >> 0x3cU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x3cU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x3dU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x3eU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x3fU)));
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__G 
        = (IData)(((vlSelf->multiplier__DOT__cs13 & vlSelf->multiplier__DOT__s13) 
                   >> 0x3fU));
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__P 
        = (IData)(((vlSelf->multiplier__DOT__cs13 ^ vlSelf->multiplier__DOT__s13) 
                   >> 0x3fU));
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x3eU)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x3eU))));
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x3eU)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x3eU))));
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x3dU)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x3dU))));
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x3dU)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x3dU))));
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x3cU)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x3cU))));
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x3cU)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x3cU))));
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x3bU)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x3bU))));
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x3bU)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x3bU))));
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x3aU)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x3aU))));
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x3aU)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x3aU))));
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x39U)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x39U))));
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x39U)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x39U))));
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x38U)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x38U))));
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x38U)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x38U))));
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x37U)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x37U))));
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x37U)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x37U))));
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x36U)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x36U))));
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x36U)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x36U))));
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x35U)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x35U))));
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x35U)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x35U))));
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x34U)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x34U))));
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x34U)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x34U))));
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x33U)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x33U))));
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x33U)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x33U))));
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x32U)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x32U))));
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x32U)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x32U))));
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x31U)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x31U))));
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x31U)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x31U))));
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x30U)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x30U))));
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x30U)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x30U))));
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x2fU)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x2fU))));
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x2fU)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x2fU))));
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x2eU)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x2eU))));
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x2eU)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x2eU))));
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x2dU)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x2dU))));
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x2dU)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x2dU))));
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x2cU)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x2cU))));
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x2cU)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x2cU))));
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x2bU)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x2bU))));
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x2bU)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x2bU))));
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x2aU)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x2aU))));
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x2aU)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x2aU))));
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x29U)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x29U))));
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x29U)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x29U))));
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x28U)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x28U))));
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x28U)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x28U))));
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x27U)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x27U))));
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x27U)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x27U))));
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x26U)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x26U))));
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x26U)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x26U))));
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x25U)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x25U))));
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x25U)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x25U))));
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x24U)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x24U))));
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x24U)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x24U))));
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x23U)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x23U))));
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x23U)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x23U))));
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x22U)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x22U))));
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x22U)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x22U))));
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x21U)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x21U))));
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x21U)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x21U))));
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x20U)) & (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x20U))));
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x20U)) ^ (IData)((vlSelf->multiplier__DOT__s13 
                                                >> 0x20U))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__G) 
                       << 2U) | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__G) 
                                 << 1U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__P) 
                                  << 1U) | (1U & (IData)(vlSelf->multiplier__DOT__s13)))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c1))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block0__s 
        = ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c0)) 
                                  << 1U) | (1U & (IData)(vlSelf->multiplier__DOT__s13)))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block1__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block0__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__cout 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block1__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__cin 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block1__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block1__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c1))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block1__s 
        = ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block1__cin)))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block2__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block1__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__cout 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block2__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__cin 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block2__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block2__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c1))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block2__s 
        = ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block2__cin)))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block3__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block2__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__cout 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block3__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__cin 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block3__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block3__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c1))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block3__s 
        = ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block3__cin)))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block4__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block3__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__cout 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block4__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__cin 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block4__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block4__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c1))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block4__s 
        = ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block4__cin)))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block5__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block4__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__cout 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block5__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__cin 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block5__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block5__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c1))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block5__s 
        = ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block5__cin)))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block6__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block5__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__cout 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block6__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__cin 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block6__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block6__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c1))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block6__s 
        = ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block6__cin)))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block7__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block6__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__cout 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block7__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__cin 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block7__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__c 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block7__cin) 
            << 6U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block6__cin) 
                       << 5U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block5__cin) 
                                  << 4U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block4__cin) 
                                             << 3U) 
                                            | (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block3__cin) 
                                                << 2U) 
                                               | (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block2__cin) 
                                                   << 1U) 
                                                  | (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block1__cin)))))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block7__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c1))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block7__s 
        = ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block7__cin)))));
    vlSelf->multiplier__DOT__cout = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__G) 
                                           + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__P) 
                                              * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block7__s;
    multiplier__DOT____Vcellout__fast_adder_lower__s 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellout__block7__s) 
            << 0x1cU) | (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellout__block6__s) 
                          << 0x18U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellout__block5__s) 
                                        << 0x14U) | 
                                       (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellout__block4__s) 
                                         << 0x10U) 
                                        | (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellout__block3__s) 
                                            << 0xcU) 
                                           | (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellout__block2__s) 
                                               << 8U) 
                                              | (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellout__block1__s) 
                                                  << 4U) 
                                                 | (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellout__block0__s))))))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__cin 
        = vlSelf->multiplier__DOT__cout;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__cin 
        = vlSelf->multiplier__DOT__cout;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__cin_effective 
        = vlSelf->multiplier__DOT__cout;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__cout 
        = vlSelf->multiplier__DOT__cout;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__P) 
                    * (IData)(vlSelf->multiplier__DOT__cout))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__s 
        = multiplier__DOT____Vcellout__fast_adder_lower__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__cout 
        = vlSelf->multiplier__DOT__fast_adder_lower__DOT__cout;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c1))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block0__s 
        = ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(vlSelf->multiplier__DOT__cout)))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block1__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block0__s;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__cout 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block1__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__cin 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block1__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block1__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c1))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block1__s 
        = ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block1__cin)))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block2__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block1__s;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__cout 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block2__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__cin 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block2__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block2__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c1))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block2__s 
        = ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block2__cin)))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block3__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block2__s;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__cout 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block3__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__cin 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block3__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block3__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c1))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block3__s 
        = ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block3__cin)))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block4__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block3__s;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__cout 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block4__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__cin 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block4__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block4__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c1))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block4__s 
        = ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block4__cin)))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block5__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block4__s;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__cout 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block5__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__cin 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block5__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block5__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c1))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block5__s 
        = ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block5__cin)))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block6__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block5__s;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__cout 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block6__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__cin 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block6__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block6__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c1))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block6__s 
        = ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block6__cin)))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block7__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block6__s;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__cout 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block7__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__cin 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block7__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__c 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block7__cin) 
            << 6U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block6__cin) 
                       << 5U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block5__cin) 
                                  << 4U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block4__cin) 
                                             << 3U) 
                                            | (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block3__cin) 
                                                << 2U) 
                                               | (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block2__cin) 
                                                   << 1U) 
                                                  | (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block1__cin)))))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block7__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c1))));
    vlSelf->multiplier__DOT__cout_upper = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__G) 
                                                 + 
                                                 ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__P) 
                                                  * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c2))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block7__s 
        = ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block7__cin)))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__cout 
        = vlSelf->multiplier__DOT__cout_upper;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block7__s;
    multiplier__DOT____Vcellout__fast_adder_upper__s 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellout__block7__s) 
            << 0x1cU) | (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellout__block6__s) 
                          << 0x18U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellout__block5__s) 
                                        << 0x14U) | 
                                       (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellout__block4__s) 
                                         << 0x10U) 
                                        | (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellout__block3__s) 
                                            << 0xcU) 
                                           | (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellout__block2__s) 
                                               << 8U) 
                                              | (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellout__block1__s) 
                                                  << 4U) 
                                                 | (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellout__block0__s))))))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__cout 
        = vlSelf->multiplier__DOT__fast_adder_upper__DOT__cout;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__s 
        = multiplier__DOT____Vcellout__fast_adder_upper__s;
    vlSelf->multiplier__DOT__product = (((QData)((IData)(multiplier__DOT____Vcellout__fast_adder_upper__s)) 
                                         << 0x20U) 
                                        | (QData)((IData)(multiplier__DOT____Vcellout__fast_adder_lower__s)));
}

void Vmultiplier___024root___nba_sequent__TOP__0(Vmultiplier___024root* vlSelf);

void Vmultiplier___024root___eval_nba(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmultiplier___024root___nba_sequent__TOP__0(vlSelf);
        Vmultiplier___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vmultiplier___024root___eval_triggers__act(Vmultiplier___024root* vlSelf);
void Vmultiplier___024root___eval_act(Vmultiplier___024root* vlSelf);

bool Vmultiplier___024root___eval_phase__act(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmultiplier___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vmultiplier___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmultiplier___024root___eval_phase__nba(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmultiplier___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier___024root___dump_triggers__ico(Vmultiplier___024root* vlSelf);
#endif  // VL_DEBUG
bool Vmultiplier___024root___eval_phase__ico(Vmultiplier___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier___024root___dump_triggers__nba(Vmultiplier___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier___024root___dump_triggers__act(Vmultiplier___024root* vlSelf);
#endif  // VL_DEBUG

void Vmultiplier___024root___eval(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vmultiplier___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("multiplier.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmultiplier___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmultiplier___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("multiplier.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vmultiplier___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("multiplier.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vmultiplier___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vmultiplier___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmultiplier___024root___eval_debug_assertions(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
