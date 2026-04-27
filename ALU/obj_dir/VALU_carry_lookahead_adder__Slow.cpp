// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU__pch.h"
#include "VALU__Syms.h"
#include "VALU_carry_lookahead_adder.h"

void VALU_carry_lookahead_adder___ctor_var_reset(VALU_carry_lookahead_adder* vlSelf);

VALU_carry_lookahead_adder::VALU_carry_lookahead_adder(VALU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VALU_carry_lookahead_adder___ctor_var_reset(this);
}

void VALU_carry_lookahead_adder::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VALU_carry_lookahead_adder::~VALU_carry_lookahead_adder() {
}
