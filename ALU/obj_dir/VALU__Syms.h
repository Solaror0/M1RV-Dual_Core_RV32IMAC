// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VALU__SYMS_H_
#define VERILATED_VALU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VALU.h"

// INCLUDE MODULE CLASSES
#include "VALU___024root.h"
#include "VALU_carry_lookahead_adder.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VALU__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VALU* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VALU___024root                 TOP;
    VALU_carry_lookahead_adder     TOP__ALU__DOT__adder;
    VALU_carry_lookahead_adder     TOP__ALU__DOT__shift_multiplier__DOT__adder_lower;
    VALU_carry_lookahead_adder     TOP__ALU__DOT__shift_multiplier__DOT__adder_upper;

    // CONSTRUCTORS
    VALU__Syms(VerilatedContext* contextp, const char* namep, VALU* modelp);
    ~VALU__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
