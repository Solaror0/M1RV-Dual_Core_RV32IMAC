// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultiplier_old.h for the primary calling header

#include "Vmultiplier_old__pch.h"
#include "Vmultiplier_old___024root.h"

VL_ATTR_COLD void Vmultiplier_old___024root___eval_static(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmultiplier_old___024root___eval_initial__TOP(Vmultiplier_old___024root* vlSelf);

VL_ATTR_COLD void Vmultiplier_old___024root___eval_initial(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___eval_initial\n"); );
    // Body
    Vmultiplier_old___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vmultiplier_old___024root___eval_initial__TOP(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->multiplier_old__DOT__booth0__DOT__shamt = 0U;
    vlSelf->multiplier_old__DOT__booth1__DOT__shamt = 2U;
    vlSelf->multiplier_old__DOT__booth2__DOT__shamt = 4U;
    vlSelf->multiplier_old__DOT__booth3__DOT__shamt = 6U;
    vlSelf->multiplier_old__DOT__booth4__DOT__shamt = 8U;
    vlSelf->multiplier_old__DOT__booth5__DOT__shamt = 0xaU;
    vlSelf->multiplier_old__DOT__booth6__DOT__shamt = 0xcU;
    vlSelf->multiplier_old__DOT__booth7__DOT__shamt = 0xeU;
    vlSelf->multiplier_old__DOT__booth8__DOT__shamt = 0x10U;
    vlSelf->multiplier_old__DOT__booth9__DOT__shamt = 0x12U;
    vlSelf->multiplier_old__DOT__booth10__DOT__shamt = 0x14U;
    vlSelf->multiplier_old__DOT__booth11__DOT__shamt = 0x16U;
    vlSelf->multiplier_old__DOT__booth12__DOT__shamt = 0x18U;
    vlSelf->multiplier_old__DOT__booth13__DOT__shamt = 0x1aU;
    vlSelf->multiplier_old__DOT__booth14__DOT__shamt = 0x1cU;
    vlSelf->multiplier_old__DOT__booth15__DOT__shamt = 0x1eU;
}

VL_ATTR_COLD void Vmultiplier_old___024root___eval_final(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier_old___024root___dump_triggers__stl(Vmultiplier_old___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmultiplier_old___024root___eval_phase__stl(Vmultiplier_old___024root* vlSelf);

VL_ATTR_COLD void Vmultiplier_old___024root___eval_settle(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vmultiplier_old___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("multiplier_old.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmultiplier_old___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier_old___024root___dump_triggers__stl(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vmultiplier_old___024root___ico_sequent__TOP__0(Vmultiplier_old___024root* vlSelf);
void Vmultiplier_old___024root___ico_sequent__TOP__1(Vmultiplier_old___024root* vlSelf);

VL_ATTR_COLD void Vmultiplier_old___024root___eval_stl(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vmultiplier_old___024root___ico_sequent__TOP__0(vlSelf);
        Vmultiplier_old___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vmultiplier_old___024root___eval_triggers__stl(Vmultiplier_old___024root* vlSelf);

VL_ATTR_COLD bool Vmultiplier_old___024root___eval_phase__stl(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmultiplier_old___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vmultiplier_old___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier_old___024root___dump_triggers__ico(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier_old___024root___dump_triggers__act(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier_old___024root___dump_triggers__nba(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmultiplier_old___024root___ctor_var_reset(Vmultiplier_old___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_old__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_old___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(32);
    vlSelf->b = VL_RAND_RESET_I(32);
    vlSelf->output_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier_old__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->multiplier_old__DOT__output_product = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->multiplier_old__DOT__layer0[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->multiplier_old__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__c0 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__c1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__c2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__c3 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__c4 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__c5 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__c6 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__c7 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__c8 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__c9 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__c10 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__c11 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__c12 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__c13 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__s0 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__s1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__s2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__s3 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__s4 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__s5 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__s6 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__s7 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__s8 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__s9 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__s10 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__s11 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__s12 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__s13 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__cs0 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__cs1 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__cs2 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__cs3 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__cs4 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__cs5 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__cs6 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__cs7 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__cs8 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__cs9 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__cs10 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__cs11 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__cs12 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__cs13 = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->multiplier_old__DOT__cout_upper = VL_RAND_RESET_I(1);
    vlSelf->multiplier_old__DOT____VdfgTmp_heb7989a3__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h05b5f9c1__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h052597ae__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h01dad1d8__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h7a663c94__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h35253611__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_he53529b5__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_he0f6dee4__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hec431073__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hc6e1242f__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h0eb166a0__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h7913a160__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h35de9c70__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_he690a581__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_he16eabad__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_ha86dab24__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_ha88273fb__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h447bb621__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h4327d158__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h417fb64e__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hb8612a1a__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hf4d6afad__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_he670209b__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h806f70f0__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hc3460092__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h84a06518__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h82f4ade3__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hb9d4d9bd__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hb6481e2d__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_ha45068c0__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_ha3c68b90__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h1c77d4a9__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hd3d00022__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hd44655d8__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hc858b583__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hc5ef75c1__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hfbe53185__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h8cb69ce4__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h262921f0__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h2dd054f1__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_ha11bb3b0__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hc5eeb652__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hce4e908d__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hc8003933__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h246859b0__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h1d335d85__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h176d6089__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hf1118130__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_he8cb1208__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h3e12c552__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h3862b2a1__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h3a2e29d3__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h0a8bd424__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hce3fb505__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h2445bc11__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h208d0990__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h18ab43ac__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h64b12aff__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h6cd0b7c1__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_heb62ff46__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hf369a1ed__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hfc302b65__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hdd622b20__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hd253c8e4__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hd7cf79a3__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_haa6615ef__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h7d61cfb3__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h4f32a798__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h8790040b__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h4c9543fb__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hd2bac621__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h9a846839__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h7fbd7c4f__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hecc9663f__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h8b8ed413__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_ha0e7f739__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h4e72ce0e__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h8fc8ff33__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hf1271f43__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h3e88ba46__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h5fe87125__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h7999e5e4__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h622ec858__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h21a43731__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h16069b55__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h9ba07979__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hf865013d__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h3e884887__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h3e7d5ff7__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_ha54fffb3__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_ha8d90068__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h3212f6d3__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h8b7a3f15__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h31d097f4__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h916b98f6__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h527ae651__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_he7cfe0b7__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h68dfab98__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h2e82e920__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h8b49c56f__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hcecc1cdf__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h28e67ab9__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h2922903e__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h91597c7b__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h65a88109__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h9fed42ff__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h02abd693__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h6b5295a4__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_ha4a6156a__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h9c5505f7__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h50504111__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h830f2f1e__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h39413230__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hfcb86e3f__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hc92d8bd3__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h4c7cfe0c__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_haa69d4e9__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h715d01f7__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hf506115b__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h2e6740f6__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h63f6d31b__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h22f0de58__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h139a9866__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hf98c5266__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h6b79afb9__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h25eae62e__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hcb5ee2c7__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hd2f211b8__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h1654593e__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h78449ad9__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h66e1f132__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hfed6d469__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h77fac5d4__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_he2a75b78__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h8f048c24__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h19855ad7__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hdf82b8e9__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hf387a0e6__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h9a520481__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h84011f51__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hb77e751c__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h77322aaf__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h7b72bb79__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hc3a9f6a4__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h6785db90__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hf09b607f__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h20c961ed__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hc9cb535a__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h910ee96d__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h861f003f__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h3ff8e4ab__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h29363bad__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hf6b58b31__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h2293c5ec__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h61bbf569__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h87e58f54__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h2ad1a3be__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h762eaf21__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hdd5ccc38__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_haa5cb7b2__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h77bf21f3__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h30c927e9__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h02009be1__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h36e10959__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_haafbe950__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hb23deeef__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h468398e0__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h91c34cf0__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_haec3d02e__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h5f4165df__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h2ceb216c__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h3e1397a5__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h4c382d1d__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h5df49220__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h2945cf4a__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hf5909ca0__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_ha49664c9__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h3936b2df__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hdee03da1__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h58fe185d__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h8c722637__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h3c757d80__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h72c26578__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h530ff5b8__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_he2f9c30f__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h150e1b73__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hfd010664__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hab7e2a1e__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h2889053d__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hfc90708c__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h7797be24__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_ha2ee1e1c__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hdd804859__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hd39f9a11__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hdde91434__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h923c14b0__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h9231e9f0__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h926c20eb__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h92fe3325__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h93a6a7e2__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h93a624bf__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h93f9b4b1__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h858d9d64__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h9332e11a__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h93f924b6__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h9089d6c1__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h9da1e37f__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hcdde0a68__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h71c1834f__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h71d4904b__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h77d9de20__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hb6bd604c__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hb695f388__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h9de77365__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h93f2be61__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h306a6a58__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h0e20c3c0__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h08f9c298__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h250c6531__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h713d223d__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hb1bfca7d__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hb54dd326__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hb5e1cb7c__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h33460c5b__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h7c92ec48__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h726a40b0__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h06feccf1__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h8a923811__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_hb702d3bd__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h8aeea9c2__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h302d3dfc__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h30de2b0b__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h0a918fb8__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h8a93a078__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h085d339d__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h725e3851__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h4a8fccbe__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h7344c59d__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h3e4bb97b__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h3063e93c__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h0b39ee90__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h353d9678__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h0fbcbbc1__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h0cf34e91__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h3c9bc662__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h35453b9d__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h0c68db2b__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h31fcdf7c__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h34b93f44__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h09df8035__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h081042d1__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h491c99b4__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h48b2734f__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h495981c9__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h34fdc71e__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h1f875668__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h3c476bde__0 = 0;
    vlSelf->multiplier_old__DOT____VdfgTmp_h64e6c594__0 = 0;
    vlSelf->multiplier_old__DOT__booth0__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier_old__DOT__booth0__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier_old__DOT__booth0__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->multiplier_old__DOT__booth0__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth0__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth0__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth0__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth1__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier_old__DOT__booth1__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier_old__DOT__booth1__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->multiplier_old__DOT__booth1__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth1__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth1__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth1__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth2__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier_old__DOT__booth2__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier_old__DOT__booth2__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->multiplier_old__DOT__booth2__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth2__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth2__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth2__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth3__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier_old__DOT__booth3__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier_old__DOT__booth3__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->multiplier_old__DOT__booth3__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth3__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth3__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth3__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth4__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier_old__DOT__booth4__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier_old__DOT__booth4__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->multiplier_old__DOT__booth4__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth4__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth4__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth4__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth5__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier_old__DOT__booth5__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier_old__DOT__booth5__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->multiplier_old__DOT__booth5__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth5__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth5__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth5__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth6__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier_old__DOT__booth6__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier_old__DOT__booth6__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->multiplier_old__DOT__booth6__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth6__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth6__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth6__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth7__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier_old__DOT__booth7__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier_old__DOT__booth7__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->multiplier_old__DOT__booth7__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth7__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth7__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth7__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth8__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier_old__DOT__booth8__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier_old__DOT__booth8__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->multiplier_old__DOT__booth8__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth8__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth8__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth8__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth9__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier_old__DOT__booth9__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier_old__DOT__booth9__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->multiplier_old__DOT__booth9__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth9__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth9__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth9__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth10__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier_old__DOT__booth10__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier_old__DOT__booth10__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->multiplier_old__DOT__booth10__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth10__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth10__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth10__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth11__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier_old__DOT__booth11__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier_old__DOT__booth11__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->multiplier_old__DOT__booth11__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth11__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth11__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth11__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth12__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier_old__DOT__booth12__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier_old__DOT__booth12__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->multiplier_old__DOT__booth12__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth12__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth12__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth12__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth13__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier_old__DOT__booth13__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier_old__DOT__booth13__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->multiplier_old__DOT__booth13__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth13__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth13__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth13__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth14__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier_old__DOT__booth14__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier_old__DOT__booth14__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->multiplier_old__DOT__booth14__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth14__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth14__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth14__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth15__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->multiplier_old__DOT__booth15__DOT__triplet = VL_RAND_RESET_I(3);
    vlSelf->multiplier_old__DOT__booth15__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->multiplier_old__DOT__booth15__DOT__partial_product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth15__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth15__DOT__minus_a = VL_RAND_RESET_Q(64);
    vlSelf->multiplier_old__DOT__booth15__DOT__sign_ext_a = VL_RAND_RESET_Q(64);
}
