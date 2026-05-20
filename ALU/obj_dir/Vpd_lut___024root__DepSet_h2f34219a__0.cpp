// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpd_lut.h for the primary calling header

#include "Vpd_lut__pch.h"
#include "Vpd_lut__Syms.h"
#include "Vpd_lut___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpd_lut___024root___dump_triggers__ico(Vpd_lut___024root* vlSelf);
#endif  // VL_DEBUG

void Vpd_lut___024root___eval_triggers__ico(Vpd_lut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpd_lut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpd_lut___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpd_lut___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpd_lut___024root___dump_triggers__act(Vpd_lut___024root* vlSelf);
#endif  // VL_DEBUG

void Vpd_lut___024root___eval_triggers__act(Vpd_lut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpd_lut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpd_lut___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpd_lut___024root___dump_triggers__act(vlSelf);
    }
#endif
}
