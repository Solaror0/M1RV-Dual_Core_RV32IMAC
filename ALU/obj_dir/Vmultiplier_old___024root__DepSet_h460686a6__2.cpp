// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultiplier_old.h for the primary calling header

#include "Vmultiplier_old__pch.h"
#include "Vmultiplier_old___024root.h"

void Vmultiplier_old___024root___ico_sequent__TOP__0(Vmultiplier_old___024root* vlSelf);
void Vmultiplier_old___024root___ico_sequent__TOP__1(Vmultiplier_old___024root* vlSelf);

void Vmultiplier_old___024root___eval_ico(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vmultiplier_old___024root___ico_sequent__TOP__0(vlSelf);
        Vmultiplier_old___024root___ico_sequent__TOP__1(vlSelf);
    }
}

void Vmultiplier_old___024root___eval_triggers__ico(Vmultiplier_old___024root* vlSelf);

bool Vmultiplier_old___024root___eval_phase__ico(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmultiplier_old___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vmultiplier_old___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmultiplier_old___024root___eval_act(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___eval_act\n"); );
}

void Vmultiplier_old___024root___eval_nba(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___eval_nba\n"); );
}

void Vmultiplier_old___024root___eval_triggers__act(Vmultiplier_old___024root* vlSelf);

bool Vmultiplier_old___024root___eval_phase__act(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmultiplier_old___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vmultiplier_old___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmultiplier_old___024root___eval_phase__nba(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmultiplier_old___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier_old___024root___dump_triggers__ico(Vmultiplier_old___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier_old___024root___dump_triggers__nba(Vmultiplier_old___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier_old___024root___dump_triggers__act(Vmultiplier_old___024root* vlSelf);
#endif  // VL_DEBUG

void Vmultiplier_old___024root___eval(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___eval\n"); );
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
            Vmultiplier_old___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("multiplier_old.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmultiplier_old___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmultiplier_old___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("multiplier_old.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vmultiplier_old___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("multiplier_old.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vmultiplier_old___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vmultiplier_old___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmultiplier_old___024root___eval_debug_assertions(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
