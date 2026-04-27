// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU__pch.h"
#include "VALU_carry_lookahead_adder.h"

VL_INLINE_OPT void VALU_carry_lookahead_adder___ico_sequent__TOP__ALU__DOT__adder__0(VALU_carry_lookahead_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VALU_carry_lookahead_adder___ico_sequent__TOP__ALU__DOT__adder__0\n"); );
    // Init
    CData/*3:0*/ __Vcellout__block0__s;
    __Vcellout__block0__s = 0;
    CData/*3:0*/ __Vcellout__block1__s;
    __Vcellout__block1__s = 0;
    CData/*0:0*/ __Vcellinp__block1__cin;
    __Vcellinp__block1__cin = 0;
    CData/*3:0*/ __Vcellout__block2__s;
    __Vcellout__block2__s = 0;
    CData/*0:0*/ __Vcellinp__block2__cin;
    __Vcellinp__block2__cin = 0;
    CData/*3:0*/ __Vcellout__block3__s;
    __Vcellout__block3__s = 0;
    CData/*0:0*/ __Vcellinp__block3__cin;
    __Vcellinp__block3__cin = 0;
    CData/*3:0*/ __Vcellout__block4__s;
    __Vcellout__block4__s = 0;
    CData/*0:0*/ __Vcellinp__block4__cin;
    __Vcellinp__block4__cin = 0;
    CData/*3:0*/ __Vcellout__block5__s;
    __Vcellout__block5__s = 0;
    CData/*0:0*/ __Vcellinp__block5__cin;
    __Vcellinp__block5__cin = 0;
    CData/*3:0*/ __Vcellout__block6__s;
    __Vcellout__block6__s = 0;
    CData/*0:0*/ __Vcellinp__block6__cin;
    __Vcellinp__block6__cin = 0;
    CData/*3:0*/ __Vcellout__block7__s;
    __Vcellout__block7__s = 0;
    CData/*0:0*/ __Vcellinp__block7__cin;
    __Vcellinp__block7__cin = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice0__P;
    block0__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice0__G;
    block0__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice1__P;
    block0__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice1__G;
    block0__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice2__P;
    block0__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice2__G;
    block0__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice3__P;
    block0__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice3__G;
    block0__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice0__P;
    block1__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice0__G;
    block1__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice1__P;
    block1__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice1__G;
    block1__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice2__P;
    block1__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice2__G;
    block1__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice3__P;
    block1__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice3__G;
    block1__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice0__P;
    block2__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice0__G;
    block2__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice1__P;
    block2__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice1__G;
    block2__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice2__P;
    block2__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice2__G;
    block2__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice3__P;
    block2__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice3__G;
    block2__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice0__P;
    block3__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice0__G;
    block3__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice1__P;
    block3__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice1__G;
    block3__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice2__P;
    block3__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice2__G;
    block3__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice3__P;
    block3__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice3__G;
    block3__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice0__P;
    block4__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice0__G;
    block4__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice1__P;
    block4__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice1__G;
    block4__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice2__P;
    block4__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice2__G;
    block4__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice3__P;
    block4__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice3__G;
    block4__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice0__P;
    block5__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice0__G;
    block5__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice1__P;
    block5__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice1__G;
    block5__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice2__P;
    block5__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice2__G;
    block5__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice3__P;
    block5__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice3__G;
    block5__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice0__P;
    block6__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice0__G;
    block6__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice1__P;
    block6__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice1__G;
    block6__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice2__P;
    block6__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice2__G;
    block6__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice3__P;
    block6__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice3__G;
    block6__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice0__P;
    block7__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice0__G;
    block7__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice1__P;
    block7__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice1__G;
    block7__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice2__P;
    block7__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice2__G;
    block7__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice3__P;
    block7__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice3__G;
    block7__DOT____Vcellout__slice3__G = 0;
    // Body
    vlSelf->block0__DOT__a = (0xfU & (vlSelf->a >> 0U));
    vlSelf->block0__DOT__slice0__DOT__a = (1U & (vlSelf->a 
                                                 >> 0U));
    vlSelf->block0__DOT__slice1__DOT__a = (1U & (vlSelf->a 
                                                 >> 1U));
    vlSelf->block0__DOT__slice2__DOT__a = (1U & (vlSelf->a 
                                                 >> 2U));
    vlSelf->block0__DOT__slice3__DOT__a = (1U & (vlSelf->a 
                                                 >> 3U));
    vlSelf->block1__DOT__a = (0xfU & (vlSelf->a >> 4U));
    vlSelf->block1__DOT__slice0__DOT__a = (1U & (vlSelf->a 
                                                 >> 4U));
    vlSelf->block1__DOT__slice1__DOT__a = (1U & (vlSelf->a 
                                                 >> 5U));
    vlSelf->block1__DOT__slice2__DOT__a = (1U & (vlSelf->a 
                                                 >> 6U));
    vlSelf->block1__DOT__slice3__DOT__a = (1U & (vlSelf->a 
                                                 >> 7U));
    vlSelf->block2__DOT__a = (0xfU & (vlSelf->a >> 8U));
    vlSelf->block2__DOT__slice0__DOT__a = (1U & (vlSelf->a 
                                                 >> 8U));
    vlSelf->block2__DOT__slice1__DOT__a = (1U & (vlSelf->a 
                                                 >> 9U));
    vlSelf->block2__DOT__slice2__DOT__a = (1U & (vlSelf->a 
                                                 >> 0xaU));
    vlSelf->block2__DOT__slice3__DOT__a = (1U & (vlSelf->a 
                                                 >> 0xbU));
    vlSelf->block3__DOT__a = (0xfU & (vlSelf->a >> 0xcU));
    vlSelf->block3__DOT__slice0__DOT__a = (1U & (vlSelf->a 
                                                 >> 0xcU));
    vlSelf->block3__DOT__slice1__DOT__a = (1U & (vlSelf->a 
                                                 >> 0xdU));
    vlSelf->block3__DOT__slice2__DOT__a = (1U & (vlSelf->a 
                                                 >> 0xeU));
    vlSelf->block3__DOT__slice3__DOT__a = (1U & (vlSelf->a 
                                                 >> 0xfU));
    vlSelf->block4__DOT__a = (0xfU & (vlSelf->a >> 0x10U));
    vlSelf->block4__DOT__slice0__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x10U));
    vlSelf->block4__DOT__slice1__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x11U));
    vlSelf->block4__DOT__slice2__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x12U));
    vlSelf->block4__DOT__slice3__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x13U));
    vlSelf->block5__DOT__a = (0xfU & (vlSelf->a >> 0x14U));
    vlSelf->block5__DOT__slice0__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x14U));
    vlSelf->block5__DOT__slice1__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x15U));
    vlSelf->block5__DOT__slice2__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x16U));
    vlSelf->block5__DOT__slice3__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x17U));
    vlSelf->block6__DOT__a = (0xfU & (vlSelf->a >> 0x18U));
    vlSelf->block6__DOT__slice0__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x18U));
    vlSelf->block6__DOT__slice1__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x19U));
    vlSelf->block6__DOT__slice2__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x1aU));
    vlSelf->block6__DOT__slice3__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x1bU));
    vlSelf->block7__DOT__a = (0xfU & (vlSelf->a >> 0x1cU));
    vlSelf->block7__DOT__slice0__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x1cU));
    vlSelf->block7__DOT__slice1__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x1dU));
    vlSelf->block7__DOT__slice2__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x1eU));
    vlSelf->block7__DOT__slice3__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x1fU));
    vlSelf->cin_effective = ((IData)(vlSelf->Subtract) 
                             | (IData)(vlSelf->cin));
    vlSelf->b_in = ((IData)(vlSelf->Subtract) ? (~ vlSelf->b)
                     : vlSelf->b);
    vlSelf->block0__DOT__cin = vlSelf->cin_effective;
    vlSelf->block0__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 0U));
    vlSelf->block0__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0U));
    vlSelf->block0__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 1U));
    vlSelf->block0__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 2U));
    vlSelf->block0__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 3U));
    vlSelf->block1__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 4U));
    vlSelf->block1__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 4U));
    vlSelf->block1__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 5U));
    vlSelf->block1__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 6U));
    vlSelf->block1__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 7U));
    vlSelf->block2__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 8U));
    vlSelf->block2__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 8U));
    vlSelf->block2__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 9U));
    vlSelf->block2__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0xaU));
    vlSelf->block2__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0xbU));
    vlSelf->block3__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 0xcU));
    vlSelf->block3__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0xcU));
    vlSelf->block3__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0xdU));
    vlSelf->block3__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0xeU));
    vlSelf->block3__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0xfU));
    vlSelf->block4__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 0x10U));
    vlSelf->block4__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x10U));
    vlSelf->block4__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x11U));
    vlSelf->block4__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x12U));
    vlSelf->block4__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x13U));
    vlSelf->block5__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 0x14U));
    vlSelf->block5__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x14U));
    vlSelf->block5__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x15U));
    vlSelf->block5__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x16U));
    vlSelf->block5__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x17U));
    vlSelf->block6__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 0x18U));
    vlSelf->block6__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x18U));
    vlSelf->block6__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x19U));
    vlSelf->block6__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x1aU));
    vlSelf->block6__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x1bU));
    vlSelf->block7__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 0x1cU));
    vlSelf->block7__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x1cU));
    vlSelf->block7__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x1dU));
    vlSelf->block7__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x1eU));
    vlSelf->block7__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x1fU));
    block7__DOT____Vcellout__slice3__G = ((vlSelf->a 
                                           & vlSelf->b_in) 
                                          >> 0x1fU);
    block7__DOT____Vcellout__slice3__P = ((vlSelf->a 
                                           ^ vlSelf->b_in) 
                                          >> 0x1fU);
    block7__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x1eU));
    block7__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x1eU));
    block7__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x1dU));
    block7__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x1dU));
    block7__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x1cU));
    block7__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x1cU));
    block6__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x1bU));
    block6__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x1bU));
    block6__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x1aU));
    block6__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x1aU));
    block6__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x19U));
    block6__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x19U));
    block6__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x18U));
    block6__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x18U));
    block5__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x17U));
    block5__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x17U));
    block5__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x16U));
    block5__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x16U));
    block5__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x15U));
    block5__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x15U));
    block5__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x14U));
    block5__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x14U));
    block4__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x13U));
    block4__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x13U));
    block4__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x12U));
    block4__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x12U));
    block4__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x11U));
    block4__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x11U));
    block4__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x10U));
    block4__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x10U));
    block3__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0xfU));
    block3__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0xfU));
    block3__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0xeU));
    block3__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0xeU));
    block3__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0xdU));
    block3__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0xdU));
    block3__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0xcU));
    block3__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0xcU));
    block2__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0xbU));
    block2__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0xbU));
    block2__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0xaU));
    block2__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0xaU));
    block2__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 9U));
    block2__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 9U));
    block2__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 8U));
    block2__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 8U));
    block1__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 7U));
    block1__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 7U));
    block1__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 6U));
    block1__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 6U));
    block1__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 5U));
    block1__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 5U));
    block1__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 4U));
    block1__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 4U));
    block0__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 3U));
    block0__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 3U));
    block0__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 2U));
    block0__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 2U));
    block0__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 1U));
    block0__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 1U));
    block0__DOT____Vcellout__slice0__G = (1U & (vlSelf->a 
                                                & vlSelf->b_in));
    block0__DOT____Vcellout__slice0__P = (1U & (vlSelf->a 
                                                ^ vlSelf->b_in));
    vlSelf->block7__DOT__slice3__DOT__G = block7__DOT____Vcellout__slice3__G;
    vlSelf->block7__DOT__slice3__DOT__P = block7__DOT____Vcellout__slice3__P;
    vlSelf->block7__DOT__slice2__DOT__G = block7__DOT____Vcellout__slice2__G;
    vlSelf->block7__DOT__slice2__DOT__P = block7__DOT____Vcellout__slice2__P;
    vlSelf->block7__DOT__slice1__DOT__G = block7__DOT____Vcellout__slice1__G;
    vlSelf->block7__DOT__slice1__DOT__P = block7__DOT____Vcellout__slice1__P;
    vlSelf->block7__DOT__slice0__DOT__G = block7__DOT____Vcellout__slice0__G;
    vlSelf->block7__DOT__G = (((IData)(block7__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block7__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block7__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block7__DOT____Vcellout__slice0__G))));
    vlSelf->block7__DOT__slice0__DOT__P = block7__DOT____Vcellout__slice0__P;
    vlSelf->block7__DOT__P = (((IData)(block7__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block7__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block7__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block7__DOT____Vcellout__slice0__P))));
    vlSelf->block6__DOT__slice3__DOT__G = block6__DOT____Vcellout__slice3__G;
    vlSelf->block6__DOT__slice3__DOT__P = block6__DOT____Vcellout__slice3__P;
    vlSelf->block6__DOT__slice2__DOT__G = block6__DOT____Vcellout__slice2__G;
    vlSelf->block6__DOT__slice2__DOT__P = block6__DOT____Vcellout__slice2__P;
    vlSelf->block6__DOT__slice1__DOT__G = block6__DOT____Vcellout__slice1__G;
    vlSelf->block6__DOT__slice1__DOT__P = block6__DOT____Vcellout__slice1__P;
    vlSelf->block6__DOT__slice0__DOT__G = block6__DOT____Vcellout__slice0__G;
    vlSelf->block6__DOT__G = (((IData)(block6__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block6__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block6__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block6__DOT____Vcellout__slice0__G))));
    vlSelf->block6__DOT__slice0__DOT__P = block6__DOT____Vcellout__slice0__P;
    vlSelf->block6__DOT__P = (((IData)(block6__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block6__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block6__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block6__DOT____Vcellout__slice0__P))));
    vlSelf->block5__DOT__slice3__DOT__G = block5__DOT____Vcellout__slice3__G;
    vlSelf->block5__DOT__slice3__DOT__P = block5__DOT____Vcellout__slice3__P;
    vlSelf->block5__DOT__slice2__DOT__G = block5__DOT____Vcellout__slice2__G;
    vlSelf->block5__DOT__slice2__DOT__P = block5__DOT____Vcellout__slice2__P;
    vlSelf->block5__DOT__slice1__DOT__G = block5__DOT____Vcellout__slice1__G;
    vlSelf->block5__DOT__slice1__DOT__P = block5__DOT____Vcellout__slice1__P;
    vlSelf->block5__DOT__slice0__DOT__G = block5__DOT____Vcellout__slice0__G;
    vlSelf->block5__DOT__G = (((IData)(block5__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block5__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block5__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block5__DOT____Vcellout__slice0__G))));
    vlSelf->block5__DOT__slice0__DOT__P = block5__DOT____Vcellout__slice0__P;
    vlSelf->block5__DOT__P = (((IData)(block5__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block5__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block5__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block5__DOT____Vcellout__slice0__P))));
    vlSelf->block4__DOT__slice3__DOT__G = block4__DOT____Vcellout__slice3__G;
    vlSelf->block4__DOT__slice3__DOT__P = block4__DOT____Vcellout__slice3__P;
    vlSelf->block4__DOT__slice2__DOT__G = block4__DOT____Vcellout__slice2__G;
    vlSelf->block4__DOT__slice2__DOT__P = block4__DOT____Vcellout__slice2__P;
    vlSelf->block4__DOT__slice1__DOT__G = block4__DOT____Vcellout__slice1__G;
    vlSelf->block4__DOT__slice1__DOT__P = block4__DOT____Vcellout__slice1__P;
    vlSelf->block4__DOT__slice0__DOT__G = block4__DOT____Vcellout__slice0__G;
    vlSelf->block4__DOT__G = (((IData)(block4__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block4__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block4__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block4__DOT____Vcellout__slice0__G))));
    vlSelf->block4__DOT__slice0__DOT__P = block4__DOT____Vcellout__slice0__P;
    vlSelf->block4__DOT__P = (((IData)(block4__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block4__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block4__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block4__DOT____Vcellout__slice0__P))));
    vlSelf->block3__DOT__slice3__DOT__G = block3__DOT____Vcellout__slice3__G;
    vlSelf->block3__DOT__slice3__DOT__P = block3__DOT____Vcellout__slice3__P;
    vlSelf->block3__DOT__slice2__DOT__G = block3__DOT____Vcellout__slice2__G;
    vlSelf->block3__DOT__slice2__DOT__P = block3__DOT____Vcellout__slice2__P;
    vlSelf->block3__DOT__slice1__DOT__G = block3__DOT____Vcellout__slice1__G;
    vlSelf->block3__DOT__slice1__DOT__P = block3__DOT____Vcellout__slice1__P;
    vlSelf->block3__DOT__slice0__DOT__G = block3__DOT____Vcellout__slice0__G;
    vlSelf->block3__DOT__G = (((IData)(block3__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block3__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block3__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block3__DOT____Vcellout__slice0__G))));
    vlSelf->block3__DOT__slice0__DOT__P = block3__DOT____Vcellout__slice0__P;
    vlSelf->block3__DOT__P = (((IData)(block3__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block3__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block3__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block3__DOT____Vcellout__slice0__P))));
    vlSelf->block2__DOT__slice3__DOT__G = block2__DOT____Vcellout__slice3__G;
    vlSelf->block2__DOT__slice3__DOT__P = block2__DOT____Vcellout__slice3__P;
    vlSelf->block2__DOT__slice2__DOT__G = block2__DOT____Vcellout__slice2__G;
    vlSelf->block2__DOT__slice2__DOT__P = block2__DOT____Vcellout__slice2__P;
    vlSelf->block2__DOT__slice1__DOT__G = block2__DOT____Vcellout__slice1__G;
    vlSelf->block2__DOT__slice1__DOT__P = block2__DOT____Vcellout__slice1__P;
    vlSelf->block2__DOT__slice0__DOT__G = block2__DOT____Vcellout__slice0__G;
    vlSelf->block2__DOT__G = (((IData)(block2__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block2__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block2__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block2__DOT____Vcellout__slice0__G))));
    vlSelf->block2__DOT__slice0__DOT__P = block2__DOT____Vcellout__slice0__P;
    vlSelf->block2__DOT__P = (((IData)(block2__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block2__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block2__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block2__DOT____Vcellout__slice0__P))));
    vlSelf->block1__DOT__slice3__DOT__G = block1__DOT____Vcellout__slice3__G;
    vlSelf->block1__DOT__slice3__DOT__P = block1__DOT____Vcellout__slice3__P;
    vlSelf->block1__DOT__slice2__DOT__G = block1__DOT____Vcellout__slice2__G;
    vlSelf->block1__DOT__slice2__DOT__P = block1__DOT____Vcellout__slice2__P;
    vlSelf->block1__DOT__slice1__DOT__G = block1__DOT____Vcellout__slice1__G;
    vlSelf->block1__DOT__slice1__DOT__P = block1__DOT____Vcellout__slice1__P;
    vlSelf->block1__DOT__slice0__DOT__G = block1__DOT____Vcellout__slice0__G;
    vlSelf->block1__DOT__G = (((IData)(block1__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block1__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block1__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block1__DOT____Vcellout__slice0__G))));
    vlSelf->block1__DOT__slice0__DOT__P = block1__DOT____Vcellout__slice0__P;
    vlSelf->block1__DOT__P = (((IData)(block1__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block1__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block1__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block1__DOT____Vcellout__slice0__P))));
    vlSelf->block0__DOT__slice3__DOT__G = block0__DOT____Vcellout__slice3__G;
    vlSelf->block0__DOT__slice3__DOT__P = block0__DOT____Vcellout__slice3__P;
    vlSelf->block0__DOT__slice2__DOT__G = block0__DOT____Vcellout__slice2__G;
    vlSelf->block0__DOT__slice2__DOT__P = block0__DOT____Vcellout__slice2__P;
    vlSelf->block0__DOT__slice1__DOT__G = block0__DOT____Vcellout__slice1__G;
    vlSelf->block0__DOT__slice1__DOT__P = block0__DOT____Vcellout__slice1__P;
    vlSelf->block0__DOT__slice0__DOT__G = block0__DOT____Vcellout__slice0__G;
    vlSelf->block0__DOT__G = (((IData)(block0__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block0__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block0__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block0__DOT____Vcellout__slice0__G))));
    vlSelf->block0__DOT__slice0__DOT__P = block0__DOT____Vcellout__slice0__P;
    vlSelf->block0__DOT__P = (((IData)(block0__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block0__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block0__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block0__DOT____Vcellout__slice0__P))));
    vlSelf->block0__DOT__c0 = (1U & ((IData)(block0__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block0__DOT____Vcellout__slice0__P) 
                                        * (IData)(vlSelf->cin_effective))));
    vlSelf->block0__DOT__c1 = (1U & ((IData)(block0__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block0__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block0__DOT__c0))));
    vlSelf->block0__DOT__c2 = (1U & ((IData)(block0__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block0__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block0__DOT__c1))));
    __Vcellout__block0__s = ((((IData)(block0__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block0__DOT__c2)) 
                              << 3U) | ((((IData)(block0__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block0__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block0__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block0__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block0__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(vlSelf->cin_effective)))));
    __Vcellinp__block1__cin = (1U & ((IData)(block0__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block0__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block0__DOT__c2))));
    vlSelf->block0__DOT__s = __Vcellout__block0__s;
    vlSelf->block0__DOT__cout = __Vcellinp__block1__cin;
    vlSelf->block1__DOT__cin = __Vcellinp__block1__cin;
    vlSelf->block1__DOT__c0 = (1U & ((IData)(block1__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block1__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block1__cin))));
    vlSelf->block1__DOT__c1 = (1U & ((IData)(block1__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block1__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block1__DOT__c0))));
    vlSelf->block1__DOT__c2 = (1U & ((IData)(block1__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block1__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block1__DOT__c1))));
    __Vcellout__block1__s = ((((IData)(block1__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block1__DOT__c2)) 
                              << 3U) | ((((IData)(block1__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block1__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block1__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block1__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block1__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block1__cin)))));
    __Vcellinp__block2__cin = (1U & ((IData)(block1__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block1__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block1__DOT__c2))));
    vlSelf->block1__DOT__s = __Vcellout__block1__s;
    vlSelf->block1__DOT__cout = __Vcellinp__block2__cin;
    vlSelf->block2__DOT__cin = __Vcellinp__block2__cin;
    vlSelf->block2__DOT__c0 = (1U & ((IData)(block2__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block2__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block2__cin))));
    vlSelf->block2__DOT__c1 = (1U & ((IData)(block2__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block2__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block2__DOT__c0))));
    vlSelf->block2__DOT__c2 = (1U & ((IData)(block2__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block2__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block2__DOT__c1))));
    __Vcellout__block2__s = ((((IData)(block2__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block2__DOT__c2)) 
                              << 3U) | ((((IData)(block2__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block2__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block2__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block2__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block2__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block2__cin)))));
    __Vcellinp__block3__cin = (1U & ((IData)(block2__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block2__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block2__DOT__c2))));
    vlSelf->block2__DOT__s = __Vcellout__block2__s;
    vlSelf->block2__DOT__cout = __Vcellinp__block3__cin;
    vlSelf->block3__DOT__cin = __Vcellinp__block3__cin;
    vlSelf->block3__DOT__c0 = (1U & ((IData)(block3__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block3__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block3__cin))));
    vlSelf->block3__DOT__c1 = (1U & ((IData)(block3__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block3__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block3__DOT__c0))));
    vlSelf->block3__DOT__c2 = (1U & ((IData)(block3__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block3__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block3__DOT__c1))));
    __Vcellout__block3__s = ((((IData)(block3__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block3__DOT__c2)) 
                              << 3U) | ((((IData)(block3__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block3__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block3__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block3__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block3__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block3__cin)))));
    __Vcellinp__block4__cin = (1U & ((IData)(block3__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block3__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block3__DOT__c2))));
    vlSelf->block3__DOT__s = __Vcellout__block3__s;
    vlSelf->block3__DOT__cout = __Vcellinp__block4__cin;
    vlSelf->block4__DOT__cin = __Vcellinp__block4__cin;
    vlSelf->block4__DOT__c0 = (1U & ((IData)(block4__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block4__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block4__cin))));
    vlSelf->block4__DOT__c1 = (1U & ((IData)(block4__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block4__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block4__DOT__c0))));
    vlSelf->block4__DOT__c2 = (1U & ((IData)(block4__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block4__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block4__DOT__c1))));
    __Vcellout__block4__s = ((((IData)(block4__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block4__DOT__c2)) 
                              << 3U) | ((((IData)(block4__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block4__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block4__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block4__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block4__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block4__cin)))));
    __Vcellinp__block5__cin = (1U & ((IData)(block4__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block4__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block4__DOT__c2))));
    vlSelf->block4__DOT__s = __Vcellout__block4__s;
    vlSelf->block4__DOT__cout = __Vcellinp__block5__cin;
    vlSelf->block5__DOT__cin = __Vcellinp__block5__cin;
    vlSelf->block5__DOT__c0 = (1U & ((IData)(block5__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block5__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block5__cin))));
    vlSelf->block5__DOT__c1 = (1U & ((IData)(block5__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block5__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block5__DOT__c0))));
    vlSelf->block5__DOT__c2 = (1U & ((IData)(block5__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block5__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block5__DOT__c1))));
    __Vcellout__block5__s = ((((IData)(block5__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block5__DOT__c2)) 
                              << 3U) | ((((IData)(block5__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block5__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block5__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block5__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block5__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block5__cin)))));
    __Vcellinp__block6__cin = (1U & ((IData)(block5__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block5__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block5__DOT__c2))));
    vlSelf->block5__DOT__s = __Vcellout__block5__s;
    vlSelf->block5__DOT__cout = __Vcellinp__block6__cin;
    vlSelf->block6__DOT__cin = __Vcellinp__block6__cin;
    vlSelf->block6__DOT__c0 = (1U & ((IData)(block6__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block6__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block6__cin))));
    vlSelf->block6__DOT__c1 = (1U & ((IData)(block6__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block6__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block6__DOT__c0))));
    vlSelf->block6__DOT__c2 = (1U & ((IData)(block6__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block6__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block6__DOT__c1))));
    __Vcellout__block6__s = ((((IData)(block6__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block6__DOT__c2)) 
                              << 3U) | ((((IData)(block6__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block6__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block6__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block6__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block6__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block6__cin)))));
    __Vcellinp__block7__cin = (1U & ((IData)(block6__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block6__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block6__DOT__c2))));
    vlSelf->block6__DOT__s = __Vcellout__block6__s;
    vlSelf->block6__DOT__cout = __Vcellinp__block7__cin;
    vlSelf->block7__DOT__cin = __Vcellinp__block7__cin;
    vlSelf->c = (((IData)(__Vcellinp__block7__cin) 
                  << 6U) | (((IData)(__Vcellinp__block6__cin) 
                             << 5U) | (((IData)(__Vcellinp__block5__cin) 
                                        << 4U) | (((IData)(__Vcellinp__block4__cin) 
                                                   << 3U) 
                                                  | (((IData)(__Vcellinp__block3__cin) 
                                                      << 2U) 
                                                     | (((IData)(__Vcellinp__block2__cin) 
                                                         << 1U) 
                                                        | (IData)(__Vcellinp__block1__cin)))))));
    vlSelf->block7__DOT__c0 = (1U & ((IData)(block7__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block7__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block7__cin))));
    vlSelf->block7__DOT__c1 = (1U & ((IData)(block7__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block7__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block7__DOT__c0))));
    vlSelf->block7__DOT__c2 = (1U & ((IData)(block7__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block7__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block7__DOT__c1))));
    vlSelf->cout = (1U & ((IData)(block7__DOT____Vcellout__slice3__G) 
                          + ((IData)(block7__DOT____Vcellout__slice3__P) 
                             * (IData)(vlSelf->block7__DOT__c2))));
    __Vcellout__block7__s = ((((IData)(block7__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block7__DOT__c2)) 
                              << 3U) | ((((IData)(block7__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block7__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block7__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block7__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block7__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block7__cin)))));
    vlSelf->block7__DOT__cout = vlSelf->cout;
    vlSelf->block7__DOT__s = __Vcellout__block7__s;
    vlSelf->s = (((IData)(__Vcellout__block7__s) << 0x1cU) 
                 | (((IData)(__Vcellout__block6__s) 
                     << 0x18U) | (((IData)(__Vcellout__block5__s) 
                                   << 0x14U) | (((IData)(__Vcellout__block4__s) 
                                                 << 0x10U) 
                                                | (((IData)(__Vcellout__block3__s) 
                                                    << 0xcU) 
                                                   | (((IData)(__Vcellout__block2__s) 
                                                       << 8U) 
                                                      | (((IData)(__Vcellout__block1__s) 
                                                          << 4U) 
                                                         | (IData)(__Vcellout__block0__s))))))));
}

VL_INLINE_OPT void VALU_carry_lookahead_adder___ico_sequent__TOP__ALU__DOT__shift_multiplier__DOT__adder_lower__0(VALU_carry_lookahead_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VALU_carry_lookahead_adder___ico_sequent__TOP__ALU__DOT__shift_multiplier__DOT__adder_lower__0\n"); );
    // Init
    CData/*3:0*/ __Vcellout__block0__s;
    __Vcellout__block0__s = 0;
    CData/*3:0*/ __Vcellout__block1__s;
    __Vcellout__block1__s = 0;
    CData/*0:0*/ __Vcellinp__block1__cin;
    __Vcellinp__block1__cin = 0;
    CData/*3:0*/ __Vcellout__block2__s;
    __Vcellout__block2__s = 0;
    CData/*0:0*/ __Vcellinp__block2__cin;
    __Vcellinp__block2__cin = 0;
    CData/*3:0*/ __Vcellout__block3__s;
    __Vcellout__block3__s = 0;
    CData/*0:0*/ __Vcellinp__block3__cin;
    __Vcellinp__block3__cin = 0;
    CData/*3:0*/ __Vcellout__block4__s;
    __Vcellout__block4__s = 0;
    CData/*0:0*/ __Vcellinp__block4__cin;
    __Vcellinp__block4__cin = 0;
    CData/*3:0*/ __Vcellout__block5__s;
    __Vcellout__block5__s = 0;
    CData/*0:0*/ __Vcellinp__block5__cin;
    __Vcellinp__block5__cin = 0;
    CData/*3:0*/ __Vcellout__block6__s;
    __Vcellout__block6__s = 0;
    CData/*0:0*/ __Vcellinp__block6__cin;
    __Vcellinp__block6__cin = 0;
    CData/*3:0*/ __Vcellout__block7__s;
    __Vcellout__block7__s = 0;
    CData/*0:0*/ __Vcellinp__block7__cin;
    __Vcellinp__block7__cin = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice0__P;
    block0__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice0__G;
    block0__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice1__P;
    block0__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice1__G;
    block0__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice2__P;
    block0__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice2__G;
    block0__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice3__P;
    block0__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice3__G;
    block0__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice0__P;
    block1__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice0__G;
    block1__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice1__P;
    block1__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice1__G;
    block1__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice2__P;
    block1__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice2__G;
    block1__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice3__P;
    block1__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice3__G;
    block1__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice0__P;
    block2__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice0__G;
    block2__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice1__P;
    block2__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice1__G;
    block2__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice2__P;
    block2__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice2__G;
    block2__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice3__P;
    block2__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice3__G;
    block2__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice0__P;
    block3__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice0__G;
    block3__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice1__P;
    block3__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice1__G;
    block3__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice2__P;
    block3__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice2__G;
    block3__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice3__P;
    block3__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice3__G;
    block3__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice0__P;
    block4__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice0__G;
    block4__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice1__P;
    block4__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice1__G;
    block4__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice2__P;
    block4__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice2__G;
    block4__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice3__P;
    block4__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice3__G;
    block4__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice0__P;
    block5__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice0__G;
    block5__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice1__P;
    block5__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice1__G;
    block5__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice2__P;
    block5__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice2__G;
    block5__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice3__P;
    block5__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice3__G;
    block5__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice0__P;
    block6__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice0__G;
    block6__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice1__P;
    block6__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice1__G;
    block6__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice2__P;
    block6__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice2__G;
    block6__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice3__P;
    block6__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice3__G;
    block6__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice0__P;
    block7__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice0__G;
    block7__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice1__P;
    block7__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice1__G;
    block7__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice2__P;
    block7__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice2__G;
    block7__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice3__P;
    block7__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice3__G;
    block7__DOT____Vcellout__slice3__G = 0;
    // Body
    vlSelf->b_in = ((IData)(vlSelf->Subtract) ? (~ vlSelf->b)
                     : vlSelf->b);
    vlSelf->block0__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 0U));
    vlSelf->block0__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0U));
    vlSelf->block0__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 1U));
    vlSelf->block0__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 2U));
    vlSelf->block0__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 3U));
    vlSelf->block1__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 4U));
    vlSelf->block1__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 4U));
    vlSelf->block1__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 5U));
    vlSelf->block1__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 6U));
    vlSelf->block1__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 7U));
    vlSelf->block2__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 8U));
    vlSelf->block2__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 8U));
    vlSelf->block2__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 9U));
    vlSelf->block2__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0xaU));
    vlSelf->block2__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0xbU));
    vlSelf->block3__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 0xcU));
    vlSelf->block3__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0xcU));
    vlSelf->block3__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0xdU));
    vlSelf->block3__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0xeU));
    vlSelf->block3__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0xfU));
    vlSelf->block4__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 0x10U));
    vlSelf->block4__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x10U));
    vlSelf->block4__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x11U));
    vlSelf->block4__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x12U));
    vlSelf->block4__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x13U));
    vlSelf->block5__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 0x14U));
    vlSelf->block5__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x14U));
    vlSelf->block5__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x15U));
    vlSelf->block5__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x16U));
    vlSelf->block5__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x17U));
    vlSelf->block6__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 0x18U));
    vlSelf->block6__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x18U));
    vlSelf->block6__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x19U));
    vlSelf->block6__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x1aU));
    vlSelf->block6__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x1bU));
    vlSelf->block7__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 0x1cU));
    vlSelf->block7__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x1cU));
    vlSelf->block7__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x1dU));
    vlSelf->block7__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x1eU));
    vlSelf->block7__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x1fU));
    block7__DOT____Vcellout__slice3__G = ((vlSelf->a 
                                           & vlSelf->b_in) 
                                          >> 0x1fU);
    block7__DOT____Vcellout__slice3__P = ((vlSelf->a 
                                           ^ vlSelf->b_in) 
                                          >> 0x1fU);
    block7__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x1eU));
    block7__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x1eU));
    block7__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x1dU));
    block7__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x1dU));
    block7__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x1cU));
    block7__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x1cU));
    block6__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x1bU));
    block6__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x1bU));
    block6__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x1aU));
    block6__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x1aU));
    block6__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x19U));
    block6__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x19U));
    block6__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x18U));
    block6__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x18U));
    block5__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x17U));
    block5__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x17U));
    block5__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x16U));
    block5__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x16U));
    block5__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x15U));
    block5__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x15U));
    block5__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x14U));
    block5__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x14U));
    block4__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x13U));
    block4__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x13U));
    block4__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x12U));
    block4__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x12U));
    block4__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x11U));
    block4__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x11U));
    block4__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x10U));
    block4__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x10U));
    block3__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0xfU));
    block3__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0xfU));
    block3__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0xeU));
    block3__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0xeU));
    block3__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0xdU));
    block3__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0xdU));
    block3__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0xcU));
    block3__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0xcU));
    block2__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0xbU));
    block2__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0xbU));
    block2__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0xaU));
    block2__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0xaU));
    block2__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 9U));
    block2__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 9U));
    block2__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 8U));
    block2__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 8U));
    block1__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 7U));
    block1__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 7U));
    block1__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 6U));
    block1__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 6U));
    block1__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 5U));
    block1__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 5U));
    block1__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 4U));
    block1__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 4U));
    block0__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 3U));
    block0__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 3U));
    block0__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 2U));
    block0__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 2U));
    block0__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 1U));
    block0__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 1U));
    block0__DOT____Vcellout__slice0__G = (1U & (vlSelf->a 
                                                & vlSelf->b_in));
    block0__DOT____Vcellout__slice0__P = (1U & (vlSelf->a 
                                                ^ vlSelf->b_in));
    vlSelf->block7__DOT__slice3__DOT__G = block7__DOT____Vcellout__slice3__G;
    vlSelf->block7__DOT__slice3__DOT__P = block7__DOT____Vcellout__slice3__P;
    vlSelf->block7__DOT__slice2__DOT__G = block7__DOT____Vcellout__slice2__G;
    vlSelf->block7__DOT__slice2__DOT__P = block7__DOT____Vcellout__slice2__P;
    vlSelf->block7__DOT__slice1__DOT__G = block7__DOT____Vcellout__slice1__G;
    vlSelf->block7__DOT__slice1__DOT__P = block7__DOT____Vcellout__slice1__P;
    vlSelf->block7__DOT__slice0__DOT__G = block7__DOT____Vcellout__slice0__G;
    vlSelf->block7__DOT__G = (((IData)(block7__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block7__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block7__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block7__DOT____Vcellout__slice0__G))));
    vlSelf->block7__DOT__slice0__DOT__P = block7__DOT____Vcellout__slice0__P;
    vlSelf->block7__DOT__P = (((IData)(block7__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block7__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block7__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block7__DOT____Vcellout__slice0__P))));
    vlSelf->block6__DOT__slice3__DOT__G = block6__DOT____Vcellout__slice3__G;
    vlSelf->block6__DOT__slice3__DOT__P = block6__DOT____Vcellout__slice3__P;
    vlSelf->block6__DOT__slice2__DOT__G = block6__DOT____Vcellout__slice2__G;
    vlSelf->block6__DOT__slice2__DOT__P = block6__DOT____Vcellout__slice2__P;
    vlSelf->block6__DOT__slice1__DOT__G = block6__DOT____Vcellout__slice1__G;
    vlSelf->block6__DOT__slice1__DOT__P = block6__DOT____Vcellout__slice1__P;
    vlSelf->block6__DOT__slice0__DOT__G = block6__DOT____Vcellout__slice0__G;
    vlSelf->block6__DOT__G = (((IData)(block6__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block6__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block6__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block6__DOT____Vcellout__slice0__G))));
    vlSelf->block6__DOT__slice0__DOT__P = block6__DOT____Vcellout__slice0__P;
    vlSelf->block6__DOT__P = (((IData)(block6__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block6__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block6__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block6__DOT____Vcellout__slice0__P))));
    vlSelf->block5__DOT__slice3__DOT__G = block5__DOT____Vcellout__slice3__G;
    vlSelf->block5__DOT__slice3__DOT__P = block5__DOT____Vcellout__slice3__P;
    vlSelf->block5__DOT__slice2__DOT__G = block5__DOT____Vcellout__slice2__G;
    vlSelf->block5__DOT__slice2__DOT__P = block5__DOT____Vcellout__slice2__P;
    vlSelf->block5__DOT__slice1__DOT__G = block5__DOT____Vcellout__slice1__G;
    vlSelf->block5__DOT__slice1__DOT__P = block5__DOT____Vcellout__slice1__P;
    vlSelf->block5__DOT__slice0__DOT__G = block5__DOT____Vcellout__slice0__G;
    vlSelf->block5__DOT__G = (((IData)(block5__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block5__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block5__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block5__DOT____Vcellout__slice0__G))));
    vlSelf->block5__DOT__slice0__DOT__P = block5__DOT____Vcellout__slice0__P;
    vlSelf->block5__DOT__P = (((IData)(block5__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block5__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block5__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block5__DOT____Vcellout__slice0__P))));
    vlSelf->block4__DOT__slice3__DOT__G = block4__DOT____Vcellout__slice3__G;
    vlSelf->block4__DOT__slice3__DOT__P = block4__DOT____Vcellout__slice3__P;
    vlSelf->block4__DOT__slice2__DOT__G = block4__DOT____Vcellout__slice2__G;
    vlSelf->block4__DOT__slice2__DOT__P = block4__DOT____Vcellout__slice2__P;
    vlSelf->block4__DOT__slice1__DOT__G = block4__DOT____Vcellout__slice1__G;
    vlSelf->block4__DOT__slice1__DOT__P = block4__DOT____Vcellout__slice1__P;
    vlSelf->block4__DOT__slice0__DOT__G = block4__DOT____Vcellout__slice0__G;
    vlSelf->block4__DOT__G = (((IData)(block4__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block4__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block4__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block4__DOT____Vcellout__slice0__G))));
    vlSelf->block4__DOT__slice0__DOT__P = block4__DOT____Vcellout__slice0__P;
    vlSelf->block4__DOT__P = (((IData)(block4__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block4__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block4__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block4__DOT____Vcellout__slice0__P))));
    vlSelf->block3__DOT__slice3__DOT__G = block3__DOT____Vcellout__slice3__G;
    vlSelf->block3__DOT__slice3__DOT__P = block3__DOT____Vcellout__slice3__P;
    vlSelf->block3__DOT__slice2__DOT__G = block3__DOT____Vcellout__slice2__G;
    vlSelf->block3__DOT__slice2__DOT__P = block3__DOT____Vcellout__slice2__P;
    vlSelf->block3__DOT__slice1__DOT__G = block3__DOT____Vcellout__slice1__G;
    vlSelf->block3__DOT__slice1__DOT__P = block3__DOT____Vcellout__slice1__P;
    vlSelf->block3__DOT__slice0__DOT__G = block3__DOT____Vcellout__slice0__G;
    vlSelf->block3__DOT__G = (((IData)(block3__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block3__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block3__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block3__DOT____Vcellout__slice0__G))));
    vlSelf->block3__DOT__slice0__DOT__P = block3__DOT____Vcellout__slice0__P;
    vlSelf->block3__DOT__P = (((IData)(block3__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block3__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block3__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block3__DOT____Vcellout__slice0__P))));
    vlSelf->block2__DOT__slice3__DOT__G = block2__DOT____Vcellout__slice3__G;
    vlSelf->block2__DOT__slice3__DOT__P = block2__DOT____Vcellout__slice3__P;
    vlSelf->block2__DOT__slice2__DOT__G = block2__DOT____Vcellout__slice2__G;
    vlSelf->block2__DOT__slice2__DOT__P = block2__DOT____Vcellout__slice2__P;
    vlSelf->block2__DOT__slice1__DOT__G = block2__DOT____Vcellout__slice1__G;
    vlSelf->block2__DOT__slice1__DOT__P = block2__DOT____Vcellout__slice1__P;
    vlSelf->block2__DOT__slice0__DOT__G = block2__DOT____Vcellout__slice0__G;
    vlSelf->block2__DOT__G = (((IData)(block2__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block2__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block2__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block2__DOT____Vcellout__slice0__G))));
    vlSelf->block2__DOT__slice0__DOT__P = block2__DOT____Vcellout__slice0__P;
    vlSelf->block2__DOT__P = (((IData)(block2__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block2__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block2__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block2__DOT____Vcellout__slice0__P))));
    vlSelf->block1__DOT__slice3__DOT__G = block1__DOT____Vcellout__slice3__G;
    vlSelf->block1__DOT__slice3__DOT__P = block1__DOT____Vcellout__slice3__P;
    vlSelf->block1__DOT__slice2__DOT__G = block1__DOT____Vcellout__slice2__G;
    vlSelf->block1__DOT__slice2__DOT__P = block1__DOT____Vcellout__slice2__P;
    vlSelf->block1__DOT__slice1__DOT__G = block1__DOT____Vcellout__slice1__G;
    vlSelf->block1__DOT__slice1__DOT__P = block1__DOT____Vcellout__slice1__P;
    vlSelf->block1__DOT__slice0__DOT__G = block1__DOT____Vcellout__slice0__G;
    vlSelf->block1__DOT__G = (((IData)(block1__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block1__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block1__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block1__DOT____Vcellout__slice0__G))));
    vlSelf->block1__DOT__slice0__DOT__P = block1__DOT____Vcellout__slice0__P;
    vlSelf->block1__DOT__P = (((IData)(block1__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block1__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block1__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block1__DOT____Vcellout__slice0__P))));
    vlSelf->block0__DOT__slice3__DOT__G = block0__DOT____Vcellout__slice3__G;
    vlSelf->block0__DOT__slice3__DOT__P = block0__DOT____Vcellout__slice3__P;
    vlSelf->block0__DOT__slice2__DOT__G = block0__DOT____Vcellout__slice2__G;
    vlSelf->block0__DOT__slice2__DOT__P = block0__DOT____Vcellout__slice2__P;
    vlSelf->block0__DOT__slice1__DOT__G = block0__DOT____Vcellout__slice1__G;
    vlSelf->block0__DOT__slice1__DOT__P = block0__DOT____Vcellout__slice1__P;
    vlSelf->block0__DOT__slice0__DOT__G = block0__DOT____Vcellout__slice0__G;
    vlSelf->block0__DOT__G = (((IData)(block0__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block0__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block0__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block0__DOT____Vcellout__slice0__G))));
    vlSelf->block0__DOT__slice0__DOT__P = block0__DOT____Vcellout__slice0__P;
    vlSelf->block0__DOT__P = (((IData)(block0__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block0__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block0__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block0__DOT____Vcellout__slice0__P))));
    vlSelf->block0__DOT__c0 = (1U & ((IData)(block0__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block0__DOT____Vcellout__slice0__P) 
                                        * (IData)(vlSelf->cin_effective))));
    vlSelf->block0__DOT__c1 = (1U & ((IData)(block0__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block0__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block0__DOT__c0))));
    vlSelf->block0__DOT__c2 = (1U & ((IData)(block0__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block0__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block0__DOT__c1))));
    __Vcellout__block0__s = ((((IData)(block0__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block0__DOT__c2)) 
                              << 3U) | ((((IData)(block0__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block0__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block0__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block0__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block0__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(vlSelf->cin_effective)))));
    __Vcellinp__block1__cin = (1U & ((IData)(block0__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block0__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block0__DOT__c2))));
    vlSelf->block0__DOT__s = __Vcellout__block0__s;
    vlSelf->block0__DOT__cout = __Vcellinp__block1__cin;
    vlSelf->block1__DOT__cin = __Vcellinp__block1__cin;
    vlSelf->block1__DOT__c0 = (1U & ((IData)(block1__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block1__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block1__cin))));
    vlSelf->block1__DOT__c1 = (1U & ((IData)(block1__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block1__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block1__DOT__c0))));
    vlSelf->block1__DOT__c2 = (1U & ((IData)(block1__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block1__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block1__DOT__c1))));
    __Vcellout__block1__s = ((((IData)(block1__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block1__DOT__c2)) 
                              << 3U) | ((((IData)(block1__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block1__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block1__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block1__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block1__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block1__cin)))));
    __Vcellinp__block2__cin = (1U & ((IData)(block1__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block1__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block1__DOT__c2))));
    vlSelf->block1__DOT__s = __Vcellout__block1__s;
    vlSelf->block1__DOT__cout = __Vcellinp__block2__cin;
    vlSelf->block2__DOT__cin = __Vcellinp__block2__cin;
    vlSelf->block2__DOT__c0 = (1U & ((IData)(block2__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block2__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block2__cin))));
    vlSelf->block2__DOT__c1 = (1U & ((IData)(block2__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block2__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block2__DOT__c0))));
    vlSelf->block2__DOT__c2 = (1U & ((IData)(block2__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block2__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block2__DOT__c1))));
    __Vcellout__block2__s = ((((IData)(block2__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block2__DOT__c2)) 
                              << 3U) | ((((IData)(block2__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block2__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block2__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block2__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block2__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block2__cin)))));
    __Vcellinp__block3__cin = (1U & ((IData)(block2__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block2__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block2__DOT__c2))));
    vlSelf->block2__DOT__s = __Vcellout__block2__s;
    vlSelf->block2__DOT__cout = __Vcellinp__block3__cin;
    vlSelf->block3__DOT__cin = __Vcellinp__block3__cin;
    vlSelf->block3__DOT__c0 = (1U & ((IData)(block3__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block3__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block3__cin))));
    vlSelf->block3__DOT__c1 = (1U & ((IData)(block3__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block3__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block3__DOT__c0))));
    vlSelf->block3__DOT__c2 = (1U & ((IData)(block3__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block3__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block3__DOT__c1))));
    __Vcellout__block3__s = ((((IData)(block3__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block3__DOT__c2)) 
                              << 3U) | ((((IData)(block3__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block3__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block3__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block3__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block3__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block3__cin)))));
    __Vcellinp__block4__cin = (1U & ((IData)(block3__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block3__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block3__DOT__c2))));
    vlSelf->block3__DOT__s = __Vcellout__block3__s;
    vlSelf->block3__DOT__cout = __Vcellinp__block4__cin;
    vlSelf->block4__DOT__cin = __Vcellinp__block4__cin;
    vlSelf->block4__DOT__c0 = (1U & ((IData)(block4__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block4__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block4__cin))));
    vlSelf->block4__DOT__c1 = (1U & ((IData)(block4__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block4__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block4__DOT__c0))));
    vlSelf->block4__DOT__c2 = (1U & ((IData)(block4__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block4__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block4__DOT__c1))));
    __Vcellout__block4__s = ((((IData)(block4__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block4__DOT__c2)) 
                              << 3U) | ((((IData)(block4__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block4__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block4__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block4__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block4__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block4__cin)))));
    __Vcellinp__block5__cin = (1U & ((IData)(block4__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block4__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block4__DOT__c2))));
    vlSelf->block4__DOT__s = __Vcellout__block4__s;
    vlSelf->block4__DOT__cout = __Vcellinp__block5__cin;
    vlSelf->block5__DOT__cin = __Vcellinp__block5__cin;
    vlSelf->block5__DOT__c0 = (1U & ((IData)(block5__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block5__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block5__cin))));
    vlSelf->block5__DOT__c1 = (1U & ((IData)(block5__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block5__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block5__DOT__c0))));
    vlSelf->block5__DOT__c2 = (1U & ((IData)(block5__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block5__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block5__DOT__c1))));
    __Vcellout__block5__s = ((((IData)(block5__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block5__DOT__c2)) 
                              << 3U) | ((((IData)(block5__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block5__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block5__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block5__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block5__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block5__cin)))));
    __Vcellinp__block6__cin = (1U & ((IData)(block5__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block5__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block5__DOT__c2))));
    vlSelf->block5__DOT__s = __Vcellout__block5__s;
    vlSelf->block5__DOT__cout = __Vcellinp__block6__cin;
    vlSelf->block6__DOT__cin = __Vcellinp__block6__cin;
    vlSelf->block6__DOT__c0 = (1U & ((IData)(block6__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block6__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block6__cin))));
    vlSelf->block6__DOT__c1 = (1U & ((IData)(block6__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block6__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block6__DOT__c0))));
    vlSelf->block6__DOT__c2 = (1U & ((IData)(block6__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block6__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block6__DOT__c1))));
    __Vcellout__block6__s = ((((IData)(block6__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block6__DOT__c2)) 
                              << 3U) | ((((IData)(block6__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block6__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block6__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block6__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block6__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block6__cin)))));
    __Vcellinp__block7__cin = (1U & ((IData)(block6__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block6__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block6__DOT__c2))));
    vlSelf->block6__DOT__s = __Vcellout__block6__s;
    vlSelf->block6__DOT__cout = __Vcellinp__block7__cin;
    vlSelf->block7__DOT__cin = __Vcellinp__block7__cin;
    vlSelf->c = (((IData)(__Vcellinp__block7__cin) 
                  << 6U) | (((IData)(__Vcellinp__block6__cin) 
                             << 5U) | (((IData)(__Vcellinp__block5__cin) 
                                        << 4U) | (((IData)(__Vcellinp__block4__cin) 
                                                   << 3U) 
                                                  | (((IData)(__Vcellinp__block3__cin) 
                                                      << 2U) 
                                                     | (((IData)(__Vcellinp__block2__cin) 
                                                         << 1U) 
                                                        | (IData)(__Vcellinp__block1__cin)))))));
    vlSelf->block7__DOT__c0 = (1U & ((IData)(block7__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block7__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block7__cin))));
    vlSelf->block7__DOT__c1 = (1U & ((IData)(block7__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block7__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block7__DOT__c0))));
    vlSelf->block7__DOT__c2 = (1U & ((IData)(block7__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block7__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block7__DOT__c1))));
    __Vcellout__block7__s = ((((IData)(block7__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block7__DOT__c2)) 
                              << 3U) | ((((IData)(block7__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block7__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block7__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block7__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block7__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block7__cin)))));
    vlSelf->cout = (1U & ((IData)(block7__DOT____Vcellout__slice3__G) 
                          + ((IData)(block7__DOT____Vcellout__slice3__P) 
                             * (IData)(vlSelf->block7__DOT__c2))));
    vlSelf->block7__DOT__s = __Vcellout__block7__s;
    vlSelf->s = (((IData)(__Vcellout__block7__s) << 0x1cU) 
                 | (((IData)(__Vcellout__block6__s) 
                     << 0x18U) | (((IData)(__Vcellout__block5__s) 
                                   << 0x14U) | (((IData)(__Vcellout__block4__s) 
                                                 << 0x10U) 
                                                | (((IData)(__Vcellout__block3__s) 
                                                    << 0xcU) 
                                                   | (((IData)(__Vcellout__block2__s) 
                                                       << 8U) 
                                                      | (((IData)(__Vcellout__block1__s) 
                                                          << 4U) 
                                                         | (IData)(__Vcellout__block0__s))))))));
    vlSelf->block7__DOT__cout = vlSelf->cout;
}

VL_INLINE_OPT void VALU_carry_lookahead_adder___nba_sequent__TOP__ALU__DOT__shift_multiplier__DOT__adder_lower__0(VALU_carry_lookahead_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VALU_carry_lookahead_adder___nba_sequent__TOP__ALU__DOT__shift_multiplier__DOT__adder_lower__0\n"); );
    // Body
    vlSelf->block0__DOT__a = (0xfU & (vlSelf->a >> 0U));
    vlSelf->block0__DOT__slice0__DOT__a = (1U & (vlSelf->a 
                                                 >> 0U));
    vlSelf->block0__DOT__slice1__DOT__a = (1U & (vlSelf->a 
                                                 >> 1U));
    vlSelf->block0__DOT__slice2__DOT__a = (1U & (vlSelf->a 
                                                 >> 2U));
    vlSelf->block0__DOT__slice3__DOT__a = (1U & (vlSelf->a 
                                                 >> 3U));
    vlSelf->block1__DOT__a = (0xfU & (vlSelf->a >> 4U));
    vlSelf->block1__DOT__slice0__DOT__a = (1U & (vlSelf->a 
                                                 >> 4U));
    vlSelf->block1__DOT__slice1__DOT__a = (1U & (vlSelf->a 
                                                 >> 5U));
    vlSelf->block1__DOT__slice2__DOT__a = (1U & (vlSelf->a 
                                                 >> 6U));
    vlSelf->block1__DOT__slice3__DOT__a = (1U & (vlSelf->a 
                                                 >> 7U));
    vlSelf->block2__DOT__a = (0xfU & (vlSelf->a >> 8U));
    vlSelf->block2__DOT__slice0__DOT__a = (1U & (vlSelf->a 
                                                 >> 8U));
    vlSelf->block2__DOT__slice1__DOT__a = (1U & (vlSelf->a 
                                                 >> 9U));
    vlSelf->block2__DOT__slice2__DOT__a = (1U & (vlSelf->a 
                                                 >> 0xaU));
    vlSelf->block2__DOT__slice3__DOT__a = (1U & (vlSelf->a 
                                                 >> 0xbU));
    vlSelf->block3__DOT__a = (0xfU & (vlSelf->a >> 0xcU));
    vlSelf->block3__DOT__slice0__DOT__a = (1U & (vlSelf->a 
                                                 >> 0xcU));
    vlSelf->block3__DOT__slice1__DOT__a = (1U & (vlSelf->a 
                                                 >> 0xdU));
    vlSelf->block3__DOT__slice2__DOT__a = (1U & (vlSelf->a 
                                                 >> 0xeU));
    vlSelf->block3__DOT__slice3__DOT__a = (1U & (vlSelf->a 
                                                 >> 0xfU));
    vlSelf->block4__DOT__a = (0xfU & (vlSelf->a >> 0x10U));
    vlSelf->block4__DOT__slice0__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x10U));
    vlSelf->block4__DOT__slice1__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x11U));
    vlSelf->block4__DOT__slice2__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x12U));
    vlSelf->block4__DOT__slice3__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x13U));
    vlSelf->block5__DOT__a = (0xfU & (vlSelf->a >> 0x14U));
    vlSelf->block5__DOT__slice0__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x14U));
    vlSelf->block5__DOT__slice1__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x15U));
    vlSelf->block5__DOT__slice2__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x16U));
    vlSelf->block5__DOT__slice3__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x17U));
    vlSelf->block6__DOT__a = (0xfU & (vlSelf->a >> 0x18U));
    vlSelf->block6__DOT__slice0__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x18U));
    vlSelf->block6__DOT__slice1__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x19U));
    vlSelf->block6__DOT__slice2__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x1aU));
    vlSelf->block6__DOT__slice3__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x1bU));
    vlSelf->block7__DOT__a = (0xfU & (vlSelf->a >> 0x1cU));
    vlSelf->block7__DOT__slice0__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x1cU));
    vlSelf->block7__DOT__slice1__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x1dU));
    vlSelf->block7__DOT__slice2__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x1eU));
    vlSelf->block7__DOT__slice3__DOT__a = (1U & (vlSelf->a 
                                                 >> 0x1fU));
}

VL_INLINE_OPT void VALU_carry_lookahead_adder___nba_sequent__TOP__ALU__DOT__shift_multiplier__DOT__adder_lower__1(VALU_carry_lookahead_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VALU_carry_lookahead_adder___nba_sequent__TOP__ALU__DOT__shift_multiplier__DOT__adder_lower__1\n"); );
    // Init
    CData/*3:0*/ __Vcellout__block0__s;
    __Vcellout__block0__s = 0;
    CData/*3:0*/ __Vcellout__block1__s;
    __Vcellout__block1__s = 0;
    CData/*0:0*/ __Vcellinp__block1__cin;
    __Vcellinp__block1__cin = 0;
    CData/*3:0*/ __Vcellout__block2__s;
    __Vcellout__block2__s = 0;
    CData/*0:0*/ __Vcellinp__block2__cin;
    __Vcellinp__block2__cin = 0;
    CData/*3:0*/ __Vcellout__block3__s;
    __Vcellout__block3__s = 0;
    CData/*0:0*/ __Vcellinp__block3__cin;
    __Vcellinp__block3__cin = 0;
    CData/*3:0*/ __Vcellout__block4__s;
    __Vcellout__block4__s = 0;
    CData/*0:0*/ __Vcellinp__block4__cin;
    __Vcellinp__block4__cin = 0;
    CData/*3:0*/ __Vcellout__block5__s;
    __Vcellout__block5__s = 0;
    CData/*0:0*/ __Vcellinp__block5__cin;
    __Vcellinp__block5__cin = 0;
    CData/*3:0*/ __Vcellout__block6__s;
    __Vcellout__block6__s = 0;
    CData/*0:0*/ __Vcellinp__block6__cin;
    __Vcellinp__block6__cin = 0;
    CData/*3:0*/ __Vcellout__block7__s;
    __Vcellout__block7__s = 0;
    CData/*0:0*/ __Vcellinp__block7__cin;
    __Vcellinp__block7__cin = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice0__P;
    block0__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice0__G;
    block0__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice1__P;
    block0__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice1__G;
    block0__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice2__P;
    block0__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice2__G;
    block0__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice3__P;
    block0__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block0__DOT____Vcellout__slice3__G;
    block0__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice0__P;
    block1__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice0__G;
    block1__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice1__P;
    block1__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice1__G;
    block1__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice2__P;
    block1__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice2__G;
    block1__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice3__P;
    block1__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block1__DOT____Vcellout__slice3__G;
    block1__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice0__P;
    block2__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice0__G;
    block2__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice1__P;
    block2__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice1__G;
    block2__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice2__P;
    block2__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice2__G;
    block2__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice3__P;
    block2__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block2__DOT____Vcellout__slice3__G;
    block2__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice0__P;
    block3__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice0__G;
    block3__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice1__P;
    block3__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice1__G;
    block3__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice2__P;
    block3__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice2__G;
    block3__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice3__P;
    block3__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block3__DOT____Vcellout__slice3__G;
    block3__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice0__P;
    block4__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice0__G;
    block4__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice1__P;
    block4__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice1__G;
    block4__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice2__P;
    block4__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice2__G;
    block4__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice3__P;
    block4__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block4__DOT____Vcellout__slice3__G;
    block4__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice0__P;
    block5__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice0__G;
    block5__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice1__P;
    block5__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice1__G;
    block5__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice2__P;
    block5__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice2__G;
    block5__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice3__P;
    block5__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block5__DOT____Vcellout__slice3__G;
    block5__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice0__P;
    block6__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice0__G;
    block6__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice1__P;
    block6__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice1__G;
    block6__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice2__P;
    block6__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice2__G;
    block6__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice3__P;
    block6__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block6__DOT____Vcellout__slice3__G;
    block6__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice0__P;
    block7__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice0__G;
    block7__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice1__P;
    block7__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice1__G;
    block7__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice2__P;
    block7__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice2__G;
    block7__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice3__P;
    block7__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ block7__DOT____Vcellout__slice3__G;
    block7__DOT____Vcellout__slice3__G = 0;
    // Body
    block7__DOT____Vcellout__slice3__G = ((vlSelf->a 
                                           & vlSelf->b_in) 
                                          >> 0x1fU);
    block7__DOT____Vcellout__slice3__P = ((vlSelf->a 
                                           ^ vlSelf->b_in) 
                                          >> 0x1fU);
    block7__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x1eU));
    block7__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x1eU));
    block7__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x1dU));
    block7__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x1dU));
    block7__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x1cU));
    block7__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x1cU));
    block6__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x1bU));
    block6__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x1bU));
    block6__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x1aU));
    block6__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x1aU));
    block6__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x19U));
    block6__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x19U));
    block6__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x18U));
    block6__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x18U));
    block5__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x17U));
    block5__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x17U));
    block5__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x16U));
    block5__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x16U));
    block5__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x15U));
    block5__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x15U));
    block5__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x14U));
    block5__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x14U));
    block4__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x13U));
    block4__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x13U));
    block4__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x12U));
    block4__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x12U));
    block4__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x11U));
    block4__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x11U));
    block4__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0x10U));
    block4__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0x10U));
    block3__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0xfU));
    block3__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0xfU));
    block3__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0xeU));
    block3__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0xeU));
    block3__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0xdU));
    block3__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0xdU));
    block3__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0xcU));
    block3__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0xcU));
    block2__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0xbU));
    block2__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0xbU));
    block2__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 0xaU));
    block2__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 0xaU));
    block2__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 9U));
    block2__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 9U));
    block2__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 8U));
    block2__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 8U));
    block1__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 7U));
    block1__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 7U));
    block1__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 6U));
    block1__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 6U));
    block1__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 5U));
    block1__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 5U));
    block1__DOT____Vcellout__slice0__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 4U));
    block1__DOT____Vcellout__slice0__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 4U));
    block0__DOT____Vcellout__slice3__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 3U));
    block0__DOT____Vcellout__slice3__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 3U));
    block0__DOT____Vcellout__slice2__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 2U));
    block0__DOT____Vcellout__slice2__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 2U));
    block0__DOT____Vcellout__slice1__G = (1U & ((vlSelf->a 
                                                 & vlSelf->b_in) 
                                                >> 1U));
    block0__DOT____Vcellout__slice1__P = (1U & ((vlSelf->a 
                                                 ^ vlSelf->b_in) 
                                                >> 1U));
    block0__DOT____Vcellout__slice0__G = (1U & (vlSelf->a 
                                                & vlSelf->b_in));
    block0__DOT____Vcellout__slice0__P = (1U & (vlSelf->a 
                                                ^ vlSelf->b_in));
    vlSelf->block7__DOT__slice3__DOT__G = block7__DOT____Vcellout__slice3__G;
    vlSelf->block7__DOT__slice3__DOT__P = block7__DOT____Vcellout__slice3__P;
    vlSelf->block7__DOT__slice2__DOT__G = block7__DOT____Vcellout__slice2__G;
    vlSelf->block7__DOT__slice2__DOT__P = block7__DOT____Vcellout__slice2__P;
    vlSelf->block7__DOT__slice1__DOT__G = block7__DOT____Vcellout__slice1__G;
    vlSelf->block7__DOT__slice1__DOT__P = block7__DOT____Vcellout__slice1__P;
    vlSelf->block7__DOT__slice0__DOT__G = block7__DOT____Vcellout__slice0__G;
    vlSelf->block7__DOT__G = (((IData)(block7__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block7__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block7__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block7__DOT____Vcellout__slice0__G))));
    vlSelf->block7__DOT__slice0__DOT__P = block7__DOT____Vcellout__slice0__P;
    vlSelf->block7__DOT__P = (((IData)(block7__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block7__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block7__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block7__DOT____Vcellout__slice0__P))));
    vlSelf->block6__DOT__slice3__DOT__G = block6__DOT____Vcellout__slice3__G;
    vlSelf->block6__DOT__slice3__DOT__P = block6__DOT____Vcellout__slice3__P;
    vlSelf->block6__DOT__slice2__DOT__G = block6__DOT____Vcellout__slice2__G;
    vlSelf->block6__DOT__slice2__DOT__P = block6__DOT____Vcellout__slice2__P;
    vlSelf->block6__DOT__slice1__DOT__G = block6__DOT____Vcellout__slice1__G;
    vlSelf->block6__DOT__slice1__DOT__P = block6__DOT____Vcellout__slice1__P;
    vlSelf->block6__DOT__slice0__DOT__G = block6__DOT____Vcellout__slice0__G;
    vlSelf->block6__DOT__G = (((IData)(block6__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block6__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block6__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block6__DOT____Vcellout__slice0__G))));
    vlSelf->block6__DOT__slice0__DOT__P = block6__DOT____Vcellout__slice0__P;
    vlSelf->block6__DOT__P = (((IData)(block6__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block6__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block6__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block6__DOT____Vcellout__slice0__P))));
    vlSelf->block5__DOT__slice3__DOT__G = block5__DOT____Vcellout__slice3__G;
    vlSelf->block5__DOT__slice3__DOT__P = block5__DOT____Vcellout__slice3__P;
    vlSelf->block5__DOT__slice2__DOT__G = block5__DOT____Vcellout__slice2__G;
    vlSelf->block5__DOT__slice2__DOT__P = block5__DOT____Vcellout__slice2__P;
    vlSelf->block5__DOT__slice1__DOT__G = block5__DOT____Vcellout__slice1__G;
    vlSelf->block5__DOT__slice1__DOT__P = block5__DOT____Vcellout__slice1__P;
    vlSelf->block5__DOT__slice0__DOT__G = block5__DOT____Vcellout__slice0__G;
    vlSelf->block5__DOT__G = (((IData)(block5__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block5__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block5__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block5__DOT____Vcellout__slice0__G))));
    vlSelf->block5__DOT__slice0__DOT__P = block5__DOT____Vcellout__slice0__P;
    vlSelf->block5__DOT__P = (((IData)(block5__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block5__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block5__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block5__DOT____Vcellout__slice0__P))));
    vlSelf->block4__DOT__slice3__DOT__G = block4__DOT____Vcellout__slice3__G;
    vlSelf->block4__DOT__slice3__DOT__P = block4__DOT____Vcellout__slice3__P;
    vlSelf->block4__DOT__slice2__DOT__G = block4__DOT____Vcellout__slice2__G;
    vlSelf->block4__DOT__slice2__DOT__P = block4__DOT____Vcellout__slice2__P;
    vlSelf->block4__DOT__slice1__DOT__G = block4__DOT____Vcellout__slice1__G;
    vlSelf->block4__DOT__slice1__DOT__P = block4__DOT____Vcellout__slice1__P;
    vlSelf->block4__DOT__slice0__DOT__G = block4__DOT____Vcellout__slice0__G;
    vlSelf->block4__DOT__G = (((IData)(block4__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block4__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block4__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block4__DOT____Vcellout__slice0__G))));
    vlSelf->block4__DOT__slice0__DOT__P = block4__DOT____Vcellout__slice0__P;
    vlSelf->block4__DOT__P = (((IData)(block4__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block4__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block4__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block4__DOT____Vcellout__slice0__P))));
    vlSelf->block3__DOT__slice3__DOT__G = block3__DOT____Vcellout__slice3__G;
    vlSelf->block3__DOT__slice3__DOT__P = block3__DOT____Vcellout__slice3__P;
    vlSelf->block3__DOT__slice2__DOT__G = block3__DOT____Vcellout__slice2__G;
    vlSelf->block3__DOT__slice2__DOT__P = block3__DOT____Vcellout__slice2__P;
    vlSelf->block3__DOT__slice1__DOT__G = block3__DOT____Vcellout__slice1__G;
    vlSelf->block3__DOT__slice1__DOT__P = block3__DOT____Vcellout__slice1__P;
    vlSelf->block3__DOT__slice0__DOT__G = block3__DOT____Vcellout__slice0__G;
    vlSelf->block3__DOT__G = (((IData)(block3__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block3__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block3__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block3__DOT____Vcellout__slice0__G))));
    vlSelf->block3__DOT__slice0__DOT__P = block3__DOT____Vcellout__slice0__P;
    vlSelf->block3__DOT__P = (((IData)(block3__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block3__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block3__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block3__DOT____Vcellout__slice0__P))));
    vlSelf->block2__DOT__slice3__DOT__G = block2__DOT____Vcellout__slice3__G;
    vlSelf->block2__DOT__slice3__DOT__P = block2__DOT____Vcellout__slice3__P;
    vlSelf->block2__DOT__slice2__DOT__G = block2__DOT____Vcellout__slice2__G;
    vlSelf->block2__DOT__slice2__DOT__P = block2__DOT____Vcellout__slice2__P;
    vlSelf->block2__DOT__slice1__DOT__G = block2__DOT____Vcellout__slice1__G;
    vlSelf->block2__DOT__slice1__DOT__P = block2__DOT____Vcellout__slice1__P;
    vlSelf->block2__DOT__slice0__DOT__G = block2__DOT____Vcellout__slice0__G;
    vlSelf->block2__DOT__G = (((IData)(block2__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block2__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block2__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block2__DOT____Vcellout__slice0__G))));
    vlSelf->block2__DOT__slice0__DOT__P = block2__DOT____Vcellout__slice0__P;
    vlSelf->block2__DOT__P = (((IData)(block2__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block2__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block2__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block2__DOT____Vcellout__slice0__P))));
    vlSelf->block1__DOT__slice3__DOT__G = block1__DOT____Vcellout__slice3__G;
    vlSelf->block1__DOT__slice3__DOT__P = block1__DOT____Vcellout__slice3__P;
    vlSelf->block1__DOT__slice2__DOT__G = block1__DOT____Vcellout__slice2__G;
    vlSelf->block1__DOT__slice2__DOT__P = block1__DOT____Vcellout__slice2__P;
    vlSelf->block1__DOT__slice1__DOT__G = block1__DOT____Vcellout__slice1__G;
    vlSelf->block1__DOT__slice1__DOT__P = block1__DOT____Vcellout__slice1__P;
    vlSelf->block1__DOT__slice0__DOT__G = block1__DOT____Vcellout__slice0__G;
    vlSelf->block1__DOT__G = (((IData)(block1__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block1__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block1__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block1__DOT____Vcellout__slice0__G))));
    vlSelf->block1__DOT__slice0__DOT__P = block1__DOT____Vcellout__slice0__P;
    vlSelf->block1__DOT__P = (((IData)(block1__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block1__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block1__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block1__DOT____Vcellout__slice0__P))));
    vlSelf->block0__DOT__slice3__DOT__G = block0__DOT____Vcellout__slice3__G;
    vlSelf->block0__DOT__slice3__DOT__P = block0__DOT____Vcellout__slice3__P;
    vlSelf->block0__DOT__slice2__DOT__G = block0__DOT____Vcellout__slice2__G;
    vlSelf->block0__DOT__slice2__DOT__P = block0__DOT____Vcellout__slice2__P;
    vlSelf->block0__DOT__slice1__DOT__G = block0__DOT____Vcellout__slice1__G;
    vlSelf->block0__DOT__slice1__DOT__P = block0__DOT____Vcellout__slice1__P;
    vlSelf->block0__DOT__slice0__DOT__G = block0__DOT____Vcellout__slice0__G;
    vlSelf->block0__DOT__G = (((IData)(block0__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(block0__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(block0__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(block0__DOT____Vcellout__slice0__G))));
    vlSelf->block0__DOT__slice0__DOT__P = block0__DOT____Vcellout__slice0__P;
    vlSelf->block0__DOT__P = (((IData)(block0__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(block0__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(block0__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(block0__DOT____Vcellout__slice0__P))));
    vlSelf->block0__DOT__c0 = (1U & ((IData)(block0__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block0__DOT____Vcellout__slice0__P) 
                                        * (IData)(vlSelf->cin_effective))));
    vlSelf->block0__DOT__c1 = (1U & ((IData)(block0__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block0__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block0__DOT__c0))));
    vlSelf->block0__DOT__c2 = (1U & ((IData)(block0__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block0__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block0__DOT__c1))));
    __Vcellout__block0__s = ((((IData)(block0__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block0__DOT__c2)) 
                              << 3U) | ((((IData)(block0__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block0__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block0__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block0__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block0__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(vlSelf->cin_effective)))));
    __Vcellinp__block1__cin = (1U & ((IData)(block0__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block0__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block0__DOT__c2))));
    vlSelf->block0__DOT__s = __Vcellout__block0__s;
    vlSelf->block0__DOT__cout = __Vcellinp__block1__cin;
    vlSelf->block1__DOT__cin = __Vcellinp__block1__cin;
    vlSelf->block1__DOT__c0 = (1U & ((IData)(block1__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block1__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block1__cin))));
    vlSelf->block1__DOT__c1 = (1U & ((IData)(block1__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block1__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block1__DOT__c0))));
    vlSelf->block1__DOT__c2 = (1U & ((IData)(block1__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block1__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block1__DOT__c1))));
    __Vcellout__block1__s = ((((IData)(block1__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block1__DOT__c2)) 
                              << 3U) | ((((IData)(block1__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block1__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block1__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block1__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block1__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block1__cin)))));
    __Vcellinp__block2__cin = (1U & ((IData)(block1__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block1__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block1__DOT__c2))));
    vlSelf->block1__DOT__s = __Vcellout__block1__s;
    vlSelf->block1__DOT__cout = __Vcellinp__block2__cin;
    vlSelf->block2__DOT__cin = __Vcellinp__block2__cin;
    vlSelf->block2__DOT__c0 = (1U & ((IData)(block2__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block2__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block2__cin))));
    vlSelf->block2__DOT__c1 = (1U & ((IData)(block2__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block2__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block2__DOT__c0))));
    vlSelf->block2__DOT__c2 = (1U & ((IData)(block2__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block2__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block2__DOT__c1))));
    __Vcellout__block2__s = ((((IData)(block2__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block2__DOT__c2)) 
                              << 3U) | ((((IData)(block2__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block2__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block2__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block2__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block2__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block2__cin)))));
    __Vcellinp__block3__cin = (1U & ((IData)(block2__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block2__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block2__DOT__c2))));
    vlSelf->block2__DOT__s = __Vcellout__block2__s;
    vlSelf->block2__DOT__cout = __Vcellinp__block3__cin;
    vlSelf->block3__DOT__cin = __Vcellinp__block3__cin;
    vlSelf->block3__DOT__c0 = (1U & ((IData)(block3__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block3__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block3__cin))));
    vlSelf->block3__DOT__c1 = (1U & ((IData)(block3__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block3__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block3__DOT__c0))));
    vlSelf->block3__DOT__c2 = (1U & ((IData)(block3__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block3__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block3__DOT__c1))));
    __Vcellout__block3__s = ((((IData)(block3__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block3__DOT__c2)) 
                              << 3U) | ((((IData)(block3__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block3__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block3__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block3__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block3__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block3__cin)))));
    __Vcellinp__block4__cin = (1U & ((IData)(block3__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block3__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block3__DOT__c2))));
    vlSelf->block3__DOT__s = __Vcellout__block3__s;
    vlSelf->block3__DOT__cout = __Vcellinp__block4__cin;
    vlSelf->block4__DOT__cin = __Vcellinp__block4__cin;
    vlSelf->block4__DOT__c0 = (1U & ((IData)(block4__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block4__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block4__cin))));
    vlSelf->block4__DOT__c1 = (1U & ((IData)(block4__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block4__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block4__DOT__c0))));
    vlSelf->block4__DOT__c2 = (1U & ((IData)(block4__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block4__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block4__DOT__c1))));
    __Vcellout__block4__s = ((((IData)(block4__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block4__DOT__c2)) 
                              << 3U) | ((((IData)(block4__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block4__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block4__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block4__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block4__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block4__cin)))));
    __Vcellinp__block5__cin = (1U & ((IData)(block4__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block4__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block4__DOT__c2))));
    vlSelf->block4__DOT__s = __Vcellout__block4__s;
    vlSelf->block4__DOT__cout = __Vcellinp__block5__cin;
    vlSelf->block5__DOT__cin = __Vcellinp__block5__cin;
    vlSelf->block5__DOT__c0 = (1U & ((IData)(block5__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block5__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block5__cin))));
    vlSelf->block5__DOT__c1 = (1U & ((IData)(block5__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block5__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block5__DOT__c0))));
    vlSelf->block5__DOT__c2 = (1U & ((IData)(block5__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block5__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block5__DOT__c1))));
    __Vcellout__block5__s = ((((IData)(block5__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block5__DOT__c2)) 
                              << 3U) | ((((IData)(block5__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block5__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block5__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block5__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block5__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block5__cin)))));
    __Vcellinp__block6__cin = (1U & ((IData)(block5__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block5__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block5__DOT__c2))));
    vlSelf->block5__DOT__s = __Vcellout__block5__s;
    vlSelf->block5__DOT__cout = __Vcellinp__block6__cin;
    vlSelf->block6__DOT__cin = __Vcellinp__block6__cin;
    vlSelf->block6__DOT__c0 = (1U & ((IData)(block6__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block6__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block6__cin))));
    vlSelf->block6__DOT__c1 = (1U & ((IData)(block6__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block6__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block6__DOT__c0))));
    vlSelf->block6__DOT__c2 = (1U & ((IData)(block6__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block6__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block6__DOT__c1))));
    __Vcellout__block6__s = ((((IData)(block6__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block6__DOT__c2)) 
                              << 3U) | ((((IData)(block6__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block6__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block6__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block6__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block6__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block6__cin)))));
    __Vcellinp__block7__cin = (1U & ((IData)(block6__DOT____Vcellout__slice3__G) 
                                     + ((IData)(block6__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block6__DOT__c2))));
    vlSelf->block6__DOT__s = __Vcellout__block6__s;
    vlSelf->block6__DOT__cout = __Vcellinp__block7__cin;
    vlSelf->block7__DOT__cin = __Vcellinp__block7__cin;
    vlSelf->c = (((IData)(__Vcellinp__block7__cin) 
                  << 6U) | (((IData)(__Vcellinp__block6__cin) 
                             << 5U) | (((IData)(__Vcellinp__block5__cin) 
                                        << 4U) | (((IData)(__Vcellinp__block4__cin) 
                                                   << 3U) 
                                                  | (((IData)(__Vcellinp__block3__cin) 
                                                      << 2U) 
                                                     | (((IData)(__Vcellinp__block2__cin) 
                                                         << 1U) 
                                                        | (IData)(__Vcellinp__block1__cin)))))));
    vlSelf->block7__DOT__c0 = (1U & ((IData)(block7__DOT____Vcellout__slice0__G) 
                                     + ((IData)(block7__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block7__cin))));
    vlSelf->block7__DOT__c1 = (1U & ((IData)(block7__DOT____Vcellout__slice1__G) 
                                     + ((IData)(block7__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block7__DOT__c0))));
    vlSelf->block7__DOT__c2 = (1U & ((IData)(block7__DOT____Vcellout__slice2__G) 
                                     + ((IData)(block7__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block7__DOT__c1))));
    __Vcellout__block7__s = ((((IData)(block7__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block7__DOT__c2)) 
                              << 3U) | ((((IData)(block7__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block7__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(block7__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block7__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(block7__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block7__cin)))));
    vlSelf->cout = (1U & ((IData)(block7__DOT____Vcellout__slice3__G) 
                          + ((IData)(block7__DOT____Vcellout__slice3__P) 
                             * (IData)(vlSelf->block7__DOT__c2))));
    vlSelf->block7__DOT__s = __Vcellout__block7__s;
    vlSelf->s = (((IData)(__Vcellout__block7__s) << 0x1cU) 
                 | (((IData)(__Vcellout__block6__s) 
                     << 0x18U) | (((IData)(__Vcellout__block5__s) 
                                   << 0x14U) | (((IData)(__Vcellout__block4__s) 
                                                 << 0x10U) 
                                                | (((IData)(__Vcellout__block3__s) 
                                                    << 0xcU) 
                                                   | (((IData)(__Vcellout__block2__s) 
                                                       << 8U) 
                                                      | (((IData)(__Vcellout__block1__s) 
                                                          << 4U) 
                                                         | (IData)(__Vcellout__block0__s))))))));
    vlSelf->block7__DOT__cout = vlSelf->cout;
}

VL_INLINE_OPT void VALU_carry_lookahead_adder___ico_sequent__TOP__ALU__DOT__shift_multiplier__DOT__adder_upper__0(VALU_carry_lookahead_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VALU_carry_lookahead_adder___ico_sequent__TOP__ALU__DOT__shift_multiplier__DOT__adder_upper__0\n"); );
    // Body
    vlSelf->b_in = ((IData)(vlSelf->Subtract) ? (~ vlSelf->b)
                     : vlSelf->b);
    vlSelf->block0__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 0U));
    vlSelf->block0__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0U));
    vlSelf->block0__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 1U));
    vlSelf->block0__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 2U));
    vlSelf->block0__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 3U));
    vlSelf->block1__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 4U));
    vlSelf->block1__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 4U));
    vlSelf->block1__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 5U));
    vlSelf->block1__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 6U));
    vlSelf->block1__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 7U));
    vlSelf->block2__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 8U));
    vlSelf->block2__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 8U));
    vlSelf->block2__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 9U));
    vlSelf->block2__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0xaU));
    vlSelf->block2__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0xbU));
    vlSelf->block3__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 0xcU));
    vlSelf->block3__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0xcU));
    vlSelf->block3__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0xdU));
    vlSelf->block3__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0xeU));
    vlSelf->block3__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0xfU));
    vlSelf->block4__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 0x10U));
    vlSelf->block4__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x10U));
    vlSelf->block4__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x11U));
    vlSelf->block4__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x12U));
    vlSelf->block4__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x13U));
    vlSelf->block5__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 0x14U));
    vlSelf->block5__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x14U));
    vlSelf->block5__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x15U));
    vlSelf->block5__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x16U));
    vlSelf->block5__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x17U));
    vlSelf->block6__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 0x18U));
    vlSelf->block6__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x18U));
    vlSelf->block6__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x19U));
    vlSelf->block6__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x1aU));
    vlSelf->block6__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x1bU));
    vlSelf->block7__DOT__b = (0xfU & (vlSelf->b_in 
                                      >> 0x1cU));
    vlSelf->block7__DOT__slice0__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x1cU));
    vlSelf->block7__DOT__slice1__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x1dU));
    vlSelf->block7__DOT__slice2__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x1eU));
    vlSelf->block7__DOT__slice3__DOT__b = (1U & (vlSelf->b_in 
                                                 >> 0x1fU));
    vlSelf->block7__DOT____Vcellout__slice3__G = ((vlSelf->a 
                                                   & vlSelf->b_in) 
                                                  >> 0x1fU);
    vlSelf->block7__DOT____Vcellout__slice3__P = ((vlSelf->a 
                                                   ^ vlSelf->b_in) 
                                                  >> 0x1fU);
    vlSelf->block7__DOT____Vcellout__slice2__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x1eU));
    vlSelf->block7__DOT____Vcellout__slice2__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x1eU));
    vlSelf->block7__DOT____Vcellout__slice1__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x1dU));
    vlSelf->block7__DOT____Vcellout__slice1__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x1dU));
    vlSelf->block7__DOT____Vcellout__slice0__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x1cU));
    vlSelf->block7__DOT____Vcellout__slice0__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x1cU));
    vlSelf->block6__DOT____Vcellout__slice3__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x1bU));
    vlSelf->block6__DOT____Vcellout__slice3__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x1bU));
    vlSelf->block6__DOT____Vcellout__slice2__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x1aU));
    vlSelf->block6__DOT____Vcellout__slice2__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x1aU));
    vlSelf->block6__DOT____Vcellout__slice1__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x19U));
    vlSelf->block6__DOT____Vcellout__slice1__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x19U));
    vlSelf->block6__DOT____Vcellout__slice0__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x18U));
    vlSelf->block6__DOT____Vcellout__slice0__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x18U));
    vlSelf->block5__DOT____Vcellout__slice3__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x17U));
    vlSelf->block5__DOT____Vcellout__slice3__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x17U));
    vlSelf->block5__DOT____Vcellout__slice2__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x16U));
    vlSelf->block5__DOT____Vcellout__slice2__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x16U));
    vlSelf->block5__DOT____Vcellout__slice1__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x15U));
    vlSelf->block5__DOT____Vcellout__slice1__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x15U));
    vlSelf->block5__DOT____Vcellout__slice0__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x14U));
    vlSelf->block5__DOT____Vcellout__slice0__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x14U));
    vlSelf->block4__DOT____Vcellout__slice3__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x13U));
    vlSelf->block4__DOT____Vcellout__slice3__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x13U));
    vlSelf->block4__DOT____Vcellout__slice2__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x12U));
    vlSelf->block4__DOT____Vcellout__slice2__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x12U));
    vlSelf->block4__DOT____Vcellout__slice1__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x11U));
    vlSelf->block4__DOT____Vcellout__slice1__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x11U));
    vlSelf->block4__DOT____Vcellout__slice0__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x10U));
    vlSelf->block4__DOT____Vcellout__slice0__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x10U));
    vlSelf->block3__DOT____Vcellout__slice3__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0xfU));
    vlSelf->block3__DOT____Vcellout__slice3__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0xfU));
    vlSelf->block3__DOT____Vcellout__slice2__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0xeU));
    vlSelf->block3__DOT____Vcellout__slice2__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0xeU));
    vlSelf->block3__DOT____Vcellout__slice1__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0xdU));
    vlSelf->block3__DOT____Vcellout__slice1__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0xdU));
    vlSelf->block3__DOT____Vcellout__slice0__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0xcU));
    vlSelf->block3__DOT____Vcellout__slice0__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0xcU));
    vlSelf->block2__DOT____Vcellout__slice3__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0xbU));
    vlSelf->block2__DOT____Vcellout__slice3__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0xbU));
    vlSelf->block2__DOT____Vcellout__slice2__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0xaU));
    vlSelf->block2__DOT____Vcellout__slice2__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0xaU));
    vlSelf->block2__DOT____Vcellout__slice1__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 9U));
    vlSelf->block2__DOT____Vcellout__slice1__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 9U));
    vlSelf->block2__DOT____Vcellout__slice0__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 8U));
    vlSelf->block2__DOT____Vcellout__slice0__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 8U));
    vlSelf->block1__DOT____Vcellout__slice3__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 7U));
    vlSelf->block1__DOT____Vcellout__slice3__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 7U));
    vlSelf->block1__DOT____Vcellout__slice2__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 6U));
    vlSelf->block1__DOT____Vcellout__slice2__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 6U));
    vlSelf->block1__DOT____Vcellout__slice1__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 5U));
    vlSelf->block1__DOT____Vcellout__slice1__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 5U));
    vlSelf->block1__DOT____Vcellout__slice0__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 4U));
    vlSelf->block1__DOT____Vcellout__slice0__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 4U));
    vlSelf->block0__DOT____Vcellout__slice3__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 3U));
    vlSelf->block0__DOT____Vcellout__slice3__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 3U));
    vlSelf->block0__DOT____Vcellout__slice2__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 2U));
    vlSelf->block0__DOT____Vcellout__slice2__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 2U));
    vlSelf->block0__DOT____Vcellout__slice1__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 1U));
    vlSelf->block0__DOT____Vcellout__slice1__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 1U));
    vlSelf->block0__DOT____Vcellout__slice0__G = (1U 
                                                  & (vlSelf->a 
                                                     & vlSelf->b_in));
    vlSelf->block0__DOT____Vcellout__slice0__P = (1U 
                                                  & (vlSelf->a 
                                                     ^ vlSelf->b_in));
    vlSelf->block7__DOT__slice3__DOT__G = vlSelf->block7__DOT____Vcellout__slice3__G;
    vlSelf->block7__DOT__slice3__DOT__P = vlSelf->block7__DOT____Vcellout__slice3__P;
    vlSelf->block7__DOT__slice2__DOT__G = vlSelf->block7__DOT____Vcellout__slice2__G;
    vlSelf->block7__DOT__slice2__DOT__P = vlSelf->block7__DOT____Vcellout__slice2__P;
    vlSelf->block7__DOT__slice1__DOT__G = vlSelf->block7__DOT____Vcellout__slice1__G;
    vlSelf->block7__DOT__slice1__DOT__P = vlSelf->block7__DOT____Vcellout__slice1__P;
    vlSelf->block7__DOT__slice0__DOT__G = vlSelf->block7__DOT____Vcellout__slice0__G;
    vlSelf->block7__DOT__G = (((IData)(vlSelf->block7__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(vlSelf->block7__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block7__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(vlSelf->block7__DOT____Vcellout__slice0__G))));
    vlSelf->block7__DOT__slice0__DOT__P = vlSelf->block7__DOT____Vcellout__slice0__P;
    vlSelf->block7__DOT__P = (((IData)(vlSelf->block7__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(vlSelf->block7__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block7__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(vlSelf->block7__DOT____Vcellout__slice0__P))));
    vlSelf->block6__DOT__slice3__DOT__G = vlSelf->block6__DOT____Vcellout__slice3__G;
    vlSelf->block6__DOT__slice3__DOT__P = vlSelf->block6__DOT____Vcellout__slice3__P;
    vlSelf->block6__DOT__slice2__DOT__G = vlSelf->block6__DOT____Vcellout__slice2__G;
    vlSelf->block6__DOT__slice2__DOT__P = vlSelf->block6__DOT____Vcellout__slice2__P;
    vlSelf->block6__DOT__slice1__DOT__G = vlSelf->block6__DOT____Vcellout__slice1__G;
    vlSelf->block6__DOT__slice1__DOT__P = vlSelf->block6__DOT____Vcellout__slice1__P;
    vlSelf->block6__DOT__slice0__DOT__G = vlSelf->block6__DOT____Vcellout__slice0__G;
    vlSelf->block6__DOT__G = (((IData)(vlSelf->block6__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(vlSelf->block6__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block6__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(vlSelf->block6__DOT____Vcellout__slice0__G))));
    vlSelf->block6__DOT__slice0__DOT__P = vlSelf->block6__DOT____Vcellout__slice0__P;
    vlSelf->block6__DOT__P = (((IData)(vlSelf->block6__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(vlSelf->block6__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block6__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(vlSelf->block6__DOT____Vcellout__slice0__P))));
    vlSelf->block5__DOT__slice3__DOT__G = vlSelf->block5__DOT____Vcellout__slice3__G;
    vlSelf->block5__DOT__slice3__DOT__P = vlSelf->block5__DOT____Vcellout__slice3__P;
    vlSelf->block5__DOT__slice2__DOT__G = vlSelf->block5__DOT____Vcellout__slice2__G;
    vlSelf->block5__DOT__slice2__DOT__P = vlSelf->block5__DOT____Vcellout__slice2__P;
    vlSelf->block5__DOT__slice1__DOT__G = vlSelf->block5__DOT____Vcellout__slice1__G;
    vlSelf->block5__DOT__slice1__DOT__P = vlSelf->block5__DOT____Vcellout__slice1__P;
    vlSelf->block5__DOT__slice0__DOT__G = vlSelf->block5__DOT____Vcellout__slice0__G;
    vlSelf->block5__DOT__G = (((IData)(vlSelf->block5__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(vlSelf->block5__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block5__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(vlSelf->block5__DOT____Vcellout__slice0__G))));
    vlSelf->block5__DOT__slice0__DOT__P = vlSelf->block5__DOT____Vcellout__slice0__P;
    vlSelf->block5__DOT__P = (((IData)(vlSelf->block5__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(vlSelf->block5__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block5__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(vlSelf->block5__DOT____Vcellout__slice0__P))));
    vlSelf->block4__DOT__slice3__DOT__G = vlSelf->block4__DOT____Vcellout__slice3__G;
    vlSelf->block4__DOT__slice3__DOT__P = vlSelf->block4__DOT____Vcellout__slice3__P;
    vlSelf->block4__DOT__slice2__DOT__G = vlSelf->block4__DOT____Vcellout__slice2__G;
    vlSelf->block4__DOT__slice2__DOT__P = vlSelf->block4__DOT____Vcellout__slice2__P;
    vlSelf->block4__DOT__slice1__DOT__G = vlSelf->block4__DOT____Vcellout__slice1__G;
    vlSelf->block4__DOT__slice1__DOT__P = vlSelf->block4__DOT____Vcellout__slice1__P;
    vlSelf->block4__DOT__slice0__DOT__G = vlSelf->block4__DOT____Vcellout__slice0__G;
    vlSelf->block4__DOT__G = (((IData)(vlSelf->block4__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(vlSelf->block4__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block4__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(vlSelf->block4__DOT____Vcellout__slice0__G))));
    vlSelf->block4__DOT__slice0__DOT__P = vlSelf->block4__DOT____Vcellout__slice0__P;
    vlSelf->block4__DOT__P = (((IData)(vlSelf->block4__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(vlSelf->block4__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block4__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(vlSelf->block4__DOT____Vcellout__slice0__P))));
    vlSelf->block3__DOT__slice3__DOT__G = vlSelf->block3__DOT____Vcellout__slice3__G;
    vlSelf->block3__DOT__slice3__DOT__P = vlSelf->block3__DOT____Vcellout__slice3__P;
    vlSelf->block3__DOT__slice2__DOT__G = vlSelf->block3__DOT____Vcellout__slice2__G;
    vlSelf->block3__DOT__slice2__DOT__P = vlSelf->block3__DOT____Vcellout__slice2__P;
    vlSelf->block3__DOT__slice1__DOT__G = vlSelf->block3__DOT____Vcellout__slice1__G;
    vlSelf->block3__DOT__slice1__DOT__P = vlSelf->block3__DOT____Vcellout__slice1__P;
    vlSelf->block3__DOT__slice0__DOT__G = vlSelf->block3__DOT____Vcellout__slice0__G;
    vlSelf->block3__DOT__G = (((IData)(vlSelf->block3__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(vlSelf->block3__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block3__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(vlSelf->block3__DOT____Vcellout__slice0__G))));
    vlSelf->block3__DOT__slice0__DOT__P = vlSelf->block3__DOT____Vcellout__slice0__P;
    vlSelf->block3__DOT__P = (((IData)(vlSelf->block3__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(vlSelf->block3__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block3__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(vlSelf->block3__DOT____Vcellout__slice0__P))));
    vlSelf->block2__DOT__slice3__DOT__G = vlSelf->block2__DOT____Vcellout__slice3__G;
    vlSelf->block2__DOT__slice3__DOT__P = vlSelf->block2__DOT____Vcellout__slice3__P;
    vlSelf->block2__DOT__slice2__DOT__G = vlSelf->block2__DOT____Vcellout__slice2__G;
    vlSelf->block2__DOT__slice2__DOT__P = vlSelf->block2__DOT____Vcellout__slice2__P;
    vlSelf->block2__DOT__slice1__DOT__G = vlSelf->block2__DOT____Vcellout__slice1__G;
    vlSelf->block2__DOT__slice1__DOT__P = vlSelf->block2__DOT____Vcellout__slice1__P;
    vlSelf->block2__DOT__slice0__DOT__G = vlSelf->block2__DOT____Vcellout__slice0__G;
    vlSelf->block2__DOT__G = (((IData)(vlSelf->block2__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(vlSelf->block2__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block2__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(vlSelf->block2__DOT____Vcellout__slice0__G))));
    vlSelf->block2__DOT__slice0__DOT__P = vlSelf->block2__DOT____Vcellout__slice0__P;
    vlSelf->block2__DOT__P = (((IData)(vlSelf->block2__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(vlSelf->block2__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block2__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(vlSelf->block2__DOT____Vcellout__slice0__P))));
    vlSelf->block1__DOT__slice3__DOT__G = vlSelf->block1__DOT____Vcellout__slice3__G;
    vlSelf->block1__DOT__slice3__DOT__P = vlSelf->block1__DOT____Vcellout__slice3__P;
    vlSelf->block1__DOT__slice2__DOT__G = vlSelf->block1__DOT____Vcellout__slice2__G;
    vlSelf->block1__DOT__slice2__DOT__P = vlSelf->block1__DOT____Vcellout__slice2__P;
    vlSelf->block1__DOT__slice1__DOT__G = vlSelf->block1__DOT____Vcellout__slice1__G;
    vlSelf->block1__DOT__slice1__DOT__P = vlSelf->block1__DOT____Vcellout__slice1__P;
    vlSelf->block1__DOT__slice0__DOT__G = vlSelf->block1__DOT____Vcellout__slice0__G;
    vlSelf->block1__DOT__G = (((IData)(vlSelf->block1__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(vlSelf->block1__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block1__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(vlSelf->block1__DOT____Vcellout__slice0__G))));
    vlSelf->block1__DOT__slice0__DOT__P = vlSelf->block1__DOT____Vcellout__slice0__P;
    vlSelf->block1__DOT__P = (((IData)(vlSelf->block1__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(vlSelf->block1__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block1__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(vlSelf->block1__DOT____Vcellout__slice0__P))));
    vlSelf->block0__DOT__slice3__DOT__G = vlSelf->block0__DOT____Vcellout__slice3__G;
    vlSelf->block0__DOT__slice3__DOT__P = vlSelf->block0__DOT____Vcellout__slice3__P;
    vlSelf->block0__DOT__slice2__DOT__G = vlSelf->block0__DOT____Vcellout__slice2__G;
    vlSelf->block0__DOT__slice2__DOT__P = vlSelf->block0__DOT____Vcellout__slice2__P;
    vlSelf->block0__DOT__slice1__DOT__G = vlSelf->block0__DOT____Vcellout__slice1__G;
    vlSelf->block0__DOT__slice1__DOT__P = vlSelf->block0__DOT____Vcellout__slice1__P;
    vlSelf->block0__DOT__slice0__DOT__G = vlSelf->block0__DOT____Vcellout__slice0__G;
    vlSelf->block0__DOT__G = (((IData)(vlSelf->block0__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(vlSelf->block0__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block0__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(vlSelf->block0__DOT____Vcellout__slice0__G))));
    vlSelf->block0__DOT__slice0__DOT__P = vlSelf->block0__DOT____Vcellout__slice0__P;
    vlSelf->block0__DOT__P = (((IData)(vlSelf->block0__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(vlSelf->block0__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block0__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(vlSelf->block0__DOT____Vcellout__slice0__P))));
}

VL_INLINE_OPT void VALU_carry_lookahead_adder___ico_sequent__TOP__ALU__DOT__shift_multiplier__DOT__adder_upper__1(VALU_carry_lookahead_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VALU_carry_lookahead_adder___ico_sequent__TOP__ALU__DOT__shift_multiplier__DOT__adder_upper__1\n"); );
    // Init
    CData/*3:0*/ __Vcellout__block0__s;
    __Vcellout__block0__s = 0;
    CData/*3:0*/ __Vcellout__block1__s;
    __Vcellout__block1__s = 0;
    CData/*0:0*/ __Vcellinp__block1__cin;
    __Vcellinp__block1__cin = 0;
    CData/*3:0*/ __Vcellout__block2__s;
    __Vcellout__block2__s = 0;
    CData/*0:0*/ __Vcellinp__block2__cin;
    __Vcellinp__block2__cin = 0;
    CData/*3:0*/ __Vcellout__block3__s;
    __Vcellout__block3__s = 0;
    CData/*0:0*/ __Vcellinp__block3__cin;
    __Vcellinp__block3__cin = 0;
    CData/*3:0*/ __Vcellout__block4__s;
    __Vcellout__block4__s = 0;
    CData/*0:0*/ __Vcellinp__block4__cin;
    __Vcellinp__block4__cin = 0;
    CData/*3:0*/ __Vcellout__block5__s;
    __Vcellout__block5__s = 0;
    CData/*0:0*/ __Vcellinp__block5__cin;
    __Vcellinp__block5__cin = 0;
    CData/*3:0*/ __Vcellout__block6__s;
    __Vcellout__block6__s = 0;
    CData/*0:0*/ __Vcellinp__block6__cin;
    __Vcellinp__block6__cin = 0;
    CData/*3:0*/ __Vcellout__block7__s;
    __Vcellout__block7__s = 0;
    CData/*0:0*/ __Vcellinp__block7__cin;
    __Vcellinp__block7__cin = 0;
    // Body
    vlSelf->cin_effective = ((IData)(vlSelf->Subtract) 
                             | (IData)(vlSelf->cin));
    vlSelf->block0__DOT__cin = vlSelf->cin_effective;
    vlSelf->block0__DOT__c0 = (1U & ((IData)(vlSelf->block0__DOT____Vcellout__slice0__G) 
                                     + ((IData)(vlSelf->block0__DOT____Vcellout__slice0__P) 
                                        * (IData)(vlSelf->cin_effective))));
    vlSelf->block0__DOT__c1 = (1U & ((IData)(vlSelf->block0__DOT____Vcellout__slice1__G) 
                                     + ((IData)(vlSelf->block0__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block0__DOT__c0))));
    vlSelf->block0__DOT__c2 = (1U & ((IData)(vlSelf->block0__DOT____Vcellout__slice2__G) 
                                     + ((IData)(vlSelf->block0__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block0__DOT__c1))));
    __Vcellout__block0__s = ((((IData)(vlSelf->block0__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block0__DOT__c2)) 
                              << 3U) | ((((IData)(vlSelf->block0__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block0__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(vlSelf->block0__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block0__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->block0__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(vlSelf->cin_effective)))));
    __Vcellinp__block1__cin = (1U & ((IData)(vlSelf->block0__DOT____Vcellout__slice3__G) 
                                     + ((IData)(vlSelf->block0__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block0__DOT__c2))));
    vlSelf->block0__DOT__s = __Vcellout__block0__s;
    vlSelf->block0__DOT__cout = __Vcellinp__block1__cin;
    vlSelf->block1__DOT__cin = __Vcellinp__block1__cin;
    vlSelf->block1__DOT__c0 = (1U & ((IData)(vlSelf->block1__DOT____Vcellout__slice0__G) 
                                     + ((IData)(vlSelf->block1__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block1__cin))));
    vlSelf->block1__DOT__c1 = (1U & ((IData)(vlSelf->block1__DOT____Vcellout__slice1__G) 
                                     + ((IData)(vlSelf->block1__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block1__DOT__c0))));
    vlSelf->block1__DOT__c2 = (1U & ((IData)(vlSelf->block1__DOT____Vcellout__slice2__G) 
                                     + ((IData)(vlSelf->block1__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block1__DOT__c1))));
    __Vcellout__block1__s = ((((IData)(vlSelf->block1__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block1__DOT__c2)) 
                              << 3U) | ((((IData)(vlSelf->block1__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block1__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(vlSelf->block1__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block1__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->block1__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block1__cin)))));
    __Vcellinp__block2__cin = (1U & ((IData)(vlSelf->block1__DOT____Vcellout__slice3__G) 
                                     + ((IData)(vlSelf->block1__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block1__DOT__c2))));
    vlSelf->block1__DOT__s = __Vcellout__block1__s;
    vlSelf->block1__DOT__cout = __Vcellinp__block2__cin;
    vlSelf->block2__DOT__cin = __Vcellinp__block2__cin;
    vlSelf->block2__DOT__c0 = (1U & ((IData)(vlSelf->block2__DOT____Vcellout__slice0__G) 
                                     + ((IData)(vlSelf->block2__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block2__cin))));
    vlSelf->block2__DOT__c1 = (1U & ((IData)(vlSelf->block2__DOT____Vcellout__slice1__G) 
                                     + ((IData)(vlSelf->block2__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block2__DOT__c0))));
    vlSelf->block2__DOT__c2 = (1U & ((IData)(vlSelf->block2__DOT____Vcellout__slice2__G) 
                                     + ((IData)(vlSelf->block2__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block2__DOT__c1))));
    __Vcellout__block2__s = ((((IData)(vlSelf->block2__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block2__DOT__c2)) 
                              << 3U) | ((((IData)(vlSelf->block2__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block2__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(vlSelf->block2__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block2__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->block2__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block2__cin)))));
    __Vcellinp__block3__cin = (1U & ((IData)(vlSelf->block2__DOT____Vcellout__slice3__G) 
                                     + ((IData)(vlSelf->block2__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block2__DOT__c2))));
    vlSelf->block2__DOT__s = __Vcellout__block2__s;
    vlSelf->block2__DOT__cout = __Vcellinp__block3__cin;
    vlSelf->block3__DOT__cin = __Vcellinp__block3__cin;
    vlSelf->block3__DOT__c0 = (1U & ((IData)(vlSelf->block3__DOT____Vcellout__slice0__G) 
                                     + ((IData)(vlSelf->block3__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block3__cin))));
    vlSelf->block3__DOT__c1 = (1U & ((IData)(vlSelf->block3__DOT____Vcellout__slice1__G) 
                                     + ((IData)(vlSelf->block3__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block3__DOT__c0))));
    vlSelf->block3__DOT__c2 = (1U & ((IData)(vlSelf->block3__DOT____Vcellout__slice2__G) 
                                     + ((IData)(vlSelf->block3__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block3__DOT__c1))));
    __Vcellout__block3__s = ((((IData)(vlSelf->block3__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block3__DOT__c2)) 
                              << 3U) | ((((IData)(vlSelf->block3__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block3__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(vlSelf->block3__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block3__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->block3__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block3__cin)))));
    __Vcellinp__block4__cin = (1U & ((IData)(vlSelf->block3__DOT____Vcellout__slice3__G) 
                                     + ((IData)(vlSelf->block3__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block3__DOT__c2))));
    vlSelf->block3__DOT__s = __Vcellout__block3__s;
    vlSelf->block3__DOT__cout = __Vcellinp__block4__cin;
    vlSelf->block4__DOT__cin = __Vcellinp__block4__cin;
    vlSelf->block4__DOT__c0 = (1U & ((IData)(vlSelf->block4__DOT____Vcellout__slice0__G) 
                                     + ((IData)(vlSelf->block4__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block4__cin))));
    vlSelf->block4__DOT__c1 = (1U & ((IData)(vlSelf->block4__DOT____Vcellout__slice1__G) 
                                     + ((IData)(vlSelf->block4__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block4__DOT__c0))));
    vlSelf->block4__DOT__c2 = (1U & ((IData)(vlSelf->block4__DOT____Vcellout__slice2__G) 
                                     + ((IData)(vlSelf->block4__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block4__DOT__c1))));
    __Vcellout__block4__s = ((((IData)(vlSelf->block4__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block4__DOT__c2)) 
                              << 3U) | ((((IData)(vlSelf->block4__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block4__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(vlSelf->block4__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block4__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->block4__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block4__cin)))));
    __Vcellinp__block5__cin = (1U & ((IData)(vlSelf->block4__DOT____Vcellout__slice3__G) 
                                     + ((IData)(vlSelf->block4__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block4__DOT__c2))));
    vlSelf->block4__DOT__s = __Vcellout__block4__s;
    vlSelf->block4__DOT__cout = __Vcellinp__block5__cin;
    vlSelf->block5__DOT__cin = __Vcellinp__block5__cin;
    vlSelf->block5__DOT__c0 = (1U & ((IData)(vlSelf->block5__DOT____Vcellout__slice0__G) 
                                     + ((IData)(vlSelf->block5__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block5__cin))));
    vlSelf->block5__DOT__c1 = (1U & ((IData)(vlSelf->block5__DOT____Vcellout__slice1__G) 
                                     + ((IData)(vlSelf->block5__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block5__DOT__c0))));
    vlSelf->block5__DOT__c2 = (1U & ((IData)(vlSelf->block5__DOT____Vcellout__slice2__G) 
                                     + ((IData)(vlSelf->block5__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block5__DOT__c1))));
    __Vcellout__block5__s = ((((IData)(vlSelf->block5__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block5__DOT__c2)) 
                              << 3U) | ((((IData)(vlSelf->block5__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block5__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(vlSelf->block5__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block5__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->block5__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block5__cin)))));
    __Vcellinp__block6__cin = (1U & ((IData)(vlSelf->block5__DOT____Vcellout__slice3__G) 
                                     + ((IData)(vlSelf->block5__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block5__DOT__c2))));
    vlSelf->block5__DOT__s = __Vcellout__block5__s;
    vlSelf->block5__DOT__cout = __Vcellinp__block6__cin;
    vlSelf->block6__DOT__cin = __Vcellinp__block6__cin;
    vlSelf->block6__DOT__c0 = (1U & ((IData)(vlSelf->block6__DOT____Vcellout__slice0__G) 
                                     + ((IData)(vlSelf->block6__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block6__cin))));
    vlSelf->block6__DOT__c1 = (1U & ((IData)(vlSelf->block6__DOT____Vcellout__slice1__G) 
                                     + ((IData)(vlSelf->block6__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block6__DOT__c0))));
    vlSelf->block6__DOT__c2 = (1U & ((IData)(vlSelf->block6__DOT____Vcellout__slice2__G) 
                                     + ((IData)(vlSelf->block6__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block6__DOT__c1))));
    __Vcellout__block6__s = ((((IData)(vlSelf->block6__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block6__DOT__c2)) 
                              << 3U) | ((((IData)(vlSelf->block6__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block6__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(vlSelf->block6__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block6__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->block6__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block6__cin)))));
    __Vcellinp__block7__cin = (1U & ((IData)(vlSelf->block6__DOT____Vcellout__slice3__G) 
                                     + ((IData)(vlSelf->block6__DOT____Vcellout__slice3__P) 
                                        * (IData)(vlSelf->block6__DOT__c2))));
    vlSelf->block6__DOT__s = __Vcellout__block6__s;
    vlSelf->block6__DOT__cout = __Vcellinp__block7__cin;
    vlSelf->block7__DOT__cin = __Vcellinp__block7__cin;
    vlSelf->c = (((IData)(__Vcellinp__block7__cin) 
                  << 6U) | (((IData)(__Vcellinp__block6__cin) 
                             << 5U) | (((IData)(__Vcellinp__block5__cin) 
                                        << 4U) | (((IData)(__Vcellinp__block4__cin) 
                                                   << 3U) 
                                                  | (((IData)(__Vcellinp__block3__cin) 
                                                      << 2U) 
                                                     | (((IData)(__Vcellinp__block2__cin) 
                                                         << 1U) 
                                                        | (IData)(__Vcellinp__block1__cin)))))));
    vlSelf->block7__DOT__c0 = (1U & ((IData)(vlSelf->block7__DOT____Vcellout__slice0__G) 
                                     + ((IData)(vlSelf->block7__DOT____Vcellout__slice0__P) 
                                        * (IData)(__Vcellinp__block7__cin))));
    vlSelf->block7__DOT__c1 = (1U & ((IData)(vlSelf->block7__DOT____Vcellout__slice1__G) 
                                     + ((IData)(vlSelf->block7__DOT____Vcellout__slice1__P) 
                                        * (IData)(vlSelf->block7__DOT__c0))));
    vlSelf->block7__DOT__c2 = (1U & ((IData)(vlSelf->block7__DOT____Vcellout__slice2__G) 
                                     + ((IData)(vlSelf->block7__DOT____Vcellout__slice2__P) 
                                        * (IData)(vlSelf->block7__DOT__c1))));
    vlSelf->cout = (1U & ((IData)(vlSelf->block7__DOT____Vcellout__slice3__G) 
                          + ((IData)(vlSelf->block7__DOT____Vcellout__slice3__P) 
                             * (IData)(vlSelf->block7__DOT__c2))));
    __Vcellout__block7__s = ((((IData)(vlSelf->block7__DOT____Vcellout__slice3__P) 
                               ^ (IData)(vlSelf->block7__DOT__c2)) 
                              << 3U) | ((((IData)(vlSelf->block7__DOT____Vcellout__slice2__P) 
                                          ^ (IData)(vlSelf->block7__DOT__c1)) 
                                         << 2U) | (
                                                   (((IData)(vlSelf->block7__DOT____Vcellout__slice1__P) 
                                                     ^ (IData)(vlSelf->block7__DOT__c0)) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->block7__DOT____Vcellout__slice0__P) 
                                                      ^ (IData)(__Vcellinp__block7__cin)))));
    vlSelf->block7__DOT__cout = vlSelf->cout;
    vlSelf->block7__DOT__s = __Vcellout__block7__s;
    vlSelf->s = (((IData)(__Vcellout__block7__s) << 0x1cU) 
                 | (((IData)(__Vcellout__block6__s) 
                     << 0x18U) | (((IData)(__Vcellout__block5__s) 
                                   << 0x14U) | (((IData)(__Vcellout__block4__s) 
                                                 << 0x10U) 
                                                | (((IData)(__Vcellout__block3__s) 
                                                    << 0xcU) 
                                                   | (((IData)(__Vcellout__block2__s) 
                                                       << 8U) 
                                                      | (((IData)(__Vcellout__block1__s) 
                                                          << 4U) 
                                                         | (IData)(__Vcellout__block0__s))))))));
}

VL_INLINE_OPT void VALU_carry_lookahead_adder___nba_sequent__TOP__ALU__DOT__shift_multiplier__DOT__adder_upper__1(VALU_carry_lookahead_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VALU_carry_lookahead_adder___nba_sequent__TOP__ALU__DOT__shift_multiplier__DOT__adder_upper__1\n"); );
    // Body
    vlSelf->block7__DOT____Vcellout__slice3__G = ((vlSelf->a 
                                                   & vlSelf->b_in) 
                                                  >> 0x1fU);
    vlSelf->block7__DOT____Vcellout__slice3__P = ((vlSelf->a 
                                                   ^ vlSelf->b_in) 
                                                  >> 0x1fU);
    vlSelf->block7__DOT____Vcellout__slice2__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x1eU));
    vlSelf->block7__DOT____Vcellout__slice2__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x1eU));
    vlSelf->block7__DOT____Vcellout__slice1__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x1dU));
    vlSelf->block7__DOT____Vcellout__slice1__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x1dU));
    vlSelf->block7__DOT____Vcellout__slice0__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x1cU));
    vlSelf->block7__DOT____Vcellout__slice0__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x1cU));
    vlSelf->block6__DOT____Vcellout__slice3__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x1bU));
    vlSelf->block6__DOT____Vcellout__slice3__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x1bU));
    vlSelf->block6__DOT____Vcellout__slice2__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x1aU));
    vlSelf->block6__DOT____Vcellout__slice2__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x1aU));
    vlSelf->block6__DOT____Vcellout__slice1__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x19U));
    vlSelf->block6__DOT____Vcellout__slice1__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x19U));
    vlSelf->block6__DOT____Vcellout__slice0__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x18U));
    vlSelf->block6__DOT____Vcellout__slice0__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x18U));
    vlSelf->block5__DOT____Vcellout__slice3__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x17U));
    vlSelf->block5__DOT____Vcellout__slice3__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x17U));
    vlSelf->block5__DOT____Vcellout__slice2__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x16U));
    vlSelf->block5__DOT____Vcellout__slice2__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x16U));
    vlSelf->block5__DOT____Vcellout__slice1__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x15U));
    vlSelf->block5__DOT____Vcellout__slice1__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x15U));
    vlSelf->block5__DOT____Vcellout__slice0__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x14U));
    vlSelf->block5__DOT____Vcellout__slice0__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x14U));
    vlSelf->block4__DOT____Vcellout__slice3__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x13U));
    vlSelf->block4__DOT____Vcellout__slice3__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x13U));
    vlSelf->block4__DOT____Vcellout__slice2__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x12U));
    vlSelf->block4__DOT____Vcellout__slice2__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x12U));
    vlSelf->block4__DOT____Vcellout__slice1__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x11U));
    vlSelf->block4__DOT____Vcellout__slice1__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x11U));
    vlSelf->block4__DOT____Vcellout__slice0__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0x10U));
    vlSelf->block4__DOT____Vcellout__slice0__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0x10U));
    vlSelf->block3__DOT____Vcellout__slice3__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0xfU));
    vlSelf->block3__DOT____Vcellout__slice3__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0xfU));
    vlSelf->block3__DOT____Vcellout__slice2__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0xeU));
    vlSelf->block3__DOT____Vcellout__slice2__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0xeU));
    vlSelf->block3__DOT____Vcellout__slice1__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0xdU));
    vlSelf->block3__DOT____Vcellout__slice1__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0xdU));
    vlSelf->block3__DOT____Vcellout__slice0__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0xcU));
    vlSelf->block3__DOT____Vcellout__slice0__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0xcU));
    vlSelf->block2__DOT____Vcellout__slice3__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0xbU));
    vlSelf->block2__DOT____Vcellout__slice3__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0xbU));
    vlSelf->block2__DOT____Vcellout__slice2__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 0xaU));
    vlSelf->block2__DOT____Vcellout__slice2__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 0xaU));
    vlSelf->block2__DOT____Vcellout__slice1__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 9U));
    vlSelf->block2__DOT____Vcellout__slice1__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 9U));
    vlSelf->block2__DOT____Vcellout__slice0__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 8U));
    vlSelf->block2__DOT____Vcellout__slice0__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 8U));
    vlSelf->block1__DOT____Vcellout__slice3__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 7U));
    vlSelf->block1__DOT____Vcellout__slice3__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 7U));
    vlSelf->block1__DOT____Vcellout__slice2__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 6U));
    vlSelf->block1__DOT____Vcellout__slice2__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 6U));
    vlSelf->block1__DOT____Vcellout__slice1__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 5U));
    vlSelf->block1__DOT____Vcellout__slice1__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 5U));
    vlSelf->block1__DOT____Vcellout__slice0__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 4U));
    vlSelf->block1__DOT____Vcellout__slice0__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 4U));
    vlSelf->block0__DOT____Vcellout__slice3__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 3U));
    vlSelf->block0__DOT____Vcellout__slice3__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 3U));
    vlSelf->block0__DOT____Vcellout__slice2__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 2U));
    vlSelf->block0__DOT____Vcellout__slice2__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 2U));
    vlSelf->block0__DOT____Vcellout__slice1__G = (1U 
                                                  & ((vlSelf->a 
                                                      & vlSelf->b_in) 
                                                     >> 1U));
    vlSelf->block0__DOT____Vcellout__slice1__P = (1U 
                                                  & ((vlSelf->a 
                                                      ^ vlSelf->b_in) 
                                                     >> 1U));
    vlSelf->block0__DOT____Vcellout__slice0__G = (1U 
                                                  & (vlSelf->a 
                                                     & vlSelf->b_in));
    vlSelf->block0__DOT____Vcellout__slice0__P = (1U 
                                                  & (vlSelf->a 
                                                     ^ vlSelf->b_in));
    vlSelf->block7__DOT__slice3__DOT__G = vlSelf->block7__DOT____Vcellout__slice3__G;
    vlSelf->block7__DOT__slice3__DOT__P = vlSelf->block7__DOT____Vcellout__slice3__P;
    vlSelf->block7__DOT__slice2__DOT__G = vlSelf->block7__DOT____Vcellout__slice2__G;
    vlSelf->block7__DOT__slice2__DOT__P = vlSelf->block7__DOT____Vcellout__slice2__P;
    vlSelf->block7__DOT__slice1__DOT__G = vlSelf->block7__DOT____Vcellout__slice1__G;
    vlSelf->block7__DOT__slice1__DOT__P = vlSelf->block7__DOT____Vcellout__slice1__P;
    vlSelf->block7__DOT__slice0__DOT__G = vlSelf->block7__DOT____Vcellout__slice0__G;
    vlSelf->block7__DOT__G = (((IData)(vlSelf->block7__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(vlSelf->block7__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block7__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(vlSelf->block7__DOT____Vcellout__slice0__G))));
    vlSelf->block7__DOT__slice0__DOT__P = vlSelf->block7__DOT____Vcellout__slice0__P;
    vlSelf->block7__DOT__P = (((IData)(vlSelf->block7__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(vlSelf->block7__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block7__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(vlSelf->block7__DOT____Vcellout__slice0__P))));
    vlSelf->block6__DOT__slice3__DOT__G = vlSelf->block6__DOT____Vcellout__slice3__G;
    vlSelf->block6__DOT__slice3__DOT__P = vlSelf->block6__DOT____Vcellout__slice3__P;
    vlSelf->block6__DOT__slice2__DOT__G = vlSelf->block6__DOT____Vcellout__slice2__G;
    vlSelf->block6__DOT__slice2__DOT__P = vlSelf->block6__DOT____Vcellout__slice2__P;
    vlSelf->block6__DOT__slice1__DOT__G = vlSelf->block6__DOT____Vcellout__slice1__G;
    vlSelf->block6__DOT__slice1__DOT__P = vlSelf->block6__DOT____Vcellout__slice1__P;
    vlSelf->block6__DOT__slice0__DOT__G = vlSelf->block6__DOT____Vcellout__slice0__G;
    vlSelf->block6__DOT__G = (((IData)(vlSelf->block6__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(vlSelf->block6__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block6__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(vlSelf->block6__DOT____Vcellout__slice0__G))));
    vlSelf->block6__DOT__slice0__DOT__P = vlSelf->block6__DOT____Vcellout__slice0__P;
    vlSelf->block6__DOT__P = (((IData)(vlSelf->block6__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(vlSelf->block6__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block6__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(vlSelf->block6__DOT____Vcellout__slice0__P))));
    vlSelf->block5__DOT__slice3__DOT__G = vlSelf->block5__DOT____Vcellout__slice3__G;
    vlSelf->block5__DOT__slice3__DOT__P = vlSelf->block5__DOT____Vcellout__slice3__P;
    vlSelf->block5__DOT__slice2__DOT__G = vlSelf->block5__DOT____Vcellout__slice2__G;
    vlSelf->block5__DOT__slice2__DOT__P = vlSelf->block5__DOT____Vcellout__slice2__P;
    vlSelf->block5__DOT__slice1__DOT__G = vlSelf->block5__DOT____Vcellout__slice1__G;
    vlSelf->block5__DOT__slice1__DOT__P = vlSelf->block5__DOT____Vcellout__slice1__P;
    vlSelf->block5__DOT__slice0__DOT__G = vlSelf->block5__DOT____Vcellout__slice0__G;
    vlSelf->block5__DOT__G = (((IData)(vlSelf->block5__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(vlSelf->block5__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block5__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(vlSelf->block5__DOT____Vcellout__slice0__G))));
    vlSelf->block5__DOT__slice0__DOT__P = vlSelf->block5__DOT____Vcellout__slice0__P;
    vlSelf->block5__DOT__P = (((IData)(vlSelf->block5__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(vlSelf->block5__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block5__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(vlSelf->block5__DOT____Vcellout__slice0__P))));
    vlSelf->block4__DOT__slice3__DOT__G = vlSelf->block4__DOT____Vcellout__slice3__G;
    vlSelf->block4__DOT__slice3__DOT__P = vlSelf->block4__DOT____Vcellout__slice3__P;
    vlSelf->block4__DOT__slice2__DOT__G = vlSelf->block4__DOT____Vcellout__slice2__G;
    vlSelf->block4__DOT__slice2__DOT__P = vlSelf->block4__DOT____Vcellout__slice2__P;
    vlSelf->block4__DOT__slice1__DOT__G = vlSelf->block4__DOT____Vcellout__slice1__G;
    vlSelf->block4__DOT__slice1__DOT__P = vlSelf->block4__DOT____Vcellout__slice1__P;
    vlSelf->block4__DOT__slice0__DOT__G = vlSelf->block4__DOT____Vcellout__slice0__G;
    vlSelf->block4__DOT__G = (((IData)(vlSelf->block4__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(vlSelf->block4__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block4__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(vlSelf->block4__DOT____Vcellout__slice0__G))));
    vlSelf->block4__DOT__slice0__DOT__P = vlSelf->block4__DOT____Vcellout__slice0__P;
    vlSelf->block4__DOT__P = (((IData)(vlSelf->block4__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(vlSelf->block4__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block4__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(vlSelf->block4__DOT____Vcellout__slice0__P))));
    vlSelf->block3__DOT__slice3__DOT__G = vlSelf->block3__DOT____Vcellout__slice3__G;
    vlSelf->block3__DOT__slice3__DOT__P = vlSelf->block3__DOT____Vcellout__slice3__P;
    vlSelf->block3__DOT__slice2__DOT__G = vlSelf->block3__DOT____Vcellout__slice2__G;
    vlSelf->block3__DOT__slice2__DOT__P = vlSelf->block3__DOT____Vcellout__slice2__P;
    vlSelf->block3__DOT__slice1__DOT__G = vlSelf->block3__DOT____Vcellout__slice1__G;
    vlSelf->block3__DOT__slice1__DOT__P = vlSelf->block3__DOT____Vcellout__slice1__P;
    vlSelf->block3__DOT__slice0__DOT__G = vlSelf->block3__DOT____Vcellout__slice0__G;
    vlSelf->block3__DOT__G = (((IData)(vlSelf->block3__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(vlSelf->block3__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block3__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(vlSelf->block3__DOT____Vcellout__slice0__G))));
    vlSelf->block3__DOT__slice0__DOT__P = vlSelf->block3__DOT____Vcellout__slice0__P;
    vlSelf->block3__DOT__P = (((IData)(vlSelf->block3__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(vlSelf->block3__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block3__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(vlSelf->block3__DOT____Vcellout__slice0__P))));
    vlSelf->block2__DOT__slice3__DOT__G = vlSelf->block2__DOT____Vcellout__slice3__G;
    vlSelf->block2__DOT__slice3__DOT__P = vlSelf->block2__DOT____Vcellout__slice3__P;
    vlSelf->block2__DOT__slice2__DOT__G = vlSelf->block2__DOT____Vcellout__slice2__G;
    vlSelf->block2__DOT__slice2__DOT__P = vlSelf->block2__DOT____Vcellout__slice2__P;
    vlSelf->block2__DOT__slice1__DOT__G = vlSelf->block2__DOT____Vcellout__slice1__G;
    vlSelf->block2__DOT__slice1__DOT__P = vlSelf->block2__DOT____Vcellout__slice1__P;
    vlSelf->block2__DOT__slice0__DOT__G = vlSelf->block2__DOT____Vcellout__slice0__G;
    vlSelf->block2__DOT__G = (((IData)(vlSelf->block2__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(vlSelf->block2__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block2__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(vlSelf->block2__DOT____Vcellout__slice0__G))));
    vlSelf->block2__DOT__slice0__DOT__P = vlSelf->block2__DOT____Vcellout__slice0__P;
    vlSelf->block2__DOT__P = (((IData)(vlSelf->block2__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(vlSelf->block2__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block2__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(vlSelf->block2__DOT____Vcellout__slice0__P))));
    vlSelf->block1__DOT__slice3__DOT__G = vlSelf->block1__DOT____Vcellout__slice3__G;
    vlSelf->block1__DOT__slice3__DOT__P = vlSelf->block1__DOT____Vcellout__slice3__P;
    vlSelf->block1__DOT__slice2__DOT__G = vlSelf->block1__DOT____Vcellout__slice2__G;
    vlSelf->block1__DOT__slice2__DOT__P = vlSelf->block1__DOT____Vcellout__slice2__P;
    vlSelf->block1__DOT__slice1__DOT__G = vlSelf->block1__DOT____Vcellout__slice1__G;
    vlSelf->block1__DOT__slice1__DOT__P = vlSelf->block1__DOT____Vcellout__slice1__P;
    vlSelf->block1__DOT__slice0__DOT__G = vlSelf->block1__DOT____Vcellout__slice0__G;
    vlSelf->block1__DOT__G = (((IData)(vlSelf->block1__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(vlSelf->block1__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block1__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(vlSelf->block1__DOT____Vcellout__slice0__G))));
    vlSelf->block1__DOT__slice0__DOT__P = vlSelf->block1__DOT____Vcellout__slice0__P;
    vlSelf->block1__DOT__P = (((IData)(vlSelf->block1__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(vlSelf->block1__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block1__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(vlSelf->block1__DOT____Vcellout__slice0__P))));
    vlSelf->block0__DOT__slice3__DOT__G = vlSelf->block0__DOT____Vcellout__slice3__G;
    vlSelf->block0__DOT__slice3__DOT__P = vlSelf->block0__DOT____Vcellout__slice3__P;
    vlSelf->block0__DOT__slice2__DOT__G = vlSelf->block0__DOT____Vcellout__slice2__G;
    vlSelf->block0__DOT__slice2__DOT__P = vlSelf->block0__DOT____Vcellout__slice2__P;
    vlSelf->block0__DOT__slice1__DOT__G = vlSelf->block0__DOT____Vcellout__slice1__G;
    vlSelf->block0__DOT__slice1__DOT__P = vlSelf->block0__DOT____Vcellout__slice1__P;
    vlSelf->block0__DOT__slice0__DOT__G = vlSelf->block0__DOT____Vcellout__slice0__G;
    vlSelf->block0__DOT__G = (((IData)(vlSelf->block0__DOT____Vcellout__slice3__G) 
                               << 3U) | (((IData)(vlSelf->block0__DOT____Vcellout__slice2__G) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block0__DOT____Vcellout__slice1__G) 
                                           << 1U) | (IData)(vlSelf->block0__DOT____Vcellout__slice0__G))));
    vlSelf->block0__DOT__slice0__DOT__P = vlSelf->block0__DOT____Vcellout__slice0__P;
    vlSelf->block0__DOT__P = (((IData)(vlSelf->block0__DOT____Vcellout__slice3__P) 
                               << 3U) | (((IData)(vlSelf->block0__DOT____Vcellout__slice2__P) 
                                          << 2U) | 
                                         (((IData)(vlSelf->block0__DOT____Vcellout__slice1__P) 
                                           << 1U) | (IData)(vlSelf->block0__DOT____Vcellout__slice0__P))));
}
