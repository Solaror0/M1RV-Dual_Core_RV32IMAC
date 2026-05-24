// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdivider.h for the primary calling header

#include "Vdivider__pch.h"
#include "Vdivider___024root.h"

VL_ATTR_COLD void Vdivider___024root___eval_static(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vdivider___024root___eval_initial(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vdivider___024root___eval_final(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdivider___024root___dump_triggers__stl(Vdivider___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdivider___024root___eval_phase__stl(Vdivider___024root* vlSelf);

VL_ATTR_COLD void Vdivider___024root___eval_settle(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_settle\n"); );
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
            Vdivider___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("divider.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdivider___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdivider___024root___dump_triggers__stl(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdivider___024root___stl_sequent__TOP__0(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    vlSelf->divider__DOT__clk = vlSelf->clk;
    vlSelf->divider__DOT__rst = vlSelf->rst;
    vlSelf->divider__DOT__a = vlSelf->a;
    vlSelf->divider__DOT__d = vlSelf->d;
    vlSelf->divider__DOT__q = vlSelf->q;
    vlSelf->divider__DOT__rem = vlSelf->rem;
    vlSelf->divider__DOT__done = vlSelf->done;
    vlSelf->divider__DOT__running = vlSelf->running;
    vlSelf->divider__DOT__topBits = (0x3fU & ((vlSelf->divider__DOT__regPA[2U] 
                                               << 5U) 
                                              | (vlSelf->divider__DOT__regPA[1U] 
                                                 >> 0x1bU)));
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
    vlSelf->divider__DOT__regPA_temp[0U] = (IData)(
                                                   (vlSelf->divider__DOT__pBig 
                                                    << (IData)(vlSelf->divider__DOT__clz)));
    vlSelf->divider__DOT__regPA_temp[1U] = (IData)(
                                                   ((vlSelf->divider__DOT__pBig 
                                                     << (IData)(vlSelf->divider__DOT__clz)) 
                                                    >> 0x20U));
    vlSelf->divider__DOT__regPA_temp[2U] = 0U;
    vlSelf->divider__DOT__lut__DOT__p = vlSelf->divider__DOT__topBits;
    vlSelf->divider__DOT__lut__DOT__d = (0xfU & (IData)(
                                                        (vlSelf->divider__DOT__dNorm 
                                                         >> 0x1cU)));
    vlSelf->divider__DOT__lut__DOT__signal = ((0x3c0U 
                                               & ((IData)(
                                                          (vlSelf->divider__DOT__dNorm 
                                                           >> 0x1cU)) 
                                                  << 6U)) 
                                              | (IData)(vlSelf->divider__DOT__topBits));
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
    VL_SHIFTL_WWI(65,65,32, __Vtemp_3, vlSelf->divider__DOT__regPA, 2U);
    vlSelf->divider__DOT__regPA_TS[0U] = __Vtemp_3[0U];
    vlSelf->divider__DOT__regPA_TS[1U] = __Vtemp_3[1U];
    vlSelf->divider__DOT__regPA_TS[2U] = (1U & __Vtemp_3[2U]);
    vlSelf->divider__DOT__pNext = (0x1ffffffffULL & 
                                   ((((QData)((IData)(
                                                      vlSelf->divider__DOT__regPA_TS[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->divider__DOT__regPA_TS[1U]))) 
                                    - vlSelf->divider__DOT__dC));
}

VL_ATTR_COLD void Vdivider___024root___eval_stl(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vdivider___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vdivider___024root___eval_triggers__stl(Vdivider___024root* vlSelf);

VL_ATTR_COLD bool Vdivider___024root___eval_phase__stl(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdivider___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vdivider___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdivider___024root___dump_triggers__ico(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vdivider___024root___dump_triggers__act(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vdivider___024root___dump_triggers__nba(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdivider___024root___ctor_var_reset(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a = VL_RAND_RESET_I(32);
    vlSelf->d = VL_RAND_RESET_I(32);
    vlSelf->q = VL_RAND_RESET_I(32);
    vlSelf->rem = VL_RAND_RESET_Q(33);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->running = VL_RAND_RESET_I(1);
    vlSelf->divider__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->divider__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->divider__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->divider__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->divider__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->divider__DOT__rem = VL_RAND_RESET_Q(33);
    vlSelf->divider__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->divider__DOT__running = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->divider__DOT__regPA);
    VL_RAND_RESET_W(65, vlSelf->divider__DOT__regPA_temp);
    VL_RAND_RESET_W(65, vlSelf->divider__DOT__regPA_TS);
    vlSelf->divider__DOT__pBig = VL_RAND_RESET_Q(64);
    vlSelf->divider__DOT__dNorm = VL_RAND_RESET_Q(33);
    vlSelf->divider__DOT__clz = VL_RAND_RESET_I(6);
    vlSelf->divider__DOT__p = VL_RAND_RESET_Q(33);
    vlSelf->divider__DOT__pNext = VL_RAND_RESET_Q(33);
    vlSelf->divider__DOT__qC = VL_RAND_RESET_I(3);
    vlSelf->divider__DOT__topBits = VL_RAND_RESET_I(6);
    vlSelf->divider__DOT__dC = VL_RAND_RESET_Q(33);
    vlSelf->divider__DOT__dLS = VL_RAND_RESET_Q(33);
    vlSelf->divider__DOT__dM = VL_RAND_RESET_Q(33);
    vlSelf->divider__DOT__dMLS = VL_RAND_RESET_Q(33);
    vlSelf->divider__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->divider__DOT__Qm = VL_RAND_RESET_I(32);
    vlSelf->divider__DOT__Qp = VL_RAND_RESET_I(32);
    vlSelf->divider__DOT__rem_temp = VL_RAND_RESET_Q(33);
    vlSelf->divider__DOT__aLow = VL_RAND_RESET_I(32);
    vlSelf->divider__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->divider__DOT__lut__DOT__p = VL_RAND_RESET_I(6);
    vlSelf->divider__DOT__lut__DOT__d = VL_RAND_RESET_I(4);
    vlSelf->divider__DOT__lut__DOT__q = VL_RAND_RESET_I(3);
    vlSelf->divider__DOT__lut__DOT__signal = VL_RAND_RESET_I(10);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
