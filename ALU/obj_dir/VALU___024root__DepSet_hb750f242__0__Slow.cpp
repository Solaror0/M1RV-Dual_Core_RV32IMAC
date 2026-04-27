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
    vlSelf->s = VL_RAND_RESET_I(32);
    vlSelf->SLTChecker = VL_RAND_RESET_I(1);
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
    vlSelf->ALU__DOT__s = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__SLTChecker = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__multiply_start = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__multiply_done = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__left_shifted = VL_RAND_RESET_I(32);
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
    vlSelf->ALU__DOT__shift_multiplier__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__shift_multiplier__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__shift_multiplier__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__shift_multiplier__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__shift_multiplier__DOT__accumulator = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__shift_multiplier__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__shift_multiplier__DOT__padded_a = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__shift_multiplier__DOT__sum_holder = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__shift_multiplier__DOT__shifted_upper = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__shift_multiplier__DOT__shifted_lower = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__shift_multiplier__DOT__b_in = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__shift_multiplier__DOT__b_shifted = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__shift_multiplier__DOT__count = VL_RAND_RESET_I(7);
    vlSelf->ALU__DOT__shift_multiplier__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__shift_multiplier__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ALU__DOT__shift_multiplier__DOT__shifted_lower_corrected = VL_RAND_RESET_Q(64);
    vlSelf->ALU__DOT__shift_multiplier__DOT__cout_lower = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__shift_multiplier__DOT__cout_upper = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__shift_multiplier__DOT__start_pulse = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__y = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__stage[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__y = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__stage[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__y = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__stage[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
