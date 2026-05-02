// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU__pch.h"
#include "VALU___024root.h"

VL_ATTR_COLD void VALU___024root___eval_static(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_static\n"); );
}

VL_ATTR_COLD void VALU___024root___eval_initial__TOP(VALU___024root* vlSelf);

VL_ATTR_COLD void VALU___024root___eval_initial(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_initial\n"); );
    // Body
    VALU___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void VALU___024root___eval_final(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__stl(VALU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VALU___024root___eval_phase__stl(VALU___024root* vlSelf);

VL_ATTR_COLD void VALU___024root___eval_settle(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_settle\n"); );
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
            VALU___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("ALU.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VALU___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__stl(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VALU___024root___eval_triggers__stl(VALU___024root* vlSelf);
VL_ATTR_COLD void VALU___024root___eval_stl(VALU___024root* vlSelf);

VL_ATTR_COLD bool VALU___024root___eval_phase__stl(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VALU___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VALU___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__ico(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VALU___024root___dump_triggers__act(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VALU___024root___dump_triggers__nba(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VALU___024root___ctor_var_reset(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(32);
    vlSelf->b = VL_RAND_RESET_I(32);
    vlSelf->ALUControl = VL_RAND_RESET_I(4);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->ZeroFlag = VL_RAND_RESET_I(1);
    vlSelf->NegativeFlag = VL_RAND_RESET_I(1);
    vlSelf->OverflowFlag = VL_RAND_RESET_I(1);
    vlSelf->CarryOutFlag = VL_RAND_RESET_I(1);
    vlSelf->ALUResult = VL_RAND_RESET_I(32);
    vlSelf->multiply_done = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__ALUControl = VL_RAND_RESET_I(4);
    vlSelf->ALU__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__ZeroFlag = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__NegativeFlag = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__OverflowFlag = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__CarryOutFlag = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__ALUResult = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__multiply_done = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__multiply_rst = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__multiply_running = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__left_shifted = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__s = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__right_shifted_logic = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__right_shifted_arithmetic = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__multiplied_product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__leftshift__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__leftshift__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__leftshift__DOT__y = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ALU__DOT__leftshift__DOT__stage[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ALU__DOT__rightshiftlogic__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__rightshiftlogic__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__rightshiftlogic__DOT__y = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ALU__DOT__rightshiftlogic__DOT__stage[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ALU__DOT__rightshiftarithmetic__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__rightshiftarithmetic__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__rightshiftarithmetic__DOT__y = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ALU__DOT__multiplier__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__multiplier__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__multiplier__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__multiplier__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__multiplier__DOT__output_product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__multiplier__DOT__running = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ALU__DOT__multiplier__DOT__layer0[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ALU__DOT__multiplier__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__c0 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__c1 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__c2 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__c3 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__c4 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__c5 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__c6 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__c7 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__c8 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__c9 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__c10 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__c11 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__c12 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__c13 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__s0 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__s1 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__s2 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__s3 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__s4 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__s5 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__s6 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__s7 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__s8 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__s9 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__s10 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__s11 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__s12 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__s13 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__cs0 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__cs1 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__cs2 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__cs3 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__cs4 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__cs5 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__cs6 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__cs7 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__cs8 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__cs9 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__cs10 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__cs11 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__cs12 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__cs13 = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ALU__DOT__multiplier__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__multiplier__DOT__cout_upper = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__multiplier__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->ALU__DOT__multiplier__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->ALU__DOT__multiplier__DOT__unnamedblk3__DOT__k = 0;
    vlSelf->ALU__DOT__multiplier__DOT__unnamedblk4__DOT__h = 0;
    vlSelf->ALU__DOT__multiplier__DOT__unnamedblk5__DOT__g = 0;
    vlSelf->ALU__DOT__multiplier__DOT__unnamedblk6__DOT__f = 0;
    vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__multiply_done = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ALU__DOT__multiplier__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
