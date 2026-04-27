// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU__pch.h"
#include "VALU__Syms.h"
#include "VALU___024root.h"

VL_ATTR_COLD void VALU___024root___eval_initial__TOP(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->TOP__ALU__DOT__shift_multiplier__DOT__adder_lower.cin = 0U;
    vlSymsp->TOP__ALU__DOT__shift_multiplier__DOT__adder_lower.Subtract = 0U;
    vlSymsp->TOP__ALU__DOT__shift_multiplier__DOT__adder_upper.Subtract = 0U;
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__shamt = 1U;
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__shamt = 1U;
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__shamt = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__stl(VALU___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VALU___024root___eval_triggers__stl(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VALU___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VALU___024root___stl_sequent__TOP__0(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->ALU__DOT__ALUControl = vlSelf->ALUControl;
    vlSelf->ALU__DOT__cin = vlSelf->cin;
    vlSelf->ALU__DOT__ZeroFlag = vlSelf->ZeroFlag;
    vlSelf->ALU__DOT__NegativeFlag = vlSelf->NegativeFlag;
    vlSelf->ALU__DOT__leftshift__DOT__shamt = (0x1fU 
                                               & (vlSelf->b 
                                                  >> 0U));
    vlSelf->ALU__DOT__rightshiftlogic__DOT__shamt = 
        (0x1fU & (vlSelf->b >> 0U));
    vlSelf->ALU__DOT__rightshiftarithmetic__DOT__shamt 
        = (0x1fU & (vlSelf->b >> 0U));
    vlSelf->ALU__DOT__shift_multiplier__DOT__start 
        = vlSelf->ALU__DOT__multiply_start;
    vlSelf->ALU__DOT__shift_multiplier__DOT__accumulator 
        = vlSelf->ALU__DOT__multiplied_product;
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__a 
        = (IData)((vlSelf->ALU__DOT__multiplied_product 
                   >> 0x20U));
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__a 
        = (IData)((vlSelf->ALU__DOT__multiplied_product 
                   >> 0U));
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__a 
        = vlSelf->ALU__DOT__shift_multiplier__DOT__b_in;
    vlSelf->ALU__DOT__b = vlSelf->b;
    vlSelf->ALU__DOT__clk = vlSelf->clk;
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__stage[0U] 
        = (0x7fffffffU & (IData)((vlSelf->ALU__DOT__multiplied_product 
                                  >> 0x21U)));
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__stage[1U] 
        = vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__stage
        [0U];
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__stage[2U] 
        = vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__stage
        [1U];
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__stage[3U] 
        = vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__stage
        [2U];
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__stage[4U] 
        = vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__stage
        [3U];
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__stage[0U] 
        = (vlSelf->ALU__DOT__shift_multiplier__DOT__b_in 
           >> 1U);
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__stage[1U] 
        = vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__stage
        [0U];
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__stage[2U] 
        = vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__stage
        [1U];
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__stage[3U] 
        = vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__stage
        [2U];
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__stage[4U] 
        = vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__stage
        [3U];
    vlSelf->ALU__DOT__multiply_done = ((0x41U == (IData)(vlSelf->ALU__DOT__shift_multiplier__DOT__count))
                                        ? 1U : 0U);
    vlSelf->ALU__DOT__shift_multiplier__DOT__running 
        = ((1U == (IData)(vlSelf->ALU__DOT__shift_multiplier__DOT__state)) 
           & (~ (IData)(vlSelf->ALU__DOT__multiply_done)));
    vlSelf->ALU__DOT__shift_multiplier__DOT__start_pulse 
        = ((IData)(vlSelf->ALU__DOT__shift_multiplier__DOT__running)
            ? 0U : (1U & (IData)(vlSelf->ALU__DOT__multiply_start)));
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__stage[0U] 
        = (0x7fffffffU & (IData)((vlSelf->ALU__DOT__multiplied_product 
                                  >> 1U)));
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__stage[1U] 
        = vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__stage
        [0U];
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__stage[2U] 
        = vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__stage
        [1U];
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__stage[3U] 
        = vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__stage
        [2U];
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__stage[4U] 
        = vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__stage
        [3U];
    vlSelf->ALU__DOT__a = vlSelf->a;
    if ((1U & vlSelf->b)) {
        vlSelf->ALU__DOT__leftshift__DOT__stage[0U] 
            = (vlSelf->a << 1U);
        vlSelf->ALU__DOT__rightshiftlogic__DOT__stage[0U] 
            = (vlSelf->a >> 1U);
        vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage[0U] 
            = ((0x80000000U & vlSelf->a) | (vlSelf->a 
                                            >> 1U));
    } else {
        vlSelf->ALU__DOT__leftshift__DOT__stage[0U] 
            = vlSelf->a;
        vlSelf->ALU__DOT__rightshiftlogic__DOT__stage[0U] 
            = vlSelf->a;
        vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage[0U] 
            = vlSelf->a;
    }
    if ((2U & vlSelf->b)) {
        vlSelf->ALU__DOT__leftshift__DOT__stage[1U] 
            = (vlSelf->ALU__DOT__leftshift__DOT__stage
               [0U] << 2U);
        vlSelf->ALU__DOT__rightshiftlogic__DOT__stage[1U] 
            = (vlSelf->ALU__DOT__rightshiftlogic__DOT__stage
               [0U] >> 2U);
        vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage[1U] 
            = (((- (IData)((vlSelf->a >> 0x1fU))) << 0x1eU) 
               | (0x3fffffffU & vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage
                  [0U]));
    } else {
        vlSelf->ALU__DOT__leftshift__DOT__stage[1U] 
            = vlSelf->ALU__DOT__leftshift__DOT__stage
            [0U];
        vlSelf->ALU__DOT__rightshiftlogic__DOT__stage[1U] 
            = vlSelf->ALU__DOT__rightshiftlogic__DOT__stage
            [0U];
        vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage[1U] 
            = vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage
            [0U];
    }
    if ((4U & vlSelf->b)) {
        vlSelf->ALU__DOT__leftshift__DOT__stage[2U] 
            = (vlSelf->ALU__DOT__leftshift__DOT__stage
               [1U] << 4U);
        vlSelf->ALU__DOT__rightshiftlogic__DOT__stage[2U] 
            = (vlSelf->ALU__DOT__rightshiftlogic__DOT__stage
               [1U] >> 4U);
        vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage[2U] 
            = (((- (IData)((vlSelf->a >> 0x1fU))) << 0x1cU) 
               | (0xfffffffU & vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage
                  [1U]));
    } else {
        vlSelf->ALU__DOT__leftshift__DOT__stage[2U] 
            = vlSelf->ALU__DOT__leftshift__DOT__stage
            [1U];
        vlSelf->ALU__DOT__rightshiftlogic__DOT__stage[2U] 
            = vlSelf->ALU__DOT__rightshiftlogic__DOT__stage
            [1U];
        vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage[2U] 
            = vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage
            [1U];
    }
    if ((8U & vlSelf->b)) {
        vlSelf->ALU__DOT__leftshift__DOT__stage[3U] 
            = (vlSelf->ALU__DOT__leftshift__DOT__stage
               [2U] << 8U);
        vlSelf->ALU__DOT__rightshiftlogic__DOT__stage[3U] 
            = (vlSelf->ALU__DOT__rightshiftlogic__DOT__stage
               [2U] >> 8U);
        vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage[3U] 
            = (((- (IData)((vlSelf->a >> 0x1fU))) << 0x18U) 
               | (0xffffffU & vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage
                  [2U]));
    } else {
        vlSelf->ALU__DOT__leftshift__DOT__stage[3U] 
            = vlSelf->ALU__DOT__leftshift__DOT__stage
            [2U];
        vlSelf->ALU__DOT__rightshiftlogic__DOT__stage[3U] 
            = vlSelf->ALU__DOT__rightshiftlogic__DOT__stage
            [2U];
        vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage[3U] 
            = vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage
            [2U];
    }
    if ((0x10U & vlSelf->b)) {
        vlSelf->ALU__DOT__leftshift__DOT__stage[4U] 
            = (vlSelf->ALU__DOT__leftshift__DOT__stage
               [3U] << 0x10U);
        vlSelf->ALU__DOT__rightshiftlogic__DOT__stage[4U] 
            = (vlSelf->ALU__DOT__rightshiftlogic__DOT__stage
               [3U] >> 0x10U);
        vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage[4U] 
            = (((- (IData)((vlSelf->a >> 0x1fU))) << 0x10U) 
               | (0xffffU & vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage
                  [3U]));
    } else {
        vlSelf->ALU__DOT__leftshift__DOT__stage[4U] 
            = vlSelf->ALU__DOT__leftshift__DOT__stage
            [3U];
        vlSelf->ALU__DOT__rightshiftlogic__DOT__stage[4U] 
            = vlSelf->ALU__DOT__rightshiftlogic__DOT__stage
            [3U];
        vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage[4U] 
            = vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage
            [3U];
    }
    vlSymsp->TOP__ALU__DOT__adder.cin = vlSelf->cin;
    vlSymsp->TOP__ALU__DOT__shift_multiplier__DOT__adder_upper.a 
        = (IData)((vlSelf->ALU__DOT__multiplied_product 
                   >> 0x20U));
    vlSymsp->TOP__ALU__DOT__adder.a = vlSelf->a;
    vlSymsp->TOP__ALU__DOT__adder.b = vlSelf->b;
    vlSymsp->TOP__ALU__DOT__adder.Subtract = (IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(vlSelf->ALUControl))));
    vlSymsp->TOP__ALU__DOT__shift_multiplier__DOT__adder_lower.a 
        = (IData)(vlSelf->ALU__DOT__multiplied_product);
    vlSelf->ALU__DOT__shift_multiplier__DOT__padded_a 
        = ((QData)((IData)(vlSelf->a)) << 0x20U);
    vlSelf->ALU__DOT__shift_multiplier__DOT__b = vlSelf->ALU__DOT__b;
    vlSelf->ALU__DOT__shift_multiplier__DOT__clk = vlSelf->ALU__DOT__clk;
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__y 
        = vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__stage
        [4U];
    vlSelf->ALU__DOT__shift_multiplier__DOT__shifted_upper 
        = ((0xffffffffULL & vlSelf->ALU__DOT__shift_multiplier__DOT__shifted_upper) 
           | ((QData)((IData)(vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_upper__DOT__stage
                              [4U])) << 0x20U));
    vlSelf->ALU__DOT__shift_multiplier__DOT__b_shifted 
        = vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__stage
        [4U];
    vlSelf->ALU__DOT__shift_multiplier__DOT__done = vlSelf->ALU__DOT__multiply_done;
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__y 
        = vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__stage
        [4U];
    vlSelf->ALU__DOT__shift_multiplier__DOT__shifted_lower 
        = ((0xffffffff00000000ULL & vlSelf->ALU__DOT__shift_multiplier__DOT__shifted_lower) 
           | (IData)((IData)(vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_lower__DOT__stage
                             [4U])));
    vlSelf->ALU__DOT__leftshift__DOT__a = vlSelf->ALU__DOT__a;
    vlSelf->ALU__DOT__rightshiftlogic__DOT__a = vlSelf->ALU__DOT__a;
    vlSelf->ALU__DOT__rightshiftarithmetic__DOT__a 
        = vlSelf->ALU__DOT__a;
    vlSelf->ALU__DOT__shift_multiplier__DOT__a = vlSelf->ALU__DOT__a;
    vlSelf->ALU__DOT__left_shifted = vlSelf->ALU__DOT__leftshift__DOT__stage
        [4U];
    vlSelf->ALU__DOT__right_shifted_logic = vlSelf->ALU__DOT__rightshiftlogic__DOT__stage
        [4U];
    vlSelf->ALU__DOT__right_shifted_arithmetic = vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage
        [4U];
    vlSymsp->TOP__ALU__DOT__shift_multiplier__DOT__adder_upper.b 
        = (IData)((vlSelf->ALU__DOT__shift_multiplier__DOT__padded_a 
                   >> 0x20U));
    vlSymsp->TOP__ALU__DOT__shift_multiplier__DOT__adder_lower.b 
        = (IData)(vlSelf->ALU__DOT__shift_multiplier__DOT__padded_a);
    vlSelf->ALU__DOT__shift_multiplier__DOT__rightshift_b__DOT__y 
        = vlSelf->ALU__DOT__shift_multiplier__DOT__b_shifted;
    vlSelf->ALU__DOT__shift_multiplier__DOT__shifted_lower_corrected 
        = (((QData)((IData)((vlSelf->ALU__DOT__shift_multiplier__DOT__shifted_lower 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)((((IData)((vlSelf->ALU__DOT__multiplied_product 
                                        >> 0x20U)) 
                               << 0x1fU) | (0x7fffffffU 
                                            & (IData)(vlSelf->ALU__DOT__shift_multiplier__DOT__shifted_lower))))));
    vlSelf->ALU__DOT__leftshift__DOT__y = vlSelf->ALU__DOT__left_shifted;
    vlSelf->ALU__DOT__rightshiftlogic__DOT__y = vlSelf->ALU__DOT__right_shifted_logic;
    vlSelf->ALU__DOT__rightshiftarithmetic__DOT__y 
        = vlSelf->ALU__DOT__right_shifted_arithmetic;
}

VL_ATTR_COLD void VALU___024root___stl_sequent__TOP__1(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___stl_sequent__TOP__1\n"); );
    // Body
    vlSelf->ALU__DOT__shift_multiplier__DOT__cout_lower 
        = vlSymsp->TOP__ALU__DOT__shift_multiplier__DOT__adder_lower.cout;
    vlSelf->ALU__DOT__cout = vlSymsp->TOP__ALU__DOT__adder.cout;
    vlSelf->s = vlSymsp->TOP__ALU__DOT__adder.s;
    vlSymsp->TOP__ALU__DOT__shift_multiplier__DOT__adder_upper.cin 
        = vlSelf->ALU__DOT__shift_multiplier__DOT__cout_lower;
    vlSelf->CarryOutFlag = vlSelf->ALU__DOT__cout;
    vlSelf->ALU__DOT__s = vlSelf->s;
    vlSelf->SLTChecker = (1U & ((((vlSelf->a ^ vlSelf->b) 
                                  & (vlSelf->a ^ vlSelf->s)) 
                                 >> 0x1fU) ^ (IData)(vlSelf->ALU__DOT__cout)));
    vlSelf->OverflowFlag = (((vlSelf->a ^ vlSelf->b) 
                             & (vlSelf->a ^ vlSelf->s)) 
                            >> 0x1fU);
    vlSelf->ALUResult = ((8U & (IData)(vlSelf->ALUControl))
                          ? ((4U & (IData)(vlSelf->ALUControl))
                              ? 0U : ((2U & (IData)(vlSelf->ALUControl))
                                       ? ((1U & (IData)(vlSelf->ALUControl))
                                           ? (IData)(
                                                     (vlSelf->ALU__DOT__multiplied_product 
                                                      >> 0x20U))
                                           : (IData)(vlSelf->ALU__DOT__multiplied_product))
                                       : ((1U & (IData)(vlSelf->ALUControl))
                                           ? vlSelf->ALU__DOT__right_shifted_arithmetic
                                           : vlSelf->ALU__DOT__right_shifted_logic)))
                          : ((4U & (IData)(vlSelf->ALUControl))
                              ? ((2U & (IData)(vlSelf->ALUControl))
                                  ? ((1U & (IData)(vlSelf->ALUControl))
                                      ? vlSelf->ALU__DOT__left_shifted
                                      : (1U & (~ (IData)(vlSelf->ALU__DOT__cout))))
                                  : ((1U & (IData)(vlSelf->ALUControl))
                                      ? (1U & ((vlSelf->s 
                                                >> 0x1fU) 
                                               ^ (IData)(vlSelf->OverflowFlag)))
                                      : (vlSelf->a 
                                         ^ vlSelf->b)))
                              : ((2U & (IData)(vlSelf->ALUControl))
                                  ? ((1U & (IData)(vlSelf->ALUControl))
                                      ? (vlSelf->a 
                                         | vlSelf->b)
                                      : (vlSelf->a 
                                         & vlSelf->b))
                                  : vlSelf->s)));
    vlSelf->ALU__DOT__CarryOutFlag = vlSelf->CarryOutFlag;
    vlSelf->ALU__DOT__SLTChecker = vlSelf->SLTChecker;
    vlSelf->ALU__DOT__OverflowFlag = vlSelf->OverflowFlag;
    vlSelf->ALU__DOT__ALUResult = vlSelf->ALUResult;
}

VL_ATTR_COLD void VALU_carry_lookahead_adder___stl_sequent__TOP__ALU__DOT__shift_multiplier__DOT__adder_lower__0(VALU_carry_lookahead_adder* vlSelf);
VL_ATTR_COLD void VALU_carry_lookahead_adder___stl_sequent__TOP__ALU__DOT__shift_multiplier__DOT__adder_upper__0(VALU_carry_lookahead_adder* vlSelf);
void VALU_carry_lookahead_adder___ico_sequent__TOP__ALU__DOT__adder__0(VALU_carry_lookahead_adder* vlSelf);
void VALU_carry_lookahead_adder___ico_sequent__TOP__ALU__DOT__shift_multiplier__DOT__adder_upper__1(VALU_carry_lookahead_adder* vlSelf);
void VALU___024root___ico_sequent__TOP__2(VALU___024root* vlSelf);

VL_ATTR_COLD void VALU___024root___eval_stl(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VALU___024root___stl_sequent__TOP__0(vlSelf);
        VALU_carry_lookahead_adder___stl_sequent__TOP__ALU__DOT__shift_multiplier__DOT__adder_lower__0((&vlSymsp->TOP__ALU__DOT__shift_multiplier__DOT__adder_lower));
        VALU_carry_lookahead_adder___stl_sequent__TOP__ALU__DOT__shift_multiplier__DOT__adder_upper__0((&vlSymsp->TOP__ALU__DOT__shift_multiplier__DOT__adder_upper));
        VALU_carry_lookahead_adder___ico_sequent__TOP__ALU__DOT__adder__0((&vlSymsp->TOP__ALU__DOT__adder));
        VALU___024root___stl_sequent__TOP__1(vlSelf);
        VALU_carry_lookahead_adder___ico_sequent__TOP__ALU__DOT__shift_multiplier__DOT__adder_upper__1((&vlSymsp->TOP__ALU__DOT__shift_multiplier__DOT__adder_upper));
        VALU___024root___ico_sequent__TOP__2(vlSelf);
    }
}
