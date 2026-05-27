// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultiplier.h for the primary calling header

#include "Vmultiplier__pch.h"
#include "Vmultiplier___024root.h"

VL_ATTR_COLD void Vmultiplier___024root___eval_static(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmultiplier___024root___eval_initial__TOP(Vmultiplier___024root* vlSelf);

VL_ATTR_COLD void Vmultiplier___024root___eval_initial(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_initial\n"); );
    // Body
    Vmultiplier___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vmultiplier___024root___eval_initial__TOP(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice0__DOT__a = 0U;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice0__DOT__G = 0U;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__cin_effective = 0U;
    vlSelf->multiplier__DOT__booth0__DOT__shamt = 0U;
    vlSelf->multiplier__DOT__booth1__DOT__shamt = 2U;
    vlSelf->multiplier__DOT__booth2__DOT__shamt = 4U;
    vlSelf->multiplier__DOT__booth3__DOT__shamt = 6U;
    vlSelf->multiplier__DOT__booth4__DOT__shamt = 8U;
    vlSelf->multiplier__DOT__booth5__DOT__shamt = 0xaU;
    vlSelf->multiplier__DOT__booth6__DOT__shamt = 0xcU;
    vlSelf->multiplier__DOT__booth7__DOT__shamt = 0xeU;
    vlSelf->multiplier__DOT__booth8__DOT__shamt = 0x10U;
    vlSelf->multiplier__DOT__booth9__DOT__shamt = 0x12U;
    vlSelf->multiplier__DOT__booth10__DOT__shamt = 0x14U;
    vlSelf->multiplier__DOT__booth11__DOT__shamt = 0x16U;
    vlSelf->multiplier__DOT__booth12__DOT__shamt = 0x18U;
    vlSelf->multiplier__DOT__booth13__DOT__shamt = 0x1aU;
    vlSelf->multiplier__DOT__booth14__DOT__shamt = 0x1cU;
    vlSelf->multiplier__DOT__booth15__DOT__shamt = 0x1eU;
    vlSelf->multiplier__DOT__booth16__DOT__shamt = 0x20U;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__Subtract = 0U;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__cin = 0U;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__Subtract = 0U;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c0 = 0U;
}

VL_ATTR_COLD void Vmultiplier___024root___eval_final(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier___024root___dump_triggers__stl(Vmultiplier___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmultiplier___024root___eval_phase__stl(Vmultiplier___024root* vlSelf);

VL_ATTR_COLD void Vmultiplier___024root___eval_settle(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_settle\n"); );
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
            Vmultiplier___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("multiplier.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmultiplier___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier___024root___dump_triggers__stl(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmultiplier___024root___stl_sequent__TOP__0(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___stl_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ multiplier__DOT____Vcellout__booth0__partial_product;
    multiplier__DOT____Vcellout__booth0__partial_product = 0;
    QData/*63:0*/ multiplier__DOT____Vcellout__booth1__partial_product;
    multiplier__DOT____Vcellout__booth1__partial_product = 0;
    QData/*63:0*/ multiplier__DOT____Vcellout__booth2__partial_product;
    multiplier__DOT____Vcellout__booth2__partial_product = 0;
    QData/*63:0*/ multiplier__DOT____Vcellout__booth3__partial_product;
    multiplier__DOT____Vcellout__booth3__partial_product = 0;
    QData/*63:0*/ multiplier__DOT____Vcellout__booth4__partial_product;
    multiplier__DOT____Vcellout__booth4__partial_product = 0;
    QData/*63:0*/ multiplier__DOT____Vcellout__booth5__partial_product;
    multiplier__DOT____Vcellout__booth5__partial_product = 0;
    QData/*63:0*/ multiplier__DOT____Vcellout__booth6__partial_product;
    multiplier__DOT____Vcellout__booth6__partial_product = 0;
    QData/*63:0*/ multiplier__DOT____Vcellout__booth7__partial_product;
    multiplier__DOT____Vcellout__booth7__partial_product = 0;
    QData/*63:0*/ multiplier__DOT____Vcellout__booth8__partial_product;
    multiplier__DOT____Vcellout__booth8__partial_product = 0;
    QData/*63:0*/ multiplier__DOT____Vcellout__booth9__partial_product;
    multiplier__DOT____Vcellout__booth9__partial_product = 0;
    QData/*63:0*/ multiplier__DOT____Vcellout__booth10__partial_product;
    multiplier__DOT____Vcellout__booth10__partial_product = 0;
    QData/*63:0*/ multiplier__DOT____Vcellout__booth11__partial_product;
    multiplier__DOT____Vcellout__booth11__partial_product = 0;
    QData/*63:0*/ multiplier__DOT____Vcellout__booth12__partial_product;
    multiplier__DOT____Vcellout__booth12__partial_product = 0;
    QData/*63:0*/ multiplier__DOT____Vcellout__booth13__partial_product;
    multiplier__DOT____Vcellout__booth13__partial_product = 0;
    QData/*63:0*/ multiplier__DOT____Vcellout__booth14__partial_product;
    multiplier__DOT____Vcellout__booth14__partial_product = 0;
    QData/*63:0*/ multiplier__DOT____Vcellout__booth15__partial_product;
    multiplier__DOT____Vcellout__booth15__partial_product = 0;
    QData/*63:0*/ multiplier__DOT____Vcellout__booth16__partial_product;
    multiplier__DOT____Vcellout__booth16__partial_product = 0;
    CData/*2:0*/ multiplier__DOT____Vcellinp__booth16__triplet;
    multiplier__DOT____Vcellinp__booth16__triplet = 0;
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
    vlSelf->multiplier__DOT__b = vlSelf->b;
    vlSelf->multiplier__DOT__rst = vlSelf->rst;
    vlSelf->multiplier__DOT__clk = vlSelf->clk;
    vlSelf->multiplier__DOT__output_product = vlSelf->output_product;
    vlSelf->multiplier__DOT__done = vlSelf->done;
    vlSelf->multiplier__DOT__running = vlSelf->running;
    vlSelf->multiplier__DOT__booth0__DOT__triplet = 
        (((3U & (IData)((vlSelf->b >> 0U))) << 1U) 
         | 0U);
    vlSelf->multiplier__DOT__booth1__DOT__triplet = 
        (7U & (IData)((vlSelf->b >> 1U)));
    vlSelf->multiplier__DOT__booth2__DOT__triplet = 
        (7U & (IData)((vlSelf->b >> 3U)));
    vlSelf->multiplier__DOT__booth3__DOT__triplet = 
        (7U & (IData)((vlSelf->b >> 5U)));
    vlSelf->multiplier__DOT__booth4__DOT__triplet = 
        (7U & (IData)((vlSelf->b >> 7U)));
    vlSelf->multiplier__DOT__booth5__DOT__triplet = 
        (7U & (IData)((vlSelf->b >> 9U)));
    vlSelf->multiplier__DOT__booth6__DOT__triplet = 
        (7U & (IData)((vlSelf->b >> 0xbU)));
    vlSelf->multiplier__DOT__booth7__DOT__triplet = 
        (7U & (IData)((vlSelf->b >> 0xdU)));
    vlSelf->multiplier__DOT__booth8__DOT__triplet = 
        (7U & (IData)((vlSelf->b >> 0xfU)));
    vlSelf->multiplier__DOT__booth9__DOT__triplet = 
        (7U & (IData)((vlSelf->b >> 0x11U)));
    vlSelf->multiplier__DOT__booth10__DOT__triplet 
        = (7U & (IData)((vlSelf->b >> 0x13U)));
    vlSelf->multiplier__DOT__booth11__DOT__triplet 
        = (7U & (IData)((vlSelf->b >> 0x15U)));
    vlSelf->multiplier__DOT__booth12__DOT__triplet 
        = (7U & (IData)((vlSelf->b >> 0x17U)));
    vlSelf->multiplier__DOT__booth13__DOT__triplet 
        = (7U & (IData)((vlSelf->b >> 0x19U)));
    vlSelf->multiplier__DOT__booth14__DOT__triplet 
        = (7U & (IData)((vlSelf->b >> 0x1bU)));
    vlSelf->multiplier__DOT__booth15__DOT__triplet 
        = (7U & (IData)((vlSelf->b >> 0x1dU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__a 
        = VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                           >> 0U)), 1U);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__b 
        = (IData)((vlSelf->multiplier__DOT__s13 >> 0U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__a 
        = (0xfU & VL_SHIFTL_III(4,4,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                 >> 0U)), 1U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 0U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__cin 
        = vlSelf->multiplier__DOT__fast_adder_lower__DOT__cin_effective;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice0__DOT__P 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 1U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 1U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 2U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 2U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 3U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 3U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, (IData)(
                                                   (vlSelf->multiplier__DOT__c13 
                                                    >> 0U)), 1U) 
                   >> 4U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 4U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 4U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 4U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 5U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 5U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 6U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 6U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 7U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 7U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, (IData)(
                                                   (vlSelf->multiplier__DOT__c13 
                                                    >> 0U)), 1U) 
                   >> 8U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 8U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 8U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 8U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 9U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 9U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0xaU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0xaU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0xbU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0xbU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, (IData)(
                                                   (vlSelf->multiplier__DOT__c13 
                                                    >> 0U)), 1U) 
                   >> 0xcU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 0xcU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0xcU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0xcU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0xdU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0xdU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0xeU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0xeU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0xfU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0xfU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, (IData)(
                                                   (vlSelf->multiplier__DOT__c13 
                                                    >> 0U)), 1U) 
                   >> 0x10U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 0x10U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x10U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x10U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x11U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x11U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x12U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x12U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x13U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x13U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, (IData)(
                                                   (vlSelf->multiplier__DOT__c13 
                                                    >> 0U)), 1U) 
                   >> 0x14U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 0x14U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x14U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x14U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x15U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x15U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x16U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x16U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x17U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x17U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, (IData)(
                                                   (vlSelf->multiplier__DOT__c13 
                                                    >> 0U)), 1U) 
                   >> 0x18U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 0x18U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x18U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x18U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x19U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x19U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x1aU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x1aU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x1bU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice3__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x1bU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, (IData)(
                                                   (vlSelf->multiplier__DOT__c13 
                                                    >> 0U)), 1U) 
                   >> 0x1cU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__b 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__s13 
                           >> 0x1cU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x1cU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice0__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x1cU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x1dU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice1__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x1dU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x1eU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice2__DOT__b 
        = (1U & (IData)((vlSelf->multiplier__DOT__s13 
                         >> 0x1eU)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, (IData)((vlSelf->multiplier__DOT__c13 
                                                  >> 0U)), 1U) 
                 >> 0x1fU));
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
    vlSelf->multiplier__DOT__cs0 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c0, 1U);
    vlSelf->multiplier__DOT__cs1 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c1, 1U);
    vlSelf->multiplier__DOT__cs2 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c2, 1U);
    vlSelf->multiplier__DOT__cs3 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c3, 1U);
    vlSelf->multiplier__DOT__cs4 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c4, 1U);
    vlSelf->multiplier__DOT__cs5 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c5, 1U);
    vlSelf->multiplier__DOT__cs6 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c6, 1U);
    vlSelf->multiplier__DOT__cs7 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c7, 1U);
    vlSelf->multiplier__DOT__cs14 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c14, 1U);
    vlSelf->multiplier__DOT__cs8 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c8, 1U);
    vlSelf->multiplier__DOT__cs9 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c9, 1U);
    vlSelf->multiplier__DOT__cs10 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c10, 1U);
    vlSelf->multiplier__DOT__cs11 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c11, 1U);
    vlSelf->multiplier__DOT__cs12 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c12, 1U);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__b_in 
        = (IData)(vlSelf->multiplier__DOT__s13);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__b_in 
        = (IData)((vlSelf->multiplier__DOT__s13 >> 0x20U));
    if (vlSelf->unsignedA) {
        vlSelf->multiplier__DOT__booth0__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->multiplier__DOT__booth1__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->multiplier__DOT__booth2__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->multiplier__DOT__booth3__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->multiplier__DOT__booth4__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->multiplier__DOT__booth5__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->multiplier__DOT__booth6__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->multiplier__DOT__booth7__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->multiplier__DOT__booth8__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->multiplier__DOT__booth9__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->multiplier__DOT__booth10__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->multiplier__DOT__booth11__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->multiplier__DOT__booth12__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->multiplier__DOT__booth13__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->multiplier__DOT__booth14__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->multiplier__DOT__booth15__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->multiplier__DOT__booth16__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
    } else {
        vlSelf->multiplier__DOT__booth0__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->multiplier__DOT__booth1__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->multiplier__DOT__booth2__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->multiplier__DOT__booth3__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->multiplier__DOT__booth4__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->multiplier__DOT__booth5__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->multiplier__DOT__booth6__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->multiplier__DOT__booth7__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->multiplier__DOT__booth8__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->multiplier__DOT__booth9__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->multiplier__DOT__booth10__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->multiplier__DOT__booth11__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->multiplier__DOT__booth12__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->multiplier__DOT__booth13__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->multiplier__DOT__booth14__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->multiplier__DOT__booth15__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->multiplier__DOT__booth16__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
    }
    vlSelf->multiplier__DOT__booth0__DOT__minus_a = 
        (1ULL + (~ vlSelf->multiplier__DOT__booth0__DOT__sign_ext_a));
    vlSelf->multiplier__DOT__booth0__DOT__product = 
        ((1U & (IData)((vlSelf->b >> 1U))) ? ((1U & (IData)(vlSelf->b))
                                               ? vlSelf->multiplier__DOT__booth0__DOT__minus_a
                                               : (((QData)((IData)(
                                                                   (0x7fffffffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth0__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                                   << 0x21U) 
                                                  | ((QData)((IData)(vlSelf->multiplier__DOT__booth0__DOT__minus_a)) 
                                                     << 1U)))
          : ((1U & (IData)(vlSelf->b)) ? vlSelf->multiplier__DOT__booth0__DOT__sign_ext_a
              : 0ULL));
    multiplier__DOT____Vcellout__booth0__partial_product 
        = vlSelf->multiplier__DOT__booth0__DOT__product;
    vlSelf->multiplier__DOT__booth1__DOT__minus_a = 
        (1ULL + (~ vlSelf->multiplier__DOT__booth1__DOT__sign_ext_a));
    vlSelf->multiplier__DOT__booth1__DOT__product = 
        ((1U & (IData)((vlSelf->b >> 3U))) ? ((1U & (IData)(
                                                            (vlSelf->b 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->b 
                                                              >> 1U)))
                                                   ? 0ULL
                                                   : vlSelf->multiplier__DOT__booth1__DOT__minus_a)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->b 
                                                              >> 1U)))
                                                   ? vlSelf->multiplier__DOT__booth1__DOT__minus_a
                                                   : 
                                                  (((QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth1__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                                    << 0x21U) 
                                                   | ((QData)((IData)(vlSelf->multiplier__DOT__booth1__DOT__minus_a)) 
                                                      << 1U))))
          : ((1U & (IData)((vlSelf->b >> 2U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->b 
                                                              >> 1U)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth1__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                                    << 0x21U) 
                                                   | ((QData)((IData)(vlSelf->multiplier__DOT__booth1__DOT__sign_ext_a)) 
                                                      << 1U))
                                                   : vlSelf->multiplier__DOT__booth1__DOT__sign_ext_a)
              : ((1U & (IData)((vlSelf->b >> 1U))) ? vlSelf->multiplier__DOT__booth1__DOT__sign_ext_a
                  : 0ULL)));
    multiplier__DOT____Vcellout__booth1__partial_product 
        = (vlSelf->multiplier__DOT__booth1__DOT__product 
           << 2U);
    vlSelf->multiplier__DOT__booth2__DOT__minus_a = 
        (1ULL + (~ vlSelf->multiplier__DOT__booth2__DOT__sign_ext_a));
    vlSelf->multiplier__DOT__booth2__DOT__product = 
        ((1U & (IData)((vlSelf->b >> 5U))) ? ((1U & (IData)(
                                                            (vlSelf->b 
                                                             >> 4U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->b 
                                                              >> 3U)))
                                                   ? 0ULL
                                                   : vlSelf->multiplier__DOT__booth2__DOT__minus_a)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->b 
                                                              >> 3U)))
                                                   ? vlSelf->multiplier__DOT__booth2__DOT__minus_a
                                                   : 
                                                  (((QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth2__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                                    << 0x21U) 
                                                   | ((QData)((IData)(vlSelf->multiplier__DOT__booth2__DOT__minus_a)) 
                                                      << 1U))))
          : ((1U & (IData)((vlSelf->b >> 4U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->b 
                                                              >> 3U)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth2__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                                    << 0x21U) 
                                                   | ((QData)((IData)(vlSelf->multiplier__DOT__booth2__DOT__sign_ext_a)) 
                                                      << 1U))
                                                   : vlSelf->multiplier__DOT__booth2__DOT__sign_ext_a)
              : ((1U & (IData)((vlSelf->b >> 3U))) ? vlSelf->multiplier__DOT__booth2__DOT__sign_ext_a
                  : 0ULL)));
    multiplier__DOT____Vcellout__booth2__partial_product 
        = (vlSelf->multiplier__DOT__booth2__DOT__product 
           << 4U);
    vlSelf->multiplier__DOT__booth3__DOT__minus_a = 
        (1ULL + (~ vlSelf->multiplier__DOT__booth3__DOT__sign_ext_a));
    vlSelf->multiplier__DOT__booth3__DOT__product = 
        ((1U & (IData)((vlSelf->b >> 7U))) ? ((1U & (IData)(
                                                            (vlSelf->b 
                                                             >> 6U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->b 
                                                              >> 5U)))
                                                   ? 0ULL
                                                   : vlSelf->multiplier__DOT__booth3__DOT__minus_a)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->b 
                                                              >> 5U)))
                                                   ? vlSelf->multiplier__DOT__booth3__DOT__minus_a
                                                   : 
                                                  (((QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth3__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                                    << 0x21U) 
                                                   | ((QData)((IData)(vlSelf->multiplier__DOT__booth3__DOT__minus_a)) 
                                                      << 1U))))
          : ((1U & (IData)((vlSelf->b >> 6U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->b 
                                                              >> 5U)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth3__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                                    << 0x21U) 
                                                   | ((QData)((IData)(vlSelf->multiplier__DOT__booth3__DOT__sign_ext_a)) 
                                                      << 1U))
                                                   : vlSelf->multiplier__DOT__booth3__DOT__sign_ext_a)
              : ((1U & (IData)((vlSelf->b >> 5U))) ? vlSelf->multiplier__DOT__booth3__DOT__sign_ext_a
                  : 0ULL)));
    multiplier__DOT____Vcellout__booth3__partial_product 
        = (vlSelf->multiplier__DOT__booth3__DOT__product 
           << 6U);
    vlSelf->multiplier__DOT__booth4__DOT__minus_a = 
        (1ULL + (~ vlSelf->multiplier__DOT__booth4__DOT__sign_ext_a));
    vlSelf->multiplier__DOT__booth4__DOT__product = 
        ((1U & (IData)((vlSelf->b >> 9U))) ? ((1U & (IData)(
                                                            (vlSelf->b 
                                                             >> 8U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->b 
                                                              >> 7U)))
                                                   ? 0ULL
                                                   : vlSelf->multiplier__DOT__booth4__DOT__minus_a)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->b 
                                                              >> 7U)))
                                                   ? vlSelf->multiplier__DOT__booth4__DOT__minus_a
                                                   : 
                                                  (((QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth4__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                                    << 0x21U) 
                                                   | ((QData)((IData)(vlSelf->multiplier__DOT__booth4__DOT__minus_a)) 
                                                      << 1U))))
          : ((1U & (IData)((vlSelf->b >> 8U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->b 
                                                              >> 7U)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth4__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                                    << 0x21U) 
                                                   | ((QData)((IData)(vlSelf->multiplier__DOT__booth4__DOT__sign_ext_a)) 
                                                      << 1U))
                                                   : vlSelf->multiplier__DOT__booth4__DOT__sign_ext_a)
              : ((1U & (IData)((vlSelf->b >> 7U))) ? vlSelf->multiplier__DOT__booth4__DOT__sign_ext_a
                  : 0ULL)));
    multiplier__DOT____Vcellout__booth4__partial_product 
        = (vlSelf->multiplier__DOT__booth4__DOT__product 
           << 8U);
    vlSelf->multiplier__DOT__booth5__DOT__minus_a = 
        (1ULL + (~ vlSelf->multiplier__DOT__booth5__DOT__sign_ext_a));
    vlSelf->multiplier__DOT__booth5__DOT__product = 
        ((1U & (IData)((vlSelf->b >> 0xbU))) ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->b 
                                                            >> 0xaU)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->b 
                                                             >> 9U)))
                                                  ? 0ULL
                                                  : vlSelf->multiplier__DOT__booth5__DOT__minus_a)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->b 
                                                             >> 9U)))
                                                  ? vlSelf->multiplier__DOT__booth5__DOT__minus_a
                                                  : 
                                                 (((QData)((IData)(
                                                                   (0x7fffffffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth5__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                                   << 0x21U) 
                                                  | ((QData)((IData)(vlSelf->multiplier__DOT__booth5__DOT__minus_a)) 
                                                     << 1U))))
          : ((1U & (IData)((vlSelf->b >> 0xaU))) ? 
             ((1U & (IData)((vlSelf->b >> 9U))) ? (
                                                   ((QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth5__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                                    << 0x21U) 
                                                   | ((QData)((IData)(vlSelf->multiplier__DOT__booth5__DOT__sign_ext_a)) 
                                                      << 1U))
               : vlSelf->multiplier__DOT__booth5__DOT__sign_ext_a)
              : ((1U & (IData)((vlSelf->b >> 9U))) ? vlSelf->multiplier__DOT__booth5__DOT__sign_ext_a
                  : 0ULL)));
    multiplier__DOT____Vcellout__booth5__partial_product 
        = (vlSelf->multiplier__DOT__booth5__DOT__product 
           << 0xaU);
    vlSelf->multiplier__DOT__booth6__DOT__minus_a = 
        (1ULL + (~ vlSelf->multiplier__DOT__booth6__DOT__sign_ext_a));
    vlSelf->multiplier__DOT__booth6__DOT__product = 
        ((1U & (IData)((vlSelf->b >> 0xdU))) ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->b 
                                                            >> 0xcU)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->b 
                                                             >> 0xbU)))
                                                  ? 0ULL
                                                  : vlSelf->multiplier__DOT__booth6__DOT__minus_a)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->b 
                                                             >> 0xbU)))
                                                  ? vlSelf->multiplier__DOT__booth6__DOT__minus_a
                                                  : 
                                                 (((QData)((IData)(
                                                                   (0x7fffffffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth6__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                                   << 0x21U) 
                                                  | ((QData)((IData)(vlSelf->multiplier__DOT__booth6__DOT__minus_a)) 
                                                     << 1U))))
          : ((1U & (IData)((vlSelf->b >> 0xcU))) ? 
             ((1U & (IData)((vlSelf->b >> 0xbU))) ? 
              (((QData)((IData)((0x7fffffffU & (- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->multiplier__DOT__booth6__DOT__sign_ext_a 
                                                                      >> 0x3fU)))))))) 
                << 0x21U) | ((QData)((IData)(vlSelf->multiplier__DOT__booth6__DOT__sign_ext_a)) 
                             << 1U)) : vlSelf->multiplier__DOT__booth6__DOT__sign_ext_a)
              : ((1U & (IData)((vlSelf->b >> 0xbU)))
                  ? vlSelf->multiplier__DOT__booth6__DOT__sign_ext_a
                  : 0ULL)));
    multiplier__DOT____Vcellout__booth6__partial_product 
        = (vlSelf->multiplier__DOT__booth6__DOT__product 
           << 0xcU);
    vlSelf->multiplier__DOT__booth7__DOT__minus_a = 
        (1ULL + (~ vlSelf->multiplier__DOT__booth7__DOT__sign_ext_a));
    vlSelf->multiplier__DOT__booth7__DOT__product = 
        ((1U & (IData)((vlSelf->b >> 0xfU))) ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->b 
                                                            >> 0xeU)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->b 
                                                             >> 0xdU)))
                                                  ? 0ULL
                                                  : vlSelf->multiplier__DOT__booth7__DOT__minus_a)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->b 
                                                             >> 0xdU)))
                                                  ? vlSelf->multiplier__DOT__booth7__DOT__minus_a
                                                  : 
                                                 (((QData)((IData)(
                                                                   (0x7fffffffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth7__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                                   << 0x21U) 
                                                  | ((QData)((IData)(vlSelf->multiplier__DOT__booth7__DOT__minus_a)) 
                                                     << 1U))))
          : ((1U & (IData)((vlSelf->b >> 0xeU))) ? 
             ((1U & (IData)((vlSelf->b >> 0xdU))) ? 
              (((QData)((IData)((0x7fffffffU & (- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->multiplier__DOT__booth7__DOT__sign_ext_a 
                                                                      >> 0x3fU)))))))) 
                << 0x21U) | ((QData)((IData)(vlSelf->multiplier__DOT__booth7__DOT__sign_ext_a)) 
                             << 1U)) : vlSelf->multiplier__DOT__booth7__DOT__sign_ext_a)
              : ((1U & (IData)((vlSelf->b >> 0xdU)))
                  ? vlSelf->multiplier__DOT__booth7__DOT__sign_ext_a
                  : 0ULL)));
    multiplier__DOT____Vcellout__booth7__partial_product 
        = (vlSelf->multiplier__DOT__booth7__DOT__product 
           << 0xeU);
    vlSelf->multiplier__DOT__booth8__DOT__minus_a = 
        (1ULL + (~ vlSelf->multiplier__DOT__booth8__DOT__sign_ext_a));
    vlSelf->multiplier__DOT__booth8__DOT__product = 
        ((1U & (IData)((vlSelf->b >> 0x11U))) ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->b 
                                                             >> 0x10U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->b 
                                                              >> 0xfU)))
                                                   ? 0ULL
                                                   : vlSelf->multiplier__DOT__booth8__DOT__minus_a)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->b 
                                                              >> 0xfU)))
                                                   ? vlSelf->multiplier__DOT__booth8__DOT__minus_a
                                                   : 
                                                  (((QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth8__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                                    << 0x21U) 
                                                   | ((QData)((IData)(vlSelf->multiplier__DOT__booth8__DOT__minus_a)) 
                                                      << 1U))))
          : ((1U & (IData)((vlSelf->b >> 0x10U))) ? 
             ((1U & (IData)((vlSelf->b >> 0xfU))) ? 
              (((QData)((IData)((0x7fffffffU & (- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->multiplier__DOT__booth8__DOT__sign_ext_a 
                                                                      >> 0x3fU)))))))) 
                << 0x21U) | ((QData)((IData)(vlSelf->multiplier__DOT__booth8__DOT__sign_ext_a)) 
                             << 1U)) : vlSelf->multiplier__DOT__booth8__DOT__sign_ext_a)
              : ((1U & (IData)((vlSelf->b >> 0xfU)))
                  ? vlSelf->multiplier__DOT__booth8__DOT__sign_ext_a
                  : 0ULL)));
    multiplier__DOT____Vcellout__booth8__partial_product 
        = (vlSelf->multiplier__DOT__booth8__DOT__product 
           << 0x10U);
    vlSelf->multiplier__DOT__booth9__DOT__minus_a = 
        (1ULL + (~ vlSelf->multiplier__DOT__booth9__DOT__sign_ext_a));
    vlSelf->multiplier__DOT__booth9__DOT__product = 
        ((1U & (IData)((vlSelf->b >> 0x13U))) ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->b 
                                                             >> 0x12U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->b 
                                                              >> 0x11U)))
                                                   ? 0ULL
                                                   : vlSelf->multiplier__DOT__booth9__DOT__minus_a)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->b 
                                                              >> 0x11U)))
                                                   ? vlSelf->multiplier__DOT__booth9__DOT__minus_a
                                                   : 
                                                  (((QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth9__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                                    << 0x21U) 
                                                   | ((QData)((IData)(vlSelf->multiplier__DOT__booth9__DOT__minus_a)) 
                                                      << 1U))))
          : ((1U & (IData)((vlSelf->b >> 0x12U))) ? 
             ((1U & (IData)((vlSelf->b >> 0x11U))) ? 
              (((QData)((IData)((0x7fffffffU & (- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->multiplier__DOT__booth9__DOT__sign_ext_a 
                                                                      >> 0x3fU)))))))) 
                << 0x21U) | ((QData)((IData)(vlSelf->multiplier__DOT__booth9__DOT__sign_ext_a)) 
                             << 1U)) : vlSelf->multiplier__DOT__booth9__DOT__sign_ext_a)
              : ((1U & (IData)((vlSelf->b >> 0x11U)))
                  ? vlSelf->multiplier__DOT__booth9__DOT__sign_ext_a
                  : 0ULL)));
    multiplier__DOT____Vcellout__booth9__partial_product 
        = (vlSelf->multiplier__DOT__booth9__DOT__product 
           << 0x12U);
    vlSelf->multiplier__DOT__booth10__DOT__minus_a 
        = (1ULL + (~ vlSelf->multiplier__DOT__booth10__DOT__sign_ext_a));
    vlSelf->multiplier__DOT__booth10__DOT__product 
        = ((1U & (IData)((vlSelf->b >> 0x15U))) ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->b 
                                                               >> 0x14U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->b 
                                                                >> 0x13U)))
                                                     ? 0ULL
                                                     : vlSelf->multiplier__DOT__booth10__DOT__minus_a)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->b 
                                                                >> 0x13U)))
                                                     ? vlSelf->multiplier__DOT__booth10__DOT__minus_a
                                                     : 
                                                    (((QData)((IData)(
                                                                      (0x7fffffffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth10__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                                      << 0x21U) 
                                                     | ((QData)((IData)(vlSelf->multiplier__DOT__booth10__DOT__minus_a)) 
                                                        << 1U))))
            : ((1U & (IData)((vlSelf->b >> 0x14U)))
                ? ((1U & (IData)((vlSelf->b >> 0x13U)))
                    ? (((QData)((IData)((0x7fffffffU 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->multiplier__DOT__booth10__DOT__sign_ext_a 
                                                                  >> 0x3fU)))))))) 
                        << 0x21U) | ((QData)((IData)(vlSelf->multiplier__DOT__booth10__DOT__sign_ext_a)) 
                                     << 1U)) : vlSelf->multiplier__DOT__booth10__DOT__sign_ext_a)
                : ((1U & (IData)((vlSelf->b >> 0x13U)))
                    ? vlSelf->multiplier__DOT__booth10__DOT__sign_ext_a
                    : 0ULL)));
    multiplier__DOT____Vcellout__booth10__partial_product 
        = (vlSelf->multiplier__DOT__booth10__DOT__product 
           << 0x14U);
    vlSelf->multiplier__DOT__booth11__DOT__minus_a 
        = (1ULL + (~ vlSelf->multiplier__DOT__booth11__DOT__sign_ext_a));
    vlSelf->multiplier__DOT__booth11__DOT__product 
        = ((1U & (IData)((vlSelf->b >> 0x17U))) ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->b 
                                                               >> 0x16U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->b 
                                                                >> 0x15U)))
                                                     ? 0ULL
                                                     : vlSelf->multiplier__DOT__booth11__DOT__minus_a)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->b 
                                                                >> 0x15U)))
                                                     ? vlSelf->multiplier__DOT__booth11__DOT__minus_a
                                                     : 
                                                    (((QData)((IData)(
                                                                      (0x7fffffffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth11__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                                      << 0x21U) 
                                                     | ((QData)((IData)(vlSelf->multiplier__DOT__booth11__DOT__minus_a)) 
                                                        << 1U))))
            : ((1U & (IData)((vlSelf->b >> 0x16U)))
                ? ((1U & (IData)((vlSelf->b >> 0x15U)))
                    ? (((QData)((IData)((0x7fffffffU 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->multiplier__DOT__booth11__DOT__sign_ext_a 
                                                                  >> 0x3fU)))))))) 
                        << 0x21U) | ((QData)((IData)(vlSelf->multiplier__DOT__booth11__DOT__sign_ext_a)) 
                                     << 1U)) : vlSelf->multiplier__DOT__booth11__DOT__sign_ext_a)
                : ((1U & (IData)((vlSelf->b >> 0x15U)))
                    ? vlSelf->multiplier__DOT__booth11__DOT__sign_ext_a
                    : 0ULL)));
    multiplier__DOT____Vcellout__booth11__partial_product 
        = (vlSelf->multiplier__DOT__booth11__DOT__product 
           << 0x16U);
    vlSelf->multiplier__DOT__booth12__DOT__minus_a 
        = (1ULL + (~ vlSelf->multiplier__DOT__booth12__DOT__sign_ext_a));
    vlSelf->multiplier__DOT__booth12__DOT__product 
        = ((1U & (IData)((vlSelf->b >> 0x19U))) ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->b 
                                                               >> 0x18U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->b 
                                                                >> 0x17U)))
                                                     ? 0ULL
                                                     : vlSelf->multiplier__DOT__booth12__DOT__minus_a)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->b 
                                                                >> 0x17U)))
                                                     ? vlSelf->multiplier__DOT__booth12__DOT__minus_a
                                                     : 
                                                    (((QData)((IData)(
                                                                      (0x7fffffffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth12__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                                      << 0x21U) 
                                                     | ((QData)((IData)(vlSelf->multiplier__DOT__booth12__DOT__minus_a)) 
                                                        << 1U))))
            : ((1U & (IData)((vlSelf->b >> 0x18U)))
                ? ((1U & (IData)((vlSelf->b >> 0x17U)))
                    ? (((QData)((IData)((0x7fffffffU 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->multiplier__DOT__booth12__DOT__sign_ext_a 
                                                                  >> 0x3fU)))))))) 
                        << 0x21U) | ((QData)((IData)(vlSelf->multiplier__DOT__booth12__DOT__sign_ext_a)) 
                                     << 1U)) : vlSelf->multiplier__DOT__booth12__DOT__sign_ext_a)
                : ((1U & (IData)((vlSelf->b >> 0x17U)))
                    ? vlSelf->multiplier__DOT__booth12__DOT__sign_ext_a
                    : 0ULL)));
    multiplier__DOT____Vcellout__booth12__partial_product 
        = (vlSelf->multiplier__DOT__booth12__DOT__product 
           << 0x18U);
    vlSelf->multiplier__DOT__booth13__DOT__minus_a 
        = (1ULL + (~ vlSelf->multiplier__DOT__booth13__DOT__sign_ext_a));
    vlSelf->multiplier__DOT__booth13__DOT__product 
        = ((1U & (IData)((vlSelf->b >> 0x1bU))) ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->b 
                                                               >> 0x1aU)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->b 
                                                                >> 0x19U)))
                                                     ? 0ULL
                                                     : vlSelf->multiplier__DOT__booth13__DOT__minus_a)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->b 
                                                                >> 0x19U)))
                                                     ? vlSelf->multiplier__DOT__booth13__DOT__minus_a
                                                     : 
                                                    (((QData)((IData)(
                                                                      (0x7fffffffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth13__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                                      << 0x21U) 
                                                     | ((QData)((IData)(vlSelf->multiplier__DOT__booth13__DOT__minus_a)) 
                                                        << 1U))))
            : ((1U & (IData)((vlSelf->b >> 0x1aU)))
                ? ((1U & (IData)((vlSelf->b >> 0x19U)))
                    ? (((QData)((IData)((0x7fffffffU 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->multiplier__DOT__booth13__DOT__sign_ext_a 
                                                                  >> 0x3fU)))))))) 
                        << 0x21U) | ((QData)((IData)(vlSelf->multiplier__DOT__booth13__DOT__sign_ext_a)) 
                                     << 1U)) : vlSelf->multiplier__DOT__booth13__DOT__sign_ext_a)
                : ((1U & (IData)((vlSelf->b >> 0x19U)))
                    ? vlSelf->multiplier__DOT__booth13__DOT__sign_ext_a
                    : 0ULL)));
    multiplier__DOT____Vcellout__booth13__partial_product 
        = (vlSelf->multiplier__DOT__booth13__DOT__product 
           << 0x1aU);
    vlSelf->multiplier__DOT__booth14__DOT__minus_a 
        = (1ULL + (~ vlSelf->multiplier__DOT__booth14__DOT__sign_ext_a));
    vlSelf->multiplier__DOT__booth14__DOT__product 
        = ((1U & (IData)((vlSelf->b >> 0x1dU))) ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->b 
                                                               >> 0x1cU)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->b 
                                                                >> 0x1bU)))
                                                     ? 0ULL
                                                     : vlSelf->multiplier__DOT__booth14__DOT__minus_a)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->b 
                                                                >> 0x1bU)))
                                                     ? vlSelf->multiplier__DOT__booth14__DOT__minus_a
                                                     : 
                                                    (((QData)((IData)(
                                                                      (0x7fffffffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth14__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                                      << 0x21U) 
                                                     | ((QData)((IData)(vlSelf->multiplier__DOT__booth14__DOT__minus_a)) 
                                                        << 1U))))
            : ((1U & (IData)((vlSelf->b >> 0x1cU)))
                ? ((1U & (IData)((vlSelf->b >> 0x1bU)))
                    ? (((QData)((IData)((0x7fffffffU 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->multiplier__DOT__booth14__DOT__sign_ext_a 
                                                                  >> 0x3fU)))))))) 
                        << 0x21U) | ((QData)((IData)(vlSelf->multiplier__DOT__booth14__DOT__sign_ext_a)) 
                                     << 1U)) : vlSelf->multiplier__DOT__booth14__DOT__sign_ext_a)
                : ((1U & (IData)((vlSelf->b >> 0x1bU)))
                    ? vlSelf->multiplier__DOT__booth14__DOT__sign_ext_a
                    : 0ULL)));
    multiplier__DOT____Vcellout__booth14__partial_product 
        = (vlSelf->multiplier__DOT__booth14__DOT__product 
           << 0x1cU);
    vlSelf->multiplier__DOT__booth15__DOT__minus_a 
        = (1ULL + (~ vlSelf->multiplier__DOT__booth15__DOT__sign_ext_a));
    vlSelf->multiplier__DOT__booth15__DOT__product 
        = ((1U & (IData)((vlSelf->b >> 0x1fU))) ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->b 
                                                               >> 0x1eU)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->b 
                                                                >> 0x1dU)))
                                                     ? 0ULL
                                                     : vlSelf->multiplier__DOT__booth15__DOT__minus_a)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->b 
                                                                >> 0x1dU)))
                                                     ? vlSelf->multiplier__DOT__booth15__DOT__minus_a
                                                     : 
                                                    (((QData)((IData)(
                                                                      (0x7fffffffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth15__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                                      << 0x21U) 
                                                     | ((QData)((IData)(vlSelf->multiplier__DOT__booth15__DOT__minus_a)) 
                                                        << 1U))))
            : ((1U & (IData)((vlSelf->b >> 0x1eU)))
                ? ((1U & (IData)((vlSelf->b >> 0x1dU)))
                    ? (((QData)((IData)((0x7fffffffU 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->multiplier__DOT__booth15__DOT__sign_ext_a 
                                                                  >> 0x3fU)))))))) 
                        << 0x21U) | ((QData)((IData)(vlSelf->multiplier__DOT__booth15__DOT__sign_ext_a)) 
                                     << 1U)) : vlSelf->multiplier__DOT__booth15__DOT__sign_ext_a)
                : ((1U & (IData)((vlSelf->b >> 0x1dU)))
                    ? vlSelf->multiplier__DOT__booth15__DOT__sign_ext_a
                    : 0ULL)));
    multiplier__DOT____Vcellout__booth15__partial_product 
        = (vlSelf->multiplier__DOT__booth15__DOT__product 
           << 0x1eU);
    multiplier__DOT____Vcellinp__booth16__triplet = 
        ((4U & ((IData)((vlSelf->b >> 0x20U)) << 2U)) 
         | (3U & (IData)((vlSelf->b >> 0x1fU))));
    vlSelf->multiplier__DOT__a = vlSelf->a;
    vlSelf->multiplier__DOT__unsignedA = vlSelf->unsignedA;
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
    vlSelf->multiplier__DOT__cs13 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c13, 1U);
    vlSelf->multiplier__DOT__booth0__DOT__partial_product 
        = multiplier__DOT____Vcellout__booth0__partial_product;
    vlSelf->multiplier__DOT__layer0[0U] = multiplier__DOT____Vcellout__booth0__partial_product;
    vlSelf->multiplier__DOT__booth1__DOT__partial_product 
        = multiplier__DOT____Vcellout__booth1__partial_product;
    vlSelf->multiplier__DOT__layer0[1U] = multiplier__DOT____Vcellout__booth1__partial_product;
    vlSelf->multiplier__DOT__booth2__DOT__partial_product 
        = multiplier__DOT____Vcellout__booth2__partial_product;
    vlSelf->multiplier__DOT__layer0[2U] = multiplier__DOT____Vcellout__booth2__partial_product;
    vlSelf->multiplier__DOT__booth3__DOT__partial_product 
        = multiplier__DOT____Vcellout__booth3__partial_product;
    vlSelf->multiplier__DOT__layer0[3U] = multiplier__DOT____Vcellout__booth3__partial_product;
    vlSelf->multiplier__DOT__booth4__DOT__partial_product 
        = multiplier__DOT____Vcellout__booth4__partial_product;
    vlSelf->multiplier__DOT__layer0[4U] = multiplier__DOT____Vcellout__booth4__partial_product;
    vlSelf->multiplier__DOT__booth5__DOT__partial_product 
        = multiplier__DOT____Vcellout__booth5__partial_product;
    vlSelf->multiplier__DOT__layer0[5U] = multiplier__DOT____Vcellout__booth5__partial_product;
    vlSelf->multiplier__DOT__booth6__DOT__partial_product 
        = multiplier__DOT____Vcellout__booth6__partial_product;
    vlSelf->multiplier__DOT__layer0[6U] = multiplier__DOT____Vcellout__booth6__partial_product;
    vlSelf->multiplier__DOT__booth7__DOT__partial_product 
        = multiplier__DOT____Vcellout__booth7__partial_product;
    vlSelf->multiplier__DOT__layer0[7U] = multiplier__DOT____Vcellout__booth7__partial_product;
    vlSelf->multiplier__DOT__booth8__DOT__partial_product 
        = multiplier__DOT____Vcellout__booth8__partial_product;
    vlSelf->multiplier__DOT__layer0[8U] = multiplier__DOT____Vcellout__booth8__partial_product;
    vlSelf->multiplier__DOT__booth9__DOT__partial_product 
        = multiplier__DOT____Vcellout__booth9__partial_product;
    vlSelf->multiplier__DOT__layer0[9U] = multiplier__DOT____Vcellout__booth9__partial_product;
    vlSelf->multiplier__DOT__booth10__DOT__partial_product 
        = multiplier__DOT____Vcellout__booth10__partial_product;
    vlSelf->multiplier__DOT__layer0[0xaU] = multiplier__DOT____Vcellout__booth10__partial_product;
    vlSelf->multiplier__DOT__booth11__DOT__partial_product 
        = multiplier__DOT____Vcellout__booth11__partial_product;
    vlSelf->multiplier__DOT__layer0[0xbU] = multiplier__DOT____Vcellout__booth11__partial_product;
    vlSelf->multiplier__DOT__booth12__DOT__partial_product 
        = multiplier__DOT____Vcellout__booth12__partial_product;
    vlSelf->multiplier__DOT__layer0[0xcU] = multiplier__DOT____Vcellout__booth12__partial_product;
    vlSelf->multiplier__DOT__booth13__DOT__partial_product 
        = multiplier__DOT____Vcellout__booth13__partial_product;
    vlSelf->multiplier__DOT__layer0[0xdU] = multiplier__DOT____Vcellout__booth13__partial_product;
    vlSelf->multiplier__DOT__booth14__DOT__partial_product 
        = multiplier__DOT____Vcellout__booth14__partial_product;
    vlSelf->multiplier__DOT__layer0[0xeU] = multiplier__DOT____Vcellout__booth14__partial_product;
    vlSelf->multiplier__DOT__booth15__DOT__partial_product 
        = multiplier__DOT____Vcellout__booth15__partial_product;
    vlSelf->multiplier__DOT__layer0[0xfU] = multiplier__DOT____Vcellout__booth15__partial_product;
    vlSelf->multiplier__DOT__booth16__DOT__triplet 
        = multiplier__DOT____Vcellinp__booth16__triplet;
    vlSelf->multiplier__DOT__booth16__DOT__minus_a 
        = (1ULL + (~ vlSelf->multiplier__DOT__booth16__DOT__sign_ext_a));
    vlSelf->multiplier__DOT__booth16__DOT__product 
        = ((4U & (IData)(multiplier__DOT____Vcellinp__booth16__triplet))
            ? ((2U & (IData)(multiplier__DOT____Vcellinp__booth16__triplet))
                ? ((1U & (IData)(multiplier__DOT____Vcellinp__booth16__triplet))
                    ? 0ULL : vlSelf->multiplier__DOT__booth16__DOT__minus_a)
                : ((1U & (IData)(multiplier__DOT____Vcellinp__booth16__triplet))
                    ? vlSelf->multiplier__DOT__booth16__DOT__minus_a
                    : (((QData)((IData)((0x7fffffffU 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->multiplier__DOT__booth16__DOT__minus_a 
                                                                  >> 0x3fU)))))))) 
                        << 0x21U) | ((QData)((IData)(vlSelf->multiplier__DOT__booth16__DOT__minus_a)) 
                                     << 1U)))) : ((2U 
                                                   & (IData)(multiplier__DOT____Vcellinp__booth16__triplet))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(multiplier__DOT____Vcellinp__booth16__triplet))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7fffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__booth16__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x21U) 
                                                    | ((QData)((IData)(vlSelf->multiplier__DOT__booth16__DOT__sign_ext_a)) 
                                                       << 1U))
                                                    : vlSelf->multiplier__DOT__booth16__DOT__sign_ext_a)
                                                   : 
                                                  ((1U 
                                                    & (IData)(multiplier__DOT____Vcellinp__booth16__triplet))
                                                    ? vlSelf->multiplier__DOT__booth16__DOT__sign_ext_a
                                                    : 0ULL)));
    multiplier__DOT____Vcellout__booth16__partial_product 
        = (vlSelf->multiplier__DOT__booth16__DOT__product 
           << 0x20U);
    vlSelf->multiplier__DOT__booth0__DOT__a = vlSelf->multiplier__DOT__a;
    vlSelf->multiplier__DOT__booth1__DOT__a = vlSelf->multiplier__DOT__a;
    vlSelf->multiplier__DOT__booth2__DOT__a = vlSelf->multiplier__DOT__a;
    vlSelf->multiplier__DOT__booth3__DOT__a = vlSelf->multiplier__DOT__a;
    vlSelf->multiplier__DOT__booth4__DOT__a = vlSelf->multiplier__DOT__a;
    vlSelf->multiplier__DOT__booth5__DOT__a = vlSelf->multiplier__DOT__a;
    vlSelf->multiplier__DOT__booth6__DOT__a = vlSelf->multiplier__DOT__a;
    vlSelf->multiplier__DOT__booth7__DOT__a = vlSelf->multiplier__DOT__a;
    vlSelf->multiplier__DOT__booth8__DOT__a = vlSelf->multiplier__DOT__a;
    vlSelf->multiplier__DOT__booth9__DOT__a = vlSelf->multiplier__DOT__a;
    vlSelf->multiplier__DOT__booth10__DOT__a = vlSelf->multiplier__DOT__a;
    vlSelf->multiplier__DOT__booth11__DOT__a = vlSelf->multiplier__DOT__a;
    vlSelf->multiplier__DOT__booth12__DOT__a = vlSelf->multiplier__DOT__a;
    vlSelf->multiplier__DOT__booth13__DOT__a = vlSelf->multiplier__DOT__a;
    vlSelf->multiplier__DOT__booth14__DOT__a = vlSelf->multiplier__DOT__a;
    vlSelf->multiplier__DOT__booth15__DOT__a = vlSelf->multiplier__DOT__a;
    vlSelf->multiplier__DOT__booth16__DOT__a = vlSelf->multiplier__DOT__a;
    vlSelf->multiplier__DOT__booth0__DOT__unsignedA 
        = vlSelf->multiplier__DOT__unsignedA;
    vlSelf->multiplier__DOT__booth1__DOT__unsignedA 
        = vlSelf->multiplier__DOT__unsignedA;
    vlSelf->multiplier__DOT__booth2__DOT__unsignedA 
        = vlSelf->multiplier__DOT__unsignedA;
    vlSelf->multiplier__DOT__booth3__DOT__unsignedA 
        = vlSelf->multiplier__DOT__unsignedA;
    vlSelf->multiplier__DOT__booth4__DOT__unsignedA 
        = vlSelf->multiplier__DOT__unsignedA;
    vlSelf->multiplier__DOT__booth5__DOT__unsignedA 
        = vlSelf->multiplier__DOT__unsignedA;
    vlSelf->multiplier__DOT__booth6__DOT__unsignedA 
        = vlSelf->multiplier__DOT__unsignedA;
    vlSelf->multiplier__DOT__booth7__DOT__unsignedA 
        = vlSelf->multiplier__DOT__unsignedA;
    vlSelf->multiplier__DOT__booth8__DOT__unsignedA 
        = vlSelf->multiplier__DOT__unsignedA;
    vlSelf->multiplier__DOT__booth9__DOT__unsignedA 
        = vlSelf->multiplier__DOT__unsignedA;
    vlSelf->multiplier__DOT__booth10__DOT__unsignedA 
        = vlSelf->multiplier__DOT__unsignedA;
    vlSelf->multiplier__DOT__booth11__DOT__unsignedA 
        = vlSelf->multiplier__DOT__unsignedA;
    vlSelf->multiplier__DOT__booth12__DOT__unsignedA 
        = vlSelf->multiplier__DOT__unsignedA;
    vlSelf->multiplier__DOT__booth13__DOT__unsignedA 
        = vlSelf->multiplier__DOT__unsignedA;
    vlSelf->multiplier__DOT__booth14__DOT__unsignedA 
        = vlSelf->multiplier__DOT__unsignedA;
    vlSelf->multiplier__DOT__booth15__DOT__unsignedA 
        = vlSelf->multiplier__DOT__unsignedA;
    vlSelf->multiplier__DOT__booth16__DOT__unsignedA 
        = vlSelf->multiplier__DOT__unsignedA;
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
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c0))));
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
    vlSelf->multiplier__DOT__booth16__DOT__partial_product 
        = multiplier__DOT____Vcellout__booth16__partial_product;
    vlSelf->multiplier__DOT__layer0[0x10U] = multiplier__DOT____Vcellout__booth16__partial_product;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c1))));
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
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block0__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__cout 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block1__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__cin 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block1__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block1__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__P) 
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
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block1__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__cout 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block2__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__cin 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block2__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block2__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__P) 
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
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block2__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__cout 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block3__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__cin 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block3__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block3__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__P) 
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
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block3__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__cout 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block4__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__cin 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block4__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block4__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__P) 
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
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block4__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__cout 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block5__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__cin 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block5__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block5__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__P) 
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
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block5__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__cout 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block6__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__cin 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block6__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block6__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__P) 
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
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__P) 
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
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block7__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__G) 
                 | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__P) 
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
                                           | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__P) 
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
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__P) 
                    * (IData)(vlSelf->multiplier__DOT__cout))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__s 
        = multiplier__DOT____Vcellout__fast_adder_lower__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__cout 
        = vlSelf->multiplier__DOT__fast_adder_lower__DOT__cout;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__P) 
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
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block0__s;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__cout 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block1__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__cin 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block1__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block1__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__P) 
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
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block1__s;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__cout 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block2__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__cin 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block2__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block2__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__P) 
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
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block2__s;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__cout 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block3__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__cin 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block3__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block3__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__P) 
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
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block3__s;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__cout 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block4__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__cin 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block4__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block4__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__P) 
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
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block4__s;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__cout 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block5__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__cin 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block5__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block5__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__P) 
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
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block5__s;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__cout 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block6__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__cin 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block6__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block6__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__P) 
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
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__P) 
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
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block7__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__G) 
                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c1))));
    vlSelf->multiplier__DOT__cout_upper = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__G) 
                                                 | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__P) 
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

VL_ATTR_COLD void Vmultiplier___024root___eval_stl(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vmultiplier___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vmultiplier___024root___eval_triggers__stl(Vmultiplier___024root* vlSelf);

VL_ATTR_COLD bool Vmultiplier___024root___eval_phase__stl(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmultiplier___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vmultiplier___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier___024root___dump_triggers__ico(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vmultiplier___024root___dump_triggers__act(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vmultiplier___024root___dump_triggers__nba(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmultiplier___024root___ctor_var_reset(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(32);
    vlSelf->b = VL_RAND_RESET_Q(33);
    vlSelf->unsignedA = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->output_product = VL_RAND_RESET_Q(64);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->running = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__b = VL_RAND_RESET_Q(33);
    vlSelf->multiplier__DOT__unsignedA = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__output_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__running = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->multiplier__DOT__layer0[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->multiplier__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__c0 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__c1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__c2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__c3 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__c4 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__c5 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__c6 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__c7 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__c8 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__c9 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__c10 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__c11 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__c12 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__c13 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__c14 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__s0 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__s1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__s2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__s3 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__s4 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__s5 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__s6 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__s7 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__s8 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__s9 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__s10 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__s11 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__s12 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__s13 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__s14 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__cs0 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__cs1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__cs2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__cs3 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__cs4 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__cs5 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__cs6 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__cs7 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__cs8 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__cs9 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__cs10 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__cs11 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__cs12 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__cs13 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__cs14 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->multiplier__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__cout_upper = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->multiplier__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->multiplier__DOT__unnamedblk3__DOT__k = 0;
    vlSelf->multiplier__DOT__unnamedblk4__DOT__h = 0;
    vlSelf->multiplier__DOT__unnamedblk5__DOT__g = 0;
    vlSelf->multiplier__DOT__unnamedblk6__DOT__f = 0;
    vlSelf->multiplier__DOT__booth0__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__booth0__DOT__unsignedA = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__booth0__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier__DOT__booth0__DOT__shamt = VL_RAND_RESET_I(6);
    vlSelf->multiplier__DOT__booth0__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth0__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth0__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth0__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth1__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__booth1__DOT__unsignedA = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__booth1__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier__DOT__booth1__DOT__shamt = VL_RAND_RESET_I(6);
    vlSelf->multiplier__DOT__booth1__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth1__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth1__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth1__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth2__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__booth2__DOT__unsignedA = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__booth2__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier__DOT__booth2__DOT__shamt = VL_RAND_RESET_I(6);
    vlSelf->multiplier__DOT__booth2__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth2__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth2__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth2__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth3__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__booth3__DOT__unsignedA = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__booth3__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier__DOT__booth3__DOT__shamt = VL_RAND_RESET_I(6);
    vlSelf->multiplier__DOT__booth3__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth3__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth3__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth3__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth4__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__booth4__DOT__unsignedA = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__booth4__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier__DOT__booth4__DOT__shamt = VL_RAND_RESET_I(6);
    vlSelf->multiplier__DOT__booth4__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth4__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth4__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth4__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth5__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__booth5__DOT__unsignedA = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__booth5__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier__DOT__booth5__DOT__shamt = VL_RAND_RESET_I(6);
    vlSelf->multiplier__DOT__booth5__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth5__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth5__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth5__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth6__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__booth6__DOT__unsignedA = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__booth6__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier__DOT__booth6__DOT__shamt = VL_RAND_RESET_I(6);
    vlSelf->multiplier__DOT__booth6__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth6__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth6__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth6__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth7__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__booth7__DOT__unsignedA = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__booth7__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier__DOT__booth7__DOT__shamt = VL_RAND_RESET_I(6);
    vlSelf->multiplier__DOT__booth7__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth7__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth7__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth7__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth8__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__booth8__DOT__unsignedA = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__booth8__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier__DOT__booth8__DOT__shamt = VL_RAND_RESET_I(6);
    vlSelf->multiplier__DOT__booth8__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth8__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth8__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth8__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth9__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__booth9__DOT__unsignedA = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__booth9__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier__DOT__booth9__DOT__shamt = VL_RAND_RESET_I(6);
    vlSelf->multiplier__DOT__booth9__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth9__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth9__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth9__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth10__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__booth10__DOT__unsignedA = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__booth10__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier__DOT__booth10__DOT__shamt = VL_RAND_RESET_I(6);
    vlSelf->multiplier__DOT__booth10__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth10__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth10__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth10__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth11__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__booth11__DOT__unsignedA = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__booth11__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier__DOT__booth11__DOT__shamt = VL_RAND_RESET_I(6);
    vlSelf->multiplier__DOT__booth11__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth11__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth11__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth11__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth12__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__booth12__DOT__unsignedA = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__booth12__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier__DOT__booth12__DOT__shamt = VL_RAND_RESET_I(6);
    vlSelf->multiplier__DOT__booth12__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth12__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth12__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth12__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth13__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__booth13__DOT__unsignedA = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__booth13__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier__DOT__booth13__DOT__shamt = VL_RAND_RESET_I(6);
    vlSelf->multiplier__DOT__booth13__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth13__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth13__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth13__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth14__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__booth14__DOT__unsignedA = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__booth14__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier__DOT__booth14__DOT__shamt = VL_RAND_RESET_I(6);
    vlSelf->multiplier__DOT__booth14__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth14__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth14__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth14__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth15__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__booth15__DOT__unsignedA = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__booth15__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier__DOT__booth15__DOT__shamt = VL_RAND_RESET_I(6);
    vlSelf->multiplier__DOT__booth15__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth15__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth15__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth15__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth16__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__booth16__DOT__unsignedA = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__booth16__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier__DOT__booth16__DOT__shamt = VL_RAND_RESET_I(6);
    vlSelf->multiplier__DOT__booth16__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth16__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth16__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__booth16__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__Subtract = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__s = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__b_in = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__cin_effective = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__Subtract = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__s = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__b_in = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__cin_effective = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__s = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__P = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__G = VL_RAND_RESET_I(4);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c0 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice0__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice0__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice0__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice0__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice1__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice1__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice1__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice1__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice2__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice2__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice2__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice2__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice3__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice3__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice3__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice3__DOT__P = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__multiplier__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
