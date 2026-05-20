// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpd_lut__pch.h"

//============================================================
// Constructors

Vpd_lut::Vpd_lut(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpd_lut__Syms(contextp(), _vcname__, this)}
    , p{vlSymsp->TOP.p}
    , d{vlSymsp->TOP.d}
    , q{vlSymsp->TOP.q}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpd_lut::Vpd_lut(const char* _vcname__)
    : Vpd_lut(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpd_lut::~Vpd_lut() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpd_lut___024root___eval_debug_assertions(Vpd_lut___024root* vlSelf);
#endif  // VL_DEBUG
void Vpd_lut___024root___eval_static(Vpd_lut___024root* vlSelf);
void Vpd_lut___024root___eval_initial(Vpd_lut___024root* vlSelf);
void Vpd_lut___024root___eval_settle(Vpd_lut___024root* vlSelf);
void Vpd_lut___024root___eval(Vpd_lut___024root* vlSelf);

void Vpd_lut::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpd_lut::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpd_lut___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpd_lut___024root___eval_static(&(vlSymsp->TOP));
        Vpd_lut___024root___eval_initial(&(vlSymsp->TOP));
        Vpd_lut___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpd_lut___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpd_lut::eventsPending() { return false; }

uint64_t Vpd_lut::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpd_lut::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpd_lut___024root___eval_final(Vpd_lut___024root* vlSelf);

VL_ATTR_COLD void Vpd_lut::final() {
    Vpd_lut___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpd_lut::hierName() const { return vlSymsp->name(); }
const char* Vpd_lut::modelName() const { return "Vpd_lut"; }
unsigned Vpd_lut::threads() const { return 1; }
void Vpd_lut::prepareClone() const { contextp()->prepareClone(); }
void Vpd_lut::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vpd_lut::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpd_lut::trace()' called on model that was Verilated without --trace option");
}
