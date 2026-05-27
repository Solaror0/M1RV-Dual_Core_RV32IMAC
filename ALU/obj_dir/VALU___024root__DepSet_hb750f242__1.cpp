// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU__pch.h"
#include "VALU___024root.h"

VL_INLINE_OPT void VALU___024root___nba_sequent__TOP__2(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___nba_sequent__TOP__2\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
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
    vlSelf->ALU__DOT__OverflowFlag = vlSelf->OverflowFlag;
    vlSelf->ALU__DOT__ALUResult = vlSelf->ALUResult;
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
    VL_SHIFTL_WWI(67,67,32, __Vtemp_2, vlSelf->ALU__DOT__divider__DOT__regPA, 2U);
    vlSelf->ALU__DOT__divider__DOT__regPA_TS[0U] = 
        __Vtemp_2[0U];
    vlSelf->ALU__DOT__divider__DOT__regPA_TS[1U] = 
        __Vtemp_2[1U];
    vlSelf->ALU__DOT__divider__DOT__regPA_TS[2U] = 
        (7U & __Vtemp_2[2U]);
    vlSelf->ALU__DOT__divider__DOT__pNext = (0x7ffffffffULL 
                                             & ((((QData)((IData)(
                                                                  vlSelf->ALU__DOT__divider__DOT__regPA_TS[2U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ALU__DOT__divider__DOT__regPA_TS[1U]))) 
                                                - vlSelf->ALU__DOT__divider__DOT__dC));
}

void VALU___024root___eval_triggers__act(VALU___024root* vlSelf);
void VALU___024root___eval_act(VALU___024root* vlSelf);

bool VALU___024root___eval_phase__act(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VALU___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VALU___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VALU___024root___eval_nba(VALU___024root* vlSelf);

bool VALU___024root___eval_phase__nba(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VALU___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__ico(VALU___024root* vlSelf);
#endif  // VL_DEBUG
bool VALU___024root___eval_phase__ico(VALU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__nba(VALU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__act(VALU___024root* vlSelf);
#endif  // VL_DEBUG

void VALU___024root___eval(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval\n"); );
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
            VALU___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("ALU.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VALU___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VALU___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("ALU.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VALU___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("ALU.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VALU___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VALU___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->ALUControl & 0xe0U))) {
        Verilated::overWidthError("ALUControl");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
