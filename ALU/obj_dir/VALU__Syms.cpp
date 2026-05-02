// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VALU__pch.h"
#include "VALU.h"
#include "VALU___024root.h"
#include "VALU_carry_lookahead_adder.h"

// FUNCTIONS
VALU__Syms::~VALU__Syms()
{
}

VALU__Syms::VALU__Syms(VerilatedContext* contextp, const char* namep, VALU* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__ALU__DOT__adder{this, Verilated::catName(namep, "ALU.adder")}
    , TOP__ALU__DOT__multiplier__DOT__fast_adder_lower{this, Verilated::catName(namep, "ALU.multiplier.fast_adder_lower")}
    , TOP__ALU__DOT__multiplier__DOT__fast_adder_upper{this, Verilated::catName(namep, "ALU.multiplier.fast_adder_upper")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__ALU__DOT__adder = &TOP__ALU__DOT__adder;
    TOP.__PVT__ALU__DOT__multiplier__DOT__fast_adder_lower = &TOP__ALU__DOT__multiplier__DOT__fast_adder_lower;
    TOP.__PVT__ALU__DOT__multiplier__DOT__fast_adder_upper = &TOP__ALU__DOT__multiplier__DOT__fast_adder_upper;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__ALU__DOT__adder.__Vconfigure(true);
    TOP__ALU__DOT__multiplier__DOT__fast_adder_lower.__Vconfigure(false);
    TOP__ALU__DOT__multiplier__DOT__fast_adder_upper.__Vconfigure(false);
}
