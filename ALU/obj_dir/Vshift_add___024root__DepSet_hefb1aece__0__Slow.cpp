// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift_add.h for the primary calling header

#include "Vshift_add__pch.h"
#include "Vshift_add___024root.h"

VL_ATTR_COLD void Vshift_add___024root___eval_static(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vshift_add___024root___eval_initial__TOP(Vshift_add___024root* vlSelf);

VL_ATTR_COLD void Vshift_add___024root___eval_initial(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___eval_initial\n"); );
    // Body
    Vshift_add___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vshift_add___024root___eval_initial__TOP(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->shift_add__DOT__adder_lower__DOT__cin_effective = 0U;
    vlSelf->shift_add__DOT__adder_lower__DOT__Subtract = 0U;
    vlSelf->shift_add__DOT__adder_lower__DOT__cin = 0U;
    vlSelf->shift_add__DOT__adder_upper__DOT__Subtract = 0U;
    vlSelf->shift_add__DOT__rightshift_upper__DOT__shamt = 1U;
    vlSelf->shift_add__DOT__rightshift_lower__DOT__shamt = 1U;
    vlSelf->shift_add__DOT__rightshift_b__DOT__shamt = 1U;
}

VL_ATTR_COLD void Vshift_add___024root___eval_final(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_add___024root___dump_triggers__stl(Vshift_add___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vshift_add___024root___eval_phase__stl(Vshift_add___024root* vlSelf);

VL_ATTR_COLD void Vshift_add___024root___eval_settle(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vshift_add___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("shift_add.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vshift_add___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_add___024root___dump_triggers__stl(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vshift_add___024root___stl_sequent__TOP__0(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___stl_sequent__TOP__0\n"); );
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
    vlSelf->shift_add__DOT__count = vlSelf->count;
    vlSelf->shift_add__DOT__accumulator = vlSelf->accumulator;
    vlSelf->shift_add__DOT__adder_lower__DOT__a = (IData)(
                                                          (vlSelf->accumulator 
                                                           >> 0U));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__a 
        = (0xfU & (IData)((vlSelf->accumulator >> 0U)));
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__cin 
        = vlSelf->shift_add__DOT__adder_lower__DOT__cin_effective;
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
    vlSelf->shift_add__DOT__b_in = vlSelf->b_in;
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
    vlSelf->done = ((0x41U == (IData)(vlSelf->count))
                     ? 1U : 0U);
    vlSelf->running = ((1U == (IData)(vlSelf->shift_add__DOT__state)) 
                       & (~ (IData)(vlSelf->done)));
    vlSelf->shift_add__DOT__start_pulse = ((IData)(vlSelf->running)
                                            ? 0U : 
                                           (1U & (IData)(vlSelf->start)));
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
    vlSelf->padded_a = ((QData)((IData)(vlSelf->a)) 
                        << 0x20U);
    vlSelf->shift_add__DOT__rightshift_b__DOT__a = vlSelf->shift_add__DOT__b_in;
    vlSelf->shift_add__DOT__rightshift_upper__DOT__y 
        = vlSelf->shift_add__DOT__rightshift_upper__DOT__stage
        [4U];
    vlSelf->shifted_upper = ((0xffffffffULL & vlSelf->shifted_upper) 
                             | ((QData)((IData)(vlSelf->shift_add__DOT__rightshift_upper__DOT__stage
                                                [4U])) 
                                << 0x20U));
    vlSelf->b_shifted = vlSelf->shift_add__DOT__rightshift_b__DOT__stage
        [4U];
    vlSelf->shift_add__DOT__done = vlSelf->done;
    vlSelf->shift_add__DOT__running = vlSelf->running;
    vlSelf->shift_add__DOT__rightshift_lower__DOT__y 
        = vlSelf->shift_add__DOT__rightshift_lower__DOT__stage
        [4U];
    vlSelf->shifted_lower = ((0xffffffff00000000ULL 
                              & vlSelf->shifted_lower) 
                             | (IData)((IData)(vlSelf->shift_add__DOT__rightshift_lower__DOT__stage
                                               [4U])));
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
    vlSelf->shift_add__DOT__shifted_upper = vlSelf->shifted_upper;
    vlSelf->shift_add__DOT__b_shifted = vlSelf->b_shifted;
    vlSelf->shift_add__DOT__shifted_lower = vlSelf->shifted_lower;
    vlSelf->shift_add__DOT__shifted_lower_corrected 
        = (((QData)((IData)((vlSelf->shifted_lower 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)((((IData)((vlSelf->accumulator 
                                        >> 0x20U)) 
                               << 0x1fU) | (0x7fffffffU 
                                            & (IData)(vlSelf->shifted_lower))))));
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
    vlSelf->shift_add__DOT__rightshift_b__DOT__y = vlSelf->shift_add__DOT__b_shifted;
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

VL_ATTR_COLD void Vshift_add___024root___eval_stl(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vshift_add___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vshift_add___024root___eval_triggers__stl(Vshift_add___024root* vlSelf);

VL_ATTR_COLD bool Vshift_add___024root___eval_phase__stl(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vshift_add___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vshift_add___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_add___024root___dump_triggers__ico(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_add___024root___dump_triggers__act(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_add___024root___dump_triggers__nba(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vshift_add___024root___ctor_var_reset(Vshift_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_add___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->a = VL_RAND_RESET_I(32);
    vlSelf->b = VL_RAND_RESET_I(32);
    vlSelf->count = VL_RAND_RESET_I(7);
    vlSelf->accumulator = VL_RAND_RESET_Q(64);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->running = VL_RAND_RESET_I(1);
    vlSelf->padded_a = VL_RAND_RESET_Q(64);
    vlSelf->sum_holder = VL_RAND_RESET_Q(64);
    vlSelf->shifted_upper = VL_RAND_RESET_Q(64);
    vlSelf->shifted_lower = VL_RAND_RESET_Q(64);
    vlSelf->b_in = VL_RAND_RESET_I(32);
    vlSelf->b_shifted = VL_RAND_RESET_I(32);
    vlSelf->shift_add__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->shift_add__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->shift_add__DOT__count = VL_RAND_RESET_I(7);
    vlSelf->shift_add__DOT__accumulator = VL_RAND_RESET_Q(64);
    vlSelf->shift_add__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__padded_a = VL_RAND_RESET_Q(64);
    vlSelf->shift_add__DOT__sum_holder = VL_RAND_RESET_Q(64);
    vlSelf->shift_add__DOT__shifted_upper = VL_RAND_RESET_Q(64);
    vlSelf->shift_add__DOT__shifted_lower = VL_RAND_RESET_Q(64);
    vlSelf->shift_add__DOT__b_in = VL_RAND_RESET_I(32);
    vlSelf->shift_add__DOT__b_shifted = VL_RAND_RESET_I(32);
    vlSelf->shift_add__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->shift_add__DOT__shifted_lower_corrected = VL_RAND_RESET_Q(64);
    vlSelf->shift_add__DOT__cout_lower = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__cout_upper = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__start_pulse = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->shift_add__DOT__adder_lower__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->shift_add__DOT__adder_lower__DOT__Subtract = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__s = VL_RAND_RESET_I(32);
    vlSelf->shift_add__DOT__adder_lower__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->shift_add__DOT__adder_lower__DOT__b_in = VL_RAND_RESET_I(32);
    vlSelf->shift_add__DOT__adder_lower__DOT__cin_effective = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block0__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block1__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block2__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block3__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block4__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block5__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block6__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_lower__DOT__block7__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->shift_add__DOT__adder_upper__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->shift_add__DOT__adder_upper__DOT__Subtract = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__s = VL_RAND_RESET_I(32);
    vlSelf->shift_add__DOT__adder_upper__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->shift_add__DOT__adder_upper__DOT__b_in = VL_RAND_RESET_I(32);
    vlSelf->shift_add__DOT__adder_upper__DOT__cin_effective = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block0__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block1__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block2__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block3__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block4__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block5__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block6__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__adder_upper__DOT__block7__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->shift_add__DOT__rightshift_upper__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->shift_add__DOT__rightshift_upper__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->shift_add__DOT__rightshift_upper__DOT__y = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->shift_add__DOT__rightshift_upper__DOT__stage[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->shift_add__DOT__rightshift_lower__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->shift_add__DOT__rightshift_lower__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->shift_add__DOT__rightshift_lower__DOT__y = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->shift_add__DOT__rightshift_lower__DOT__stage[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->shift_add__DOT__rightshift_b__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->shift_add__DOT__rightshift_b__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->shift_add__DOT__rightshift_b__DOT__y = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->shift_add__DOT__rightshift_b__DOT__stage[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
