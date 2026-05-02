// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMULTIPLIER_OLD__SYMS_H_
#define VERILATED_VMULTIPLIER_OLD__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmultiplier_old.h"

// INCLUDE MODULE CLASSES
#include "Vmultiplier_old___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vmultiplier_old__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmultiplier_old* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmultiplier_old___024root      TOP;

    // CONSTRUCTORS
    Vmultiplier_old__Syms(VerilatedContext* contextp, const char* namep, Vmultiplier_old* modelp);
    ~Vmultiplier_old__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
