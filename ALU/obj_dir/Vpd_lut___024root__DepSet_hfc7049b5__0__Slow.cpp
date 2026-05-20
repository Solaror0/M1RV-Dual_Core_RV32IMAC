// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpd_lut.h for the primary calling header

#include "Vpd_lut__pch.h"
#include "Vpd_lut___024root.h"

VL_ATTR_COLD void Vpd_lut___024root___eval_static__TOP(Vpd_lut___024root* vlSelf);

VL_ATTR_COLD void Vpd_lut___024root___eval_static(Vpd_lut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpd_lut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpd_lut___024root___eval_static\n"); );
    // Body
    Vpd_lut___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vpd_lut___024root___eval_static__TOP(Vpd_lut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpd_lut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpd_lut___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->pd_lut__DOT__signal = (((IData)(vlSelf->d) 
                                    << 6U) | (IData)(vlSelf->p));
}

VL_ATTR_COLD void Vpd_lut___024root___eval_initial(Vpd_lut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpd_lut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpd_lut___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vpd_lut___024root___eval_final(Vpd_lut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpd_lut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpd_lut___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpd_lut___024root___dump_triggers__stl(Vpd_lut___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vpd_lut___024root___eval_phase__stl(Vpd_lut___024root* vlSelf);

VL_ATTR_COLD void Vpd_lut___024root___eval_settle(Vpd_lut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpd_lut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpd_lut___024root___eval_settle\n"); );
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
            Vpd_lut___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("pd_lut.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vpd_lut___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpd_lut___024root___dump_triggers__stl(Vpd_lut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpd_lut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpd_lut___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*2:0*/, 2048> Vpd_lut__ConstPool__TABLE_h7d5f3276_0;

VL_ATTR_COLD void Vpd_lut___024root___stl_sequent__TOP__0(Vpd_lut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpd_lut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpd_lut___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->pd_lut__DOT__p = vlSelf->p;
    vlSelf->pd_lut__DOT__d = vlSelf->d;
    __Vtableidx1 = vlSelf->pd_lut__DOT__signal;
    vlSelf->q = Vpd_lut__ConstPool__TABLE_h7d5f3276_0
        [__Vtableidx1];
    vlSelf->pd_lut__DOT__q = vlSelf->q;
}

VL_ATTR_COLD void Vpd_lut___024root___eval_stl(Vpd_lut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpd_lut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpd_lut___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vpd_lut___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vpd_lut___024root___eval_triggers__stl(Vpd_lut___024root* vlSelf);

VL_ATTR_COLD bool Vpd_lut___024root___eval_phase__stl(Vpd_lut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpd_lut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpd_lut___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vpd_lut___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vpd_lut___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpd_lut___024root___dump_triggers__ico(Vpd_lut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpd_lut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpd_lut___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vpd_lut___024root___dump_triggers__act(Vpd_lut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpd_lut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpd_lut___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpd_lut___024root___dump_triggers__nba(Vpd_lut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpd_lut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpd_lut___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpd_lut___024root___ctor_var_reset(Vpd_lut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpd_lut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpd_lut___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->p = VL_RAND_RESET_I(6);
    vlSelf->d = VL_RAND_RESET_I(5);
    vlSelf->q = VL_RAND_RESET_I(3);
    vlSelf->pd_lut__DOT__p = VL_RAND_RESET_I(6);
    vlSelf->pd_lut__DOT__d = VL_RAND_RESET_I(5);
    vlSelf->pd_lut__DOT__q = VL_RAND_RESET_I(3);
    vlSelf->pd_lut__DOT__signal = VL_RAND_RESET_I(11);
}
