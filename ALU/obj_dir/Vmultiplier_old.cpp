// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmultiplier_old__pch.h"

//============================================================
// Constructors

Vmultiplier_old::Vmultiplier_old(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmultiplier_old__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , output_product{vlSymsp->TOP.output_product}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmultiplier_old::Vmultiplier_old(const char* _vcname__)
    : Vmultiplier_old(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmultiplier_old::~Vmultiplier_old() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmultiplier_old___024root___eval_debug_assertions(Vmultiplier_old___024root* vlSelf);
#endif  // VL_DEBUG
void Vmultiplier_old___024root___eval_static(Vmultiplier_old___024root* vlSelf);
void Vmultiplier_old___024root___eval_initial(Vmultiplier_old___024root* vlSelf);
void Vmultiplier_old___024root___eval_settle(Vmultiplier_old___024root* vlSelf);
void Vmultiplier_old___024root___eval(Vmultiplier_old___024root* vlSelf);

void Vmultiplier_old::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmultiplier_old::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmultiplier_old___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmultiplier_old___024root___eval_static(&(vlSymsp->TOP));
        Vmultiplier_old___024root___eval_initial(&(vlSymsp->TOP));
        Vmultiplier_old___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmultiplier_old___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmultiplier_old::eventsPending() { return false; }

uint64_t Vmultiplier_old::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmultiplier_old::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmultiplier_old___024root___eval_final(Vmultiplier_old___024root* vlSelf);

VL_ATTR_COLD void Vmultiplier_old::final() {
    Vmultiplier_old___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmultiplier_old::hierName() const { return vlSymsp->name(); }
const char* Vmultiplier_old::modelName() const { return "Vmultiplier_old"; }
unsigned Vmultiplier_old::threads() const { return 1; }
void Vmultiplier_old::prepareClone() const { contextp()->prepareClone(); }
void Vmultiplier_old::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vmultiplier_old::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmultiplier_old::trace()' called on model that was Verilated without --trace option");
}
