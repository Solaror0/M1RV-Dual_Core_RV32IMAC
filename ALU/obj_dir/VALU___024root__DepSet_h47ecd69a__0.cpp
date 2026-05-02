// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU__pch.h"
#include "VALU__Syms.h"
#include "VALU___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__ico(VALU___024root* vlSelf);
#endif  // VL_DEBUG

void VALU___024root___eval_triggers__ico(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VALU___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VALU___024root___ico_sequent__TOP__0(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___ico_sequent__TOP__0\n"); );
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
    // Body
    vlSelf->ALU__DOT__ALUControl = vlSelf->ALUControl;
    vlSelf->ALU__DOT__cin = vlSelf->cin;
    vlSelf->ALU__DOT__leftshift__DOT__shamt = (0x1fU 
                                               & (vlSelf->b 
                                                  >> 0U));
    vlSelf->ALU__DOT__rightshiftlogic__DOT__shamt = 
        (0x1fU & (vlSelf->b >> 0U));
    vlSelf->ALU__DOT__rightshiftarithmetic__DOT__shamt 
        = (0x1fU & (vlSelf->b >> 0U));
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
    vlSelf->ALU__DOT__b = vlSelf->b;
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
    vlSelf->ALU__DOT__multiplier__DOT__booth0__DOT__sign_ext_a 
        = (((QData)((IData)((- (IData)((vlSelf->a >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->a)));
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
    vlSelf->ALU__DOT__multiplier__DOT__booth1__DOT__sign_ext_a 
        = (((QData)((IData)((- (IData)((vlSelf->a >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->a)));
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
    vlSelf->ALU__DOT__multiplier__DOT__booth2__DOT__sign_ext_a 
        = (((QData)((IData)((- (IData)((vlSelf->a >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->a)));
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
    vlSelf->ALU__DOT__multiplier__DOT__booth3__DOT__sign_ext_a 
        = (((QData)((IData)((- (IData)((vlSelf->a >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->a)));
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
    vlSelf->ALU__DOT__multiplier__DOT__booth4__DOT__sign_ext_a 
        = (((QData)((IData)((- (IData)((vlSelf->a >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->a)));
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
    vlSelf->ALU__DOT__multiplier__DOT__booth5__DOT__sign_ext_a 
        = (((QData)((IData)((- (IData)((vlSelf->a >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->a)));
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
    vlSelf->ALU__DOT__multiplier__DOT__booth6__DOT__sign_ext_a 
        = (((QData)((IData)((- (IData)((vlSelf->a >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->a)));
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
    vlSelf->ALU__DOT__multiplier__DOT__booth7__DOT__sign_ext_a 
        = (((QData)((IData)((- (IData)((vlSelf->a >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->a)));
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
    vlSelf->ALU__DOT__multiplier__DOT__booth8__DOT__sign_ext_a 
        = (((QData)((IData)((- (IData)((vlSelf->a >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->a)));
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
    vlSelf->ALU__DOT__multiplier__DOT__booth9__DOT__sign_ext_a 
        = (((QData)((IData)((- (IData)((vlSelf->a >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->a)));
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
    vlSelf->ALU__DOT__multiplier__DOT__booth10__DOT__sign_ext_a 
        = (((QData)((IData)((- (IData)((vlSelf->a >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->a)));
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
    vlSelf->ALU__DOT__multiplier__DOT__booth11__DOT__sign_ext_a 
        = (((QData)((IData)((- (IData)((vlSelf->a >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->a)));
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
    vlSelf->ALU__DOT__multiplier__DOT__booth12__DOT__sign_ext_a 
        = (((QData)((IData)((- (IData)((vlSelf->a >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->a)));
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
    vlSelf->ALU__DOT__multiplier__DOT__booth13__DOT__sign_ext_a 
        = (((QData)((IData)((- (IData)((vlSelf->a >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->a)));
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
    vlSelf->ALU__DOT__multiplier__DOT__booth14__DOT__sign_ext_a 
        = (((QData)((IData)((- (IData)((vlSelf->a >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->a)));
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
    vlSelf->ALU__DOT__multiplier__DOT__booth15__DOT__sign_ext_a 
        = (((QData)((IData)((- (IData)((vlSelf->a >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->a)));
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
    vlSelf->ALU__DOT__a = vlSelf->a;
    vlSymsp->TOP__ALU__DOT__adder.cin = vlSelf->cin;
    vlSymsp->TOP__ALU__DOT__adder.a = vlSelf->a;
    vlSymsp->TOP__ALU__DOT__adder.b = vlSelf->b;
    vlSymsp->TOP__ALU__DOT__adder.Subtract = (IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(vlSelf->ALUControl))));
    vlSelf->ALU__DOT__multiplier__DOT__b = vlSelf->ALU__DOT__b;
    vlSelf->ALU__DOT__multiplier__DOT__clk = vlSelf->ALU__DOT__clk;
    vlSelf->ALU__DOT__left_shifted = vlSelf->ALU__DOT__leftshift__DOT__stage
        [4U];
    vlSelf->ALU__DOT__right_shifted_logic = vlSelf->ALU__DOT__rightshiftlogic__DOT__stage
        [4U];
    vlSelf->ALU__DOT__right_shifted_arithmetic = vlSelf->ALU__DOT__rightshiftarithmetic__DOT__stage
        [4U];
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
    vlSelf->ALU__DOT__leftshift__DOT__a = vlSelf->ALU__DOT__a;
    vlSelf->ALU__DOT__rightshiftlogic__DOT__a = vlSelf->ALU__DOT__a;
    vlSelf->ALU__DOT__rightshiftarithmetic__DOT__a 
        = vlSelf->ALU__DOT__a;
    vlSelf->ALU__DOT__multiplier__DOT__a = vlSelf->ALU__DOT__a;
    vlSelf->ALU__DOT__leftshift__DOT__y = vlSelf->ALU__DOT__left_shifted;
    vlSelf->ALU__DOT__rightshiftlogic__DOT__y = vlSelf->ALU__DOT__right_shifted_logic;
    vlSelf->ALU__DOT__rightshiftarithmetic__DOT__y 
        = vlSelf->ALU__DOT__right_shifted_arithmetic;
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
}

VL_INLINE_OPT void VALU___024root___ico_sequent__TOP__1(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___ico_sequent__TOP__1\n"); );
    // Body
    vlSelf->ALU__DOT__cout = vlSymsp->TOP__ALU__DOT__adder.cout;
    vlSelf->ALU__DOT__s = vlSymsp->TOP__ALU__DOT__adder.s;
    vlSelf->CarryOutFlag = vlSelf->ALU__DOT__cout;
    vlSelf->OverflowFlag = (((vlSelf->a ^ vlSelf->b) 
                             & (vlSelf->a ^ vlSelf->ALU__DOT__s)) 
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
                                      ? (1U & ((vlSelf->ALU__DOT__s 
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
                                  : vlSelf->ALU__DOT__s)));
    vlSelf->ALU__DOT__CarryOutFlag = vlSelf->CarryOutFlag;
    vlSelf->ALU__DOT__OverflowFlag = vlSelf->OverflowFlag;
    vlSelf->ALU__DOT__ALUResult = vlSelf->ALUResult;
}

void VALU_carry_lookahead_adder___ico_sequent__TOP__ALU__DOT__adder__0(VALU_carry_lookahead_adder* vlSelf);

void VALU___024root___eval_ico(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VALU___024root___ico_sequent__TOP__0(vlSelf);
        VALU_carry_lookahead_adder___ico_sequent__TOP__ALU__DOT__adder__0((&vlSymsp->TOP__ALU__DOT__adder));
        VALU___024root___ico_sequent__TOP__1(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__act(VALU___024root* vlSelf);
#endif  // VL_DEBUG

void VALU___024root___eval_triggers__act(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VALU___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VALU___024root___nba_sequent__TOP__1(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->ALU__DOT__multiplier__DOT__state = vlSelf->__Vdly__ALU__DOT__multiplier__DOT__state;
    vlSelf->ALU__DOT__multiplier__DOT__running = vlSelf->ALU__DOT__multiply_running;
    vlSelf->ALU__DOT__multiplier__DOT__cs12 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c12, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs10 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c10, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs11 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c11, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs8 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c8, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs9 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c9, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs5 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c5, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs6 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c6, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs7 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c7, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs0 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c0, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs1 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c1, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs2 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c2, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs3 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c3, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__cs4 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c4, 1U);
    vlSelf->ALU__DOT__multiplier__DOT__output_product 
        = vlSelf->ALU__DOT__multiplied_product;
    vlSelf->ALU__DOT__multiply_rst = (IData)(((0xaU 
                                               == (0xaU 
                                                   & (IData)(vlSelf->ALUControl))) 
                                              & (~ (IData)(vlSelf->multiply_done))));
    vlSelf->ALU__DOT__multiplier__DOT__cs13 = VL_SHIFTL_QQI(64,64,32, vlSelf->ALU__DOT__multiplier__DOT__c13, 1U);
    vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_lower.a 
        = VL_SHIFTL_III(32,32,32, (IData)(vlSelf->ALU__DOT__multiplier__DOT__c13), 1U);
    vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_upper.b 
        = (IData)((vlSelf->ALU__DOT__multiplier__DOT__s13 
                   >> 0x20U));
    vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_lower.b 
        = (IData)(vlSelf->ALU__DOT__multiplier__DOT__s13);
    vlSelf->multiply_done = vlSelf->__Vdly__multiply_done;
    vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_upper.a 
        = (IData)((vlSelf->ALU__DOT__multiplier__DOT__cs13 
                   >> 0x20U));
    vlSelf->ALU__DOT__multiplier__DOT__rst = vlSelf->ALU__DOT__multiply_rst;
    vlSelf->ALU__DOT__multiply_done = vlSelf->multiply_done;
    vlSelf->ALU__DOT__multiplier__DOT__done = vlSelf->ALU__DOT__multiply_done;
}

VL_INLINE_OPT void VALU___024root___nba_sequent__TOP__2(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->OverflowFlag = (((vlSelf->a ^ vlSelf->b) 
                             & (vlSelf->a ^ vlSelf->ALU__DOT__s)) 
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
                                      ? (1U & ((vlSelf->ALU__DOT__s 
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
                                  : vlSelf->ALU__DOT__s)));
    vlSelf->ALU__DOT__multiplier__DOT__cout = vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_lower.cout;
    vlSelf->ALU__DOT__OverflowFlag = vlSelf->OverflowFlag;
    vlSelf->ALU__DOT__ALUResult = vlSelf->ALUResult;
    vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_upper.cin 
        = vlSelf->ALU__DOT__multiplier__DOT__cout;
}

VL_INLINE_OPT void VALU___024root___nba_sequent__TOP__3(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->ALU__DOT__multiplier__DOT__cout_upper = vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_upper.cout;
    vlSelf->ALU__DOT__multiplier__DOT__product = (((QData)((IData)(vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_upper.s)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_lower.s)));
}

void VALU___024root___nba_sequent__TOP__0(VALU___024root* vlSelf);
void VALU_carry_lookahead_adder___nba_sequent__TOP__ALU__DOT__multiplier__DOT__fast_adder_lower__0(VALU_carry_lookahead_adder* vlSelf);
void VALU_carry_lookahead_adder___nba_sequent__TOP__ALU__DOT__multiplier__DOT__fast_adder_upper__0(VALU_carry_lookahead_adder* vlSelf);
void VALU_carry_lookahead_adder___nba_sequent__TOP__ALU__DOT__multiplier__DOT__fast_adder_lower__1(VALU_carry_lookahead_adder* vlSelf);
void VALU_carry_lookahead_adder___nba_sequent__TOP__ALU__DOT__multiplier__DOT__fast_adder_upper__1(VALU_carry_lookahead_adder* vlSelf);

void VALU___024root___eval_nba(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VALU___024root___nba_sequent__TOP__0(vlSelf);
        VALU___024root___nba_sequent__TOP__1(vlSelf);
        VALU_carry_lookahead_adder___nba_sequent__TOP__ALU__DOT__multiplier__DOT__fast_adder_lower__0((&vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_lower));
        VALU_carry_lookahead_adder___nba_sequent__TOP__ALU__DOT__multiplier__DOT__fast_adder_upper__0((&vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_upper));
        VALU_carry_lookahead_adder___nba_sequent__TOP__ALU__DOT__multiplier__DOT__fast_adder_lower__1((&vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_lower));
        VALU___024root___nba_sequent__TOP__2(vlSelf);
        VALU_carry_lookahead_adder___nba_sequent__TOP__ALU__DOT__multiplier__DOT__fast_adder_upper__1((&vlSymsp->TOP__ALU__DOT__multiplier__DOT__fast_adder_upper));
        VALU___024root___nba_sequent__TOP__3(vlSelf);
    }
}
