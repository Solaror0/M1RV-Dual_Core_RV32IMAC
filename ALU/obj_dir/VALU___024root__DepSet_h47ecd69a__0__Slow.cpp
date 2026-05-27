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
    vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_lower.Subtract = 0U;
    vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_lower.cin = 0U;
    vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_upper.Subtract = 0U;
    vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__shamt = 0U;
    vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__shamt = 2U;
    vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__shamt = 4U;
    vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__shamt = 6U;
    vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__shamt = 8U;
    vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__shamt = 0xaU;
    vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__shamt = 0xcU;
    vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__shamt = 0xeU;
    vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__shamt = 0x10U;
    vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__shamt = 0x12U;
    vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__shamt = 0x14U;
    vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__shamt = 0x16U;
    vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__shamt = 0x18U;
    vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__shamt = 0x1aU;
    vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__shamt = 0x1cU;
    vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__shamt = 0x1eU;
    vlSelf->ALU__DOT__multiplier__DOT__booth16__DOT__shamt = 0x20U;
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
    // Init
    QData/*63:0*/ ALU__DOT__multiplier__DOT____Vcellout__booth0__partial_product;
    ALU__DOT__multiplier__DOT____Vcellout__booth0__partial_product = 0;
    QData/*63:0*/ ALU__DOT__multiplier__DOT____Vcellout__booth1__partial_product;
    ALU__DOT__multiplier__DOT____Vcellout__booth1__partial_product = 0;
    QData/*63:0*/ ALU__DOT__multiplier__DOT____Vcellout__booth2__partial_product;
    ALU__DOT__multiplier__DOT____Vcellout__booth2__partial_product = 0;
    QData/*63:0*/ ALU__DOT__multiplier__DOT____Vcellout__booth3__partial_product;
    ALU__DOT__multiplier__DOT____Vcellout__booth3__partial_product = 0;
    QData/*63:0*/ ALU__DOT__multiplier__DOT____Vcellout__booth4__partial_product;
    ALU__DOT__multiplier__DOT____Vcellout__booth4__partial_product = 0;
    QData/*63:0*/ ALU__DOT__multiplier__DOT____Vcellout__booth5__partial_product;
    ALU__DOT__multiplier__DOT____Vcellout__booth5__partial_product = 0;
    QData/*63:0*/ ALU__DOT__multiplier__DOT____Vcellout__booth6__partial_product;
    ALU__DOT__multiplier__DOT____Vcellout__booth6__partial_product = 0;
    QData/*63:0*/ ALU__DOT__multiplier__DOT____Vcellout__booth7__partial_product;
    ALU__DOT__multiplier__DOT____Vcellout__booth7__partial_product = 0;
    QData/*63:0*/ ALU__DOT__multiplier__DOT____Vcellout__booth8__partial_product;
    ALU__DOT__multiplier__DOT____Vcellout__booth8__partial_product = 0;
    QData/*63:0*/ ALU__DOT__multiplier__DOT____Vcellout__booth9__partial_product;
    ALU__DOT__multiplier__DOT____Vcellout__booth9__partial_product = 0;
    QData/*63:0*/ ALU__DOT__multiplier__DOT____Vcellout__booth10__partial_product;
    ALU__DOT__multiplier__DOT____Vcellout__booth10__partial_product = 0;
    QData/*63:0*/ ALU__DOT__multiplier__DOT____Vcellout__booth11__partial_product;
    ALU__DOT__multiplier__DOT____Vcellout__booth11__partial_product = 0;
    QData/*63:0*/ ALU__DOT__multiplier__DOT____Vcellout__booth12__partial_product;
    ALU__DOT__multiplier__DOT____Vcellout__booth12__partial_product = 0;
    QData/*63:0*/ ALU__DOT__multiplier__DOT____Vcellout__booth13__partial_product;
    ALU__DOT__multiplier__DOT____Vcellout__booth13__partial_product = 0;
    QData/*63:0*/ ALU__DOT__multiplier__DOT____Vcellout__booth14__partial_product;
    ALU__DOT__multiplier__DOT____Vcellout__booth14__partial_product = 0;
    QData/*63:0*/ ALU__DOT__multiplier__DOT____Vcellout__booth15__partial_product;
    ALU__DOT__multiplier__DOT____Vcellout__booth15__partial_product = 0;
    QData/*63:0*/ ALU__DOT__multiplier__DOT____Vcellout__booth16__partial_product;
    ALU__DOT__multiplier__DOT____Vcellout__booth16__partial_product = 0;
    CData/*2:0*/ ALU__DOT__multiplier__DOT____Vcellinp__booth16__triplet;
    ALU__DOT__multiplier__DOT____Vcellinp__booth16__triplet = 0;
    VlWide<3>/*95:0*/ __Vtemp_15;
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
    vlSelf->ALU__DOT__multiplier__DOT__rst = vlSelf->ALU__DOT__multdiv_rst;
    vlSelf->ALU__DOT__multiplier__DOT__output_product 
        = vlSelf->ALU__DOT__multiplied_product;
    vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__triplet 
        = (((3U & (vlSelf->b >> 0U)) << 1U) | 0U);
    vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__triplet 
        = (7U & (vlSelf->b >> 1U));
    vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__triplet 
        = (7U & (vlSelf->b >> 3U));
    vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__triplet 
        = (7U & (vlSelf->b >> 5U));
    vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__triplet 
        = (7U & (vlSelf->b >> 7U));
    vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__triplet 
        = (7U & (vlSelf->b >> 9U));
    vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__triplet 
        = (7U & (vlSelf->b >> 0xbU));
    vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__triplet 
        = (7U & (vlSelf->b >> 0xdU));
    vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__triplet 
        = (7U & (vlSelf->b >> 0xfU));
    vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__triplet 
        = (7U & (vlSelf->b >> 0x11U));
    vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__triplet 
        = (7U & (vlSelf->b >> 0x13U));
    vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__triplet 
        = (7U & (vlSelf->b >> 0x15U));
    vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__triplet 
        = (7U & (vlSelf->b >> 0x17U));
    vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__triplet 
        = (7U & (vlSelf->b >> 0x19U));
    vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__triplet 
        = (7U & (vlSelf->b >> 0x1bU));
    vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__triplet 
        = (7U & (vlSelf->b >> 0x1dU));
    vlSelf->ALU__DOT__divider__DOT__rst = vlSelf->ALU__DOT__multdiv_rst;
    vlSelf->ALU__DOT__divider__DOT__q = vlSelf->ALU__DOT__quotient;
    vlSelf->ALU__DOT__divider__DOT__rem = vlSelf->ALU__DOT__remainder;
    vlSelf->ALU__DOT__multiplier__DOT__cs0 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c0, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs1 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c1, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs2 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c2, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs3 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c3, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs4 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c4, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs5 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c5, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs6 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c6, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs7 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c7, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs14 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c14, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs8 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c8, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs9 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c9, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs10 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c10, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs11 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c11, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs12 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c12, 1U);
    vlSelf->ALU__DOT__b = vlSelf->b;
    vlSelf->ALU__DOT__multiply_done = vlSelf->multiply_done;
    vlSelf->ALU__DOT__multiply_running = vlSelf->multiply_running;
    vlSelf->ALU__DOT__divide_done = vlSelf->divide_done;
    vlSelf->ALU__DOT__divide_running = vlSelf->divide_running;
    vlSelf->ALU__DOT__clk = vlSelf->clk;
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
    vlSelf->ALU__DOT__leftshift__DOT__stage[1U] = (
                                                   (2U 
                                                    & vlSelf->b)
                                                    ? 
                                                   (vlSelf->ALU__DOT__leftshift__DOT__stage
                                                    [0U] 
                                                    << 2U)
                                                    : 
                                                   vlSelf->ALU__DOT__leftshift__DOT__stage
                                                   [0U]);
    vlSelf->ALU__DOT__leftshift__DOT__stage[2U] = (
                                                   (4U 
                                                    & vlSelf->b)
                                                    ? 
                                                   (vlSelf->ALU__DOT__leftshift__DOT__stage
                                                    [1U] 
                                                    << 4U)
                                                    : 
                                                   vlSelf->ALU__DOT__leftshift__DOT__stage
                                                   [1U]);
    vlSelf->ALU__DOT__rightshiftlogic__DOT__stage[1U] 
        = ((2U & vlSelf->b) ? (vlSelf->ALU__DOT__rightshiftlogic__DOT__stage
                               [0U] >> 2U) : vlSelf->ALU__DOT__rightshiftlogic__DOT__stage
           [0U]);
    vlSelf->ALU__DOT__rightshiftlogic__DOT__stage[2U] 
        = ((4U & vlSelf->b) ? (vlSelf->ALU__DOT__rightshiftlogic__DOT__stage
                               [1U] >> 4U) : vlSelf->ALU__DOT__rightshiftlogic__DOT__stage
           [1U]);
    vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage[1U] 
        = ((2U & vlSelf->b) ? (((- (IData)((vlSelf->a 
                                            >> 0x1fU))) 
                                << 0x1eU) | (vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage
                                             [0U] >> 2U))
            : vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage
           [0U]);
    vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage[2U] 
        = ((4U & vlSelf->b) ? (((- (IData)((vlSelf->a 
                                            >> 0x1fU))) 
                                << 0x1cU) | (vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage
                                             [1U] >> 4U))
            : vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage
           [1U]);
    vlSelf->ALU__DOT__leftshift__DOT__stage[3U] = (
                                                   (8U 
                                                    & vlSelf->b)
                                                    ? 
                                                   (vlSelf->ALU__DOT__leftshift__DOT__stage
                                                    [2U] 
                                                    << 8U)
                                                    : 
                                                   vlSelf->ALU__DOT__leftshift__DOT__stage
                                                   [2U]);
    vlSelf->ALU__DOT__leftshift__DOT__stage[4U] = (
                                                   (0x10U 
                                                    & vlSelf->b)
                                                    ? 
                                                   (vlSelf->ALU__DOT__leftshift__DOT__stage
                                                    [3U] 
                                                    << 0x10U)
                                                    : 
                                                   vlSelf->ALU__DOT__leftshift__DOT__stage
                                                   [3U]);
    vlSelf->ALU__DOT__rightshiftlogic__DOT__stage[3U] 
        = ((8U & vlSelf->b) ? (vlSelf->ALU__DOT__rightshiftlogic__DOT__stage
                               [2U] >> 8U) : vlSelf->ALU__DOT__rightshiftlogic__DOT__stage
           [2U]);
    vlSelf->ALU__DOT__rightshiftlogic__DOT__stage[4U] 
        = ((0x10U & vlSelf->b) ? (vlSelf->ALU__DOT__rightshiftlogic__DOT__stage
                                  [3U] >> 0x10U) : 
           vlSelf->ALU__DOT__rightshiftlogic__DOT__stage
           [3U]);
    vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage[3U] 
        = ((8U & vlSelf->b) ? (((- (IData)((vlSelf->a 
                                            >> 0x1fU))) 
                                << 0x18U) | (vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage
                                             [2U] >> 8U))
            : vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage
           [2U]);
    vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage[4U] 
        = ((0x10U & vlSelf->b) ? (((- (IData)((vlSelf->a 
                                               >> 0x1fU))) 
                                   << 0x10U) | (vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage
                                                [3U] 
                                                >> 0x10U))
            : vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage
           [3U]);
    vlSelf->ALU__DOT__sBit = (((0xcU == (IData)(vlSelf->ALUControl)) 
                               | (0xdU == (IData)(vlSelf->ALUControl))) 
                              && (vlSelf->b >> 0x1fU));
    vlSelf->ALU__DOT__a = vlSelf->a;
    vlSelf->ALU__DOT__unsignDiv = ((0x11U == (IData)(vlSelf->ALUControl)) 
                                   | (0x13U == (IData)(vlSelf->ALUControl)));
    vlSelf->ALU__DOT__unsignedA = (0xeU == (IData)(vlSelf->ALUControl));
    if ((1U & (~ ((IData)(vlSelf->ALUControl) >> 4U)))) {
        if ((8U & (IData)(vlSelf->ALUControl))) {
            if ((4U & (IData)(vlSelf->ALUControl))) {
                vlSelf->ALU__DOT__sBit = ((1U & (~ 
                                                 ((IData)(vlSelf->ALUControl) 
                                                  >> 1U))) 
                                          && (1U & 
                                              ((1U 
                                                & (IData)(vlSelf->ALUControl))
                                                ? (vlSelf->b 
                                                   >> 0x1fU)
                                                : (vlSelf->b 
                                                   >> 0x1fU))));
                vlSelf->ALU__DOT__unsignedA = ((1U 
                                                & ((IData)(vlSelf->ALUControl) 
                                                   >> 1U)) 
                                               && (1U 
                                                   & (~ (IData)(vlSelf->ALUControl))));
            }
        }
    }
    vlSymsp->TOP__ALU__DOT__adder.cin = vlSelf->cin;
    vlSelf->ALU__DOT__multiplier__DOT__cs13 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c13, 1U);
    vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_upper.b 
        = (IData)((vlSelf->ALU__DOT__multiplier__DOT__s13 
                   >> 0x20U));
    vlSymsp->TOP__ALU__DOT__adder.a = vlSelf->a;
    vlSymsp->TOP__ALU__DOT__adder.b = vlSelf->b;
    vlSymsp->TOP__ALU__DOT__adder.Subtract = (IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(vlSelf->ALUControl))));
    vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_lower.a 
        = VL_SHIFTL_III(32,32,32, (IData)(vlSelf->ALU__DOT__multiplier__DOT__c13), 1U);
    vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_lower.b 
        = (IData)(vlSelf->ALU__DOT__multiplier__DOT__s13);
    vlSelf->ALU__DOT__divider__DOT__d = vlSelf->ALU__DOT__b;
    vlSelf->ALU__DOT__multiplier__DOT__done = vlSelf->ALU__DOT__multiply_done;
    vlSelf->ALU__DOT__multiplier__DOT__running = vlSelf->ALU__DOT__multiply_running;
    vlSelf->ALU__DOT__divider__DOT__done = vlSelf->ALU__DOT__divide_done;
    vlSelf->ALU__DOT__divider__DOT__running = vlSelf->ALU__DOT__divide_running;
    vlSelf->ALU__DOT__multiplier__DOT__clk = vlSelf->ALU__DOT__clk;
    vlSelf->ALU__DOT__divider__DOT__clk = vlSelf->ALU__DOT__clk;
    vlSelf->ALU__DOT__left_shifted = vlSelf->ALU__DOT__leftshift__DOT__stage
        [4U];
    vlSelf->ALU__DOT__right_shifted_logic = vlSelf->ALU__DOT__rightshiftlogic__DOT__stage
        [4U];
    vlSelf->ALU__DOT__right_shifted_arithmetic = vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage
        [4U];
    vlSelf->ALU__DOT__multiplier__DOT__b = (((QData)((IData)(vlSelf->ALU__DOT__sBit)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->b)));
    ALU__DOT__multiplier__DOT____Vcellinp__booth16__triplet 
        = (((IData)(vlSelf->ALU__DOT__sBit) << 2U) 
           | (((IData)(vlSelf->ALU__DOT__sBit) << 1U) 
              | (vlSelf->b >> 0x1fU)));
    vlSelf->ALU__DOT__leftshift__DOT__a = vlSelf->ALU__DOT__a;
    vlSelf->ALU__DOT__rightshiftlogic__DOT__a = vlSelf->ALU__DOT__a;
    vlSelf->ALU__DOT__rightshiftarithmetic__DOT__a 
        = vlSelf->ALU__DOT__a;
    vlSelf->ALU__DOT__divider__DOT__a = vlSelf->ALU__DOT__a;
    vlSelf->ALU__DOT__multiplier__DOT__a = vlSelf->ALU__DOT__a;
    vlSelf->ALU__DOT__divider__DOT__unsign = vlSelf->ALU__DOT__unsignDiv;
    vlSelf->ALU__DOT__divider__DOT__trueA = (((vlSelf->a 
                                               >> 0x1fU) 
                                              & (~ (IData)(vlSelf->ALU__DOT__unsignDiv)))
                                              ? ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->a))
                                              : vlSelf->a);
    vlSelf->ALU__DOT__divider__DOT__pBig = (QData)((IData)(vlSelf->ALU__DOT__divider__DOT__trueA));
    vlSelf->ALU__DOT__divider__DOT__clz = 0x20U;
    vlSelf->ALU__DOT__divider__DOT__unnamedblk1__DOT__i = 0x1fU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->ALU__DOT__divider__DOT__unnamedblk1__DOT__i)) {
            if ((1U & (vlSelf->b >> (0x1fU & vlSelf->ALU__DOT__divider__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->ALU__DOT__divider__DOT__clz 
                    = (0x3fU & ((IData)(0x1fU) - (0x1fU 
                                                  & vlSelf->ALU__DOT__divider__DOT__unnamedblk1__DOT__i)));
                goto __Vlabel1;
            }
            vlSelf->ALU__DOT__divider__DOT__unnamedblk1__DOT__i 
                = (vlSelf->ALU__DOT__divider__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel1: ;
    }
    vlSelf->ALU__DOT__divider__DOT__dNorm = (QData)((IData)(
                                                            VL_SHIFTL_III(32,32,6, vlSelf->b, (IData)(vlSelf->ALU__DOT__divider__DOT__clz))));
    vlSelf->ALU__DOT__divider__DOT__regPA_temp[0U] 
        = (IData)((vlSelf->ALU__DOT__divider__DOT__pBig 
                   << (IData)(vlSelf->ALU__DOT__divider__DOT__clz)));
    vlSelf->ALU__DOT__divider__DOT__regPA_temp[1U] 
        = (IData)(((vlSelf->ALU__DOT__divider__DOT__pBig 
                    << (IData)(vlSelf->ALU__DOT__divider__DOT__clz)) 
                   >> 0x20U));
    vlSelf->ALU__DOT__divider__DOT__regPA_temp[2U] = 0U;
    vlSelf->divByZero = (0U == (IData)(vlSelf->ALU__DOT__divider__DOT__clz));
    if (vlSelf->ALU__DOT__unsignedA) {
        vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
        vlSelf->ALU__DOT__multiplier__DOT__booth16__DOT__sign_ext_a 
            = (QData)((IData)(vlSelf->a));
    } else {
        vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
        vlSelf->ALU__DOT__multiplier__DOT__booth16__DOT__sign_ext_a 
            = (((QData)((IData)((- (IData)((vlSelf->a 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->a)));
    }
    vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__minus_a 
        = (1ULL + (~ vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__sign_ext_a));
    vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__product 
        = ((2U & vlSelf->b) ? ((1U & vlSelf->b) ? vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__minus_a
                                : (((QData)((IData)(
                                                    (0x7fffffffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__minus_a 
                                                                              >> 0x3fU)))))))) 
                                    << 0x21U) | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__minus_a)) 
                                                 << 1U)))
            : ((1U & vlSelf->b) ? vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__sign_ext_a
                : 0ULL));
    ALU__DOT__multiplier__DOT____Vcellout__booth0__partial_product 
        = vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__product;
    vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__minus_a 
        = (1ULL + (~ vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__sign_ext_a));
    vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__product 
        = ((8U & vlSelf->b) ? ((4U & vlSelf->b) ? (
                                                   (2U 
                                                    & vlSelf->b)
                                                    ? 0ULL
                                                    : vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__minus_a)
                                : ((2U & vlSelf->b)
                                    ? vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__minus_a
                                    : (((QData)((IData)(
                                                        (0x7fffffffU 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                        << 0x21U) | 
                                       ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__minus_a)) 
                                        << 1U)))) : 
           ((4U & vlSelf->b) ? ((2U & vlSelf->b) ? 
                                (((QData)((IData)((0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__sign_ext_a 
                                                                            >> 0x3fU)))))))) 
                                  << 0x21U) | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__sign_ext_a)) 
                                               << 1U))
                                 : vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__sign_ext_a)
             : ((2U & vlSelf->b) ? vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__sign_ext_a
                 : 0ULL)));
    ALU__DOT__multiplier__DOT____Vcellout__booth1__partial_product 
        = (vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__product 
           << 2U);
    vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__minus_a 
        = (1ULL + (~ vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__sign_ext_a));
    vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__product 
        = ((0x20U & vlSelf->b) ? ((0x10U & vlSelf->b)
                                   ? ((8U & vlSelf->b)
                                       ? 0ULL : vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__minus_a)
                                   : ((8U & vlSelf->b)
                                       ? vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__minus_a
                                       : (((QData)((IData)(
                                                           (0x7fffffffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                           << 0x21U) 
                                          | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__minus_a)) 
                                             << 1U))))
            : ((0x10U & vlSelf->b) ? ((8U & vlSelf->b)
                                       ? (((QData)((IData)(
                                                           (0x7fffffffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                           << 0x21U) 
                                          | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__sign_ext_a)) 
                                             << 1U))
                                       : vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__sign_ext_a)
                : ((8U & vlSelf->b) ? vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__sign_ext_a
                    : 0ULL)));
    ALU__DOT__multiplier__DOT____Vcellout__booth2__partial_product 
        = (vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__product 
           << 4U);
    vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__minus_a 
        = (1ULL + (~ vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__sign_ext_a));
    vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__product 
        = ((0x80U & vlSelf->b) ? ((0x40U & vlSelf->b)
                                   ? ((0x20U & vlSelf->b)
                                       ? 0ULL : vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__minus_a)
                                   : ((0x20U & vlSelf->b)
                                       ? vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__minus_a
                                       : (((QData)((IData)(
                                                           (0x7fffffffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                           << 0x21U) 
                                          | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__minus_a)) 
                                             << 1U))))
            : ((0x40U & vlSelf->b) ? ((0x20U & vlSelf->b)
                                       ? (((QData)((IData)(
                                                           (0x7fffffffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                           << 0x21U) 
                                          | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__sign_ext_a)) 
                                             << 1U))
                                       : vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__sign_ext_a)
                : ((0x20U & vlSelf->b) ? vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__sign_ext_a
                    : 0ULL)));
    ALU__DOT__multiplier__DOT____Vcellout__booth3__partial_product 
        = (vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__product 
           << 6U);
    vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__minus_a 
        = (1ULL + (~ vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__sign_ext_a));
    vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__product 
        = ((0x200U & vlSelf->b) ? ((0x100U & vlSelf->b)
                                    ? ((0x80U & vlSelf->b)
                                        ? 0ULL : vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__minus_a)
                                    : ((0x80U & vlSelf->b)
                                        ? vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__minus_a
                                        : (((QData)((IData)(
                                                            (0x7fffffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                            << 0x21U) 
                                           | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__minus_a)) 
                                              << 1U))))
            : ((0x100U & vlSelf->b) ? ((0x80U & vlSelf->b)
                                        ? (((QData)((IData)(
                                                            (0x7fffffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                            << 0x21U) 
                                           | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__sign_ext_a)) 
                                              << 1U))
                                        : vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__sign_ext_a)
                : ((0x80U & vlSelf->b) ? vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__sign_ext_a
                    : 0ULL)));
    ALU__DOT__multiplier__DOT____Vcellout__booth4__partial_product 
        = (vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__product 
           << 8U);
    vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__minus_a 
        = (1ULL + (~ vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__sign_ext_a));
    vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__product 
        = ((0x800U & vlSelf->b) ? ((0x400U & vlSelf->b)
                                    ? ((0x200U & vlSelf->b)
                                        ? 0ULL : vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__minus_a)
                                    : ((0x200U & vlSelf->b)
                                        ? vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__minus_a
                                        : (((QData)((IData)(
                                                            (0x7fffffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                            << 0x21U) 
                                           | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__minus_a)) 
                                              << 1U))))
            : ((0x400U & vlSelf->b) ? ((0x200U & vlSelf->b)
                                        ? (((QData)((IData)(
                                                            (0x7fffffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                            << 0x21U) 
                                           | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__sign_ext_a)) 
                                              << 1U))
                                        : vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__sign_ext_a)
                : ((0x200U & vlSelf->b) ? vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__sign_ext_a
                    : 0ULL)));
    ALU__DOT__multiplier__DOT____Vcellout__booth5__partial_product 
        = (vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__product 
           << 0xaU);
    vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__minus_a 
        = (1ULL + (~ vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__sign_ext_a));
    vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__product 
        = ((0x2000U & vlSelf->b) ? ((0x1000U & vlSelf->b)
                                     ? ((0x800U & vlSelf->b)
                                         ? 0ULL : vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__minus_a)
                                     : ((0x800U & vlSelf->b)
                                         ? vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__minus_a
                                         : (((QData)((IData)(
                                                             (0x7fffffffU 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                             << 0x21U) 
                                            | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__minus_a)) 
                                               << 1U))))
            : ((0x1000U & vlSelf->b) ? ((0x800U & vlSelf->b)
                                         ? (((QData)((IData)(
                                                             (0x7fffffffU 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                             << 0x21U) 
                                            | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__sign_ext_a)) 
                                               << 1U))
                                         : vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__sign_ext_a)
                : ((0x800U & vlSelf->b) ? vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__sign_ext_a
                    : 0ULL)));
    ALU__DOT__multiplier__DOT____Vcellout__booth6__partial_product 
        = (vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__product 
           << 0xcU);
    vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__minus_a 
        = (1ULL + (~ vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__sign_ext_a));
    vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__product 
        = ((0x8000U & vlSelf->b) ? ((0x4000U & vlSelf->b)
                                     ? ((0x2000U & vlSelf->b)
                                         ? 0ULL : vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__minus_a)
                                     : ((0x2000U & vlSelf->b)
                                         ? vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__minus_a
                                         : (((QData)((IData)(
                                                             (0x7fffffffU 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                             << 0x21U) 
                                            | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__minus_a)) 
                                               << 1U))))
            : ((0x4000U & vlSelf->b) ? ((0x2000U & vlSelf->b)
                                         ? (((QData)((IData)(
                                                             (0x7fffffffU 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                             << 0x21U) 
                                            | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__sign_ext_a)) 
                                               << 1U))
                                         : vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__sign_ext_a)
                : ((0x2000U & vlSelf->b) ? vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__sign_ext_a
                    : 0ULL)));
    ALU__DOT__multiplier__DOT____Vcellout__booth7__partial_product 
        = (vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__product 
           << 0xeU);
    vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__minus_a 
        = (1ULL + (~ vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__sign_ext_a));
    vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__product 
        = ((0x20000U & vlSelf->b) ? ((0x10000U & vlSelf->b)
                                      ? ((0x8000U & vlSelf->b)
                                          ? 0ULL : vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__minus_a)
                                      : ((0x8000U & vlSelf->b)
                                          ? vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__minus_a
                                          : (((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                              << 0x21U) 
                                             | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__minus_a)) 
                                                << 1U))))
            : ((0x10000U & vlSelf->b) ? ((0x8000U & vlSelf->b)
                                          ? (((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                              << 0x21U) 
                                             | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__sign_ext_a)) 
                                                << 1U))
                                          : vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__sign_ext_a)
                : ((0x8000U & vlSelf->b) ? vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__sign_ext_a
                    : 0ULL)));
    ALU__DOT__multiplier__DOT____Vcellout__booth8__partial_product 
        = (vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__product 
           << 0x10U);
    vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__minus_a 
        = (1ULL + (~ vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__sign_ext_a));
    vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__product 
        = ((0x80000U & vlSelf->b) ? ((0x40000U & vlSelf->b)
                                      ? ((0x20000U 
                                          & vlSelf->b)
                                          ? 0ULL : vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__minus_a)
                                      : ((0x20000U 
                                          & vlSelf->b)
                                          ? vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__minus_a
                                          : (((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                              << 0x21U) 
                                             | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__minus_a)) 
                                                << 1U))))
            : ((0x40000U & vlSelf->b) ? ((0x20000U 
                                          & vlSelf->b)
                                          ? (((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                              << 0x21U) 
                                             | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__sign_ext_a)) 
                                                << 1U))
                                          : vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__sign_ext_a)
                : ((0x20000U & vlSelf->b) ? vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__sign_ext_a
                    : 0ULL)));
    ALU__DOT__multiplier__DOT____Vcellout__booth9__partial_product 
        = (vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__product 
           << 0x12U);
    vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__minus_a 
        = (1ULL + (~ vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__sign_ext_a));
    vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__product 
        = ((0x200000U & vlSelf->b) ? ((0x100000U & vlSelf->b)
                                       ? ((0x80000U 
                                           & vlSelf->b)
                                           ? 0ULL : vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__minus_a)
                                       : ((0x80000U 
                                           & vlSelf->b)
                                           ? vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__minus_a
                                           : (((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                               << 0x21U) 
                                              | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__minus_a)) 
                                                 << 1U))))
            : ((0x100000U & vlSelf->b) ? ((0x80000U 
                                           & vlSelf->b)
                                           ? (((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                               << 0x21U) 
                                              | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__sign_ext_a)) 
                                                 << 1U))
                                           : vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__sign_ext_a)
                : ((0x80000U & vlSelf->b) ? vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__sign_ext_a
                    : 0ULL)));
    ALU__DOT__multiplier__DOT____Vcellout__booth10__partial_product 
        = (vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__product 
           << 0x14U);
    vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__minus_a 
        = (1ULL + (~ vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__sign_ext_a));
    vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__product 
        = ((0x800000U & vlSelf->b) ? ((0x400000U & vlSelf->b)
                                       ? ((0x200000U 
                                           & vlSelf->b)
                                           ? 0ULL : vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__minus_a)
                                       : ((0x200000U 
                                           & vlSelf->b)
                                           ? vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__minus_a
                                           : (((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                               << 0x21U) 
                                              | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__minus_a)) 
                                                 << 1U))))
            : ((0x400000U & vlSelf->b) ? ((0x200000U 
                                           & vlSelf->b)
                                           ? (((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                               << 0x21U) 
                                              | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__sign_ext_a)) 
                                                 << 1U))
                                           : vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__sign_ext_a)
                : ((0x200000U & vlSelf->b) ? vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__sign_ext_a
                    : 0ULL)));
    ALU__DOT__multiplier__DOT____Vcellout__booth11__partial_product 
        = (vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__product 
           << 0x16U);
    vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__minus_a 
        = (1ULL + (~ vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__sign_ext_a));
    vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__product 
        = ((0x2000000U & vlSelf->b) ? ((0x1000000U 
                                        & vlSelf->b)
                                        ? ((0x800000U 
                                            & vlSelf->b)
                                            ? 0ULL : vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__minus_a)
                                        : ((0x800000U 
                                            & vlSelf->b)
                                            ? vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__minus_a
                                            : (((QData)((IData)(
                                                                (0x7fffffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                                << 0x21U) 
                                               | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__minus_a)) 
                                                  << 1U))))
            : ((0x1000000U & vlSelf->b) ? ((0x800000U 
                                            & vlSelf->b)
                                            ? (((QData)((IData)(
                                                                (0x7fffffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                                << 0x21U) 
                                               | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__sign_ext_a)) 
                                                  << 1U))
                                            : vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__sign_ext_a)
                : ((0x800000U & vlSelf->b) ? vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__sign_ext_a
                    : 0ULL)));
    ALU__DOT__multiplier__DOT____Vcellout__booth12__partial_product 
        = (vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__product 
           << 0x18U);
    vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__minus_a 
        = (1ULL + (~ vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__sign_ext_a));
    vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__product 
        = ((0x8000000U & vlSelf->b) ? ((0x4000000U 
                                        & vlSelf->b)
                                        ? ((0x2000000U 
                                            & vlSelf->b)
                                            ? 0ULL : vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__minus_a)
                                        : ((0x2000000U 
                                            & vlSelf->b)
                                            ? vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__minus_a
                                            : (((QData)((IData)(
                                                                (0x7fffffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                                << 0x21U) 
                                               | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__minus_a)) 
                                                  << 1U))))
            : ((0x4000000U & vlSelf->b) ? ((0x2000000U 
                                            & vlSelf->b)
                                            ? (((QData)((IData)(
                                                                (0x7fffffffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                                << 0x21U) 
                                               | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__sign_ext_a)) 
                                                  << 1U))
                                            : vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__sign_ext_a)
                : ((0x2000000U & vlSelf->b) ? vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__sign_ext_a
                    : 0ULL)));
    ALU__DOT__multiplier__DOT____Vcellout__booth13__partial_product 
        = (vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__product 
           << 0x1aU);
    vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__minus_a 
        = (1ULL + (~ vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__sign_ext_a));
    vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__product 
        = ((0x20000000U & vlSelf->b) ? ((0x10000000U 
                                         & vlSelf->b)
                                         ? ((0x8000000U 
                                             & vlSelf->b)
                                             ? 0ULL
                                             : vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__minus_a)
                                         : ((0x8000000U 
                                             & vlSelf->b)
                                             ? vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__minus_a
                                             : (((QData)((IData)(
                                                                 (0x7fffffffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                                 << 0x21U) 
                                                | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__minus_a)) 
                                                   << 1U))))
            : ((0x10000000U & vlSelf->b) ? ((0x8000000U 
                                             & vlSelf->b)
                                             ? (((QData)((IData)(
                                                                 (0x7fffffffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                                 << 0x21U) 
                                                | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__sign_ext_a)) 
                                                   << 1U))
                                             : vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__sign_ext_a)
                : ((0x8000000U & vlSelf->b) ? vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__sign_ext_a
                    : 0ULL)));
    ALU__DOT__multiplier__DOT____Vcellout__booth14__partial_product 
        = (vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__product 
           << 0x1cU);
    vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__minus_a 
        = (1ULL + (~ vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__sign_ext_a));
    vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__product 
        = ((vlSelf->b >> 0x1fU) ? ((0x40000000U & vlSelf->b)
                                    ? ((0x20000000U 
                                        & vlSelf->b)
                                        ? 0ULL : vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__minus_a)
                                    : ((0x20000000U 
                                        & vlSelf->b)
                                        ? vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__minus_a
                                        : (((QData)((IData)(
                                                            (0x7fffffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__minus_a 
                                                                                >> 0x3fU)))))))) 
                                            << 0x21U) 
                                           | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__minus_a)) 
                                              << 1U))))
            : ((0x40000000U & vlSelf->b) ? ((0x20000000U 
                                             & vlSelf->b)
                                             ? (((QData)((IData)(
                                                                 (0x7fffffffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                                 << 0x21U) 
                                                | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__sign_ext_a)) 
                                                   << 1U))
                                             : vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__sign_ext_a)
                : ((0x20000000U & vlSelf->b) ? vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__sign_ext_a
                    : 0ULL)));
    ALU__DOT__multiplier__DOT____Vcellout__booth15__partial_product 
        = (vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__product 
           << 0x1eU);
    vlSelf->ALU__DOT__multiplier__DOT__unsignedA = vlSelf->ALU__DOT__unsignedA;
    vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_upper.a 
        = (IData)((vlSelf->ALU__DOT__multiplier__DOT__cs13 
                   >> 0x20U));
    vlSelf->ALU__DOT__leftshift__DOT__y = vlSelf->ALU__DOT__left_shifted;
    vlSelf->ALU__DOT__rightshiftlogic__DOT__y = vlSelf->ALU__DOT__right_shifted_logic;
    vlSelf->ALU__DOT__rightshiftarithmetic__DOT__y 
        = vlSelf->ALU__DOT__right_shifted_arithmetic;
    vlSelf->ALU__DOT__multiplier__DOT__booth16__DOT__triplet 
        = ALU__DOT__multiplier__DOT____Vcellinp__booth16__triplet;
    vlSelf->ALU__DOT__multiplier__DOT__booth16__DOT__minus_a 
        = (1ULL + (~ vlSelf->ALU__DOT__multiplier__DOT__booth16__DOT__sign_ext_a));
    vlSelf->ALU__DOT__multiplier__DOT__booth16__DOT__product 
        = ((4U & (IData)(ALU__DOT__multiplier__DOT____Vcellinp__booth16__triplet))
            ? ((2U & (IData)(ALU__DOT__multiplier__DOT____Vcellinp__booth16__triplet))
                ? ((1U & (IData)(ALU__DOT__multiplier__DOT____Vcellinp__booth16__triplet))
                    ? 0ULL : vlSelf->ALU__DOT__multiplier__DOT__booth16__DOT__minus_a)
                : ((1U & (IData)(ALU__DOT__multiplier__DOT____Vcellinp__booth16__triplet))
                    ? vlSelf->ALU__DOT__multiplier__DOT__booth16__DOT__minus_a
                    : (((QData)((IData)((0x7fffffffU 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->ALU__DOT__multiplier__DOT__booth16__DOT__minus_a 
                                                                  >> 0x3fU)))))))) 
                        << 0x21U) | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth16__DOT__minus_a)) 
                                     << 1U)))) : ((2U 
                                                   & (IData)(ALU__DOT__multiplier__DOT____Vcellinp__booth16__triplet))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(ALU__DOT__multiplier__DOT____Vcellinp__booth16__triplet))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7fffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ALU__DOT__multiplier__DOT__booth16__DOT__sign_ext_a 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x21U) 
                                                    | ((QData)((IData)(vlSelf->ALU__DOT__multiplier__DOT__booth16__DOT__sign_ext_a)) 
                                                       << 1U))
                                                    : vlSelf->ALU__DOT__multiplier__DOT__booth16__DOT__sign_ext_a)
                                                   : 
                                                  ((1U 
                                                    & (IData)(ALU__DOT__multiplier__DOT____Vcellinp__booth16__triplet))
                                                    ? vlSelf->ALU__DOT__multiplier__DOT__booth16__DOT__sign_ext_a
                                                    : 0ULL)));
    ALU__DOT__multiplier__DOT____Vcellout__booth16__partial_product 
        = (vlSelf->ALU__DOT__multiplier__DOT__booth16__DOT__product 
           << 0x20U);
    vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__a 
        = vlSelf->ALU__DOT__multiplier__DOT__a;
    vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__a 
        = vlSelf->ALU__DOT__multiplier__DOT__a;
    vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__a 
        = vlSelf->ALU__DOT__multiplier__DOT__a;
    vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__a 
        = vlSelf->ALU__DOT__multiplier__DOT__a;
    vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__a 
        = vlSelf->ALU__DOT__multiplier__DOT__a;
    vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__a 
        = vlSelf->ALU__DOT__multiplier__DOT__a;
    vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__a 
        = vlSelf->ALU__DOT__multiplier__DOT__a;
    vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__a 
        = vlSelf->ALU__DOT__multiplier__DOT__a;
    vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__a 
        = vlSelf->ALU__DOT__multiplier__DOT__a;
    vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__a 
        = vlSelf->ALU__DOT__multiplier__DOT__a;
    vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__a 
        = vlSelf->ALU__DOT__multiplier__DOT__a;
    vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__a 
        = vlSelf->ALU__DOT__multiplier__DOT__a;
    vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__a 
        = vlSelf->ALU__DOT__multiplier__DOT__a;
    vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__a 
        = vlSelf->ALU__DOT__multiplier__DOT__a;
    vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__a 
        = vlSelf->ALU__DOT__multiplier__DOT__a;
    vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__a 
        = vlSelf->ALU__DOT__multiplier__DOT__a;
    vlSelf->ALU__DOT__multiplier__DOT__booth16__DOT__a 
        = vlSelf->ALU__DOT__multiplier__DOT__a;
    vlSelf->ALU__DOT__divByZero = vlSelf->divByZero;
    vlSelf->ALU__DOT__divider__DOT__lut__DOT__d = (0xfU 
                                                   & (IData)(
                                                             (vlSelf->ALU__DOT__divider__DOT__dNorm 
                                                              >> 0x1cU)));
    vlSelf->ALU__DOT__divider__DOT__topBits = ((0x20U 
                                                & (vlSelf->ALU__DOT__divider__DOT__regPA[2U] 
                                                   << 3U)) 
                                               | (vlSelf->ALU__DOT__divider__DOT__regPA[1U] 
                                                  >> 0x1bU));
    vlSelf->ALU__DOT__divider__DOT__signal = ((0x3c0U 
                                               & ((IData)(
                                                          (vlSelf->ALU__DOT__divider__DOT__dNorm 
                                                           >> 0x1cU)) 
                                                  << 6U)) 
                                              | (IData)(vlSelf->ALU__DOT__divider__DOT__topBits));
    vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__partial_product 
        = ALU__DOT__multiplier__DOT____Vcellout__booth0__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__layer0[0U] = ALU__DOT__multiplier__DOT____Vcellout__booth0__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__partial_product 
        = ALU__DOT__multiplier__DOT____Vcellout__booth1__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__layer0[1U] = ALU__DOT__multiplier__DOT____Vcellout__booth1__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__partial_product 
        = ALU__DOT__multiplier__DOT____Vcellout__booth2__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__layer0[2U] = ALU__DOT__multiplier__DOT____Vcellout__booth2__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__partial_product 
        = ALU__DOT__multiplier__DOT____Vcellout__booth3__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__layer0[3U] = ALU__DOT__multiplier__DOT____Vcellout__booth3__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__partial_product 
        = ALU__DOT__multiplier__DOT____Vcellout__booth4__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__layer0[4U] = ALU__DOT__multiplier__DOT____Vcellout__booth4__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__partial_product 
        = ALU__DOT__multiplier__DOT____Vcellout__booth5__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__layer0[5U] = ALU__DOT__multiplier__DOT____Vcellout__booth5__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__partial_product 
        = ALU__DOT__multiplier__DOT____Vcellout__booth6__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__layer0[6U] = ALU__DOT__multiplier__DOT____Vcellout__booth6__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__partial_product 
        = ALU__DOT__multiplier__DOT____Vcellout__booth7__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__layer0[7U] = ALU__DOT__multiplier__DOT____Vcellout__booth7__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__partial_product 
        = ALU__DOT__multiplier__DOT____Vcellout__booth8__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__layer0[8U] = ALU__DOT__multiplier__DOT____Vcellout__booth8__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__partial_product 
        = ALU__DOT__multiplier__DOT____Vcellout__booth9__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__layer0[9U] = ALU__DOT__multiplier__DOT____Vcellout__booth9__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__partial_product 
        = ALU__DOT__multiplier__DOT____Vcellout__booth10__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__layer0[0xaU] 
        = ALU__DOT__multiplier__DOT____Vcellout__booth10__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__partial_product 
        = ALU__DOT__multiplier__DOT____Vcellout__booth11__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__layer0[0xbU] 
        = ALU__DOT__multiplier__DOT____Vcellout__booth11__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__partial_product 
        = ALU__DOT__multiplier__DOT____Vcellout__booth12__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__layer0[0xcU] 
        = ALU__DOT__multiplier__DOT____Vcellout__booth12__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__partial_product 
        = ALU__DOT__multiplier__DOT____Vcellout__booth13__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__layer0[0xdU] 
        = ALU__DOT__multiplier__DOT____Vcellout__booth13__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__partial_product 
        = ALU__DOT__multiplier__DOT____Vcellout__booth14__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__layer0[0xeU] 
        = ALU__DOT__multiplier__DOT____Vcellout__booth14__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__partial_product 
        = ALU__DOT__multiplier__DOT____Vcellout__booth15__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__layer0[0xfU] 
        = ALU__DOT__multiplier__DOT____Vcellout__booth15__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__unsignedA 
        = vlSelf->ALU__DOT__multiplier__DOT__unsignedA;
    vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__unsignedA 
        = vlSelf->ALU__DOT__multiplier__DOT__unsignedA;
    vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__unsignedA 
        = vlSelf->ALU__DOT__multiplier__DOT__unsignedA;
    vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__unsignedA 
        = vlSelf->ALU__DOT__multiplier__DOT__unsignedA;
    vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__unsignedA 
        = vlSelf->ALU__DOT__multiplier__DOT__unsignedA;
    vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__unsignedA 
        = vlSelf->ALU__DOT__multiplier__DOT__unsignedA;
    vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__unsignedA 
        = vlSelf->ALU__DOT__multiplier__DOT__unsignedA;
    vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__unsignedA 
        = vlSelf->ALU__DOT__multiplier__DOT__unsignedA;
    vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__unsignedA 
        = vlSelf->ALU__DOT__multiplier__DOT__unsignedA;
    vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__unsignedA 
        = vlSelf->ALU__DOT__multiplier__DOT__unsignedA;
    vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__unsignedA 
        = vlSelf->ALU__DOT__multiplier__DOT__unsignedA;
    vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__unsignedA 
        = vlSelf->ALU__DOT__multiplier__DOT__unsignedA;
    vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__unsignedA 
        = vlSelf->ALU__DOT__multiplier__DOT__unsignedA;
    vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__unsignedA 
        = vlSelf->ALU__DOT__multiplier__DOT__unsignedA;
    vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__unsignedA 
        = vlSelf->ALU__DOT__multiplier__DOT__unsignedA;
    vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__unsignedA 
        = vlSelf->ALU__DOT__multiplier__DOT__unsignedA;
    vlSelf->ALU__DOT__multiplier__DOT__booth16__DOT__unsignedA 
        = vlSelf->ALU__DOT__multiplier__DOT__unsignedA;
    vlSelf->ALU__DOT__multiplier__DOT__booth16__DOT__partial_product 
        = ALU__DOT__multiplier__DOT____Vcellout__booth16__partial_product;
    vlSelf->ALU__DOT__multiplier__DOT__layer0[0x10U] 
        = ALU__DOT__multiplier__DOT____Vcellout__booth16__partial_product;
    vlSelf->ALU__DOT__divider__DOT__divByZero = vlSelf->ALU__DOT__divByZero;
    vlSelf->ALU__DOT__divider__DOT__lut__DOT__p = vlSelf->ALU__DOT__divider__DOT__topBits;
    vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal 
        = ((0x3c0U & ((IData)((vlSelf->ALU__DOT__divider__DOT__dNorm 
                               >> 0x1cU)) << 6U)) | (IData)(vlSelf->ALU__DOT__divider__DOT__topBits));
    vlSelf->ALU__DOT__divider__DOT__qC = ((0x200U & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                           ? ((0x100U 
                                               & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                               ? ((0x80U 
                                                   & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((0x40U 
                                                    & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                          ? 0U
                                                          : 7U)
                                                         : 7U))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 7U
                                                        : 6U))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 6U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                          ? 6U
                                                          : 0U)
                                                         : 0U))
                                                       : 0U))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 0U
                                                         : 2U)
                                                        : 2U))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 2U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                          ? 2U
                                                          : 1U)
                                                         : 1U))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 1U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                          ? 1U
                                                          : 0U)
                                                         : 0U)))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 0U
                                                        : 7U)
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 7U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                          ? 7U
                                                          : 6U))
                                                        : 6U))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 6U
                                                        : 0U)
                                                       : 0U))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 0U
                                                        : 2U))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 2U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 2U
                                                         : 1U))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 1U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                          ? 1U
                                                          : 0U)
                                                         : 0U))))))
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 0U
                                                        : 7U)
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 7U
                                                         : 6U)
                                                        : 6U))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 6U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                          ? 6U
                                                          : 0U))
                                                        : 0U)
                                                       : 0U))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                          ? 0U
                                                          : 2U)
                                                         : 2U)))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 2U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 2U
                                                         : 1U))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 1U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                          ? 1U
                                                          : 0U)
                                                         : 0U)))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 0U
                                                        : 7U)
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 7U
                                                         : 6U)
                                                        : 6U))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 6U
                                                         : 0U)
                                                        : 0U)
                                                       : 0U))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 0U
                                                         : 2U)))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 2U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 2U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                          ? 2U
                                                          : 1U)))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 1U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                          ? 1U
                                                          : 0U)
                                                         : 0U)))))))
                                               : ((0x80U 
                                                   & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((0x40U 
                                                    & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                          ? 0U
                                                          : 7U))
                                                        : 7U)
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                          ? 7U
                                                          : 6U)
                                                         : 6U)
                                                        : 6U))
                                                      : 0U)
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 2U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 1U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 1U
                                                         : 0U)))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                          ? 0U
                                                          : 7U))
                                                        : 7U)
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 6U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 6U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                          ? 6U
                                                          : 0U))))
                                                      : 0U)
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 0U
                                                         : 2U)
                                                        : 2U)
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 1U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 1U
                                                         : 0U))))))
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                          ? 0U
                                                          : 7U))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 7U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                          ? 7U
                                                          : 6U)))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 6U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 6U
                                                         : 0U)))
                                                      : 0U)
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                          ? 0U
                                                          : 2U))
                                                        : 2U)
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                          ? 2U
                                                          : 1U)
                                                         : 1U)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 1U
                                                         : 0U)))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 0U
                                                         : 7U)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 7U
                                                         : 6U))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 6U
                                                        : 0U))
                                                      : 0U)
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 0U
                                                        : 2U)
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 2U
                                                         : 1U)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ALU__DOT__divider__DOT__lut__DOT__signal))
                                                         ? 1U
                                                         : 0U))))))))
                                           : 0U);
    vlSelf->ALU__DOT__divider__DOT__lut__DOT__q = vlSelf->ALU__DOT__divider__DOT__qC;
    vlSelf->ALU__DOT__divider__DOT__dLS = (0x7ffffffffULL 
                                           & VL_SHIFTL_QQI(35,35,32, vlSelf->ALU__DOT__divider__DOT__dNorm, 1U));
    vlSelf->ALU__DOT__divider__DOT__dM = (0x7ffffffffULL 
                                          & (1ULL + 
                                             (~ vlSelf->ALU__DOT__divider__DOT__dNorm)));
    vlSelf->ALU__DOT__divider__DOT__dMLS = (0x7ffffffffULL 
                                            & (1ULL 
                                               + (~ vlSelf->ALU__DOT__divider__DOT__dLS)));
    vlSelf->ALU__DOT__divider__DOT__dC = ((4U & (IData)(vlSelf->ALU__DOT__divider__DOT__qC))
                                           ? ((2U & (IData)(vlSelf->ALU__DOT__divider__DOT__qC))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ALU__DOT__divider__DOT__qC))
                                                   ? vlSelf->ALU__DOT__divider__DOT__dM
                                                   : vlSelf->ALU__DOT__divider__DOT__dMLS)
                                               : vlSelf->ALU__DOT__divider__DOT__dNorm)
                                           : ((2U & (IData)(vlSelf->ALU__DOT__divider__DOT__qC))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ALU__DOT__divider__DOT__qC))
                                                   ? vlSelf->ALU__DOT__divider__DOT__dNorm
                                                   : vlSelf->ALU__DOT__divider__DOT__dLS)
                                               : ((1U 
                                                   & (IData)(vlSelf->ALU__DOT__divider__DOT__qC))
                                                   ? vlSelf->ALU__DOT__divider__DOT__dNorm
                                                   : 0ULL)));
    VL_SHIFTL_WWI(67,67,32, __Vtemp_15, vlSelf->ALU__DOT__divider__DOT__regPA, 2U);
    vlSelf->ALU__DOT__divider__DOT__regPA_TS[0U] = 
        __Vtemp_15[0U];
    vlSelf->ALU__DOT__divider__DOT__regPA_TS[1U] = 
        __Vtemp_15[1U];
    vlSelf->ALU__DOT__divider__DOT__regPA_TS[2U] = 
        (7U & __Vtemp_15[2U]);
    vlSelf->ALU__DOT__divider__DOT__pNext = (0x7ffffffffULL 
                                             & ((((QData)((IData)(
                                                                  vlSelf->ALU__DOT__divider__DOT__regPA_TS[2U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ALU__DOT__divider__DOT__regPA_TS[1U]))) 
                                                - vlSelf->ALU__DOT__divider__DOT__dC));
}

VL_ATTR_COLD void VALU___024root___stl_sequent__TOP__1(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___stl_sequent__TOP__1\n"); );
    // Body
    vlSelf->ALU__DOT__multiplier__DOT__cout = vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_lower.cout;
    vlSelf->ALU__DOT__cout = vlSymsp->TOP__ALU__DOT__adder.cout;
    vlSelf->ALU__DOT__s = vlSymsp->TOP__ALU__DOT__adder.s;
    vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_upper.cin 
        = vlSelf->ALU__DOT__multiplier__DOT__cout;
    vlSelf->CarryOutFlag = vlSelf->ALU__DOT__cout;
    vlSelf->OverflowFlag = (((vlSelf->a ^ vlSelf->b) 
                             & (vlSelf->a ^ vlSelf->ALU__DOT__s)) 
                            >> 0x1fU);
    vlSelf->ALUResult = ((0x10U & (IData)(vlSelf->ALUControl))
                          ? ((8U & (IData)(vlSelf->ALUControl))
                              ? 0U : ((4U & (IData)(vlSelf->ALUControl))
                                       ? ((2U & (IData)(vlSelf->ALUControl))
                                           ? ((1U & (IData)(vlSelf->ALUControl))
                                               ? 0U
                                               : 0U)
                                           : 0U) : 
                                      ((2U & (IData)(vlSelf->ALUControl))
                                        ? ((1U & (IData)(vlSelf->ALUControl))
                                            ? (IData)(vlSelf->ALU__DOT__remainder)
                                            : (IData)(vlSelf->ALU__DOT__remainder))
                                        : vlSelf->ALU__DOT__quotient)))
                          : ((8U & (IData)(vlSelf->ALUControl))
                              ? ((4U & (IData)(vlSelf->ALUControl))
                                  ? ((2U & (IData)(vlSelf->ALUControl))
                                      ? ((1U & (IData)(vlSelf->ALUControl))
                                          ? (IData)(
                                                    (vlSelf->ALU__DOT__multiplied_product 
                                                     >> 0x20U))
                                          : (IData)(
                                                    (vlSelf->ALU__DOT__multiplied_product 
                                                     >> 0x20U)))
                                      : ((1U & (IData)(vlSelf->ALUControl))
                                          ? (IData)(
                                                    (vlSelf->ALU__DOT__multiplied_product 
                                                     >> 0x20U))
                                          : (IData)(vlSelf->ALU__DOT__multiplied_product)))
                                  : ((2U & (IData)(vlSelf->ALUControl))
                                      ? 0U : ((1U & (IData)(vlSelf->ALUControl))
                                               ? vlSelf->ALU__DOT__right_shifted_arithmetic
                                               : vlSelf->ALU__DOT__right_shifted_logic)))
                              : ((4U & (IData)(vlSelf->ALUControl))
                                  ? ((2U & (IData)(vlSelf->ALUControl))
                                      ? ((1U & (IData)(vlSelf->ALUControl))
                                          ? vlSelf->ALU__DOT__left_shifted
                                          : (1U & (~ (IData)(vlSelf->ALU__DOT__cout))))
                                      : ((1U & (IData)(vlSelf->ALUControl))
                                          ? (1U & (
                                                   (vlSelf->ALU__DOT__s 
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
                                      : vlSelf->ALU__DOT__s))));
    vlSelf->ALU__DOT__CarryOutFlag = vlSelf->CarryOutFlag;
    vlSelf->ALU__DOT__OverflowFlag = vlSelf->OverflowFlag;
    vlSelf->ALU__DOT__ALUResult = vlSelf->ALUResult;
}

VL_ATTR_COLD void VALU_carry_lookahead_adder___stl_sequent__TOP__ALU__DOT__multiplier__DOT__fast_adder_lower__0(VALU_carry_lookahead_adder* vlSelf);
void VALU_carry_lookahead_adder___nba_sequent__TOP__ALU__DOT__multiplier__DOT__fast_adder_upper__0(VALU_carry_lookahead_adder* vlSelf);
void VALU_carry_lookahead_adder___ico_sequent__TOP__ALU__DOT__adder__0(VALU_carry_lookahead_adder* vlSelf);
void VALU_carry_lookahead_adder___nba_sequent__TOP__ALU__DOT__multiplier__DOT__fast_adder_upper__1(VALU_carry_lookahead_adder* vlSelf);
void VALU___024root___nba_sequent__TOP__4(VALU___024root* vlSelf);

VL_ATTR_COLD void VALU___024root___eval_stl(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VALU___024root___stl_sequent__TOP__0(vlSelf);
        VALU_carry_lookahead_adder___stl_sequent__TOP__ALU__DOT__multiplier__DOT__fast_adder_lower__0((&vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_lower));
        VALU_carry_lookahead_adder___nba_sequent__TOP__ALU__DOT__multiplier__DOT__fast_adder_upper__0((&vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_upper));
        VALU_carry_lookahead_adder___ico_sequent__TOP__ALU__DOT__adder__0((&vlSymsp->TOP__ALU__DOT__adder));
        VALU___024root___stl_sequent__TOP__1(vlSelf);
        VALU_carry_lookahead_adder___nba_sequent__TOP__ALU__DOT__multiplier__DOT__fast_adder_upper__1((&vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_upper));
        VALU___024root___nba_sequent__TOP__4(vlSelf);
    }
}
