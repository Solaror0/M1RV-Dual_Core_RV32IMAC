// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vshift_add__pch.h"

//============================================================
// Constructors

Vshift_add::Vshift_add(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vshift_add__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , start{vlSymsp->TOP.start}
    , count{vlSymsp->TOP.count}
    , done{vlSymsp->TOP.done}
    , running{vlSymsp->TOP.running}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , b_in{vlSymsp->TOP.b_in}
    , b_shifted{vlSymsp->TOP.b_shifted}
    , accumulator{vlSymsp->TOP.accumulator}
    , padded_a{vlSymsp->TOP.padded_a}
    , sum_holder{vlSymsp->TOP.sum_holder}
    , shifted_upper{vlSymsp->TOP.shifted_upper}
    , shifted_lower{vlSymsp->TOP.shifted_lower}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vshift_add::Vshift_add(const char* _vcname__)
    : Vshift_add(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vshift_add::~Vshift_add() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vshift_add___024root___eval_debug_assertions(Vshift_add___024root* vlSelf);
#endif  // VL_DEBUG
void Vshift_add___024root___eval_static(Vshift_add___024root* vlSelf);
void Vshift_add___024root___eval_initial(Vshift_add___024root* vlSelf);
void Vshift_add___024root___eval_settle(Vshift_add___024root* vlSelf);
void Vshift_add___024root___eval(Vshift_add___024root* vlSelf);

void Vshift_add::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vshift_add::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vshift_add___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vshift_add___024root___eval_static(&(vlSymsp->TOP));
        Vshift_add___024root___eval_initial(&(vlSymsp->TOP));
        Vshift_add___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vshift_add___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vshift_add::eventsPending() { return false; }

uint64_t Vshift_add::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vshift_add::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vshift_add___024root___eval_final(Vshift_add___024root* vlSelf);

VL_ATTR_COLD void Vshift_add::final() {
    Vshift_add___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vshift_add::hierName() const { return vlSymsp->name(); }
const char* Vshift_add::modelName() const { return "Vshift_add"; }
unsigned Vshift_add::threads() const { return 1; }
void Vshift_add::prepareClone() const { contextp()->prepareClone(); }
void Vshift_add::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vshift_add::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vshift_add::trace()' called on model that was Verilated without --trace option");
}
