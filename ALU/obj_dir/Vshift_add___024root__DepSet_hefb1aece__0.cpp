// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift_add.h for the primary calling header

#include "Vshift_add__pch.h"
#include "Vshift_add___024root.h"

VL_INLINE_OPT void Vshift_add___024root___ico_sequent__TOP__0(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___ico_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ shift_add__DOT____Vcellout__adder_lower__s;
    shift_add__DOT____Vcellout__adder_lower__s = 0;
    IData/*31:0*/ shift_add__DOT____Vcellout__adder_upper__s;
    shift_add__DOT____Vcellout__adder_upper__s = 0;
    CData/*3:0*/ shift_add__DOT__adder_lower__DOT____Vcellout__block0__s;
    shift_add__DOT__adder_lower__DOT____Vcellout__block0__s = 0;
    CData/*3:0*/ shift_add__DOT__adder_lower__DOT____Vcellout__block1__s;
    shift_add__DOT__adder_lower__DOT____Vcellout__block1__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT____Vcellinp__block1__cin;
    shift_add__DOT__adder_lower__DOT____Vcellinp__block1__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_lower__DOT____Vcellout__block2__s;
    shift_add__DOT__adder_lower__DOT____Vcellout__block2__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT____Vcellinp__block2__cin;
    shift_add__DOT__adder_lower__DOT____Vcellinp__block2__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_lower__DOT____Vcellout__block3__s;
    shift_add__DOT__adder_lower__DOT____Vcellout__block3__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT____Vcellinp__block3__cin;
    shift_add__DOT__adder_lower__DOT____Vcellinp__block3__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_lower__DOT____Vcellout__block4__s;
    shift_add__DOT__adder_lower__DOT____Vcellout__block4__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT____Vcellinp__block4__cin;
    shift_add__DOT__adder_lower__DOT____Vcellinp__block4__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_lower__DOT____Vcellout__block5__s;
    shift_add__DOT__adder_lower__DOT____Vcellout__block5__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT____Vcellinp__block5__cin;
    shift_add__DOT__adder_lower__DOT____Vcellinp__block5__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_lower__DOT____Vcellout__block6__s;
    shift_add__DOT__adder_lower__DOT____Vcellout__block6__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT____Vcellinp__block6__cin;
    shift_add__DOT__adder_lower__DOT____Vcellinp__block6__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_lower__DOT____Vcellout__block7__s;
    shift_add__DOT__adder_lower__DOT____Vcellout__block7__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT____Vcellinp__block7__cin;
    shift_add__DOT__adder_lower__DOT____Vcellinp__block7__cin = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__G = 0;
    CData/*3:0*/ shift_add__DOT__adder_upper__DOT____Vcellout__block0__s;
    shift_add__DOT__adder_upper__DOT____Vcellout__block0__s = 0;
    CData/*3:0*/ shift_add__DOT__adder_upper__DOT____Vcellout__block1__s;
    shift_add__DOT__adder_upper__DOT____Vcellout__block1__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT____Vcellinp__block1__cin;
    shift_add__DOT__adder_upper__DOT____Vcellinp__block1__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_upper__DOT____Vcellout__block2__s;
    shift_add__DOT__adder_upper__DOT____Vcellout__block2__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT____Vcellinp__block2__cin;
    shift_add__DOT__adder_upper__DOT____Vcellinp__block2__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_upper__DOT____Vcellout__block3__s;
    shift_add__DOT__adder_upper__DOT____Vcellout__block3__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT____Vcellinp__block3__cin;
    shift_add__DOT__adder_upper__DOT____Vcellinp__block3__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_upper__DOT____Vcellout__block4__s;
    shift_add__DOT__adder_upper__DOT____Vcellout__block4__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT____Vcellinp__block4__cin;
    shift_add__DOT__adder_upper__DOT____Vcellinp__block4__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_upper__DOT____Vcellout__block5__s;
    shift_add__DOT__adder_upper__DOT____Vcellout__block5__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT____Vcellinp__block5__cin;
    shift_add__DOT__adder_upper__DOT____Vcellinp__block5__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_upper__DOT____Vcellout__block6__s;
    shift_add__DOT__adder_upper__DOT____Vcellout__block6__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT____Vcellinp__block6__cin;
    shift_add__DOT__adder_upper__DOT____Vcellinp__block6__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_upper__DOT____Vcellout__block7__s;
    shift_add__DOT__adder_upper__DOT____Vcellout__block7__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT____Vcellinp__block7__cin;
    shift_add__DOT__adder_upper__DOT____Vcellinp__block7__cin = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__G = 0;
    // Body
    vlSelf->shift_add__DOT__start = vlSelf->start;
    vlSelf->shift_add__DOT__clk = vlSelf->clk;
    vlSelf->shift_add__DOT__a = vlSelf->a;
    vlSelf->shift_add__DOT__b = vlSelf->b;
    vlSelf->done = ((0x41U == (IData)(vlSelf->count))
                     ? 1U : 0U);
    vlSelf->running = ((1U == (IData)(vlSelf->shift_add__DOT__state)) 
                       & (~ (IData)(vlSelf->done)));
    vlSelf->shift_add__DOT__start_pulse = ((IData)(vlSelf->running)
                                            ? 0U : 
                                           (1U & (IData)(vlSelf->start)));
    vlSelf->padded_a = ((QData)((IData)(vlSelf->a)) 
                        << 0x20U);
    vlSelf->shift_add__DOT__done = vlSelf->done;
    vlSelf->shift_add__DOT__running = vlSelf->running;
    vlSelf->shift_add__DOT__padded_a = vlSelf->padded_a;
    vlSelf->shift_add__DOT__adder_lower__DOT__b = (IData)(
                                                          (vlSelf->padded_a 
                                                           >> 0U));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__b 
        = (0xfU & (IData)((vlSelf->padded_a >> 0U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 1U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 2U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 3U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__b 
        = (0xfU & (IData)((vlSelf->padded_a >> 4U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 4U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 5U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 6U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 7U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__b 
        = (0xfU & (IData)((vlSelf->padded_a >> 8U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 8U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 9U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0xaU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0xbU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__b 
        = (0xfU & (IData)((vlSelf->padded_a >> 0xcU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0xcU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0xdU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0xeU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0xfU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__b 
        = (0xfU & (IData)((vlSelf->padded_a >> 0x10U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x10U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x11U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x12U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x13U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__b 
        = (0xfU & (IData)((vlSelf->padded_a >> 0x14U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x14U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x15U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x16U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x17U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__b 
        = (0xfU & (IData)((vlSelf->padded_a >> 0x18U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x18U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x19U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x1aU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x1bU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__b 
        = (0xfU & (IData)((vlSelf->padded_a >> 0x1cU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x1cU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x1dU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x1eU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x1fU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__b = (IData)(
                                                          (vlSelf->padded_a 
                                                           >> 0x20U));
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__b 
        = (0xfU & (IData)((vlSelf->padded_a >> 0x20U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x20U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x21U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x22U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x23U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__b 
        = (0xfU & (IData)((vlSelf->padded_a >> 0x24U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x24U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x25U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x26U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x27U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__b 
        = (0xfU & (IData)((vlSelf->padded_a >> 0x28U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x28U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x29U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x2aU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x2bU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__b 
        = (0xfU & (IData)((vlSelf->padded_a >> 0x2cU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x2cU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x2dU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x2eU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x2fU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__b 
        = (0xfU & (IData)((vlSelf->padded_a >> 0x30U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x30U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x31U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x32U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x33U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__b 
        = (0xfU & (IData)((vlSelf->padded_a >> 0x34U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x34U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x35U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x36U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x37U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__b 
        = (0xfU & (IData)((vlSelf->padded_a >> 0x38U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x38U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x39U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x3aU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x3bU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__b 
        = (0xfU & (IData)((vlSelf->padded_a >> 0x3cU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x3cU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x3dU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x3eU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->padded_a >> 0x3fU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__b_in 
        = (IData)(vlSelf->padded_a);
    vlSelf->shift_add__DOT__adder_upper__DOT__b_in 
        = (IData)((vlSelf->padded_a >> 0x20U));
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__G 
        = (IData)(((vlSelf->accumulator & vlSelf->padded_a) 
                   >> 0x3fU));
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__P 
        = (1U & ((IData)(vlSelf->accumulator) ^ (IData)(vlSelf->padded_a)));
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__P 
        = (IData)(((vlSelf->accumulator ^ vlSelf->padded_a) 
                   >> 0x3fU));
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x3eU)) 
                 & (IData)((vlSelf->padded_a >> 0x3eU))));
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x3eU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x3eU))));
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x3dU)) 
                 & (IData)((vlSelf->padded_a >> 0x3dU))));
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x3dU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x3dU))));
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x3cU)) 
                 & (IData)((vlSelf->padded_a >> 0x3cU))));
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x3cU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x3cU))));
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x3bU)) 
                 & (IData)((vlSelf->padded_a >> 0x3bU))));
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x3bU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x3bU))));
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x3aU)) 
                 & (IData)((vlSelf->padded_a >> 0x3aU))));
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x3aU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x3aU))));
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x39U)) 
                 & (IData)((vlSelf->padded_a >> 0x39U))));
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x39U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x39U))));
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x38U)) 
                 & (IData)((vlSelf->padded_a >> 0x38U))));
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x38U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x38U))));
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x37U)) 
                 & (IData)((vlSelf->padded_a >> 0x37U))));
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x37U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x37U))));
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x36U)) 
                 & (IData)((vlSelf->padded_a >> 0x36U))));
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x36U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x36U))));
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x35U)) 
                 & (IData)((vlSelf->padded_a >> 0x35U))));
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x35U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x35U))));
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x34U)) 
                 & (IData)((vlSelf->padded_a >> 0x34U))));
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x34U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x34U))));
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x33U)) 
                 & (IData)((vlSelf->padded_a >> 0x33U))));
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x33U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x33U))));
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x32U)) 
                 & (IData)((vlSelf->padded_a >> 0x32U))));
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x32U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x32U))));
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x31U)) 
                 & (IData)((vlSelf->padded_a >> 0x31U))));
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x31U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x31U))));
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x30U)) 
                 & (IData)((vlSelf->padded_a >> 0x30U))));
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x30U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x30U))));
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2fU)) 
                 & (IData)((vlSelf->padded_a >> 0x2fU))));
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2fU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x2fU))));
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2eU)) 
                 & (IData)((vlSelf->padded_a >> 0x2eU))));
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2eU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x2eU))));
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2dU)) 
                 & (IData)((vlSelf->padded_a >> 0x2dU))));
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2dU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x2dU))));
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2cU)) 
                 & (IData)((vlSelf->padded_a >> 0x2cU))));
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2cU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x2cU))));
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2bU)) 
                 & (IData)((vlSelf->padded_a >> 0x2bU))));
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2bU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x2bU))));
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2aU)) 
                 & (IData)((vlSelf->padded_a >> 0x2aU))));
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2aU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x2aU))));
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x29U)) 
                 & (IData)((vlSelf->padded_a >> 0x29U))));
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x29U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x29U))));
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x28U)) 
                 & (IData)((vlSelf->padded_a >> 0x28U))));
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x28U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x28U))));
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x27U)) 
                 & (IData)((vlSelf->padded_a >> 0x27U))));
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x27U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x27U))));
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x26U)) 
                 & (IData)((vlSelf->padded_a >> 0x26U))));
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x26U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x26U))));
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x25U)) 
                 & (IData)((vlSelf->padded_a >> 0x25U))));
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x25U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x25U))));
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x24U)) 
                 & (IData)((vlSelf->padded_a >> 0x24U))));
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x24U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x24U))));
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x23U)) 
                 & (IData)((vlSelf->padded_a >> 0x23U))));
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x23U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x23U))));
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x22U)) 
                 & (IData)((vlSelf->padded_a >> 0x22U))));
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x22U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x22U))));
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x21U)) 
                 & (IData)((vlSelf->padded_a >> 0x21U))));
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x21U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x21U))));
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x20U)) 
                 & (IData)((vlSelf->padded_a >> 0x20U))));
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x20U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x20U))));
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1fU)) 
                 & (IData)((vlSelf->padded_a >> 0x1fU))));
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1fU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x1fU))));
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1eU)) 
                 & (IData)((vlSelf->padded_a >> 0x1eU))));
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1eU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x1eU))));
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1dU)) 
                 & (IData)((vlSelf->padded_a >> 0x1dU))));
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1dU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x1dU))));
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1cU)) 
                 & (IData)((vlSelf->padded_a >> 0x1cU))));
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1cU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x1cU))));
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1bU)) 
                 & (IData)((vlSelf->padded_a >> 0x1bU))));
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1bU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x1bU))));
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1aU)) 
                 & (IData)((vlSelf->padded_a >> 0x1aU))));
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1aU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x1aU))));
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x19U)) 
                 & (IData)((vlSelf->padded_a >> 0x19U))));
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x19U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x19U))));
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x18U)) 
                 & (IData)((vlSelf->padded_a >> 0x18U))));
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x18U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x18U))));
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x17U)) 
                 & (IData)((vlSelf->padded_a >> 0x17U))));
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x17U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x17U))));
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x16U)) 
                 & (IData)((vlSelf->padded_a >> 0x16U))));
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x16U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x16U))));
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x15U)) 
                 & (IData)((vlSelf->padded_a >> 0x15U))));
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x15U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x15U))));
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x14U)) 
                 & (IData)((vlSelf->padded_a >> 0x14U))));
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x14U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x14U))));
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x13U)) 
                 & (IData)((vlSelf->padded_a >> 0x13U))));
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x13U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x13U))));
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x12U)) 
                 & (IData)((vlSelf->padded_a >> 0x12U))));
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x12U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x12U))));
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x11U)) 
                 & (IData)((vlSelf->padded_a >> 0x11U))));
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x11U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x11U))));
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x10U)) 
                 & (IData)((vlSelf->padded_a >> 0x10U))));
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x10U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x10U))));
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0xfU)) 
                 & (IData)((vlSelf->padded_a >> 0xfU))));
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0xfU)) 
                 ^ (IData)((vlSelf->padded_a >> 0xfU))));
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0xeU)) 
                 & (IData)((vlSelf->padded_a >> 0xeU))));
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0xeU)) 
                 ^ (IData)((vlSelf->padded_a >> 0xeU))));
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0xdU)) 
                 & (IData)((vlSelf->padded_a >> 0xdU))));
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0xdU)) 
                 ^ (IData)((vlSelf->padded_a >> 0xdU))));
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0xcU)) 
                 & (IData)((vlSelf->padded_a >> 0xcU))));
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0xcU)) 
                 ^ (IData)((vlSelf->padded_a >> 0xcU))));
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0xbU)) 
                 & (IData)((vlSelf->padded_a >> 0xbU))));
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0xbU)) 
                 ^ (IData)((vlSelf->padded_a >> 0xbU))));
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0xaU)) 
                 & (IData)((vlSelf->padded_a >> 0xaU))));
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0xaU)) 
                 ^ (IData)((vlSelf->padded_a >> 0xaU))));
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 9U)) 
                 & (IData)((vlSelf->padded_a >> 9U))));
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 9U)) 
                 ^ (IData)((vlSelf->padded_a >> 9U))));
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 8U)) 
                 & (IData)((vlSelf->padded_a >> 8U))));
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 8U)) 
                 ^ (IData)((vlSelf->padded_a >> 8U))));
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 7U)) 
                 & (IData)((vlSelf->padded_a >> 7U))));
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 7U)) 
                 ^ (IData)((vlSelf->padded_a >> 7U))));
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 6U)) 
                 & (IData)((vlSelf->padded_a >> 6U))));
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 6U)) 
                 ^ (IData)((vlSelf->padded_a >> 6U))));
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 5U)) 
                 & (IData)((vlSelf->padded_a >> 5U))));
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 5U)) 
                 ^ (IData)((vlSelf->padded_a >> 5U))));
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 4U)) 
                 & (IData)((vlSelf->padded_a >> 4U))));
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 4U)) 
                 ^ (IData)((vlSelf->padded_a >> 4U))));
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 3U)) 
                 & (IData)((vlSelf->padded_a >> 3U))));
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 3U)) 
                 ^ (IData)((vlSelf->padded_a >> 3U))));
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 2U)) 
                 & (IData)((vlSelf->padded_a >> 2U))));
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 2U)) 
                 ^ (IData)((vlSelf->padded_a >> 2U))));
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 1U)) 
                 & (IData)((vlSelf->padded_a >> 1U))));
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 1U)) 
                 ^ (IData)((vlSelf->padded_a >> 1U))));
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__G 
        = (1U & ((IData)(vlSelf->accumulator) & (IData)(vlSelf->padded_a)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__G 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__P 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__G 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__P 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__G 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__P 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__G 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__P 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__G 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__P 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__G 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__P 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__G 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__P 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__G 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__P 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__G 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__P 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__G 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__P 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__G 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__P 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__G 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__P 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__G 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__P 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__G 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__P 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__G 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__P 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__P 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__G 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c0 
        = shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c0))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c1))));
    shift_add__DOT__adder_lower__DOT____Vcellout__block0__s 
        = ((((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c0)) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__P))));
    shift_add__DOT__adder_lower__DOT____Vcellinp__block1__cin 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c2))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__s 
        = shift_add__DOT__adder_lower__DOT____Vcellout__block0__s;
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__cout 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block1__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__cin 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block1__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block1__cin))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c0))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c1))));
    shift_add__DOT__adder_lower__DOT____Vcellout__block1__s 
        = ((((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block1__cin)))));
    shift_add__DOT__adder_lower__DOT____Vcellinp__block2__cin 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c2))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__s 
        = shift_add__DOT__adder_lower__DOT____Vcellout__block1__s;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__cout 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block2__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__cin 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block2__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block2__cin))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c0))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c1))));
    shift_add__DOT__adder_lower__DOT____Vcellout__block2__s 
        = ((((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block2__cin)))));
    shift_add__DOT__adder_lower__DOT____Vcellinp__block3__cin 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c2))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__s 
        = shift_add__DOT__adder_lower__DOT____Vcellout__block2__s;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__cout 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block3__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__cin 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block3__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block3__cin))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c0))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c1))));
    shift_add__DOT__adder_lower__DOT____Vcellout__block3__s 
        = ((((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block3__cin)))));
    shift_add__DOT__adder_lower__DOT____Vcellinp__block4__cin 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c2))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__s 
        = shift_add__DOT__adder_lower__DOT____Vcellout__block3__s;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__cout 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block4__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__cin 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block4__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block4__cin))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c0))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c1))));
    shift_add__DOT__adder_lower__DOT____Vcellout__block4__s 
        = ((((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block4__cin)))));
    shift_add__DOT__adder_lower__DOT____Vcellinp__block5__cin 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c2))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__s 
        = shift_add__DOT__adder_lower__DOT____Vcellout__block4__s;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__cout 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block5__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__cin 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block5__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block5__cin))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c0))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c1))));
    shift_add__DOT__adder_lower__DOT____Vcellout__block5__s 
        = ((((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block5__cin)))));
    shift_add__DOT__adder_lower__DOT____Vcellinp__block6__cin 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c2))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__s 
        = shift_add__DOT__adder_lower__DOT____Vcellout__block5__s;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__cout 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block6__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__cin 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block6__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block6__cin))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c0))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c1))));
    shift_add__DOT__adder_lower__DOT____Vcellout__block6__s 
        = ((((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block6__cin)))));
    shift_add__DOT__adder_lower__DOT____Vcellinp__block7__cin 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c2))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__s 
        = shift_add__DOT__adder_lower__DOT____Vcellout__block6__s;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__cout 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block7__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__cin 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block7__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__c = (
                                                   ((IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block7__cin) 
                                                    << 6U) 
                                                   | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block6__cin) 
                                                       << 5U) 
                                                      | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block5__cin) 
                                                          << 4U) 
                                                         | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block4__cin) 
                                                             << 3U) 
                                                            | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block3__cin) 
                                                                << 2U) 
                                                               | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block2__cin) 
                                                                   << 1U) 
                                                                  | (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block1__cin)))))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block7__cin))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c0))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c1))));
    shift_add__DOT__adder_lower__DOT____Vcellout__block7__s 
        = ((((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block7__cin)))));
    vlSelf->shift_add__DOT__cout_lower = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__G) 
                                                + ((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__P) 
                                                   * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c2))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__s 
        = shift_add__DOT__adder_lower__DOT____Vcellout__block7__s;
    shift_add__DOT____Vcellout__adder_lower__s = (((IData)(shift_add__DOT__adder_lower__DOT____Vcellout__block7__s) 
                                                   << 0x1cU) 
                                                  | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellout__block6__s) 
                                                      << 0x18U) 
                                                     | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellout__block5__s) 
                                                         << 0x14U) 
                                                        | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellout__block4__s) 
                                                            << 0x10U) 
                                                           | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellout__block3__s) 
                                                               << 0xcU) 
                                                              | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellout__block2__s) 
                                                                  << 8U) 
                                                                 | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellout__block1__s) 
                                                                     << 4U) 
                                                                    | (IData)(shift_add__DOT__adder_lower__DOT____Vcellout__block0__s))))))));
    vlSelf->shift_add__DOT__adder_upper__DOT__cin = vlSelf->shift_add__DOT__cout_lower;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__cin 
        = vlSelf->shift_add__DOT__cout_lower;
    vlSelf->shift_add__DOT__adder_upper__DOT__cin_effective 
        = vlSelf->shift_add__DOT__cout_lower;
    vlSelf->shift_add__DOT__adder_lower__DOT__cout 
        = vlSelf->shift_add__DOT__cout_lower;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__P) 
                    * (IData)(vlSelf->shift_add__DOT__cout_lower))));
    vlSelf->shift_add__DOT__adder_lower__DOT__s = shift_add__DOT____Vcellout__adder_lower__s;
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__cout 
        = vlSelf->shift_add__DOT__adder_lower__DOT__cout;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c0))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c1))));
    shift_add__DOT__adder_upper__DOT____Vcellout__block0__s 
        = ((((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(vlSelf->shift_add__DOT__cout_lower)))));
    shift_add__DOT__adder_upper__DOT____Vcellinp__block1__cin 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c2))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__s 
        = shift_add__DOT__adder_upper__DOT____Vcellout__block0__s;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__cout 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block1__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__cin 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block1__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block1__cin))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c0))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c1))));
    shift_add__DOT__adder_upper__DOT____Vcellout__block1__s 
        = ((((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block1__cin)))));
    shift_add__DOT__adder_upper__DOT____Vcellinp__block2__cin 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c2))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__s 
        = shift_add__DOT__adder_upper__DOT____Vcellout__block1__s;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__cout 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block2__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__cin 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block2__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block2__cin))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c0))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c1))));
    shift_add__DOT__adder_upper__DOT____Vcellout__block2__s 
        = ((((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block2__cin)))));
    shift_add__DOT__adder_upper__DOT____Vcellinp__block3__cin 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c2))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__s 
        = shift_add__DOT__adder_upper__DOT____Vcellout__block2__s;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__cout 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block3__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__cin 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block3__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block3__cin))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c0))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c1))));
    shift_add__DOT__adder_upper__DOT____Vcellout__block3__s 
        = ((((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block3__cin)))));
    shift_add__DOT__adder_upper__DOT____Vcellinp__block4__cin 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c2))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__s 
        = shift_add__DOT__adder_upper__DOT____Vcellout__block3__s;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__cout 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block4__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__cin 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block4__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block4__cin))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c0))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c1))));
    shift_add__DOT__adder_upper__DOT____Vcellout__block4__s 
        = ((((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block4__cin)))));
    shift_add__DOT__adder_upper__DOT____Vcellinp__block5__cin 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c2))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__s 
        = shift_add__DOT__adder_upper__DOT____Vcellout__block4__s;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__cout 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block5__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__cin 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block5__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block5__cin))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c0))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c1))));
    shift_add__DOT__adder_upper__DOT____Vcellout__block5__s 
        = ((((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block5__cin)))));
    shift_add__DOT__adder_upper__DOT____Vcellinp__block6__cin 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c2))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__s 
        = shift_add__DOT__adder_upper__DOT____Vcellout__block5__s;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__cout 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block6__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__cin 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block6__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block6__cin))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c0))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c1))));
    shift_add__DOT__adder_upper__DOT____Vcellout__block6__s 
        = ((((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block6__cin)))));
    shift_add__DOT__adder_upper__DOT____Vcellinp__block7__cin 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c2))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__s 
        = shift_add__DOT__adder_upper__DOT____Vcellout__block6__s;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__cout 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block7__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__cin 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block7__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__c = (
                                                   ((IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block7__cin) 
                                                    << 6U) 
                                                   | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block6__cin) 
                                                       << 5U) 
                                                      | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block5__cin) 
                                                          << 4U) 
                                                         | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block4__cin) 
                                                             << 3U) 
                                                            | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block3__cin) 
                                                                << 2U) 
                                                               | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block2__cin) 
                                                                   << 1U) 
                                                                  | (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block1__cin)))))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block7__cin))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c0))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c1))));
    vlSelf->shift_add__DOT__cout_upper = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__G) 
                                                + ((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__P) 
                                                   * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c2))));
    shift_add__DOT__adder_upper__DOT____Vcellout__block7__s 
        = ((((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block7__cin)))));
    vlSelf->shift_add__DOT__adder_upper__DOT__cout 
        = vlSelf->shift_add__DOT__cout_upper;
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__s 
        = shift_add__DOT__adder_upper__DOT____Vcellout__block7__s;
    shift_add__DOT____Vcellout__adder_upper__s = (((IData)(shift_add__DOT__adder_upper__DOT____Vcellout__block7__s) 
                                                   << 0x1cU) 
                                                  | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellout__block6__s) 
                                                      << 0x18U) 
                                                     | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellout__block5__s) 
                                                         << 0x14U) 
                                                        | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellout__block4__s) 
                                                            << 0x10U) 
                                                           | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellout__block3__s) 
                                                               << 0xcU) 
                                                              | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellout__block2__s) 
                                                                  << 8U) 
                                                                 | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellout__block1__s) 
                                                                     << 4U) 
                                                                    | (IData)(shift_add__DOT__adder_upper__DOT____Vcellout__block0__s))))))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__cout 
        = vlSelf->shift_add__DOT__adder_upper__DOT__cout;
    vlSelf->shift_add__DOT__adder_upper__DOT__s = shift_add__DOT____Vcellout__adder_upper__s;
    vlSelf->sum_holder = (((QData)((IData)(shift_add__DOT____Vcellout__adder_upper__s)) 
                           << 0x20U) | (QData)((IData)(shift_add__DOT____Vcellout__adder_lower__s)));
    vlSelf->shift_add__DOT__sum_holder = vlSelf->sum_holder;
}

void Vshift_add___024root___eval_ico(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vshift_add___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vshift_add___024root___eval_triggers__ico(Vshift_add___024root* vlSelf);

bool Vshift_add___024root___eval_phase__ico(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vshift_add___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vshift_add___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vshift_add___024root___eval_act(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vshift_add___024root___nba_sequent__TOP__0(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vdly__count;
    __Vdly__count = 0;
    IData/*31:0*/ __Vdly__b_in;
    __Vdly__b_in = 0;
    CData/*1:0*/ __Vdly__shift_add__DOT__state;
    __Vdly__shift_add__DOT__state = 0;
    // Body
    __Vdly__shift_add__DOT__state = vlSelf->shift_add__DOT__state;
    __Vdly__b_in = vlSelf->b_in;
    __Vdly__count = vlSelf->count;
    if ((0U == (IData)(vlSelf->shift_add__DOT__state))) {
        if (vlSelf->shift_add__DOT__start_pulse) {
            __Vdly__shift_add__DOT__state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->shift_add__DOT__state))) {
        if (vlSelf->done) {
            __Vdly__shift_add__DOT__state = 2U;
        }
    } else {
        __Vdly__shift_add__DOT__state = 0U;
    }
    if (vlSelf->shift_add__DOT__start_pulse) {
        __Vdly__count = 0U;
        __Vdly__b_in = vlSelf->b;
        vlSelf->accumulator = 0ULL;
    } else if (vlSelf->running) {
        __Vdly__count = (0x7fU & ((IData)(1U) + (IData)(vlSelf->count)));
        if ((1U == (1U & (IData)(vlSelf->count)))) {
            if ((1U & vlSelf->b_in)) {
                vlSelf->accumulator = vlSelf->sum_holder;
            }
            __Vdly__b_in = vlSelf->b_shifted;
        } else {
            vlSelf->accumulator = (vlSelf->shifted_upper 
                                   | vlSelf->shift_add__DOT__shifted_lower_corrected);
        }
    }
    vlSelf->shift_add__DOT__state = __Vdly__shift_add__DOT__state;
    vlSelf->count = __Vdly__count;
    vlSelf->b_in = __Vdly__b_in;
    vlSelf->shift_add__DOT__count = vlSelf->count;
    vlSelf->done = ((0x41U == (IData)(vlSelf->count))
                     ? 1U : 0U);
    vlSelf->running = ((1U == (IData)(vlSelf->shift_add__DOT__state)) 
                       & (~ (IData)(vlSelf->done)));
    vlSelf->shift_add__DOT__start_pulse = ((IData)(vlSelf->running)
                                            ? 0U : 
                                           (1U & (IData)(vlSelf->start)));
    vlSelf->shift_add__DOT__b_in = vlSelf->b_in;
    vlSelf->shift_add__DOT__rightshift_b__DOT__stage[0U] 
        = (vlSelf->b_in >> 1U);
    vlSelf->shift_add__DOT__rightshift_b__DOT__stage[1U] 
        = vlSelf->shift_add__DOT__rightshift_b__DOT__stage
        [0U];
    vlSelf->shift_add__DOT__rightshift_b__DOT__stage[2U] 
        = vlSelf->shift_add__DOT__rightshift_b__DOT__stage
        [1U];
    vlSelf->shift_add__DOT__rightshift_b__DOT__stage[3U] 
        = vlSelf->shift_add__DOT__rightshift_b__DOT__stage
        [2U];
    vlSelf->shift_add__DOT__rightshift_b__DOT__stage[4U] 
        = vlSelf->shift_add__DOT__rightshift_b__DOT__stage
        [3U];
    vlSelf->shift_add__DOT__accumulator = vlSelf->accumulator;
    vlSelf->shift_add__DOT__adder_lower__DOT__a = (IData)(
                                                          (vlSelf->accumulator 
                                                           >> 0U));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__a 
        = (0xfU & (IData)((vlSelf->accumulator >> 0U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 1U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 2U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 3U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__a 
        = (0xfU & (IData)((vlSelf->accumulator >> 4U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 4U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 5U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 6U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 7U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__a 
        = (0xfU & (IData)((vlSelf->accumulator >> 8U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 8U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 9U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0xaU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0xbU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__a 
        = (0xfU & (IData)((vlSelf->accumulator >> 0xcU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0xcU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0xdU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0xeU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0xfU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__a 
        = (0xfU & (IData)((vlSelf->accumulator >> 0x10U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x10U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x11U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x12U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x13U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__a 
        = (0xfU & (IData)((vlSelf->accumulator >> 0x14U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x14U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x15U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x16U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x17U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__a 
        = (0xfU & (IData)((vlSelf->accumulator >> 0x18U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x18U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x19U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x1aU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x1bU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__a 
        = (0xfU & (IData)((vlSelf->accumulator >> 0x1cU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x1cU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x1dU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x1eU)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x1fU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__a = (IData)(
                                                          (vlSelf->accumulator 
                                                           >> 0x20U));
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__a 
        = (0xfU & (IData)((vlSelf->accumulator >> 0x20U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x20U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x21U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x22U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x23U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__a 
        = (0xfU & (IData)((vlSelf->accumulator >> 0x24U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x24U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x25U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x26U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x27U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__a 
        = (0xfU & (IData)((vlSelf->accumulator >> 0x28U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x28U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x29U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x2aU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x2bU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__a 
        = (0xfU & (IData)((vlSelf->accumulator >> 0x2cU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x2cU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x2dU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x2eU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x2fU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__a 
        = (0xfU & (IData)((vlSelf->accumulator >> 0x30U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x30U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x31U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x32U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x33U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__a 
        = (0xfU & (IData)((vlSelf->accumulator >> 0x34U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x34U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x35U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x36U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x37U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__a 
        = (0xfU & (IData)((vlSelf->accumulator >> 0x38U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x38U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x39U)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x3aU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x3bU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__a 
        = (0xfU & (IData)((vlSelf->accumulator >> 0x3cU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x3cU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x3dU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x3eU)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->accumulator >> 0x3fU)));
    vlSelf->shift_add__DOT__rightshift_upper__DOT__a 
        = (IData)((vlSelf->accumulator >> 0x20U));
    vlSelf->shift_add__DOT__rightshift_lower__DOT__a 
        = (IData)((vlSelf->accumulator >> 0U));
    vlSelf->shift_add__DOT__rightshift_upper__DOT__stage[0U] 
        = (0x7fffffffU & (IData)((vlSelf->accumulator 
                                  >> 0x21U)));
    vlSelf->shift_add__DOT__rightshift_upper__DOT__stage[1U] 
        = vlSelf->shift_add__DOT__rightshift_upper__DOT__stage
        [0U];
    vlSelf->shift_add__DOT__rightshift_upper__DOT__stage[2U] 
        = vlSelf->shift_add__DOT__rightshift_upper__DOT__stage
        [1U];
    vlSelf->shift_add__DOT__rightshift_upper__DOT__stage[3U] 
        = vlSelf->shift_add__DOT__rightshift_upper__DOT__stage
        [2U];
    vlSelf->shift_add__DOT__rightshift_upper__DOT__stage[4U] 
        = vlSelf->shift_add__DOT__rightshift_upper__DOT__stage
        [3U];
    vlSelf->shift_add__DOT__rightshift_lower__DOT__stage[0U] 
        = (0x7fffffffU & (IData)((vlSelf->accumulator 
                                  >> 1U)));
    vlSelf->shift_add__DOT__rightshift_lower__DOT__stage[1U] 
        = vlSelf->shift_add__DOT__rightshift_lower__DOT__stage
        [0U];
    vlSelf->shift_add__DOT__rightshift_lower__DOT__stage[2U] 
        = vlSelf->shift_add__DOT__rightshift_lower__DOT__stage
        [1U];
    vlSelf->shift_add__DOT__rightshift_lower__DOT__stage[3U] 
        = vlSelf->shift_add__DOT__rightshift_lower__DOT__stage
        [2U];
    vlSelf->shift_add__DOT__rightshift_lower__DOT__stage[4U] 
        = vlSelf->shift_add__DOT__rightshift_lower__DOT__stage
        [3U];
    vlSelf->shift_add__DOT__done = vlSelf->done;
    vlSelf->shift_add__DOT__running = vlSelf->running;
    vlSelf->shift_add__DOT__rightshift_b__DOT__a = vlSelf->shift_add__DOT__b_in;
    vlSelf->b_shifted = vlSelf->shift_add__DOT__rightshift_b__DOT__stage
        [4U];
    vlSelf->shift_add__DOT__rightshift_upper__DOT__y 
        = vlSelf->shift_add__DOT__rightshift_upper__DOT__stage
        [4U];
    vlSelf->shifted_upper = ((0xffffffffULL & vlSelf->shifted_upper) 
                             | ((QData)((IData)(vlSelf->shift_add__DOT__rightshift_upper__DOT__stage
                                                [4U])) 
                                << 0x20U));
    vlSelf->shift_add__DOT__rightshift_lower__DOT__y 
        = vlSelf->shift_add__DOT__rightshift_lower__DOT__stage
        [4U];
    vlSelf->shifted_lower = ((0xffffffff00000000ULL 
                              & vlSelf->shifted_lower) 
                             | (IData)((IData)(vlSelf->shift_add__DOT__rightshift_lower__DOT__stage
                                               [4U])));
    vlSelf->shift_add__DOT__b_shifted = vlSelf->b_shifted;
    vlSelf->shift_add__DOT__shifted_upper = vlSelf->shifted_upper;
    vlSelf->shift_add__DOT__shifted_lower = vlSelf->shifted_lower;
    vlSelf->shift_add__DOT__shifted_lower_corrected 
        = (((QData)((IData)((vlSelf->shifted_lower 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)((((IData)((vlSelf->accumulator 
                                        >> 0x20U)) 
                               << 0x1fU) | (0x7fffffffU 
                                            & (IData)(vlSelf->shifted_lower))))));
    vlSelf->shift_add__DOT__rightshift_b__DOT__y = vlSelf->shift_add__DOT__b_shifted;
}

VL_INLINE_OPT void Vshift_add___024root___nba_sequent__TOP__1(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ shift_add__DOT____Vcellout__adder_lower__s;
    shift_add__DOT____Vcellout__adder_lower__s = 0;
    IData/*31:0*/ shift_add__DOT____Vcellout__adder_upper__s;
    shift_add__DOT____Vcellout__adder_upper__s = 0;
    CData/*3:0*/ shift_add__DOT__adder_lower__DOT____Vcellout__block0__s;
    shift_add__DOT__adder_lower__DOT____Vcellout__block0__s = 0;
    CData/*3:0*/ shift_add__DOT__adder_lower__DOT____Vcellout__block1__s;
    shift_add__DOT__adder_lower__DOT____Vcellout__block1__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT____Vcellinp__block1__cin;
    shift_add__DOT__adder_lower__DOT____Vcellinp__block1__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_lower__DOT____Vcellout__block2__s;
    shift_add__DOT__adder_lower__DOT____Vcellout__block2__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT____Vcellinp__block2__cin;
    shift_add__DOT__adder_lower__DOT____Vcellinp__block2__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_lower__DOT____Vcellout__block3__s;
    shift_add__DOT__adder_lower__DOT____Vcellout__block3__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT____Vcellinp__block3__cin;
    shift_add__DOT__adder_lower__DOT____Vcellinp__block3__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_lower__DOT____Vcellout__block4__s;
    shift_add__DOT__adder_lower__DOT____Vcellout__block4__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT____Vcellinp__block4__cin;
    shift_add__DOT__adder_lower__DOT____Vcellinp__block4__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_lower__DOT____Vcellout__block5__s;
    shift_add__DOT__adder_lower__DOT____Vcellout__block5__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT____Vcellinp__block5__cin;
    shift_add__DOT__adder_lower__DOT____Vcellinp__block5__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_lower__DOT____Vcellout__block6__s;
    shift_add__DOT__adder_lower__DOT____Vcellout__block6__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT____Vcellinp__block6__cin;
    shift_add__DOT__adder_lower__DOT____Vcellinp__block6__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_lower__DOT____Vcellout__block7__s;
    shift_add__DOT__adder_lower__DOT____Vcellout__block7__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT____Vcellinp__block7__cin;
    shift_add__DOT__adder_lower__DOT____Vcellinp__block7__cin = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__G = 0;
    CData/*3:0*/ shift_add__DOT__adder_upper__DOT____Vcellout__block0__s;
    shift_add__DOT__adder_upper__DOT____Vcellout__block0__s = 0;
    CData/*3:0*/ shift_add__DOT__adder_upper__DOT____Vcellout__block1__s;
    shift_add__DOT__adder_upper__DOT____Vcellout__block1__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT____Vcellinp__block1__cin;
    shift_add__DOT__adder_upper__DOT____Vcellinp__block1__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_upper__DOT____Vcellout__block2__s;
    shift_add__DOT__adder_upper__DOT____Vcellout__block2__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT____Vcellinp__block2__cin;
    shift_add__DOT__adder_upper__DOT____Vcellinp__block2__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_upper__DOT____Vcellout__block3__s;
    shift_add__DOT__adder_upper__DOT____Vcellout__block3__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT____Vcellinp__block3__cin;
    shift_add__DOT__adder_upper__DOT____Vcellinp__block3__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_upper__DOT____Vcellout__block4__s;
    shift_add__DOT__adder_upper__DOT____Vcellout__block4__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT____Vcellinp__block4__cin;
    shift_add__DOT__adder_upper__DOT____Vcellinp__block4__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_upper__DOT____Vcellout__block5__s;
    shift_add__DOT__adder_upper__DOT____Vcellout__block5__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT____Vcellinp__block5__cin;
    shift_add__DOT__adder_upper__DOT____Vcellinp__block5__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_upper__DOT____Vcellout__block6__s;
    shift_add__DOT__adder_upper__DOT____Vcellout__block6__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT____Vcellinp__block6__cin;
    shift_add__DOT__adder_upper__DOT____Vcellinp__block6__cin = 0;
    CData/*3:0*/ shift_add__DOT__adder_upper__DOT____Vcellout__block7__s;
    shift_add__DOT__adder_upper__DOT____Vcellout__block7__s = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT____Vcellinp__block7__cin;
    shift_add__DOT__adder_upper__DOT____Vcellinp__block7__cin = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__P;
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__G;
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__P;
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__G;
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__P;
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__G;
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__P;
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__G;
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__G = 0;
    // Body
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__G 
        = (IData)(((vlSelf->accumulator & vlSelf->padded_a) 
                   >> 0x3fU));
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__P 
        = (1U & ((IData)(vlSelf->accumulator) ^ (IData)(vlSelf->padded_a)));
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__P 
        = (IData)(((vlSelf->accumulator ^ vlSelf->padded_a) 
                   >> 0x3fU));
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x3eU)) 
                 & (IData)((vlSelf->padded_a >> 0x3eU))));
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x3eU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x3eU))));
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x3dU)) 
                 & (IData)((vlSelf->padded_a >> 0x3dU))));
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x3dU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x3dU))));
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x3cU)) 
                 & (IData)((vlSelf->padded_a >> 0x3cU))));
    shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x3cU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x3cU))));
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x3bU)) 
                 & (IData)((vlSelf->padded_a >> 0x3bU))));
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x3bU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x3bU))));
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x3aU)) 
                 & (IData)((vlSelf->padded_a >> 0x3aU))));
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x3aU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x3aU))));
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x39U)) 
                 & (IData)((vlSelf->padded_a >> 0x39U))));
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x39U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x39U))));
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x38U)) 
                 & (IData)((vlSelf->padded_a >> 0x38U))));
    shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x38U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x38U))));
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x37U)) 
                 & (IData)((vlSelf->padded_a >> 0x37U))));
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x37U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x37U))));
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x36U)) 
                 & (IData)((vlSelf->padded_a >> 0x36U))));
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x36U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x36U))));
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x35U)) 
                 & (IData)((vlSelf->padded_a >> 0x35U))));
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x35U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x35U))));
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x34U)) 
                 & (IData)((vlSelf->padded_a >> 0x34U))));
    shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x34U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x34U))));
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x33U)) 
                 & (IData)((vlSelf->padded_a >> 0x33U))));
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x33U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x33U))));
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x32U)) 
                 & (IData)((vlSelf->padded_a >> 0x32U))));
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x32U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x32U))));
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x31U)) 
                 & (IData)((vlSelf->padded_a >> 0x31U))));
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x31U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x31U))));
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x30U)) 
                 & (IData)((vlSelf->padded_a >> 0x30U))));
    shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x30U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x30U))));
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2fU)) 
                 & (IData)((vlSelf->padded_a >> 0x2fU))));
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2fU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x2fU))));
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2eU)) 
                 & (IData)((vlSelf->padded_a >> 0x2eU))));
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2eU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x2eU))));
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2dU)) 
                 & (IData)((vlSelf->padded_a >> 0x2dU))));
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2dU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x2dU))));
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2cU)) 
                 & (IData)((vlSelf->padded_a >> 0x2cU))));
    shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2cU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x2cU))));
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2bU)) 
                 & (IData)((vlSelf->padded_a >> 0x2bU))));
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2bU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x2bU))));
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2aU)) 
                 & (IData)((vlSelf->padded_a >> 0x2aU))));
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x2aU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x2aU))));
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x29U)) 
                 & (IData)((vlSelf->padded_a >> 0x29U))));
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x29U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x29U))));
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x28U)) 
                 & (IData)((vlSelf->padded_a >> 0x28U))));
    shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x28U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x28U))));
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x27U)) 
                 & (IData)((vlSelf->padded_a >> 0x27U))));
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x27U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x27U))));
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x26U)) 
                 & (IData)((vlSelf->padded_a >> 0x26U))));
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x26U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x26U))));
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x25U)) 
                 & (IData)((vlSelf->padded_a >> 0x25U))));
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x25U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x25U))));
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x24U)) 
                 & (IData)((vlSelf->padded_a >> 0x24U))));
    shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x24U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x24U))));
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x23U)) 
                 & (IData)((vlSelf->padded_a >> 0x23U))));
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x23U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x23U))));
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x22U)) 
                 & (IData)((vlSelf->padded_a >> 0x22U))));
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x22U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x22U))));
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x21U)) 
                 & (IData)((vlSelf->padded_a >> 0x21U))));
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x21U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x21U))));
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x20U)) 
                 & (IData)((vlSelf->padded_a >> 0x20U))));
    shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x20U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x20U))));
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1fU)) 
                 & (IData)((vlSelf->padded_a >> 0x1fU))));
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1fU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x1fU))));
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1eU)) 
                 & (IData)((vlSelf->padded_a >> 0x1eU))));
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1eU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x1eU))));
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1dU)) 
                 & (IData)((vlSelf->padded_a >> 0x1dU))));
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1dU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x1dU))));
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1cU)) 
                 & (IData)((vlSelf->padded_a >> 0x1cU))));
    shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1cU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x1cU))));
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1bU)) 
                 & (IData)((vlSelf->padded_a >> 0x1bU))));
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1bU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x1bU))));
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1aU)) 
                 & (IData)((vlSelf->padded_a >> 0x1aU))));
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x1aU)) 
                 ^ (IData)((vlSelf->padded_a >> 0x1aU))));
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x19U)) 
                 & (IData)((vlSelf->padded_a >> 0x19U))));
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x19U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x19U))));
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x18U)) 
                 & (IData)((vlSelf->padded_a >> 0x18U))));
    shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x18U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x18U))));
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x17U)) 
                 & (IData)((vlSelf->padded_a >> 0x17U))));
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x17U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x17U))));
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x16U)) 
                 & (IData)((vlSelf->padded_a >> 0x16U))));
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x16U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x16U))));
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x15U)) 
                 & (IData)((vlSelf->padded_a >> 0x15U))));
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x15U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x15U))));
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x14U)) 
                 & (IData)((vlSelf->padded_a >> 0x14U))));
    shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x14U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x14U))));
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x13U)) 
                 & (IData)((vlSelf->padded_a >> 0x13U))));
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x13U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x13U))));
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x12U)) 
                 & (IData)((vlSelf->padded_a >> 0x12U))));
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x12U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x12U))));
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x11U)) 
                 & (IData)((vlSelf->padded_a >> 0x11U))));
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x11U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x11U))));
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0x10U)) 
                 & (IData)((vlSelf->padded_a >> 0x10U))));
    shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0x10U)) 
                 ^ (IData)((vlSelf->padded_a >> 0x10U))));
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0xfU)) 
                 & (IData)((vlSelf->padded_a >> 0xfU))));
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0xfU)) 
                 ^ (IData)((vlSelf->padded_a >> 0xfU))));
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0xeU)) 
                 & (IData)((vlSelf->padded_a >> 0xeU))));
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0xeU)) 
                 ^ (IData)((vlSelf->padded_a >> 0xeU))));
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0xdU)) 
                 & (IData)((vlSelf->padded_a >> 0xdU))));
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0xdU)) 
                 ^ (IData)((vlSelf->padded_a >> 0xdU))));
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0xcU)) 
                 & (IData)((vlSelf->padded_a >> 0xcU))));
    shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0xcU)) 
                 ^ (IData)((vlSelf->padded_a >> 0xcU))));
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0xbU)) 
                 & (IData)((vlSelf->padded_a >> 0xbU))));
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0xbU)) 
                 ^ (IData)((vlSelf->padded_a >> 0xbU))));
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 0xaU)) 
                 & (IData)((vlSelf->padded_a >> 0xaU))));
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 0xaU)) 
                 ^ (IData)((vlSelf->padded_a >> 0xaU))));
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 9U)) 
                 & (IData)((vlSelf->padded_a >> 9U))));
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 9U)) 
                 ^ (IData)((vlSelf->padded_a >> 9U))));
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 8U)) 
                 & (IData)((vlSelf->padded_a >> 8U))));
    shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 8U)) 
                 ^ (IData)((vlSelf->padded_a >> 8U))));
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 7U)) 
                 & (IData)((vlSelf->padded_a >> 7U))));
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 7U)) 
                 ^ (IData)((vlSelf->padded_a >> 7U))));
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 6U)) 
                 & (IData)((vlSelf->padded_a >> 6U))));
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 6U)) 
                 ^ (IData)((vlSelf->padded_a >> 6U))));
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 5U)) 
                 & (IData)((vlSelf->padded_a >> 5U))));
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 5U)) 
                 ^ (IData)((vlSelf->padded_a >> 5U))));
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__G 
        = (1U & ((IData)((vlSelf->accumulator >> 4U)) 
                 & (IData)((vlSelf->padded_a >> 4U))));
    shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->accumulator >> 4U)) 
                 ^ (IData)((vlSelf->padded_a >> 4U))));
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__G 
        = (1U & ((IData)((vlSelf->accumulator >> 3U)) 
                 & (IData)((vlSelf->padded_a >> 3U))));
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->accumulator >> 3U)) 
                 ^ (IData)((vlSelf->padded_a >> 3U))));
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__G 
        = (1U & ((IData)((vlSelf->accumulator >> 2U)) 
                 & (IData)((vlSelf->padded_a >> 2U))));
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->accumulator >> 2U)) 
                 ^ (IData)((vlSelf->padded_a >> 2U))));
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__G 
        = (1U & ((IData)((vlSelf->accumulator >> 1U)) 
                 & (IData)((vlSelf->padded_a >> 1U))));
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->accumulator >> 1U)) 
                 ^ (IData)((vlSelf->padded_a >> 1U))));
    shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__G 
        = (1U & ((IData)(vlSelf->accumulator) & (IData)(vlSelf->padded_a)));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__G 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__P 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__G 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__P 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__G 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__P 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__G 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__P 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__G 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__P 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__G 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__P 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__G 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__P 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__G 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__P 
        = (((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__G 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__P 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__G 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__P 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__G 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__P 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__G 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__P 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__G 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__P 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__G 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__P 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__G 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice0__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__P 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice3__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice3__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice2__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice2__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice1__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice1__DOT__P 
        = shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__P;
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__P 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__P))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice0__DOT__G 
        = shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__G 
        = (((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__G))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c0 
        = shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__G;
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c0))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c1))));
    shift_add__DOT__adder_lower__DOT____Vcellout__block0__s 
        = ((((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c0)) 
                                  << 1U) | (IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice0__P))));
    shift_add__DOT__adder_lower__DOT____Vcellinp__block1__cin 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block0__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c2))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__s 
        = shift_add__DOT__adder_lower__DOT____Vcellout__block0__s;
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__cout 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block1__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__cin 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block1__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block1__cin))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c0))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c1))));
    shift_add__DOT__adder_lower__DOT____Vcellout__block1__s 
        = ((((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block1__cin)))));
    shift_add__DOT__adder_lower__DOT____Vcellinp__block2__cin 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block1__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c2))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__s 
        = shift_add__DOT__adder_lower__DOT____Vcellout__block1__s;
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__cout 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block2__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__cin 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block2__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block2__cin))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c0))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c1))));
    shift_add__DOT__adder_lower__DOT____Vcellout__block2__s 
        = ((((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block2__cin)))));
    shift_add__DOT__adder_lower__DOT____Vcellinp__block3__cin 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block2__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c2))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__s 
        = shift_add__DOT__adder_lower__DOT____Vcellout__block2__s;
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__cout 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block3__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__cin 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block3__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block3__cin))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c0))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c1))));
    shift_add__DOT__adder_lower__DOT____Vcellout__block3__s 
        = ((((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block3__cin)))));
    shift_add__DOT__adder_lower__DOT____Vcellinp__block4__cin 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block3__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c2))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__s 
        = shift_add__DOT__adder_lower__DOT____Vcellout__block3__s;
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__cout 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block4__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__cin 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block4__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block4__cin))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c0))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c1))));
    shift_add__DOT__adder_lower__DOT____Vcellout__block4__s 
        = ((((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block4__cin)))));
    shift_add__DOT__adder_lower__DOT____Vcellinp__block5__cin 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block4__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c2))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__s 
        = shift_add__DOT__adder_lower__DOT____Vcellout__block4__s;
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__cout 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block5__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__cin 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block5__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block5__cin))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c0))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c1))));
    shift_add__DOT__adder_lower__DOT____Vcellout__block5__s 
        = ((((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block5__cin)))));
    shift_add__DOT__adder_lower__DOT____Vcellinp__block6__cin 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block5__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c2))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__s 
        = shift_add__DOT__adder_lower__DOT____Vcellout__block5__s;
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__cout 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block6__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__cin 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block6__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block6__cin))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c0))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c1))));
    shift_add__DOT__adder_lower__DOT____Vcellout__block6__s 
        = ((((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block6__cin)))));
    shift_add__DOT__adder_lower__DOT____Vcellinp__block7__cin 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block6__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c2))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__s 
        = shift_add__DOT__adder_lower__DOT____Vcellout__block6__s;
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__cout 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block7__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__cin 
        = shift_add__DOT__adder_lower__DOT____Vcellinp__block7__cin;
    vlSelf->shift_add__DOT__adder_lower__DOT__c = (
                                                   ((IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block7__cin) 
                                                    << 6U) 
                                                   | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block6__cin) 
                                                       << 5U) 
                                                      | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block5__cin) 
                                                          << 4U) 
                                                         | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block4__cin) 
                                                             << 3U) 
                                                            | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block3__cin) 
                                                                << 2U) 
                                                               | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block2__cin) 
                                                                   << 1U) 
                                                                  | (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block1__cin)))))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block7__cin))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c0))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c1))));
    shift_add__DOT__adder_lower__DOT____Vcellout__block7__s 
        = ((((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_lower__DOT____Vcellinp__block7__cin)))));
    vlSelf->shift_add__DOT__cout_lower = (1U & ((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__G) 
                                                + ((IData)(shift_add__DOT__adder_lower__DOT__block7__DOT____Vcellout__slice3__P) 
                                                   * (IData)(vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c2))));
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__s 
        = shift_add__DOT__adder_lower__DOT____Vcellout__block7__s;
    shift_add__DOT____Vcellout__adder_lower__s = (((IData)(shift_add__DOT__adder_lower__DOT____Vcellout__block7__s) 
                                                   << 0x1cU) 
                                                  | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellout__block6__s) 
                                                      << 0x18U) 
                                                     | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellout__block5__s) 
                                                         << 0x14U) 
                                                        | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellout__block4__s) 
                                                            << 0x10U) 
                                                           | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellout__block3__s) 
                                                               << 0xcU) 
                                                              | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellout__block2__s) 
                                                                  << 8U) 
                                                                 | (((IData)(shift_add__DOT__adder_lower__DOT____Vcellout__block1__s) 
                                                                     << 4U) 
                                                                    | (IData)(shift_add__DOT__adder_lower__DOT____Vcellout__block0__s))))))));
    vlSelf->shift_add__DOT__adder_upper__DOT__cin = vlSelf->shift_add__DOT__cout_lower;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__cin 
        = vlSelf->shift_add__DOT__cout_lower;
    vlSelf->shift_add__DOT__adder_upper__DOT__cin_effective 
        = vlSelf->shift_add__DOT__cout_lower;
    vlSelf->shift_add__DOT__adder_lower__DOT__cout 
        = vlSelf->shift_add__DOT__cout_lower;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__P) 
                    * (IData)(vlSelf->shift_add__DOT__cout_lower))));
    vlSelf->shift_add__DOT__adder_lower__DOT__s = shift_add__DOT____Vcellout__adder_lower__s;
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__cout 
        = vlSelf->shift_add__DOT__adder_lower__DOT__cout;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c0))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c1))));
    shift_add__DOT__adder_upper__DOT____Vcellout__block0__s 
        = ((((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(vlSelf->shift_add__DOT__cout_lower)))));
    shift_add__DOT__adder_upper__DOT____Vcellinp__block1__cin 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block0__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c2))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__s 
        = shift_add__DOT__adder_upper__DOT____Vcellout__block0__s;
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__cout 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block1__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__cin 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block1__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block1__cin))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c0))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c1))));
    shift_add__DOT__adder_upper__DOT____Vcellout__block1__s 
        = ((((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block1__cin)))));
    shift_add__DOT__adder_upper__DOT____Vcellinp__block2__cin 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block1__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c2))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__s 
        = shift_add__DOT__adder_upper__DOT____Vcellout__block1__s;
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__cout 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block2__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__cin 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block2__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block2__cin))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c0))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c1))));
    shift_add__DOT__adder_upper__DOT____Vcellout__block2__s 
        = ((((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block2__cin)))));
    shift_add__DOT__adder_upper__DOT____Vcellinp__block3__cin 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block2__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c2))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__s 
        = shift_add__DOT__adder_upper__DOT____Vcellout__block2__s;
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__cout 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block3__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__cin 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block3__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block3__cin))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c0))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c1))));
    shift_add__DOT__adder_upper__DOT____Vcellout__block3__s 
        = ((((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block3__cin)))));
    shift_add__DOT__adder_upper__DOT____Vcellinp__block4__cin 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block3__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c2))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__s 
        = shift_add__DOT__adder_upper__DOT____Vcellout__block3__s;
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__cout 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block4__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__cin 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block4__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block4__cin))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c0))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c1))));
    shift_add__DOT__adder_upper__DOT____Vcellout__block4__s 
        = ((((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block4__cin)))));
    shift_add__DOT__adder_upper__DOT____Vcellinp__block5__cin 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block4__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c2))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__s 
        = shift_add__DOT__adder_upper__DOT____Vcellout__block4__s;
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__cout 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block5__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__cin 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block5__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block5__cin))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c0))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c1))));
    shift_add__DOT__adder_upper__DOT____Vcellout__block5__s 
        = ((((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block5__cin)))));
    shift_add__DOT__adder_upper__DOT____Vcellinp__block6__cin 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block5__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c2))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__s 
        = shift_add__DOT__adder_upper__DOT____Vcellout__block5__s;
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__cout 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block6__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__cin 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block6__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block6__cin))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c0))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c1))));
    shift_add__DOT__adder_upper__DOT____Vcellout__block6__s 
        = ((((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block6__cin)))));
    shift_add__DOT__adder_upper__DOT____Vcellinp__block7__cin 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block6__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c2))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__s 
        = shift_add__DOT__adder_upper__DOT____Vcellout__block6__s;
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__cout 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block7__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__cin 
        = shift_add__DOT__adder_upper__DOT____Vcellinp__block7__cin;
    vlSelf->shift_add__DOT__adder_upper__DOT__c = (
                                                   ((IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block7__cin) 
                                                    << 6U) 
                                                   | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block6__cin) 
                                                       << 5U) 
                                                      | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block5__cin) 
                                                          << 4U) 
                                                         | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block4__cin) 
                                                             << 3U) 
                                                            | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block3__cin) 
                                                                << 2U) 
                                                               | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block2__cin) 
                                                                   << 1U) 
                                                                  | (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block1__cin)))))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c0 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__P) 
                    * (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block7__cin))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c1 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c0))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c2 
        = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__G) 
                 + ((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c1))));
    vlSelf->shift_add__DOT__cout_upper = (1U & ((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__G) 
                                                + ((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__P) 
                                                   * (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c2))));
    shift_add__DOT__adder_upper__DOT____Vcellout__block7__s 
        = ((((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c2)) 
            << 3U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c1)) 
                       << 2U) | ((((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c0)) 
                                  << 1U) | ((IData)(shift_add__DOT__adder_upper__DOT__block7__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(shift_add__DOT__adder_upper__DOT____Vcellinp__block7__cin)))));
    vlSelf->shift_add__DOT__adder_upper__DOT__cout 
        = vlSelf->shift_add__DOT__cout_upper;
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__s 
        = shift_add__DOT__adder_upper__DOT____Vcellout__block7__s;
    shift_add__DOT____Vcellout__adder_upper__s = (((IData)(shift_add__DOT__adder_upper__DOT____Vcellout__block7__s) 
                                                   << 0x1cU) 
                                                  | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellout__block6__s) 
                                                      << 0x18U) 
                                                     | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellout__block5__s) 
                                                         << 0x14U) 
                                                        | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellout__block4__s) 
                                                            << 0x10U) 
                                                           | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellout__block3__s) 
                                                               << 0xcU) 
                                                              | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellout__block2__s) 
                                                                  << 8U) 
                                                                 | (((IData)(shift_add__DOT__adder_upper__DOT____Vcellout__block1__s) 
                                                                     << 4U) 
                                                                    | (IData)(shift_add__DOT__adder_upper__DOT____Vcellout__block0__s))))))));
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__cout 
        = vlSelf->shift_add__DOT__adder_upper__DOT__cout;
    vlSelf->shift_add__DOT__adder_upper__DOT__s = shift_add__DOT____Vcellout__adder_upper__s;
    vlSelf->sum_holder = (((QData)((IData)(shift_add__DOT____Vcellout__adder_upper__s)) 
                           << 0x20U) | (QData)((IData)(shift_add__DOT____Vcellout__adder_lower__s)));
    vlSelf->shift_add__DOT__sum_holder = vlSelf->sum_holder;
}

void Vshift_add___024root___eval_nba(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vshift_add___024root___nba_sequent__TOP__0(vlSelf);
        Vshift_add___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vshift_add___024root___eval_triggers__act(Vshift_add___024root* vlSelf);

bool Vshift_add___024root___eval_phase__act(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vshift_add___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vshift_add___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vshift_add___024root___eval_phase__nba(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vshift_add___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_add___024root___dump_triggers__ico(Vshift_add___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_add___024root___dump_triggers__nba(Vshift_add___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_add___024root___dump_triggers__act(Vshift_add___024root* vlSelf);
#endif  // VL_DEBUG

void Vshift_add___024root___eval(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___eval\n"); );
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
            Vshift_add___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("shift_add.sv", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vshift_add___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vshift_add___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("shift_add.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vshift_add___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("shift_add.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vshift_add___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vshift_add___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vshift_add___024root___eval_debug_assertions(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
