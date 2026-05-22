// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdivider.h for the primary calling header

#include "Vdivider__pch.h"
#include "Vdivider___024root.h"

VL_INLINE_OPT void Vdivider___024root___ico_sequent__TOP__0(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___ico_sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    // Body
    vlSelf->divider__DOT__clk = vlSelf->clk;
    vlSelf->divider__DOT__rst = vlSelf->rst;
    vlSelf->divider__DOT__d = vlSelf->d;
    vlSelf->divider__DOT__p = vlSelf->p;
    vlSelf->divider__DOT__pBig = (QData)((IData)(vlSelf->p));
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
    vlSelf->divider__DOT__dNorm = VL_SHIFTL_III(32,32,6, vlSelf->d, (IData)(vlSelf->divider__DOT__clz));
    vlSelf->divider__DOT__pNorm[0U] = (IData)((vlSelf->divider__DOT__pBig 
                                               << (IData)(vlSelf->divider__DOT__clz)));
    vlSelf->divider__DOT__pNorm[1U] = (IData)(((vlSelf->divider__DOT__pBig 
                                                << (IData)(vlSelf->divider__DOT__clz)) 
                                               >> 0x20U));
    vlSelf->divider__DOT__pNorm[2U] = 0U;
    vlSelf->divider__DOT__dNormExt[0U] = 0U;
    vlSelf->divider__DOT__dNormExt[1U] = (IData)((QData)((IData)(vlSelf->divider__DOT__dNorm)));
    vlSelf->divider__DOT__dNormExt[2U] = (IData)(((QData)((IData)(vlSelf->divider__DOT__dNorm)) 
                                                  >> 0x20U));
    vlSelf->divider__DOT__lut__DOT__d = (0x1fU & (vlSelf->divider__DOT__dNorm 
                                                  >> 0x1bU));
    vlSelf->divider__DOT__signal = ((0x7c0U & (vlSelf->divider__DOT__dNorm 
                                               >> 0x15U)) 
                                    | (0x3fU & ((vlSelf->divider__DOT__pNow[2U] 
                                                 << 4U) 
                                                | (vlSelf->divider__DOT__pNow[1U] 
                                                   >> 0x1cU))));
    vlSelf->divider__DOT__lut__DOT__signal = ((0x7c0U 
                                               & (vlSelf->divider__DOT__dNorm 
                                                  >> 0x15U)) 
                                              | (0x3fU 
                                                 & ((vlSelf->divider__DOT__pNow[2U] 
                                                     << 4U) 
                                                    | (vlSelf->divider__DOT__pNow[1U] 
                                                       >> 0x1cU))));
    vlSelf->divider__DOT__qC = ((0x400U & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                 ? ((0x200U & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                     ? ((0x100U & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                         ? ((0x80U 
                                             & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                             ? ((0x40U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x20U 
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
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                       ? 2U
                                                       : 1U)
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
                                                 : 
                                                ((0x20U 
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
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                       ? 2U
                                                       : 1U)
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
                                                 ? 
                                                ((0x20U 
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
                                                     ? 7U
                                                     : 6U))
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                 : 
                                                ((0x20U 
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
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                      : 0U)))))))
                                         : ((0x80U 
                                             & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                             ? ((0x40U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x20U 
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
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                 : 
                                                ((0x20U 
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
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                      : 0U))))))
                                             : ((0x40U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x20U 
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
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                 : 
                                                ((0x20U 
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
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                      : 0U))))))))
                                     : ((0x100U & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                         ? ((0x80U 
                                             & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                             ? ((0x40U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x20U 
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
                                                     : 6U))
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                 : 
                                                ((0x20U 
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
                                                     : 6U))
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                      : 0U))))))
                                             : ((0x40U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x20U 
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
                                                    : 6U)
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                 : 
                                                ((0x20U 
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
                                                    : 6U)
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 2U
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
                                                      : 0U)))))))
                                         : ((0x80U 
                                             & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                             ? ((0x40U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x20U 
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
                                                    : 6U)
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 2U
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
                                                      : 0U)))))
                                                 : 
                                                ((0x20U 
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
                                                    : 6U)
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 2U
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
                                                 ? 
                                                ((0x20U 
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
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                       ? 7U
                                                       : 6U)))
                                                    : 6U)
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 2U
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
                                                 : 
                                                ((0x20U 
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
                                                    : 6U)
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 2U
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
                                                      : 0U)))))))))
                                 : 0U);
    vlSelf->divider__DOT__lut__DOT__q = vlSelf->divider__DOT__qC;
    vlSelf->divider__DOT__dLS[0U] = ((IData)((((QData)((IData)(
                                                               vlSelf->divider__DOT__dNormExt[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->divider__DOT__dNormExt[0U])))) 
                                     << 1U);
    vlSelf->divider__DOT__dLS[1U] = (((IData)((((QData)((IData)(
                                                                vlSelf->divider__DOT__dNormExt[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->divider__DOT__dNormExt[0U])))) 
                                      >> 0x1fU) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->divider__DOT__dNormExt[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->divider__DOT__dNormExt[0U]))) 
                                                            >> 0x20U)) 
                                                   << 1U));
    vlSelf->divider__DOT__dLS[2U] = ((IData)(((((QData)((IData)(
                                                                vlSelf->divider__DOT__dNormExt[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->divider__DOT__dNormExt[0U]))) 
                                              >> 0x20U)) 
                                     >> 0x1fU);
    __Vtemp_4[0U] = 1U;
    __Vtemp_4[1U] = 0U;
    __Vtemp_4[2U] = 0U;
    __Vtemp_5[0U] = (~ vlSelf->divider__DOT__dNormExt[0U]);
    __Vtemp_5[1U] = (~ vlSelf->divider__DOT__dNormExt[1U]);
    __Vtemp_5[2U] = (~ vlSelf->divider__DOT__dNormExt[2U]);
    VL_ADD_W(3, __Vtemp_6, __Vtemp_4, __Vtemp_5);
    vlSelf->divider__DOT__dM[0U] = __Vtemp_6[0U];
    vlSelf->divider__DOT__dM[1U] = __Vtemp_6[1U];
    vlSelf->divider__DOT__dM[2U] = (3U & __Vtemp_6[2U]);
    __Vtemp_8[0U] = 1U;
    __Vtemp_8[1U] = 0U;
    __Vtemp_8[2U] = 0U;
    __Vtemp_9[0U] = (~ vlSelf->divider__DOT__dLS[0U]);
    __Vtemp_9[1U] = (~ vlSelf->divider__DOT__dLS[1U]);
    __Vtemp_9[2U] = (~ vlSelf->divider__DOT__dLS[2U]);
    VL_ADD_W(3, __Vtemp_10, __Vtemp_8, __Vtemp_9);
    vlSelf->divider__DOT__dMLS[0U] = __Vtemp_10[0U];
    vlSelf->divider__DOT__dMLS[1U] = __Vtemp_10[1U];
    vlSelf->divider__DOT__dMLS[2U] = (3U & __Vtemp_10[2U]);
    if ((4U & (IData)(vlSelf->divider__DOT__qC))) {
        if ((2U & (IData)(vlSelf->divider__DOT__qC))) {
            if ((1U & (IData)(vlSelf->divider__DOT__qC))) {
                vlSelf->divider__DOT__dC[0U] = vlSelf->divider__DOT__dM[0U];
                vlSelf->divider__DOT__dC[1U] = vlSelf->divider__DOT__dM[1U];
                vlSelf->divider__DOT__dC[2U] = vlSelf->divider__DOT__dM[2U];
            } else {
                vlSelf->divider__DOT__dC[0U] = vlSelf->divider__DOT__dMLS[0U];
                vlSelf->divider__DOT__dC[1U] = vlSelf->divider__DOT__dMLS[1U];
                vlSelf->divider__DOT__dC[2U] = vlSelf->divider__DOT__dMLS[2U];
            }
        } else {
            vlSelf->divider__DOT__dC[0U] = vlSelf->divider__DOT__dNormExt[0U];
            vlSelf->divider__DOT__dC[1U] = vlSelf->divider__DOT__dNormExt[1U];
            vlSelf->divider__DOT__dC[2U] = vlSelf->divider__DOT__dNormExt[2U];
        }
    } else if ((2U & (IData)(vlSelf->divider__DOT__qC))) {
        if ((1U & (IData)(vlSelf->divider__DOT__qC))) {
            vlSelf->divider__DOT__dC[0U] = vlSelf->divider__DOT__dNormExt[0U];
            vlSelf->divider__DOT__dC[1U] = vlSelf->divider__DOT__dNormExt[1U];
            vlSelf->divider__DOT__dC[2U] = vlSelf->divider__DOT__dNormExt[2U];
        } else {
            vlSelf->divider__DOT__dC[0U] = vlSelf->divider__DOT__dLS[0U];
            vlSelf->divider__DOT__dC[1U] = vlSelf->divider__DOT__dLS[1U];
            vlSelf->divider__DOT__dC[2U] = vlSelf->divider__DOT__dLS[2U];
        }
    } else if ((1U & (IData)(vlSelf->divider__DOT__qC))) {
        vlSelf->divider__DOT__dC[0U] = vlSelf->divider__DOT__dNormExt[0U];
        vlSelf->divider__DOT__dC[1U] = vlSelf->divider__DOT__dNormExt[1U];
        vlSelf->divider__DOT__dC[2U] = vlSelf->divider__DOT__dNormExt[2U];
    } else {
        vlSelf->divider__DOT__dC[0U] = 0U;
        vlSelf->divider__DOT__dC[1U] = 0U;
        vlSelf->divider__DOT__dC[2U] = 0U;
    }
    __Vtemp_25[0U] = ((vlSelf->divider__DOT__pS[0U] 
                       ^ vlSelf->divider__DOT__pC[0U]) 
                      ^ vlSelf->divider__DOT__dC[0U]);
    __Vtemp_25[1U] = ((vlSelf->divider__DOT__pS[1U] 
                       ^ vlSelf->divider__DOT__pC[1U]) 
                      ^ vlSelf->divider__DOT__dC[1U]);
    __Vtemp_25[2U] = ((vlSelf->divider__DOT__pS[2U] 
                       ^ vlSelf->divider__DOT__pC[2U]) 
                      ^ vlSelf->divider__DOT__dC[2U]);
    VL_SHIFTL_WWI(66,66,32, __Vtemp_26, __Vtemp_25, 2U);
    vlSelf->divider__DOT__pNS[0U] = __Vtemp_26[0U];
    vlSelf->divider__DOT__pNS[1U] = __Vtemp_26[1U];
    vlSelf->divider__DOT__pNS[2U] = (3U & __Vtemp_26[2U]);
    __Vtemp_31[0U] = ((vlSelf->divider__DOT__pS[0U] 
                       & (vlSelf->divider__DOT__pC[0U] 
                          | vlSelf->divider__DOT__dC[0U])) 
                      | (vlSelf->divider__DOT__pC[0U] 
                         & vlSelf->divider__DOT__dC[0U]));
    __Vtemp_31[1U] = ((vlSelf->divider__DOT__pS[1U] 
                       & (vlSelf->divider__DOT__pC[1U] 
                          | vlSelf->divider__DOT__dC[1U])) 
                      | (vlSelf->divider__DOT__pC[1U] 
                         & vlSelf->divider__DOT__dC[1U]));
    __Vtemp_31[2U] = ((vlSelf->divider__DOT__pS[2U] 
                       & (vlSelf->divider__DOT__pC[2U] 
                          | vlSelf->divider__DOT__dC[2U])) 
                      | (vlSelf->divider__DOT__pC[2U] 
                         & vlSelf->divider__DOT__dC[2U]));
    VL_SHIFTL_WWI(66,66,32, __Vtemp_32, __Vtemp_31, 3U);
    vlSelf->divider__DOT__pNC[0U] = __Vtemp_32[0U];
    vlSelf->divider__DOT__pNC[1U] = __Vtemp_32[1U];
    vlSelf->divider__DOT__pNC[2U] = (3U & __Vtemp_32[2U]);
    __Vtemp_34[0U] = 1U;
    __Vtemp_34[1U] = 0U;
    __Vtemp_34[2U] = 0U;
    __Vtemp_35[0U] = (~ vlSelf->divider__DOT__dC[0U]);
    __Vtemp_35[1U] = (~ vlSelf->divider__DOT__dC[1U]);
    __Vtemp_35[2U] = (~ vlSelf->divider__DOT__dC[2U]);
    VL_ADD_W(3, __Vtemp_36, vlSelf->divider__DOT__pNow, __Vtemp_35);
    VL_ADD_W(3, __Vtemp_37, __Vtemp_34, __Vtemp_36);
    VL_SHIFTL_WWI(66,66,32, __Vtemp_38, __Vtemp_37, 2U);
    vlSelf->divider__DOT__pNext[0U] = __Vtemp_38[0U];
    vlSelf->divider__DOT__pNext[1U] = __Vtemp_38[1U];
    vlSelf->divider__DOT__pNext[2U] = (3U & __Vtemp_38[2U]);
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
    CData/*3:0*/ __Vdly__divider__DOT__count;
    __Vdly__divider__DOT__count = 0;
    CData/*0:0*/ __Vdly__running;
    __Vdly__running = 0;
    IData/*31:0*/ __Vdly__divider__DOT__Qp;
    __Vdly__divider__DOT__Qp = 0;
    IData/*31:0*/ __Vdly__divider__DOT__Qm;
    __Vdly__divider__DOT__Qm = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    __Vdly__divider__DOT__Qm = vlSelf->divider__DOT__Qm;
    __Vdly__divider__DOT__Qp = vlSelf->divider__DOT__Qp;
    __Vdly__divider__DOT__count = vlSelf->divider__DOT__count;
    __Vdly__running = vlSelf->running;
    if (((IData)(vlSelf->rst) & (~ (IData)(vlSelf->running)))) {
        __Vdly__divider__DOT__count = 0U;
        __Vdly__running = 1U;
        vlSelf->done = 0U;
        vlSelf->q = 0U;
        vlSelf->rem = 0U;
        vlSelf->divider__DOT__pS[0U] = vlSelf->divider__DOT__pNorm[0U];
        vlSelf->divider__DOT__pS[1U] = vlSelf->divider__DOT__pNorm[1U];
        vlSelf->divider__DOT__pS[2U] = vlSelf->divider__DOT__pNorm[2U];
        vlSelf->divider__DOT__pC[0U] = 0U;
        vlSelf->divider__DOT__pC[1U] = 0U;
        vlSelf->divider__DOT__pC[2U] = 0U;
        vlSelf->divider__DOT__pNow[0U] = vlSelf->divider__DOT__pNorm[0U];
        vlSelf->divider__DOT__pNow[1U] = vlSelf->divider__DOT__pNorm[1U];
        vlSelf->divider__DOT__pNow[2U] = vlSelf->divider__DOT__pNorm[2U];
    }
    if (vlSelf->running) {
        if ((0xfU == (IData)(vlSelf->divider__DOT__count))) {
            __Vdly__running = 0U;
            vlSelf->done = 1U;
            vlSelf->q = vlSelf->divider__DOT__Qp;
        } else {
            __Vdly__divider__DOT__count = (0xfU & ((IData)(1U) 
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
            vlSelf->divider__DOT__pS[0U] = vlSelf->divider__DOT__pNS[0U];
            vlSelf->divider__DOT__pS[1U] = vlSelf->divider__DOT__pNS[1U];
            vlSelf->divider__DOT__pS[2U] = vlSelf->divider__DOT__pNS[2U];
            vlSelf->divider__DOT__pC[0U] = vlSelf->divider__DOT__pNC[0U];
            vlSelf->divider__DOT__pC[1U] = vlSelf->divider__DOT__pNC[1U];
            vlSelf->divider__DOT__pC[2U] = vlSelf->divider__DOT__pNC[2U];
            vlSelf->divider__DOT__pNow[0U] = vlSelf->divider__DOT__pNext[0U];
            vlSelf->divider__DOT__pNow[1U] = vlSelf->divider__DOT__pNext[1U];
            vlSelf->divider__DOT__pNow[2U] = vlSelf->divider__DOT__pNext[2U];
        }
    }
    vlSelf->divider__DOT__count = __Vdly__divider__DOT__count;
    vlSelf->divider__DOT__Qp = __Vdly__divider__DOT__Qp;
    vlSelf->divider__DOT__Qm = __Vdly__divider__DOT__Qm;
    vlSelf->running = __Vdly__running;
    vlSelf->divider__DOT__running = vlSelf->running;
    vlSelf->divider__DOT__done = vlSelf->done;
    vlSelf->divider__DOT__q = vlSelf->q;
    vlSelf->divider__DOT__rem = vlSelf->rem;
    VL_ADD_W(3, __Vtemp_2, vlSelf->divider__DOT__pS, vlSelf->divider__DOT__pC);
    vlSelf->divider__DOT__pTrunc[0U] = __Vtemp_2[0U];
    vlSelf->divider__DOT__pTrunc[1U] = __Vtemp_2[1U];
    vlSelf->divider__DOT__pTrunc[2U] = (3U & __Vtemp_2[2U]);
    vlSelf->divider__DOT__lut__DOT__p = (0x3fU & ((
                                                   (0U 
                                                    == 0x1cU)
                                                    ? 0U
                                                    : 
                                                   (vlSelf->divider__DOT__pNow[
                                                    (((IData)(5U) 
                                                      + (IData)(0x3cU)) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - (IData)(0x1cU)))) 
                                                  | (vlSelf->divider__DOT__pNow[1U] 
                                                     >> 0x1cU)));
}

VL_INLINE_OPT void Vdivider___024root___nba_sequent__TOP__1(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___nba_sequent__TOP__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_37;
    // Body
    vlSelf->divider__DOT__signal = ((0x7c0U & (vlSelf->divider__DOT__dNorm 
                                               >> 0x15U)) 
                                    | (0x3fU & ((vlSelf->divider__DOT__pNow[2U] 
                                                 << 4U) 
                                                | (vlSelf->divider__DOT__pNow[1U] 
                                                   >> 0x1cU))));
    vlSelf->divider__DOT__lut__DOT__signal = ((0x7c0U 
                                               & (vlSelf->divider__DOT__dNorm 
                                                  >> 0x15U)) 
                                              | (0x3fU 
                                                 & ((vlSelf->divider__DOT__pNow[2U] 
                                                     << 4U) 
                                                    | (vlSelf->divider__DOT__pNow[1U] 
                                                       >> 0x1cU))));
    vlSelf->divider__DOT__qC = ((0x400U & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                 ? ((0x200U & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                     ? ((0x100U & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                         ? ((0x80U 
                                             & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                             ? ((0x40U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x20U 
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
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                       ? 2U
                                                       : 1U)
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
                                                 : 
                                                ((0x20U 
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
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                       ? 2U
                                                       : 1U)
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
                                                 ? 
                                                ((0x20U 
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
                                                     ? 7U
                                                     : 6U))
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                 : 
                                                ((0x20U 
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
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                      : 0U)))))))
                                         : ((0x80U 
                                             & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                             ? ((0x40U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x20U 
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
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                 : 
                                                ((0x20U 
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
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                      : 0U))))))
                                             : ((0x40U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x20U 
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
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                 : 
                                                ((0x20U 
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
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                      : 0U))))))))
                                     : ((0x100U & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                         ? ((0x80U 
                                             & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                             ? ((0x40U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x20U 
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
                                                     : 6U))
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                 : 
                                                ((0x20U 
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
                                                     : 6U))
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                      : 0U))))))
                                             : ((0x40U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x20U 
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
                                                    : 6U)
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
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
                                                 : 
                                                ((0x20U 
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
                                                    : 6U)
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 2U
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
                                                      : 0U)))))))
                                         : ((0x80U 
                                             & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                             ? ((0x40U 
                                                 & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                 ? 
                                                ((0x20U 
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
                                                    : 6U)
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 2U
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
                                                      : 0U)))))
                                                 : 
                                                ((0x20U 
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
                                                    : 6U)
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 2U
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
                                                 ? 
                                                ((0x20U 
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
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                       ? 7U
                                                       : 6U)))
                                                    : 6U)
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 2U
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
                                                 : 
                                                ((0x20U 
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
                                                    : 6U)
                                                   : 6U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                   ? 2U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->divider__DOT__lut__DOT__signal))
                                                    ? 2U
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
                                                      : 0U)))))))))
                                 : 0U);
    vlSelf->divider__DOT__lut__DOT__q = vlSelf->divider__DOT__qC;
    vlSelf->divider__DOT__dLS[0U] = ((IData)((((QData)((IData)(
                                                               vlSelf->divider__DOT__dNormExt[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->divider__DOT__dNormExt[0U])))) 
                                     << 1U);
    vlSelf->divider__DOT__dLS[1U] = (((IData)((((QData)((IData)(
                                                                vlSelf->divider__DOT__dNormExt[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->divider__DOT__dNormExt[0U])))) 
                                      >> 0x1fU) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->divider__DOT__dNormExt[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->divider__DOT__dNormExt[0U]))) 
                                                            >> 0x20U)) 
                                                   << 1U));
    vlSelf->divider__DOT__dLS[2U] = ((IData)(((((QData)((IData)(
                                                                vlSelf->divider__DOT__dNormExt[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->divider__DOT__dNormExt[0U]))) 
                                              >> 0x20U)) 
                                     >> 0x1fU);
    __Vtemp_3[0U] = 1U;
    __Vtemp_3[1U] = 0U;
    __Vtemp_3[2U] = 0U;
    __Vtemp_4[0U] = (~ vlSelf->divider__DOT__dNormExt[0U]);
    __Vtemp_4[1U] = (~ vlSelf->divider__DOT__dNormExt[1U]);
    __Vtemp_4[2U] = (~ vlSelf->divider__DOT__dNormExt[2U]);
    VL_ADD_W(3, __Vtemp_5, __Vtemp_3, __Vtemp_4);
    vlSelf->divider__DOT__dM[0U] = __Vtemp_5[0U];
    vlSelf->divider__DOT__dM[1U] = __Vtemp_5[1U];
    vlSelf->divider__DOT__dM[2U] = (3U & __Vtemp_5[2U]);
    __Vtemp_7[0U] = 1U;
    __Vtemp_7[1U] = 0U;
    __Vtemp_7[2U] = 0U;
    __Vtemp_8[0U] = (~ vlSelf->divider__DOT__dLS[0U]);
    __Vtemp_8[1U] = (~ vlSelf->divider__DOT__dLS[1U]);
    __Vtemp_8[2U] = (~ vlSelf->divider__DOT__dLS[2U]);
    VL_ADD_W(3, __Vtemp_9, __Vtemp_7, __Vtemp_8);
    vlSelf->divider__DOT__dMLS[0U] = __Vtemp_9[0U];
    vlSelf->divider__DOT__dMLS[1U] = __Vtemp_9[1U];
    vlSelf->divider__DOT__dMLS[2U] = (3U & __Vtemp_9[2U]);
    if ((4U & (IData)(vlSelf->divider__DOT__qC))) {
        if ((2U & (IData)(vlSelf->divider__DOT__qC))) {
            if ((1U & (IData)(vlSelf->divider__DOT__qC))) {
                vlSelf->divider__DOT__dC[0U] = vlSelf->divider__DOT__dM[0U];
                vlSelf->divider__DOT__dC[1U] = vlSelf->divider__DOT__dM[1U];
                vlSelf->divider__DOT__dC[2U] = vlSelf->divider__DOT__dM[2U];
            } else {
                vlSelf->divider__DOT__dC[0U] = vlSelf->divider__DOT__dMLS[0U];
                vlSelf->divider__DOT__dC[1U] = vlSelf->divider__DOT__dMLS[1U];
                vlSelf->divider__DOT__dC[2U] = vlSelf->divider__DOT__dMLS[2U];
            }
        } else {
            vlSelf->divider__DOT__dC[0U] = vlSelf->divider__DOT__dNormExt[0U];
            vlSelf->divider__DOT__dC[1U] = vlSelf->divider__DOT__dNormExt[1U];
            vlSelf->divider__DOT__dC[2U] = vlSelf->divider__DOT__dNormExt[2U];
        }
    } else if ((2U & (IData)(vlSelf->divider__DOT__qC))) {
        if ((1U & (IData)(vlSelf->divider__DOT__qC))) {
            vlSelf->divider__DOT__dC[0U] = vlSelf->divider__DOT__dNormExt[0U];
            vlSelf->divider__DOT__dC[1U] = vlSelf->divider__DOT__dNormExt[1U];
            vlSelf->divider__DOT__dC[2U] = vlSelf->divider__DOT__dNormExt[2U];
        } else {
            vlSelf->divider__DOT__dC[0U] = vlSelf->divider__DOT__dLS[0U];
            vlSelf->divider__DOT__dC[1U] = vlSelf->divider__DOT__dLS[1U];
            vlSelf->divider__DOT__dC[2U] = vlSelf->divider__DOT__dLS[2U];
        }
    } else if ((1U & (IData)(vlSelf->divider__DOT__qC))) {
        vlSelf->divider__DOT__dC[0U] = vlSelf->divider__DOT__dNormExt[0U];
        vlSelf->divider__DOT__dC[1U] = vlSelf->divider__DOT__dNormExt[1U];
        vlSelf->divider__DOT__dC[2U] = vlSelf->divider__DOT__dNormExt[2U];
    } else {
        vlSelf->divider__DOT__dC[0U] = 0U;
        vlSelf->divider__DOT__dC[1U] = 0U;
        vlSelf->divider__DOT__dC[2U] = 0U;
    }
    __Vtemp_24[0U] = ((vlSelf->divider__DOT__pS[0U] 
                       ^ vlSelf->divider__DOT__pC[0U]) 
                      ^ vlSelf->divider__DOT__dC[0U]);
    __Vtemp_24[1U] = ((vlSelf->divider__DOT__pS[1U] 
                       ^ vlSelf->divider__DOT__pC[1U]) 
                      ^ vlSelf->divider__DOT__dC[1U]);
    __Vtemp_24[2U] = ((vlSelf->divider__DOT__pS[2U] 
                       ^ vlSelf->divider__DOT__pC[2U]) 
                      ^ vlSelf->divider__DOT__dC[2U]);
    VL_SHIFTL_WWI(66,66,32, __Vtemp_25, __Vtemp_24, 2U);
    vlSelf->divider__DOT__pNS[0U] = __Vtemp_25[0U];
    vlSelf->divider__DOT__pNS[1U] = __Vtemp_25[1U];
    vlSelf->divider__DOT__pNS[2U] = (3U & __Vtemp_25[2U]);
    __Vtemp_30[0U] = ((vlSelf->divider__DOT__pS[0U] 
                       & (vlSelf->divider__DOT__pC[0U] 
                          | vlSelf->divider__DOT__dC[0U])) 
                      | (vlSelf->divider__DOT__pC[0U] 
                         & vlSelf->divider__DOT__dC[0U]));
    __Vtemp_30[1U] = ((vlSelf->divider__DOT__pS[1U] 
                       & (vlSelf->divider__DOT__pC[1U] 
                          | vlSelf->divider__DOT__dC[1U])) 
                      | (vlSelf->divider__DOT__pC[1U] 
                         & vlSelf->divider__DOT__dC[1U]));
    __Vtemp_30[2U] = ((vlSelf->divider__DOT__pS[2U] 
                       & (vlSelf->divider__DOT__pC[2U] 
                          | vlSelf->divider__DOT__dC[2U])) 
                      | (vlSelf->divider__DOT__pC[2U] 
                         & vlSelf->divider__DOT__dC[2U]));
    VL_SHIFTL_WWI(66,66,32, __Vtemp_31, __Vtemp_30, 3U);
    vlSelf->divider__DOT__pNC[0U] = __Vtemp_31[0U];
    vlSelf->divider__DOT__pNC[1U] = __Vtemp_31[1U];
    vlSelf->divider__DOT__pNC[2U] = (3U & __Vtemp_31[2U]);
    __Vtemp_33[0U] = 1U;
    __Vtemp_33[1U] = 0U;
    __Vtemp_33[2U] = 0U;
    __Vtemp_34[0U] = (~ vlSelf->divider__DOT__dC[0U]);
    __Vtemp_34[1U] = (~ vlSelf->divider__DOT__dC[1U]);
    __Vtemp_34[2U] = (~ vlSelf->divider__DOT__dC[2U]);
    VL_ADD_W(3, __Vtemp_35, vlSelf->divider__DOT__pNow, __Vtemp_34);
    VL_ADD_W(3, __Vtemp_36, __Vtemp_33, __Vtemp_35);
    VL_SHIFTL_WWI(66,66,32, __Vtemp_37, __Vtemp_36, 2U);
    vlSelf->divider__DOT__pNext[0U] = __Vtemp_37[0U];
    vlSelf->divider__DOT__pNext[1U] = __Vtemp_37[1U];
    vlSelf->divider__DOT__pNext[2U] = (3U & __Vtemp_37[2U]);
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
