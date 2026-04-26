// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSHIFT_ADD__SYMS_H_
#define VERILATED_VSHIFT_ADD__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vshift_add.h"

// INCLUDE MODULE CLASSES
#include "Vshift_add___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vshift_add__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vshift_add* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vshift_add___024root           TOP;

    // CONSTRUCTORS
    Vshift_add__Syms(VerilatedContext* contextp, const char* namep, Vshift_add* modelp);
    ~Vshift_add__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
