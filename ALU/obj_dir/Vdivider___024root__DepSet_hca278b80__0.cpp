// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdivider.h for the primary calling header

#include "Vdivider__pch.h"
#include "Vdivider___024root.h"

VL_INLINE_OPT void Vdivider___024root___ico_sequent__TOP__0(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->divider__DOT__clk = vlSelf->clk;
    vlSelf->divider__DOT__rst = vlSelf->rst;
    vlSelf->divider__DOT__a = vlSelf->a;
    vlSelf->divider__DOT__d = vlSelf->d;
    vlSelf->divider__DOT__pBig = (QData)((IData)(vlSelf->a));
    vlSelf->divider__DOT__clz = 0x20U;
    vlSelf->divider__DOT__unnamedblk1__DOT__i = 0x1fU;
    {
        while (VL_LTES_III(32, 0U, vlSelf->divider__DOT__unnamedblk1__DOT__i)) {
            if ((1U & (vlSelf->d >> (0x1fU & vlSelf->divider__DOT__unnamedblk1__DOT__i)))) {
                vlSelf->divider__DOT__clz = (0x3fU 
                                             & ((IData)(0x1fU) 
                                                - (0x1fU 
                                                   & vlSelf->divider__DOT__unnamedblk1__DOT__i)));
                goto __Vlabel1;
            }
            vlSelf->divider__DOT__unnamedblk1__DOT__i 
                = (vlSelf->divider__DOT__unnamedblk1__DOT__i 
                   - (IData)(1U));
        }
        __Vlabel1: ;
    }
    vlSelf->divider__DOT__dNorm = (QData)((IData)(VL_SHIFTL_III(32,32,6, vlSelf->d, (IData)(vlSelf->divider__DOT__clz))));
    vlSelf->divider__DOT__regPA[0U] = (IData)((vlSelf->divider__DOT__pBig 
                                               << (IData)(vlSelf->divider__DOT__clz)));
    vlSelf->divider__DOT__regPA[1U] = (IData)(((vlSelf->divider__DOT__pBig 
                                                << (IData)(vlSelf->divider__DOT__clz)) 
                                               >> 0x20U));
    vlSelf->divider__DOT__regPA[2U] = 0U;
    vlSelf->divider__DOT__lut__DOT__d = (0xfU & (IData)(
                                                        (vlSelf->divider__DOT__dNorm 
                                                         >> 0x1cU)));
    vlSelf->divider__DOT__lut__DOT__signal = ((0x3c0U 
                                               & ((IData)(
                                                          (vlSelf->divider__DOT__dNorm 
                                                           >> 0x1cU)) 
                                                  << 6U)) 
                                              | (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->divider__DOT__p 
                                                            >> 0x1bU))));
    vlSelf->divider__DOT__qC = ((0x200U & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                 ? ((0x100U & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                     ? ((0x80U & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                         ? ((0x40U 
                                             & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                             ? ((0x20U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 7U)
                                                     : 7U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 7U
                                                    : 6U))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 6U
                                                    : 0U)
                                                   : 0U))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 0U
                                                     : 2U)
                                                    : 2U))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 2U
                                                     : 1U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 1U
                                                      : 0U)
                                                     : 0U)))))
                                             : ((0x20U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 0U
                                                    : 7U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 7U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 7U
                                                      : 6U))
                                                    : 6U))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 6U
                                                     : 0U)
                                                    : 0U)
                                                   : 0U))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 2U))
                                                    : 2U))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 2U
                                                     : 1U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 1U
                                                      : 0U)
                                                     : 0U))))))
                                         : ((0x40U 
                                             & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                             ? ((0x20U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 0U
                                                    : 7U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 7U
                                                     : 6U)
                                                    : 6U))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 6U
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)
                                                   : 0U))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 2U)
                                                     : 2U)))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 2U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 2U
                                                      : 1U)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 1U
                                                      : 0U)
                                                     : 0U)))))
                                             : ((0x20U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 0U
                                                    : 7U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 7U
                                                     : 6U)
                                                    : 6U))
                                                  : 0U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 0U
                                                     : 2U)))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 1U
                                                     : 0U)))))))
                                     : ((0x80U & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                         ? ((0x40U 
                                             & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                             ? ((0x20U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 7U))
                                                    : 7U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 7U
                                                      : 6U)
                                                     : 6U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 6U
                                                     : 0U)))
                                                  : 0U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 2U))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 1U
                                                     : 0U)))))
                                             : ((0x20U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 7U))
                                                    : 7U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 6U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 6U
                                                      : 0U)
                                                     : 0U)))
                                                  : 0U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 2U)
                                                     : 2U)
                                                    : 2U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 2U
                                                      : 1U)
                                                     : 1U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 1U
                                                     : 0U))))))
                                         : ((0x40U 
                                             & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                             ? ((0x20U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 7U))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 7U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 7U
                                                      : 6U)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 6U
                                                    : 0U))
                                                  : 0U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 0U
                                                     : 2U)
                                                    : 2U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 1U
                                                     : 0U)))))
                                             : ((0x20U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 0U
                                                     : 7U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 7U
                                                     : 6U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 6U
                                                     : 0U)
                                                    : 0U))
                                                  : 0U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 2U))
                                                    : 2U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 1U
                                                     : 0U))))))))
                                 : 0U);
    vlSelf->divider__DOT__lut__DOT__q = vlSelf->divider__DOT__qC;
    vlSelf->divider__DOT__dLS = (0x1ffffffffULL & VL_SHIFTL_QQI(33,33,32, vlSelf->divider__DOT__dNorm, 1U));
    vlSelf->divider__DOT__dM = (0x1ffffffffULL & (1ULL 
                                                  + 
                                                  (~ vlSelf->divider__DOT__dNorm)));
    vlSelf->divider__DOT__dMLS = (0x1ffffffffULL & 
                                  (1ULL + (~ vlSelf->divider__DOT__dLS)));
    vlSelf->divider__DOT__dC = ((4U & (IData)(vlSelf->divider__DOT__qC))
                                 ? ((2U & (IData)(vlSelf->divider__DOT__qC))
                                     ? ((1U & (IData)(vlSelf->divider__DOT__qC))
                                         ? vlSelf->divider__DOT__dM
                                         : vlSelf->divider__DOT__dMLS)
                                     : vlSelf->divider__DOT__dNorm)
                                 : ((2U & (IData)(vlSelf->divider__DOT__qC))
                                     ? ((1U & (IData)(vlSelf->divider__DOT__qC))
                                         ? vlSelf->divider__DOT__dNorm
                                         : vlSelf->divider__DOT__dLS)
                                     : ((1U & (IData)(vlSelf->divider__DOT__qC))
                                         ? vlSelf->divider__DOT__dNorm
                                         : 0ULL)));
    vlSelf->divider__DOT__pNext = (0x1ffffffffULL & 
                                   (VL_SHIFTL_QQI(33,33,32, vlSelf->divider__DOT__p, 2U) 
                                    - vlSelf->divider__DOT__dC));
}

void Vdivider___024root___eval_ico(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vdivider___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vdivider___024root___eval_triggers__ico(Vdivider___024root* vlSelf);

bool Vdivider___024root___eval_phase__ico(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdivider___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vdivider___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdivider___024root___eval_act(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vdivider___024root___nba_sequent__TOP__0(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdly__divider__DOT__count;
    __Vdly__divider__DOT__count = 0;
    CData/*0:0*/ __Vdly__running;
    __Vdly__running = 0;
    QData/*32:0*/ __Vdly__divider__DOT__rem_temp;
    __Vdly__divider__DOT__rem_temp = 0;
    QData/*32:0*/ __Vdly__divider__DOT__p;
    __Vdly__divider__DOT__p = 0;
    IData/*31:0*/ __Vdly__divider__DOT__Qp;
    __Vdly__divider__DOT__Qp = 0;
    IData/*31:0*/ __Vdly__divider__DOT__Qm;
    __Vdly__divider__DOT__Qm = 0;
    // Body
    __Vdly__divider__DOT__Qm = vlSelf->divider__DOT__Qm;
    __Vdly__divider__DOT__Qp = vlSelf->divider__DOT__Qp;
    __Vdly__divider__DOT__rem_temp = vlSelf->divider__DOT__rem_temp;
    __Vdly__divider__DOT__count = vlSelf->divider__DOT__count;
    __Vdly__running = vlSelf->running;
    __Vdly__divider__DOT__p = vlSelf->divider__DOT__p;
    if (((IData)(vlSelf->rst) & (~ (IData)(vlSelf->running)))) {
        __Vdly__divider__DOT__count = 0U;
        __Vdly__running = 1U;
        vlSelf->done = 0U;
        vlSelf->q = 0U;
        vlSelf->rem = 0ULL;
        __Vdly__divider__DOT__rem_temp = 0ULL;
        __Vdly__divider__DOT__p = (0x1ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelf->divider__DOT__regPA[2U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->divider__DOT__regPA[1U]))));
    }
    if (vlSelf->running) {
        if ((0x10U == (IData)(vlSelf->divider__DOT__count))) {
            __Vdly__running = 0U;
            vlSelf->done = 1U;
            if ((1U & (IData)((vlSelf->divider__DOT__rem_temp 
                               >> 0x20U)))) {
                vlSelf->rem = (0x1ffffffffULL & ((0x1ffffffffULL 
                                                  & (vlSelf->divider__DOT__rem_temp 
                                                     + vlSelf->divider__DOT__dNorm)) 
                                                 >> (IData)(vlSelf->divider__DOT__clz)));
                vlSelf->q = vlSelf->divider__DOT__Qm;
            } else {
                vlSelf->q = vlSelf->divider__DOT__Qp;
                vlSelf->rem = (0x1ffffffffULL & (vlSelf->divider__DOT__rem_temp 
                                                 >> (IData)(vlSelf->divider__DOT__clz)));
            }
        } else {
            __Vdly__divider__DOT__count = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->divider__DOT__count)));
            if ((4U & (IData)(vlSelf->divider__DOT__qC))) {
                if ((2U & (IData)(vlSelf->divider__DOT__qC))) {
                    if ((1U & (IData)(vlSelf->divider__DOT__qC))) {
                        __Vdly__divider__DOT__Qp = 
                            (3U | (vlSelf->divider__DOT__Qm 
                                   << 2U));
                        __Vdly__divider__DOT__Qm = 
                            (2U | (vlSelf->divider__DOT__Qm 
                                   << 2U));
                    } else {
                        __Vdly__divider__DOT__Qp = 
                            (2U | (vlSelf->divider__DOT__Qm 
                                   << 2U));
                        __Vdly__divider__DOT__Qm = 
                            (1U | (vlSelf->divider__DOT__Qm 
                                   << 2U));
                    }
                } else {
                    __Vdly__divider__DOT__Qp = (vlSelf->divider__DOT__Qp 
                                                << 2U);
                    __Vdly__divider__DOT__Qm = (3U 
                                                | (vlSelf->divider__DOT__Qm 
                                                   << 2U));
                }
            } else if ((2U & (IData)(vlSelf->divider__DOT__qC))) {
                if ((1U & (IData)(vlSelf->divider__DOT__qC))) {
                    __Vdly__divider__DOT__Qp = (vlSelf->divider__DOT__Qp 
                                                << 2U);
                    __Vdly__divider__DOT__Qm = (3U 
                                                | (vlSelf->divider__DOT__Qm 
                                                   << 2U));
                } else {
                    __Vdly__divider__DOT__Qp = (2U 
                                                | (vlSelf->divider__DOT__Qp 
                                                   << 2U));
                    __Vdly__divider__DOT__Qm = (1U 
                                                | (vlSelf->divider__DOT__Qp 
                                                   << 2U));
                }
            } else if ((1U & (IData)(vlSelf->divider__DOT__qC))) {
                __Vdly__divider__DOT__Qp = (1U | (vlSelf->divider__DOT__Qp 
                                                  << 2U));
                __Vdly__divider__DOT__Qm = (vlSelf->divider__DOT__Qp 
                                            << 2U);
            } else {
                __Vdly__divider__DOT__Qp = (vlSelf->divider__DOT__Qp 
                                            << 2U);
                __Vdly__divider__DOT__Qm = (3U | (vlSelf->divider__DOT__Qm 
                                                  << 2U));
            }
            __Vdly__divider__DOT__rem_temp = vlSelf->divider__DOT__p;
            __Vdly__divider__DOT__p = vlSelf->divider__DOT__pNext;
        }
    }
    vlSelf->divider__DOT__count = __Vdly__divider__DOT__count;
    vlSelf->divider__DOT__rem_temp = __Vdly__divider__DOT__rem_temp;
    vlSelf->divider__DOT__Qp = __Vdly__divider__DOT__Qp;
    vlSelf->divider__DOT__Qm = __Vdly__divider__DOT__Qm;
    vlSelf->running = __Vdly__running;
    vlSelf->divider__DOT__p = __Vdly__divider__DOT__p;
    vlSelf->divider__DOT__running = vlSelf->running;
    vlSelf->divider__DOT__done = vlSelf->done;
    vlSelf->divider__DOT__q = vlSelf->q;
    vlSelf->divider__DOT__rem = vlSelf->rem;
    vlSelf->divider__DOT__lut__DOT__p = (0x3fU & (IData)(
                                                         (vlSelf->divider__DOT__p 
                                                          >> 0x1bU)));
}

VL_INLINE_OPT void Vdivider___024root___nba_sequent__TOP__1(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->divider__DOT__lut__DOT__signal = ((0x3c0U 
                                               & ((IData)(
                                                          (vlSelf->divider__DOT__dNorm 
                                                           >> 0x1cU)) 
                                                  << 6U)) 
                                              | (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->divider__DOT__p 
                                                            >> 0x1bU))));
    vlSelf->divider__DOT__qC = ((0x200U & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                 ? ((0x100U & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                     ? ((0x80U & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                         ? ((0x40U 
                                             & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                             ? ((0x20U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 7U)
                                                     : 7U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 7U
                                                    : 6U))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 6U
                                                    : 0U)
                                                   : 0U))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 0U
                                                     : 2U)
                                                    : 2U))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 2U
                                                     : 1U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 1U
                                                      : 0U)
                                                     : 0U)))))
                                             : ((0x20U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 0U
                                                    : 7U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 7U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 7U
                                                      : 6U))
                                                    : 6U))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 6U
                                                     : 0U)
                                                    : 0U)
                                                   : 0U))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 2U))
                                                    : 2U))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 2U
                                                     : 1U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 1U
                                                      : 0U)
                                                     : 0U))))))
                                         : ((0x40U 
                                             & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                             ? ((0x20U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 0U
                                                    : 7U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 7U
                                                     : 6U)
                                                    : 6U))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 6U
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)
                                                   : 0U))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 2U)
                                                     : 2U)))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 2U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 2U
                                                      : 1U)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 1U
                                                      : 0U)
                                                     : 0U)))))
                                             : ((0x20U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 0U
                                                    : 7U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 7U
                                                     : 6U)
                                                    : 6U))
                                                  : 0U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 0U
                                                     : 2U)))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 1U
                                                     : 0U)))))))
                                     : ((0x80U & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                         ? ((0x40U 
                                             & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                             ? ((0x20U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 7U))
                                                    : 7U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 7U
                                                      : 6U)
                                                     : 6U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 6U
                                                     : 0U)))
                                                  : 0U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 2U))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 1U
                                                     : 0U)))))
                                             : ((0x20U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 7U))
                                                    : 7U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 6U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 6U
                                                      : 0U)
                                                     : 0U)))
                                                  : 0U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 2U)
                                                     : 2U)
                                                    : 2U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 2U
                                                      : 1U)
                                                     : 1U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 1U
                                                     : 0U))))))
                                         : ((0x40U 
                                             & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                             ? ((0x20U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 7U))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 7U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 7U
                                                      : 6U)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 6U
                                                    : 0U))
                                                  : 0U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 0U
                                                     : 2U)
                                                    : 2U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 1U
                                                     : 0U)))))
                                             : ((0x20U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 0U
                                                     : 7U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 7U
                                                     : 6U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 6U
                                                     : 0U)
                                                    : 0U))
                                                  : 0U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                      ? 0U
                                                      : 2U))
                                                    : 2U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                     ? 1U
                                                     : 0U))))))))
                                 : 0U);
    vlSelf->divider__DOT__lut__DOT__q = vlSelf->divider__DOT__qC;
    vlSelf->divider__DOT__dLS = (0x1ffffffffULL & VL_SHIFTL_QQI(33,33,32, vlSelf->divider__DOT__dNorm, 1U));
    vlSelf->divider__DOT__dM = (0x1ffffffffULL & (1ULL 
                                                  + 
                                                  (~ vlSelf->divider__DOT__dNorm)));
    vlSelf->divider__DOT__dMLS = (0x1ffffffffULL & 
                                  (1ULL + (~ vlSelf->divider__DOT__dLS)));
    vlSelf->divider__DOT__dC = ((4U & (IData)(vlSelf->divider__DOT__qC))
                                 ? ((2U & (IData)(vlSelf->divider__DOT__qC))
                                     ? ((1U & (IData)(vlSelf->divider__DOT__qC))
                                         ? vlSelf->divider__DOT__dM
                                         : vlSelf->divider__DOT__dMLS)
                                     : vlSelf->divider__DOT__dNorm)
                                 : ((2U & (IData)(vlSelf->divider__DOT__qC))
                                     ? ((1U & (IData)(vlSelf->divider__DOT__qC))
                                         ? vlSelf->divider__DOT__dNorm
                                         : vlSelf->divider__DOT__dLS)
                                     : ((1U & (IData)(vlSelf->divider__DOT__qC))
                                         ? vlSelf->divider__DOT__dNorm
                                         : 0ULL)));
    vlSelf->divider__DOT__pNext = (0x1ffffffffULL & 
                                   (VL_SHIFTL_QQI(33,33,32, vlSelf->divider__DOT__p, 2U) 
                                    - vlSelf->divider__DOT__dC));
}

void Vdivider___024root___eval_nba(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdivider___024root___nba_sequent__TOP__0(vlSelf);
        Vdivider___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vdivider___024root___eval_triggers__act(Vdivider___024root* vlSelf);

bool Vdivider___024root___eval_phase__act(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdivider___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vdivider___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdivider___024root___eval_phase__nba(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdivider___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdivider___024root___dump_triggers__ico(Vdivider___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdivider___024root___dump_triggers__nba(Vdivider___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdivider___024root___dump_triggers__act(Vdivider___024root* vlSelf);
#endif  // VL_DEBUG

void Vdivider___024root___eval(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval\n"); );
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
            Vdivider___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("divider.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vdivider___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdivider___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("divider.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vdivider___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("divider.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vdivider___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vdivider___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdivider___024root___eval_debug_assertions(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
