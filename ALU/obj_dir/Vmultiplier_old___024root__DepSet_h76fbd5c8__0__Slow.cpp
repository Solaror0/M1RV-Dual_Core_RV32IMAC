// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultiplier_old.h for the primary calling header

#include "Vmultiplier_old__pch.h"
#include "Vmultiplier_old__Syms.h"
#include "Vmultiplier_old___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier_old___024root___dump_triggers__stl(Vmultiplier_old___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmultiplier_old___024root___eval_triggers__stl(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmultiplier_old___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
