// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultiplier.h for the primary calling header

#include "Vmultiplier__pch.h"
#include "Vmultiplier___024root.h"

VL_ATTR_COLD void Vmultiplier___024root___stl_sequent__TOP__1(Vmultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___stl_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ multiplier__DOT____Vcellout__fast_adder_lower__s;
    multiplier__DOT____Vcellout__fast_adder_lower__s = 0;
    IData/*31:0*/ multiplier__DOT____Vcellinp__fast_adder_lower__b;
    multiplier__DOT____Vcellinp__fast_adder_lower__b = 0;
    IData/*31:0*/ multiplier__DOT____Vcellout__fast_adder_upper__s;
    multiplier__DOT____Vcellout__fast_adder_upper__s = 0;
    IData/*31:0*/ multiplier__DOT____Vcellinp__fast_adder_upper__b;
    multiplier__DOT____Vcellinp__fast_adder_upper__b = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h4329d74c__0;
    multiplier__DOT____VdfgTmp_h4329d74c__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h6c96af09__0;
    multiplier__DOT____VdfgTmp_h6c96af09__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_heb4ce7c2__0;
    multiplier__DOT____VdfgTmp_heb4ce7c2__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h5c0ca307__0;
    multiplier__DOT____VdfgTmp_h5c0ca307__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_he1b30d21__0;
    multiplier__DOT____VdfgTmp_he1b30d21__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hf80c8d7b__0;
    multiplier__DOT____VdfgTmp_hf80c8d7b__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h9c288473__0;
    multiplier__DOT____VdfgTmp_h9c288473__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hdd2e7c48__0;
    multiplier__DOT____VdfgTmp_hdd2e7c48__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h0f7f4f16__0;
    multiplier__DOT____VdfgTmp_h0f7f4f16__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h222886c6__0;
    multiplier__DOT____VdfgTmp_h222886c6__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_ha22fadd2__0;
    multiplier__DOT____VdfgTmp_ha22fadd2__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h557c9d7b__0;
    multiplier__DOT____VdfgTmp_h557c9d7b__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hf23c2413__0;
    multiplier__DOT____VdfgTmp_hf23c2413__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hf970aed7__0;
    multiplier__DOT____VdfgTmp_hf970aed7__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h86849b2c__0;
    multiplier__DOT____VdfgTmp_h86849b2c__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_he0298dca__0;
    multiplier__DOT____VdfgTmp_he0298dca__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h1f7c1671__0;
    multiplier__DOT____VdfgTmp_h1f7c1671__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_ha05717d3__0;
    multiplier__DOT____VdfgTmp_ha05717d3__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hf768c16e__0;
    multiplier__DOT____VdfgTmp_hf768c16e__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h441a9aa6__0;
    multiplier__DOT____VdfgTmp_h441a9aa6__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h3e472d0c__0;
    multiplier__DOT____VdfgTmp_h3e472d0c__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h398165f9__0;
    multiplier__DOT____VdfgTmp_h398165f9__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h3984d4de__0;
    multiplier__DOT____VdfgTmp_h3984d4de__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hfcae7c71__0;
    multiplier__DOT____VdfgTmp_hfcae7c71__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h0d2fc7bb__0;
    multiplier__DOT____VdfgTmp_h0d2fc7bb__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h0d606286__0;
    multiplier__DOT____VdfgTmp_h0d606286__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hf15541c7__0;
    multiplier__DOT____VdfgTmp_hf15541c7__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_he63fdf78__0;
    multiplier__DOT____VdfgTmp_he63fdf78__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_he9672031__0;
    multiplier__DOT____VdfgTmp_he9672031__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hee226eda__0;
    multiplier__DOT____VdfgTmp_hee226eda__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_he573b149__0;
    multiplier__DOT____VdfgTmp_he573b149__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hfdd3bcec__0;
    multiplier__DOT____VdfgTmp_hfdd3bcec__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hfd4b1944__0;
    multiplier__DOT____VdfgTmp_hfd4b1944__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hf76cb2a1__0;
    multiplier__DOT____VdfgTmp_hf76cb2a1__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h3c43eb02__0;
    multiplier__DOT____VdfgTmp_h3c43eb02__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h83742b49__0;
    multiplier__DOT____VdfgTmp_h83742b49__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h8fc9e8b7__0;
    multiplier__DOT____VdfgTmp_h8fc9e8b7__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h83b53b52__0;
    multiplier__DOT____VdfgTmp_h83b53b52__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_ha86f375f__0;
    multiplier__DOT____VdfgTmp_ha86f375f__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h450fa1c8__0;
    multiplier__DOT____VdfgTmp_h450fa1c8__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h5ff26d4c__0;
    multiplier__DOT____VdfgTmp_h5ff26d4c__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h40bc68b3__0;
    multiplier__DOT____VdfgTmp_h40bc68b3__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hdf27c16e__0;
    multiplier__DOT____VdfgTmp_hdf27c16e__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h048f677b__0;
    multiplier__DOT____VdfgTmp_h048f677b__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h0624ef8e__0;
    multiplier__DOT____VdfgTmp_h0624ef8e__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h38d26c75__0;
    multiplier__DOT____VdfgTmp_h38d26c75__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h02f274d0__0;
    multiplier__DOT____VdfgTmp_h02f274d0__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h04fa74b9__0;
    multiplier__DOT____VdfgTmp_h04fa74b9__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h1a0a272f__0;
    multiplier__DOT____VdfgTmp_h1a0a272f__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hd4223144__0;
    multiplier__DOT____VdfgTmp_hd4223144__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h80868a1f__0;
    multiplier__DOT____VdfgTmp_h80868a1f__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h2486dbde__0;
    multiplier__DOT____VdfgTmp_h2486dbde__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h3ca0686e__0;
    multiplier__DOT____VdfgTmp_h3ca0686e__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h4ffef471__0;
    multiplier__DOT____VdfgTmp_h4ffef471__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_he7cbdc10__0;
    multiplier__DOT____VdfgTmp_he7cbdc10__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_he626b5f9__0;
    multiplier__DOT____VdfgTmp_he626b5f9__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hf8229d77__0;
    multiplier__DOT____VdfgTmp_hf8229d77__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hfe0f3858__0;
    multiplier__DOT____VdfgTmp_hfe0f3858__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hdc5d2a1f__0;
    multiplier__DOT____VdfgTmp_hdc5d2a1f__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_he2bb92e6__0;
    multiplier__DOT____VdfgTmp_he2bb92e6__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_he5ffdd7d__0;
    multiplier__DOT____VdfgTmp_he5ffdd7d__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_he626a5ee__0;
    multiplier__DOT____VdfgTmp_he626a5ee__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_he70aa9d9__0;
    multiplier__DOT____VdfgTmp_he70aa9d9__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h4fa72ea0__0;
    multiplier__DOT____VdfgTmp_h4fa72ea0__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h23da217c__0;
    multiplier__DOT____VdfgTmp_h23da217c__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h2516e977__0;
    multiplier__DOT____VdfgTmp_h2516e977__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h29bd2afe__0;
    multiplier__DOT____VdfgTmp_h29bd2afe__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hd1e8d0df__0;
    multiplier__DOT____VdfgTmp_hd1e8d0df__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h867c4fd1__0;
    multiplier__DOT____VdfgTmp_h867c4fd1__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h99f0bfee__0;
    multiplier__DOT____VdfgTmp_h99f0bfee__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h87d6f989__0;
    multiplier__DOT____VdfgTmp_h87d6f989__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h881043e0__0;
    multiplier__DOT____VdfgTmp_h881043e0__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h0eaa55f8__0;
    multiplier__DOT____VdfgTmp_h0eaa55f8__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h0025e177__0;
    multiplier__DOT____VdfgTmp_h0025e177__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_he7fd5046__0;
    multiplier__DOT____VdfgTmp_he7fd5046__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hd73ca61f__0;
    multiplier__DOT____VdfgTmp_hd73ca61f__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hde9e965d__0;
    multiplier__DOT____VdfgTmp_hde9e965d__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hdfb61a5e__0;
    multiplier__DOT____VdfgTmp_hdfb61a5e__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hc12c5389__0;
    multiplier__DOT____VdfgTmp_hc12c5389__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h96e4e078__0;
    multiplier__DOT____VdfgTmp_h96e4e078__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h8ea9fc50__0;
    multiplier__DOT____VdfgTmp_h8ea9fc50__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h81a6c77b__0;
    multiplier__DOT____VdfgTmp_h81a6c77b__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_ha15c2bc2__0;
    multiplier__DOT____VdfgTmp_ha15c2bc2__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h1959d241__0;
    multiplier__DOT____VdfgTmp_h1959d241__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hafb35345__0;
    multiplier__DOT____VdfgTmp_hafb35345__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_ha1cb1a10__0;
    multiplier__DOT____VdfgTmp_ha1cb1a10__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_he662753d__0;
    multiplier__DOT____VdfgTmp_he662753d__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h3602f837__0;
    multiplier__DOT____VdfgTmp_h3602f837__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h8a01e037__0;
    multiplier__DOT____VdfgTmp_h8a01e037__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h400b1f45__0;
    multiplier__DOT____VdfgTmp_h400b1f45__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hb4f1c945__0;
    multiplier__DOT____VdfgTmp_hb4f1c945__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h4db4002f__0;
    multiplier__DOT____VdfgTmp_h4db4002f__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h31e3c6b5__0;
    multiplier__DOT____VdfgTmp_h31e3c6b5__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h2f8f8731__0;
    multiplier__DOT____VdfgTmp_h2f8f8731__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h69f98fcb__0;
    multiplier__DOT____VdfgTmp_h69f98fcb__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hfd2cee99__0;
    multiplier__DOT____VdfgTmp_hfd2cee99__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hbd92cf63__0;
    multiplier__DOT____VdfgTmp_hbd92cf63__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h86e54069__0;
    multiplier__DOT____VdfgTmp_h86e54069__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hd79b2324__0;
    multiplier__DOT____VdfgTmp_hd79b2324__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h21a3b043__0;
    multiplier__DOT____VdfgTmp_h21a3b043__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hdf4ec7d6__0;
    multiplier__DOT____VdfgTmp_hdf4ec7d6__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h34c69624__0;
    multiplier__DOT____VdfgTmp_h34c69624__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hed5317e5__0;
    multiplier__DOT____VdfgTmp_hed5317e5__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hc527462f__0;
    multiplier__DOT____VdfgTmp_hc527462f__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hd87f4ffb__0;
    multiplier__DOT____VdfgTmp_hd87f4ffb__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hfa939436__0;
    multiplier__DOT____VdfgTmp_hfa939436__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h0f970768__0;
    multiplier__DOT____VdfgTmp_h0f970768__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h684cd6ae__0;
    multiplier__DOT____VdfgTmp_h684cd6ae__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hcdf266c4__0;
    multiplier__DOT____VdfgTmp_hcdf266c4__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hc932cfd4__0;
    multiplier__DOT____VdfgTmp_hc932cfd4__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hd2d5e8b9__0;
    multiplier__DOT____VdfgTmp_hd2d5e8b9__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_ha9145920__0;
    multiplier__DOT____VdfgTmp_ha9145920__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hf3b5dd45__0;
    multiplier__DOT____VdfgTmp_hf3b5dd45__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h5d2e1708__0;
    multiplier__DOT____VdfgTmp_h5d2e1708__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h76a1425e__0;
    multiplier__DOT____VdfgTmp_h76a1425e__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h11f5224d__0;
    multiplier__DOT____VdfgTmp_h11f5224d__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h8e6ecd35__0;
    multiplier__DOT____VdfgTmp_h8e6ecd35__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_he2c821aa__0;
    multiplier__DOT____VdfgTmp_he2c821aa__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h180e5525__0;
    multiplier__DOT____VdfgTmp_h180e5525__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h80a9b664__0;
    multiplier__DOT____VdfgTmp_h80a9b664__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h90242e51__0;
    multiplier__DOT____VdfgTmp_h90242e51__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h4f0e6e92__0;
    multiplier__DOT____VdfgTmp_h4f0e6e92__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h055e9227__0;
    multiplier__DOT____VdfgTmp_h055e9227__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h7a8bbfed__0;
    multiplier__DOT____VdfgTmp_h7a8bbfed__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h462ed107__0;
    multiplier__DOT____VdfgTmp_h462ed107__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h7c6a0bd9__0;
    multiplier__DOT____VdfgTmp_h7c6a0bd9__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h230fc375__0;
    multiplier__DOT____VdfgTmp_h230fc375__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hae179ebe__0;
    multiplier__DOT____VdfgTmp_hae179ebe__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h19141b4c__0;
    multiplier__DOT____VdfgTmp_h19141b4c__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h23ad84a0__0;
    multiplier__DOT____VdfgTmp_h23ad84a0__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h3a7b8da1__0;
    multiplier__DOT____VdfgTmp_h3a7b8da1__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h1bf3dac0__0;
    multiplier__DOT____VdfgTmp_h1bf3dac0__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h812ee6cf__0;
    multiplier__DOT____VdfgTmp_h812ee6cf__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hc8fb5f0e__0;
    multiplier__DOT____VdfgTmp_hc8fb5f0e__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_he997c3e9__0;
    multiplier__DOT____VdfgTmp_he997c3e9__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h7ff053c7__0;
    multiplier__DOT____VdfgTmp_h7ff053c7__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_he31ae5b0__0;
    multiplier__DOT____VdfgTmp_he31ae5b0__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h10bb38ff__0;
    multiplier__DOT____VdfgTmp_h10bb38ff__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h22ae12b8__0;
    multiplier__DOT____VdfgTmp_h22ae12b8__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hff1a4f0a__0;
    multiplier__DOT____VdfgTmp_hff1a4f0a__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h6fa8b038__0;
    multiplier__DOT____VdfgTmp_h6fa8b038__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h8789f6b0__0;
    multiplier__DOT____VdfgTmp_h8789f6b0__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h2a001c41__0;
    multiplier__DOT____VdfgTmp_h2a001c41__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h982eb522__0;
    multiplier__DOT____VdfgTmp_h982eb522__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h55827a18__0;
    multiplier__DOT____VdfgTmp_h55827a18__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h44170901__0;
    multiplier__DOT____VdfgTmp_h44170901__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hc369b665__0;
    multiplier__DOT____VdfgTmp_hc369b665__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hd5cf6297__0;
    multiplier__DOT____VdfgTmp_hd5cf6297__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hcbc4bd87__0;
    multiplier__DOT____VdfgTmp_hcbc4bd87__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hcdc3d7cd__0;
    multiplier__DOT____VdfgTmp_hcdc3d7cd__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hb3893ee6__0;
    multiplier__DOT____VdfgTmp_hb3893ee6__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h965f6348__0;
    multiplier__DOT____VdfgTmp_h965f6348__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hea75a280__0;
    multiplier__DOT____VdfgTmp_hea75a280__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hda12644a__0;
    multiplier__DOT____VdfgTmp_hda12644a__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hccd46034__0;
    multiplier__DOT____VdfgTmp_hccd46034__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hdb77f6bc__0;
    multiplier__DOT____VdfgTmp_hdb77f6bc__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hdd59a3b6__0;
    multiplier__DOT____VdfgTmp_hdd59a3b6__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h03c21412__0;
    multiplier__DOT____VdfgTmp_h03c21412__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hc5338b03__0;
    multiplier__DOT____VdfgTmp_hc5338b03__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hca8c0db5__0;
    multiplier__DOT____VdfgTmp_hca8c0db5__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hcd2bf105__0;
    multiplier__DOT____VdfgTmp_hcd2bf105__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hcc96a367__0;
    multiplier__DOT____VdfgTmp_hcc96a367__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hdaaa360a__0;
    multiplier__DOT____VdfgTmp_hdaaa360a__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hd51d0da8__0;
    multiplier__DOT____VdfgTmp_hd51d0da8__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h0b04c588__0;
    multiplier__DOT____VdfgTmp_h0b04c588__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h0d871206__0;
    multiplier__DOT____VdfgTmp_h0d871206__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hcabae527__0;
    multiplier__DOT____VdfgTmp_hcabae527__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hcb3e0ff7__0;
    multiplier__DOT____VdfgTmp_hcb3e0ff7__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hdd320ed1__0;
    multiplier__DOT____VdfgTmp_hdd320ed1__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hdc96ddbd__0;
    multiplier__DOT____VdfgTmp_hdc96ddbd__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h05e569e7__0;
    multiplier__DOT____VdfgTmp_h05e569e7__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h18f66b11__0;
    multiplier__DOT____VdfgTmp_h18f66b11__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h1a25fa09__0;
    multiplier__DOT____VdfgTmp_h1a25fa09__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h02242b4f__0;
    multiplier__DOT____VdfgTmp_h02242b4f__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h0a5a4780__0;
    multiplier__DOT____VdfgTmp_h0a5a4780__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hcbf52e76__0;
    multiplier__DOT____VdfgTmp_hcbf52e76__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hcbaadec2__0;
    multiplier__DOT____VdfgTmp_hcbaadec2__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h198a3b28__0;
    multiplier__DOT____VdfgTmp_h198a3b28__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h0b597f67__0;
    multiplier__DOT____VdfgTmp_h0b597f67__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h0fc0cdcd__0;
    multiplier__DOT____VdfgTmp_h0fc0cdcd__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h0831b649__0;
    multiplier__DOT____VdfgTmp_h0831b649__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hf7f71097__0;
    multiplier__DOT____VdfgTmp_hf7f71097__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hb5c69898__0;
    multiplier__DOT____VdfgTmp_hb5c69898__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hf6686aaa__0;
    multiplier__DOT____VdfgTmp_hf6686aaa__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h0f4f4e42__0;
    multiplier__DOT____VdfgTmp_h0f4f4e42__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h0f4ae7e8__0;
    multiplier__DOT____VdfgTmp_h0f4ae7e8__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hd9c7bb89__0;
    multiplier__DOT____VdfgTmp_hd9c7bb89__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hf7f002c7__0;
    multiplier__DOT____VdfgTmp_hf7f002c7__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h095f52ef__0;
    multiplier__DOT____VdfgTmp_h095f52ef__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h0c4158d9__0;
    multiplier__DOT____VdfgTmp_h0c4158d9__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h12618c7e__0;
    multiplier__DOT____VdfgTmp_h12618c7e__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h1f50fc58__0;
    multiplier__DOT____VdfgTmp_h1f50fc58__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h1d3fa1c8__0;
    multiplier__DOT____VdfgTmp_h1d3fa1c8__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h068dc682__0;
    multiplier__DOT____VdfgTmp_h068dc682__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hb14056ed__0;
    multiplier__DOT____VdfgTmp_hb14056ed__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hcc812cc7__0;
    multiplier__DOT____VdfgTmp_hcc812cc7__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hd958c447__0;
    multiplier__DOT____VdfgTmp_hd958c447__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hc725d999__0;
    multiplier__DOT____VdfgTmp_hc725d999__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hc102b4ca__0;
    multiplier__DOT____VdfgTmp_hc102b4ca__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hcf612958__0;
    multiplier__DOT____VdfgTmp_hcf612958__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h0cad1f88__0;
    multiplier__DOT____VdfgTmp_h0cad1f88__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hf09284c2__0;
    multiplier__DOT____VdfgTmp_hf09284c2__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h447e09a8__0;
    multiplier__DOT____VdfgTmp_h447e09a8__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hbfa19304__0;
    multiplier__DOT____VdfgTmp_hbfa19304__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hc9990b36__0;
    multiplier__DOT____VdfgTmp_hc9990b36__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hb70091ba__0;
    multiplier__DOT____VdfgTmp_hb70091ba__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h1160abad__0;
    multiplier__DOT____VdfgTmp_h1160abad__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h1f42ffa9__0;
    multiplier__DOT____VdfgTmp_h1f42ffa9__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hdc21b403__0;
    multiplier__DOT____VdfgTmp_hdc21b403__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h2f1d2cb1__0;
    multiplier__DOT____VdfgTmp_h2f1d2cb1__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hb347d552__0;
    multiplier__DOT____VdfgTmp_hb347d552__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h48e02a05__0;
    multiplier__DOT____VdfgTmp_h48e02a05__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h2e5df095__0;
    multiplier__DOT____VdfgTmp_h2e5df095__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h18b93f1d__0;
    multiplier__DOT____VdfgTmp_h18b93f1d__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_he763a83b__0;
    multiplier__DOT____VdfgTmp_he763a83b__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hc78970cf__0;
    multiplier__DOT____VdfgTmp_hc78970cf__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_heeaca214__0;
    multiplier__DOT____VdfgTmp_heeaca214__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h08dc33f5__0;
    multiplier__DOT____VdfgTmp_h08dc33f5__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_he6347c9f__0;
    multiplier__DOT____VdfgTmp_he6347c9f__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hd1dc8d53__0;
    multiplier__DOT____VdfgTmp_hd1dc8d53__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h2d87808e__0;
    multiplier__DOT____VdfgTmp_h2d87808e__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h26862459__0;
    multiplier__DOT____VdfgTmp_h26862459__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h33448335__0;
    multiplier__DOT____VdfgTmp_h33448335__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h51c749d5__0;
    multiplier__DOT____VdfgTmp_h51c749d5__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h8a42697f__0;
    multiplier__DOT____VdfgTmp_h8a42697f__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hbf7063bb__0;
    multiplier__DOT____VdfgTmp_hbf7063bb__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hd6370645__0;
    multiplier__DOT____VdfgTmp_hd6370645__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h620bb6ae__0;
    multiplier__DOT____VdfgTmp_h620bb6ae__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hfe2bc95d__0;
    multiplier__DOT____VdfgTmp_hfe2bc95d__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h4d2a303e__0;
    multiplier__DOT____VdfgTmp_h4d2a303e__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h5beeaef6__0;
    multiplier__DOT____VdfgTmp_h5beeaef6__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h94bcecde__0;
    multiplier__DOT____VdfgTmp_h94bcecde__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hac42272f__0;
    multiplier__DOT____VdfgTmp_hac42272f__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h5f3b3c98__0;
    multiplier__DOT____VdfgTmp_h5f3b3c98__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hd9596be7__0;
    multiplier__DOT____VdfgTmp_hd9596be7__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h10526d24__0;
    multiplier__DOT____VdfgTmp_h10526d24__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hbb7c1865__0;
    multiplier__DOT____VdfgTmp_hbb7c1865__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hcec39009__0;
    multiplier__DOT____VdfgTmp_hcec39009__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h44475869__0;
    multiplier__DOT____VdfgTmp_h44475869__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h2cb87137__0;
    multiplier__DOT____VdfgTmp_h2cb87137__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hd9291a3f__0;
    multiplier__DOT____VdfgTmp_hd9291a3f__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hf609fc61__0;
    multiplier__DOT____VdfgTmp_hf609fc61__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_he5e9841b__0;
    multiplier__DOT____VdfgTmp_he5e9841b__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h2a484961__0;
    multiplier__DOT____VdfgTmp_h2a484961__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h3ced3bca__0;
    multiplier__DOT____VdfgTmp_h3ced3bca__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hdb68f242__0;
    multiplier__DOT____VdfgTmp_hdb68f242__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h30d83483__0;
    multiplier__DOT____VdfgTmp_h30d83483__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h585c167f__0;
    multiplier__DOT____VdfgTmp_h585c167f__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h6851d87f__0;
    multiplier__DOT____VdfgTmp_h6851d87f__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_haac6af6c__0;
    multiplier__DOT____VdfgTmp_haac6af6c__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hf62e5796__0;
    multiplier__DOT____VdfgTmp_hf62e5796__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h3eb62325__0;
    multiplier__DOT____VdfgTmp_h3eb62325__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h4d9232a3__0;
    multiplier__DOT____VdfgTmp_h4d9232a3__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hb0fef150__0;
    multiplier__DOT____VdfgTmp_hb0fef150__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h2fef1100__0;
    multiplier__DOT____VdfgTmp_h2fef1100__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h03908420__0;
    multiplier__DOT____VdfgTmp_h03908420__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h7ea3e322__0;
    multiplier__DOT____VdfgTmp_h7ea3e322__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h3af6cff9__0;
    multiplier__DOT____VdfgTmp_h3af6cff9__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hc70d592c__0;
    multiplier__DOT____VdfgTmp_hc70d592c__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hcb6b8f89__0;
    multiplier__DOT____VdfgTmp_hcb6b8f89__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hc1d23b6c__0;
    multiplier__DOT____VdfgTmp_hc1d23b6c__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h9c2cd9d3__0;
    multiplier__DOT____VdfgTmp_h9c2cd9d3__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hcf6c8c8b__0;
    multiplier__DOT____VdfgTmp_hcf6c8c8b__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hfe741a91__0;
    multiplier__DOT____VdfgTmp_hfe741a91__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hd7642fa3__0;
    multiplier__DOT____VdfgTmp_hd7642fa3__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hf152181d__0;
    multiplier__DOT____VdfgTmp_hf152181d__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hcd5fcfe9__0;
    multiplier__DOT____VdfgTmp_hcd5fcfe9__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h1b72b038__0;
    multiplier__DOT____VdfgTmp_h1b72b038__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_hb3f81bff__0;
    multiplier__DOT____VdfgTmp_hb3f81bff__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h532a01c6__0;
    multiplier__DOT____VdfgTmp_h532a01c6__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h3b7eab9e__0;
    multiplier__DOT____VdfgTmp_h3b7eab9e__0 = 0;
    CData/*0:0*/ multiplier__DOT____VdfgTmp_h04efbd35__0;
    multiplier__DOT____VdfgTmp_h04efbd35__0 = 0;
    IData/*31:0*/ multiplier__DOT____VdfgTmp_hbad2e8b7__0;
    multiplier__DOT____VdfgTmp_hbad2e8b7__0 = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellout__block0__s;
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block0__s = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block0__b;
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block0__b = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellout__block1__s;
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block1__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block1__cin;
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block1__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellout__block2__s;
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block2__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block2__cin;
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block2__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellout__block3__s;
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block3__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block3__cin;
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block3__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellout__block4__s;
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block4__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block4__cin;
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block4__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellout__block5__s;
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block5__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block5__cin;
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block5__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellout__block6__s;
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block6__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block6__cin;
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block6__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellout__block7__s;
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block7__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block7__cin;
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block7__cin = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice1__b;
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice1__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice2__b;
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice2__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice3__b;
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice3__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice0__b;
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice0__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice1__b;
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice1__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice2__b;
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice2__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice3__b;
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice3__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice0__b;
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice0__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice1__b;
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice1__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice2__b;
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice2__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice3__b;
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice3__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice0__b;
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice0__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice1__b;
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice1__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice2__b;
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice2__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice3__b;
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice3__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice0__b;
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice0__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice1__b;
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice1__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice2__b;
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice2__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice3__b;
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice3__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice0__b;
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice0__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice1__b;
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice1__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice2__b;
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice2__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice3__b;
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice3__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice0__b;
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice0__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice1__b;
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice1__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice2__b;
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice2__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice3__b;
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice3__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice0__b;
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice0__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice1__b;
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice1__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice2__b;
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice2__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice3__b;
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice3__b = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellout__block0__s;
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block0__s = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block0__b;
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block0__b = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellout__block1__s;
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block1__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block1__cin;
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block1__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellout__block2__s;
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block2__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block2__cin;
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block2__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellout__block3__s;
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block3__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block3__cin;
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block3__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellout__block4__s;
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block4__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block4__cin;
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block4__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellout__block5__s;
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block5__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block5__cin;
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block5__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellout__block6__s;
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block6__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block6__cin;
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block6__cin = 0;
    CData/*3:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellout__block7__s;
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block7__s = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block7__cin;
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block7__cin = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice0__b;
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice0__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice1__b;
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice1__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice2__b;
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice2__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice3__b;
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice3__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice0__b;
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice0__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice1__b;
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice1__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice2__b;
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice2__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice3__b;
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice3__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice0__b;
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice0__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice1__b;
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice1__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice2__b;
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice2__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice3__b;
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice3__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice0__b;
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice0__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice1__b;
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice1__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice2__b;
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice2__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice3__b;
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice3__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice0__b;
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice0__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice1__b;
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice1__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice2__b;
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice2__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice3__b;
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice3__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice0__b;
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice0__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice1__b;
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice1__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice2__b;
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice2__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice3__b;
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice3__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice0__b;
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice0__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice1__b;
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice1__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice2__b;
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice2__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice3__b;
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice3__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__P;
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__G;
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice0__b;
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice0__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__P;
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__G;
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice1__b;
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice1__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__P;
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__G;
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice2__b;
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice2__b = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__P;
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__P = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__G;
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__G = 0;
    CData/*0:0*/ multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice3__b;
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice3__b = 0;
    CData/*3:0*/ __VdfgTmp_h1badcce1__0;
    __VdfgTmp_h1badcce1__0 = 0;
    // Body
    vlSelf->multiplier__DOT____VdfgTmp_h859124f6__0 
        = (1U & ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h85b3d8e3__0) 
                 + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2ceb216c__0) 
                    + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h085d339d__0))));
    multiplier__DOT____VdfgTmp_h4329d74c__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h86123f54__0) 
                                                + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h3e1397a5__0) 
                                                   + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h725e3851__0))));
    multiplier__DOT____VdfgTmp_h6c96af09__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hffef898e__0) 
                                                + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h4c382d1d__0) 
                                                   + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h4a8fccbe__0))));
    multiplier__DOT____VdfgTmp_heb4ce7c2__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h7862e207__0) 
                                                + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h5df49220__0) 
                                                   + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h7344c59d__0))));
    multiplier__DOT____VdfgTmp_h5c0ca307__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_he38e82e0__0) 
                                                + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2945cf4a__0) 
                                                   + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h3e4bb97b__0))));
    multiplier__DOT____VdfgTmp_he1b30d21__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hf4fc9c2f__0) 
                                                + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hf5909ca0__0) 
                                                   + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h3063e93c__0))));
    multiplier__DOT____VdfgTmp_hf80c8d7b__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h4cefb86b__0) 
                                                + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_ha49664c9__0) 
                                                   + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h0b39ee90__0))));
    multiplier__DOT____VdfgTmp_h9c288473__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h09b1e60b__0) 
                                                + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h3936b2df__0) 
                                                   + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h353d9678__0))));
    multiplier__DOT____VdfgTmp_hdd2e7c48__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h5c4e3982__0) 
                                                + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hdee03da1__0) 
                                                   + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h0fbcbbc1__0))));
    multiplier__DOT____VdfgTmp_h0f7f4f16__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h8dfa88b4__0) 
                                                + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h58fe185d__0) 
                                                   + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h0cf34e91__0))));
    multiplier__DOT____VdfgTmp_h222886c6__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h565a82e6__0) 
                                                + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h8c722637__0) 
                                                   + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h3c9bc662__0))));
    multiplier__DOT____VdfgTmp_ha22fadd2__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h367ff427__0) 
                                                + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h3c757d80__0) 
                                                   + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h35453b9d__0))));
    multiplier__DOT____VdfgTmp_h557c9d7b__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h780b55a2__0) 
                                                + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h72c26578__0) 
                                                   + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h0c68db2b__0))));
    multiplier__DOT____VdfgTmp_hf23c2413__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h43d03c3f__0) 
                                                + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h530ff5b8__0) 
                                                   + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h31fcdf7c__0))));
    multiplier__DOT____VdfgTmp_hf970aed7__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h1374dad2__0) 
                                                + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_he2f9c30f__0) 
                                                   + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h34b93f44__0))));
    multiplier__DOT____VdfgTmp_h86849b2c__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc688b556__0) 
                                                + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h150e1b73__0) 
                                                   + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h09df8035__0))));
    multiplier__DOT____VdfgTmp_he0298dca__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h5cc0ab1a__0) 
                                                + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hfd010664__0) 
                                                   + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h081042d1__0))));
    multiplier__DOT____VdfgTmp_h1f7c1671__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc4a9c50a__0) 
                                                + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hab7e2a1e__0) 
                                                   + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h491c99b4__0))));
    multiplier__DOT____VdfgTmp_ha05717d3__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h4ad97a42__0) 
                                                + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2889053d__0) 
                                                   + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h48b2734f__0))));
    multiplier__DOT____VdfgTmp_hf768c16e__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_heb306113__0) 
                                                + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hfc90708c__0) 
                                                   + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h495981c9__0))));
    vlSelf->multiplier__DOT__s6 = (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h1654593e__0)) 
                                    << 0x3fU) | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h78449ad9__0)) 
                                                  << 0x3eU) 
                                                 | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h66e1f132__0)) 
                                                     << 0x3dU) 
                                                    | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_hfed6d469__0)) 
                                                        << 0x3cU) 
                                                       | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h77fac5d4__0)) 
                                                           << 0x3bU) 
                                                          | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_he2a75b78__0)) 
                                                              << 0x3aU) 
                                                             | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h8f048c24__0)) 
                                                                 << 0x39U) 
                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h19855ad7__0)) 
                                                                    << 0x38U) 
                                                                   | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_hdf82b8e9__0)) 
                                                                       << 0x37U) 
                                                                      | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_hf387a0e6__0)) 
                                                                          << 0x36U) 
                                                                         | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h9a520481__0)) 
                                                                             << 0x35U) 
                                                                            | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h84011f51__0)) 
                                                                                << 0x34U) 
                                                                               | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_hb77e751c__0)) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h77322aaf__0)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h7b72bb79__0)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc3a9f6a4__0)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h6785db90__0)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_hf09b607f__0)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h20c961ed__0)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc9cb535a__0)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h910ee96d__0)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h861f003f__0)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h3ff8e4ab__0)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h29363bad__0)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_hf6b58b31__0)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2293c5ec__0)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h61bbf569__0)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h87e58f54__0)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2ad1a3be__0)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h762eaf21__0)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_hdd5ccc38__0)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_haa5cb7b2__0)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h77bf21f3__0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h30c927e9__0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h02009be1__0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h36e10959__0) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_haafbe950__0) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hb23deeef__0) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h468398e0__0) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h91c34cf0__0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_haec3d02e__0) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h5f4165df__0) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2ceb216c__0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h3e1397a5__0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h4c382d1d__0) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h5df49220__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2945cf4a__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hf5909ca0__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_ha49664c9__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h3936b2df__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hdee03da1__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h58fe185d__0) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h8c722637__0) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h3c757d80__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h72c26578__0) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h530ff5b8__0) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_he2f9c30f__0) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h150e1b73__0) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hfd010664__0) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hab7e2a1e__0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2889053d__0) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hfc90708c__0) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h7797be24__0) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->multiplier__DOT____VdfgTmp_ha2ee1e1c__0))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    multiplier__DOT____VdfgTmp_h441a9aa6__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_ha2465dce__0) 
                                                + ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h7797be24__0) 
                                                   + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h34fdc71e__0))));
    vlSelf->multiplier__DOT__c8 = (((QData)((IData)(
                                                    (1U 
                                                     & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hdc186fa3__0) 
                                                         + 
                                                         ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h1654593e__0) 
                                                          + (IData)(vlSelf->multiplier__DOT____VdfgTmp_hdd804859__0))) 
                                                        >> 1U)))) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  (1U 
                                                                   & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc1441096__0) 
                                                                       + 
                                                                       ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h78449ad9__0) 
                                                                        + (IData)(vlSelf->multiplier__DOT____VdfgTmp_hd39f9a11__0))) 
                                                                      >> 1U)))) 
                                                  << 0x3eU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h49db7aee__0) 
                                                                          + 
                                                                          ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h66e1f132__0) 
                                                                           + (IData)(vlSelf->multiplier__DOT____VdfgTmp_hdde91434__0))) 
                                                                         >> 1U)))) 
                                                     << 0x3dU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_haa6a030f__0) 
                                                                             + 
                                                                             ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hfed6d469__0) 
                                                                              + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h923c14b0__0))) 
                                                                            >> 1U)))) 
                                                        << 0x3cU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h9df4c37f__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h77fac5d4__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h9231e9f0__0))) 
                                                                               >> 1U)))) 
                                                           << 0x3bU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2da13222__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_he2a75b78__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h926c20eb__0))) 
                                                                                >> 1U)))) 
                                                              << 0x3aU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h061a1203__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h8f048c24__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h92fe3325__0))) 
                                                                                >> 1U)))) 
                                                                 << 0x39U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hea1c9a26__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h19855ad7__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h93a6a7e2__0))) 
                                                                                >> 1U)))) 
                                                                    << 0x38U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h98ed3d39__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hdf82b8e9__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h93a624bf__0))) 
                                                                                >> 1U)))) 
                                                                       << 0x37U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h7a2f30cd__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hf387a0e6__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h93f9b4b1__0))) 
                                                                                >> 1U)))) 
                                                                          << 0x36U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2dac34e0__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h9a520481__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h858d9d64__0))) 
                                                                                >> 1U)))) 
                                                                             << 0x35U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h462853be__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h84011f51__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h9332e11a__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x34U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h57b50c18__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hb77e751c__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h93f924b6__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h77011e7a__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h77322aaf__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h9089d6c1__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h62c46f11__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h7b72bb79__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h9da1e37f__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_ha2170dd2__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc3a9f6a4__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_hcdde0a68__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h75b008ae__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h6785db90__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h71c1834f__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc33c5a8d__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hf09b607f__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h71d4904b__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h5b1a9b90__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h20c961ed__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h77d9de20__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h3baca206__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc9cb535a__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_hb6bd604c__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h4c57f80c__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h910ee96d__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_hb695f388__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hcc5549a8__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h861f003f__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h9de77365__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h754aa87c__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h3ff8e4ab__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h93f2be61__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hb846d0c9__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h29363bad__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h306a6a58__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hcd5f1f47__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hf6b58b31__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h0e20c3c0__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hf28b1132__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2293c5ec__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h08f9c298__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hb81746dc__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h61bbf569__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h250c6531__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h5af6849f__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h87e58f54__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h713d223d__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hb331892b__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2ad1a3be__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_hb1bfca7d__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hb9f444a8__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h762eaf21__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_hb54dd326__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h39b4c7bf__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hdd5ccc38__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_hb5e1cb7c__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_ha6227958__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_haa5cb7b2__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h33460c5b__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h8812634f__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h77bf21f3__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h7c92ec48__0))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x40000000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h60c8110f__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h30c927e9__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h726a40b0__0))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x20000000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hfcd6c4ac__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h02009be1__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h06feccf1__0))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x10000000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hf58bf016__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h36e10959__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h8a923811__0))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x8000000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hd1aa55ff__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_haafbe950__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_hb702d3bd__0))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x4000000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h9e361176__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hb23deeef__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h8aeea9c2__0))) 
                                                                                << 0x19U)) 
                                                                                | ((0x2000000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hee3313ff__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h468398e0__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h302d3dfc__0))) 
                                                                                << 0x18U)) 
                                                                                | ((0x1000000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h1eb3cbba__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h91c34cf0__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h30de2b0b__0))) 
                                                                                << 0x17U)) 
                                                                                | ((0x800000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h34c180be__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_haec3d02e__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h0a918fb8__0))) 
                                                                                << 0x16U)) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h89388e8b__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h5f4165df__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h8a93a078__0))) 
                                                                                << 0x15U)) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h85b3d8e3__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2ceb216c__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h085d339d__0))) 
                                                                                << 0x14U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h86123f54__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h3e1397a5__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h725e3851__0))) 
                                                                                << 0x13U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hffef898e__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h4c382d1d__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h4a8fccbe__0))) 
                                                                                << 0x12U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h7862e207__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h5df49220__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h7344c59d__0))) 
                                                                                << 0x11U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_he38e82e0__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2945cf4a__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h3e4bb97b__0))) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hf4fc9c2f__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hf5909ca0__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h3063e93c__0))) 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h4cefb86b__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_ha49664c9__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h0b39ee90__0))) 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h09b1e60b__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h3936b2df__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h353d9678__0))) 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h5c4e3982__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hdee03da1__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h0fbcbbc1__0))) 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h8dfa88b4__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h58fe185d__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h0cf34e91__0))) 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h565a82e6__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h8c722637__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h3c9bc662__0))) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h367ff427__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h3c757d80__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h35453b9d__0))) 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h780b55a2__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h72c26578__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h0c68db2b__0))) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h43d03c3f__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h530ff5b8__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h31fcdf7c__0))) 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h1374dad2__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_he2f9c30f__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h34b93f44__0))) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc688b556__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h150e1b73__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h09df8035__0))) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h5cc0ab1a__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hfd010664__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h081042d1__0))) 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc4a9c50a__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hab7e2a1e__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h491c99b4__0))) 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h4ad97a42__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2889053d__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h48b2734f__0))) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_heb306113__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hfc90708c__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h495981c9__0))) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->multiplier__DOT____VdfgTmp_ha2465dce__0) 
                                                                                + 
                                                                                ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h7797be24__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_h34fdc71e__0)))) 
                                                                                | (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hcb58fae3__0) 
                                                                                + (IData)(vlSelf->multiplier__DOT____VdfgTmp_ha2ee1e1c__0)) 
                                                                                >> 1U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->multiplier__DOT__cs6 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c6, 1U);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice0__DOT__b 
        = vlSelf->multiplier__DOT____VdfgTmp_h19821f64__0;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice0__DOT__P 
        = vlSelf->multiplier__DOT____VdfgTmp_h19821f64__0;
    vlSelf->multiplier__DOT__s8 = (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2492b3e8__0)) 
                                    << 0x3fU) | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h63a80e59__0)) 
                                                  << 0x3eU) 
                                                 | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h800b5501__0)) 
                                                     << 0x3dU) 
                                                    | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h7a68026c__0)) 
                                                        << 0x3cU) 
                                                       | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h6e36fa40__0)) 
                                                           << 0x3bU) 
                                                          | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h3ba0f35b__0)) 
                                                              << 0x3aU) 
                                                             | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h723222c4__0)) 
                                                                 << 0x39U) 
                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h7d110dbe__0)) 
                                                                    << 0x38U) 
                                                                   | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_hac454be7__0)) 
                                                                       << 0x37U) 
                                                                      | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_ha9863ede__0)) 
                                                                          << 0x36U) 
                                                                         | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h3d27c0cf__0)) 
                                                                             << 0x35U) 
                                                                            | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc4e33170__0)) 
                                                                                << 0x34U) 
                                                                               | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc6da55f3__0)) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_hadf3bd4c__0)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_hb95704e9__0)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h53d95a73__0)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h17ba66ee__0)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_hb70ed9c8__0)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_ha55d2490__0)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h72597141__0)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h719ebafd__0)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h8686efda__0)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc42d27ee__0)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h185351e1__0)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h83910654__0)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h417e4b81__0)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_hecc01515__0)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h0ddde22f__0)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_hb73a46ea__0)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h946208e3__0)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h8e267653__0)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->multiplier__DOT____VdfgTmp_h30a0700f__0)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h56ad6975__0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h1c555a0c__0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc77b10c3__0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_ha89a0fd9__0) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h61c4b768__0) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h5033ba74__0) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2709dbf5__0) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h4371ae3b__0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h4c187e80__0) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h8ed276d3__0) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h859124f6__0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h4329d74c__0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h6c96af09__0) 
                                                                                << 0x13U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_heb4ce7c2__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h5c0ca307__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_he1b30d21__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hf80c8d7b__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h9c288473__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hdd2e7c48__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h0f7f4f16__0) 
                                                                                << 0xcU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h222886c6__0) 
                                                                                << 0xbU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_ha22fadd2__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h557c9d7b__0) 
                                                                                << 9U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hf23c2413__0) 
                                                                                << 8U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hf970aed7__0) 
                                                                                << 7U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h86849b2c__0) 
                                                                                << 6U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_he0298dca__0) 
                                                                                << 5U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h1f7c1671__0) 
                                                                                << 4U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_ha05717d3__0) 
                                                                                << 3U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hf768c16e__0) 
                                                                                << 2U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h441a9aa6__0) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->multiplier__DOT____VdfgTmp_h12a493fe__0))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->multiplier__DOT__cs8 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c8, 1U);
    multiplier__DOT____VdfgTmp_h3e472d0c__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x3fU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x3fU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x3fU)))));
    multiplier__DOT____VdfgTmp_h398165f9__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x3eU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x3eU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x3eU)))));
    multiplier__DOT____VdfgTmp_h3984d4de__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x3dU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x3dU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x3dU)))));
    multiplier__DOT____VdfgTmp_hfcae7c71__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x3cU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x3cU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x3cU)))));
    multiplier__DOT____VdfgTmp_h0d2fc7bb__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x3bU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x3bU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x3bU)))));
    multiplier__DOT____VdfgTmp_h0d606286__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x3aU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x3aU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x3aU)))));
    multiplier__DOT____VdfgTmp_hf15541c7__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x39U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x39U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x39U)))));
    multiplier__DOT____VdfgTmp_he63fdf78__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x38U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x38U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x38U)))));
    multiplier__DOT____VdfgTmp_he9672031__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x37U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x37U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x37U)))));
    multiplier__DOT____VdfgTmp_hee226eda__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x36U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x36U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x36U)))));
    multiplier__DOT____VdfgTmp_he573b149__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x35U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x35U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x35U)))));
    multiplier__DOT____VdfgTmp_hfdd3bcec__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x34U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x34U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x34U)))));
    multiplier__DOT____VdfgTmp_hfd4b1944__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x33U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x33U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x33U)))));
    multiplier__DOT____VdfgTmp_hf76cb2a1__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x32U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x32U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x32U)))));
    multiplier__DOT____VdfgTmp_h3c43eb02__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x31U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x31U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x31U)))));
    multiplier__DOT____VdfgTmp_h83742b49__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x30U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x30U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x30U)))));
    multiplier__DOT____VdfgTmp_h8fc9e8b7__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x2fU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x2fU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x2fU)))));
    multiplier__DOT____VdfgTmp_h83b53b52__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x2eU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x2eU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x2eU)))));
    multiplier__DOT____VdfgTmp_ha86f375f__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x2dU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x2dU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x2dU)))));
    multiplier__DOT____VdfgTmp_h450fa1c8__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x2cU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x2cU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x2cU)))));
    multiplier__DOT____VdfgTmp_h5ff26d4c__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x2bU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x2bU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x2bU)))));
    multiplier__DOT____VdfgTmp_h40bc68b3__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x2aU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x2aU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x2aU)))));
    multiplier__DOT____VdfgTmp_hdf27c16e__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x29U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x29U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x29U)))));
    multiplier__DOT____VdfgTmp_h048f677b__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x28U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x28U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x28U)))));
    multiplier__DOT____VdfgTmp_h0624ef8e__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x27U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x27U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x27U)))));
    multiplier__DOT____VdfgTmp_h38d26c75__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x26U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x26U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x26U)))));
    multiplier__DOT____VdfgTmp_h02f274d0__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x25U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x25U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x25U)))));
    multiplier__DOT____VdfgTmp_h04fa74b9__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x24U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x24U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x24U)))));
    multiplier__DOT____VdfgTmp_h1a0a272f__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x23U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x23U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x23U)))));
    multiplier__DOT____VdfgTmp_hd4223144__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x22U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x22U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x22U)))));
    multiplier__DOT____VdfgTmp_h80868a1f__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x21U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x21U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x21U)))));
    multiplier__DOT____VdfgTmp_h2486dbde__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x20U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x20U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x20U)))));
    multiplier__DOT____VdfgTmp_h3ca0686e__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x1fU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x1fU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x1fU)))));
    multiplier__DOT____VdfgTmp_h4ffef471__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x1eU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x1eU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x1eU)))));
    multiplier__DOT____VdfgTmp_he7cbdc10__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x1dU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x1dU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x1dU)))));
    multiplier__DOT____VdfgTmp_he626b5f9__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x1cU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x1cU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x1cU)))));
    multiplier__DOT____VdfgTmp_hf8229d77__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x1bU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x1bU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x1bU)))));
    multiplier__DOT____VdfgTmp_hfe0f3858__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x1aU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x1aU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x1aU)))));
    multiplier__DOT____VdfgTmp_hdc5d2a1f__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x19U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x19U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x19U)))));
    multiplier__DOT____VdfgTmp_he2bb92e6__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x18U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x18U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x18U)))));
    multiplier__DOT____VdfgTmp_he5ffdd7d__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x17U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x17U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x17U)))));
    multiplier__DOT____VdfgTmp_he626a5ee__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x16U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x16U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x16U)))));
    multiplier__DOT____VdfgTmp_he70aa9d9__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x15U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x15U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x15U)))));
    multiplier__DOT____VdfgTmp_h4fa72ea0__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x14U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x14U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x14U)))));
    multiplier__DOT____VdfgTmp_h23da217c__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x13U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x13U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x13U)))));
    multiplier__DOT____VdfgTmp_h2516e977__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x12U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x12U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x12U)))));
    multiplier__DOT____VdfgTmp_h29bd2afe__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x11U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x11U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x11U)))));
    multiplier__DOT____VdfgTmp_hd1e8d0df__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0x10U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0x10U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0x10U)))));
    multiplier__DOT____VdfgTmp_h867c4fd1__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0xfU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0xfU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0xfU)))));
    multiplier__DOT____VdfgTmp_h99f0bfee__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0xeU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0xeU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0xeU)))));
    multiplier__DOT____VdfgTmp_h87d6f989__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0xdU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0xdU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0xdU)))));
    multiplier__DOT____VdfgTmp_h881043e0__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0xcU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0xcU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0xcU)))));
    multiplier__DOT____VdfgTmp_h0eaa55f8__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0xbU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0xbU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0xbU)))));
    multiplier__DOT____VdfgTmp_h0025e177__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 0xaU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 0xaU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 0xaU)))));
    multiplier__DOT____VdfgTmp_he7fd5046__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 9U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 9U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 9U)))));
    multiplier__DOT____VdfgTmp_hd73ca61f__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 8U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 8U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 8U)))));
    multiplier__DOT____VdfgTmp_hde9e965d__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 7U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 7U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 7U)))));
    multiplier__DOT____VdfgTmp_hdfb61a5e__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 6U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 6U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 6U)))));
    multiplier__DOT____VdfgTmp_hc12c5389__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 5U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 5U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 5U)))));
    multiplier__DOT____VdfgTmp_h96e4e078__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 4U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 4U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 4U)))));
    multiplier__DOT____VdfgTmp_h8ea9fc50__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 3U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 3U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 3U)))));
    multiplier__DOT____VdfgTmp_h81a6c77b__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 2U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 2U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 2U)))));
    multiplier__DOT____VdfgTmp_ha15c2bc2__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs5 
                                                         >> 1U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs6 
                                                            >> 1U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs7 
                                                              >> 1U)))));
    vlSelf->multiplier__DOT__c9 = (((QData)((IData)(
                                                    (1U 
                                                     & (((1U 
                                                          & (IData)(
                                                                    (vlSelf->multiplier__DOT__cs5 
                                                                     >> 0x3fU))) 
                                                         + 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->multiplier__DOT__cs6 
                                                                      >> 0x3fU))) 
                                                          + 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->multiplier__DOT__cs7 
                                                                      >> 0x3fU))))) 
                                                        >> 1U)))) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  (1U 
                                                                   & (((1U 
                                                                        & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x3eU))) 
                                                                       + 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x3eU))) 
                                                                        + 
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x3eU))))) 
                                                                      >> 1U)))) 
                                                  << 0x3eU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (((1U 
                                                                           & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x3dU))) 
                                                                          + 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x3dU))) 
                                                                           + 
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x3dU))))) 
                                                                         >> 1U)))) 
                                                     << 0x3dU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (((1U 
                                                                              & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x3cU))) 
                                                                             + 
                                                                             ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x3cU))) 
                                                                              + 
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x3cU))))) 
                                                                            >> 1U)))) 
                                                        << 0x3cU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x3bU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x3bU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x3bU))))) 
                                                                               >> 1U)))) 
                                                           << 0x3bU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x3aU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x3aU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x3aU))))) 
                                                                                >> 1U)))) 
                                                              << 0x3aU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x39U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x39U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x39U))))) 
                                                                                >> 1U)))) 
                                                                 << 0x39U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x38U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x38U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x38U))))) 
                                                                                >> 1U)))) 
                                                                    << 0x38U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x37U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x37U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x37U))))) 
                                                                                >> 1U)))) 
                                                                       << 0x37U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x36U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x36U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x36U))))) 
                                                                                >> 1U)))) 
                                                                          << 0x36U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x35U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x35U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x35U))))) 
                                                                                >> 1U)))) 
                                                                             << 0x35U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x34U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x34U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x34U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x34U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x33U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x33U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x33U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x32U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x32U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x32U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x31U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x31U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x31U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x30U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x30U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x30U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x2fU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x2fU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x2fU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x2eU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x2eU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x2eU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x2dU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x2dU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x2dU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x2cU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x2cU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x2cU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x2bU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x2bU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x2bU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x2aU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x2aU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x2aU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x29U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x29U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x29U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x28U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x28U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x28U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x27U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x27U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x27U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x26U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x26U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x26U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x25U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x25U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x25U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x24U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x24U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x24U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x23U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x23U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x23U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x22U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x22U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x22U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x21U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x21U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x21U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x20U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x20U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x20U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x1fU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x1fU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x1fU))))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x40000000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x1eU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x1eU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x1eU))))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x20000000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x1dU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x1dU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x1dU))))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x10000000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x1cU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x1cU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x1cU))))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x8000000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x1bU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x1bU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x1bU))))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x4000000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x1aU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x1aU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x1aU))))) 
                                                                                << 0x19U)) 
                                                                                | ((0x2000000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x19U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x19U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x19U))))) 
                                                                                << 0x18U)) 
                                                                                | ((0x1000000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x18U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x18U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x18U))))) 
                                                                                << 0x17U)) 
                                                                                | ((0x800000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x17U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x17U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x17U))))) 
                                                                                << 0x16U)) 
                                                                                | ((0x400000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x16U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x16U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x16U))))) 
                                                                                << 0x15U)) 
                                                                                | ((0x200000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x15U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x15U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x15U))))) 
                                                                                << 0x14U)) 
                                                                                | ((0x100000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x14U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x14U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x14U))))) 
                                                                                << 0x13U)) 
                                                                                | ((0x80000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x13U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x13U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x13U))))) 
                                                                                << 0x12U)) 
                                                                                | ((0x40000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x12U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x12U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x12U))))) 
                                                                                << 0x11U)) 
                                                                                | ((0x20000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x11U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x11U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x11U))))) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0x10U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0x10U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0x10U))))) 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0xfU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0xfU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0xfU))))) 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0xeU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0xeU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0xeU))))) 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0xdU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0xdU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0xdU))))) 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0xcU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0xcU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0xcU))))) 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0xbU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0xbU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0xbU))))) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 0xaU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 0xaU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 0xaU))))) 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 9U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 9U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 9U))))) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 8U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 8U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 8U))))) 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 7U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 7U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 7U))))) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 6U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 6U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 6U))))) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 5U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 5U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 5U))))) 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 4U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 4U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 4U))))) 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 3U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 3U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 3U))))) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 2U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 2U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 2U))))) 
                                                                                << 1U)) 
                                                                                | (2U 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs5 
                                                                                >> 1U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs6 
                                                                                >> 1U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs7 
                                                                                >> 1U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    multiplier__DOT____VdfgTmp_h1959d241__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2492b3e8__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h3e472d0c__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x3fU)))));
    multiplier__DOT____VdfgTmp_hafb35345__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h63a80e59__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h398165f9__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x3eU)))));
    multiplier__DOT____VdfgTmp_ha1cb1a10__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h800b5501__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h3984d4de__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x3dU)))));
    multiplier__DOT____VdfgTmp_he662753d__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h7a68026c__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hfcae7c71__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x3cU)))));
    multiplier__DOT____VdfgTmp_h3602f837__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h6e36fa40__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h0d2fc7bb__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x3bU)))));
    multiplier__DOT____VdfgTmp_h8a01e037__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h3ba0f35b__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h0d606286__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x3aU)))));
    multiplier__DOT____VdfgTmp_h400b1f45__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h723222c4__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hf15541c7__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x39U)))));
    multiplier__DOT____VdfgTmp_hb4f1c945__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h7d110dbe__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_he63fdf78__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x38U)))));
    multiplier__DOT____VdfgTmp_h4db4002f__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hac454be7__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_he9672031__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x37U)))));
    multiplier__DOT____VdfgTmp_h31e3c6b5__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_ha9863ede__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hee226eda__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x36U)))));
    multiplier__DOT____VdfgTmp_h2f8f8731__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h3d27c0cf__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_he573b149__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x35U)))));
    multiplier__DOT____VdfgTmp_h69f98fcb__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc4e33170__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hfdd3bcec__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x34U)))));
    multiplier__DOT____VdfgTmp_hfd2cee99__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc6da55f3__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hfd4b1944__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x33U)))));
    multiplier__DOT____VdfgTmp_hbd92cf63__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hadf3bd4c__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hf76cb2a1__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x32U)))));
    multiplier__DOT____VdfgTmp_h86e54069__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hb95704e9__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h3c43eb02__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x31U)))));
    multiplier__DOT____VdfgTmp_hd79b2324__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h53d95a73__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h83742b49__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x30U)))));
    multiplier__DOT____VdfgTmp_h21a3b043__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h17ba66ee__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h8fc9e8b7__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x2fU)))));
    multiplier__DOT____VdfgTmp_hdf4ec7d6__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hb70ed9c8__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h83b53b52__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x2eU)))));
    multiplier__DOT____VdfgTmp_h34c69624__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_ha55d2490__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_ha86f375f__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x2dU)))));
    multiplier__DOT____VdfgTmp_hed5317e5__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h72597141__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h450fa1c8__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x2cU)))));
    multiplier__DOT____VdfgTmp_hc527462f__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h719ebafd__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h5ff26d4c__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x2bU)))));
    multiplier__DOT____VdfgTmp_hd87f4ffb__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h8686efda__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h40bc68b3__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x2aU)))));
    multiplier__DOT____VdfgTmp_hfa939436__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc42d27ee__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hdf27c16e__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x29U)))));
    multiplier__DOT____VdfgTmp_h0f970768__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h185351e1__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h048f677b__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x28U)))));
    multiplier__DOT____VdfgTmp_h684cd6ae__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h83910654__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h0624ef8e__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x27U)))));
    multiplier__DOT____VdfgTmp_hcdf266c4__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h417e4b81__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h38d26c75__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x26U)))));
    multiplier__DOT____VdfgTmp_hc932cfd4__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hecc01515__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h02f274d0__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x25U)))));
    multiplier__DOT____VdfgTmp_hd2d5e8b9__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h0ddde22f__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h04fa74b9__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x24U)))));
    multiplier__DOT____VdfgTmp_ha9145920__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hb73a46ea__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h1a0a272f__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x23U)))));
    multiplier__DOT____VdfgTmp_hf3b5dd45__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h946208e3__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hd4223144__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x22U)))));
    multiplier__DOT____VdfgTmp_h5d2e1708__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h8e267653__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h80868a1f__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x21U)))));
    multiplier__DOT____VdfgTmp_h76a1425e__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h30a0700f__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h2486dbde__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x20U)))));
    multiplier__DOT____VdfgTmp_h11f5224d__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h56ad6975__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h3ca0686e__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x1fU)))));
    multiplier__DOT____VdfgTmp_h8e6ecd35__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h1c555a0c__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h4ffef471__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x1eU)))));
    multiplier__DOT____VdfgTmp_he2c821aa__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc77b10c3__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_he7cbdc10__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x1dU)))));
    multiplier__DOT____VdfgTmp_h180e5525__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_ha89a0fd9__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_he626b5f9__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x1cU)))));
    multiplier__DOT____VdfgTmp_h80a9b664__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h61c4b768__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hf8229d77__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x1bU)))));
    multiplier__DOT____VdfgTmp_h90242e51__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h5033ba74__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hfe0f3858__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x1aU)))));
    multiplier__DOT____VdfgTmp_h4f0e6e92__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2709dbf5__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hdc5d2a1f__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x19U)))));
    multiplier__DOT____VdfgTmp_h055e9227__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h4371ae3b__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_he2bb92e6__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x18U)))));
    multiplier__DOT____VdfgTmp_h7a8bbfed__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h4c187e80__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_he5ffdd7d__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x17U)))));
    multiplier__DOT____VdfgTmp_h462ed107__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h8ed276d3__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_he626a5ee__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x16U)))));
    multiplier__DOT____VdfgTmp_h7c6a0bd9__0 = (1U & 
                                               ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h859124f6__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_he70aa9d9__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x15U)))));
    multiplier__DOT____VdfgTmp_h230fc375__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h4329d74c__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h4fa72ea0__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x14U)))));
    multiplier__DOT____VdfgTmp_hae179ebe__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h6c96af09__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h23da217c__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x13U)))));
    multiplier__DOT____VdfgTmp_h19141b4c__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_heb4ce7c2__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h2516e977__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x12U)))));
    multiplier__DOT____VdfgTmp_h23ad84a0__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h5c0ca307__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h29bd2afe__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x11U)))));
    multiplier__DOT____VdfgTmp_h3a7b8da1__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_he1b30d21__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hd1e8d0df__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0x10U)))));
    multiplier__DOT____VdfgTmp_h1bf3dac0__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hf80c8d7b__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h867c4fd1__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0xfU)))));
    multiplier__DOT____VdfgTmp_h812ee6cf__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h9c288473__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h99f0bfee__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0xeU)))));
    multiplier__DOT____VdfgTmp_hc8fb5f0e__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hdd2e7c48__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h87d6f989__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0xdU)))));
    multiplier__DOT____VdfgTmp_he997c3e9__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h0f7f4f16__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h881043e0__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0xcU)))));
    multiplier__DOT____VdfgTmp_h7ff053c7__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h222886c6__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h0eaa55f8__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0xbU)))));
    multiplier__DOT____VdfgTmp_he31ae5b0__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_ha22fadd2__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h0025e177__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 0xaU)))));
    multiplier__DOT____VdfgTmp_h10bb38ff__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h557c9d7b__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_he7fd5046__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 9U)))));
    multiplier__DOT____VdfgTmp_h22ae12b8__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hf23c2413__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hd73ca61f__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 8U)))));
    multiplier__DOT____VdfgTmp_hff1a4f0a__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hf970aed7__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hde9e965d__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 7U)))));
    multiplier__DOT____VdfgTmp_h6fa8b038__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h86849b2c__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hdfb61a5e__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 6U)))));
    multiplier__DOT____VdfgTmp_h8789f6b0__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_he0298dca__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hc12c5389__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 5U)))));
    multiplier__DOT____VdfgTmp_h2a001c41__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h1f7c1671__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h96e4e078__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 4U)))));
    multiplier__DOT____VdfgTmp_h982eb522__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_ha05717d3__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h8ea9fc50__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 3U)))));
    multiplier__DOT____VdfgTmp_h55827a18__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hf768c16e__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h81a6c77b__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 2U)))));
    vlSelf->multiplier__DOT__s9 = (((QData)((IData)(multiplier__DOT____VdfgTmp_h3e472d0c__0)) 
                                    << 0x3fU) | (((QData)((IData)(multiplier__DOT____VdfgTmp_h398165f9__0)) 
                                                  << 0x3eU) 
                                                 | (((QData)((IData)(multiplier__DOT____VdfgTmp_h3984d4de__0)) 
                                                     << 0x3dU) 
                                                    | (((QData)((IData)(multiplier__DOT____VdfgTmp_hfcae7c71__0)) 
                                                        << 0x3cU) 
                                                       | (((QData)((IData)(multiplier__DOT____VdfgTmp_h0d2fc7bb__0)) 
                                                           << 0x3bU) 
                                                          | (((QData)((IData)(multiplier__DOT____VdfgTmp_h0d606286__0)) 
                                                              << 0x3aU) 
                                                             | (((QData)((IData)(multiplier__DOT____VdfgTmp_hf15541c7__0)) 
                                                                 << 0x39U) 
                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_he63fdf78__0)) 
                                                                    << 0x38U) 
                                                                   | (((QData)((IData)(multiplier__DOT____VdfgTmp_he9672031__0)) 
                                                                       << 0x37U) 
                                                                      | (((QData)((IData)(multiplier__DOT____VdfgTmp_hee226eda__0)) 
                                                                          << 0x36U) 
                                                                         | (((QData)((IData)(multiplier__DOT____VdfgTmp_he573b149__0)) 
                                                                             << 0x35U) 
                                                                            | (((QData)((IData)(multiplier__DOT____VdfgTmp_hfdd3bcec__0)) 
                                                                                << 0x34U) 
                                                                               | (((QData)((IData)(multiplier__DOT____VdfgTmp_hfd4b1944__0)) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hf76cb2a1__0)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h3c43eb02__0)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h83742b49__0)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h8fc9e8b7__0)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h83b53b52__0)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_ha86f375f__0)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h450fa1c8__0)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h5ff26d4c__0)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h40bc68b3__0)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hdf27c16e__0)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h048f677b__0)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h0624ef8e__0)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h38d26c75__0)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h02f274d0__0)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h04fa74b9__0)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h1a0a272f__0)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hd4223144__0)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h80868a1f__0)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h2486dbde__0)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(multiplier__DOT____VdfgTmp_h3ca0686e__0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h4ffef471__0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_he7cbdc10__0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_he626b5f9__0) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hf8229d77__0) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hfe0f3858__0) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hdc5d2a1f__0) 
                                                                                << 0x19U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_he2bb92e6__0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_he5ffdd7d__0) 
                                                                                << 0x17U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_he626a5ee__0) 
                                                                                << 0x16U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_he70aa9d9__0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h4fa72ea0__0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h23da217c__0) 
                                                                                << 0x13U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h2516e977__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h29bd2afe__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hd1e8d0df__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h867c4fd1__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h99f0bfee__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h87d6f989__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h881043e0__0) 
                                                                                << 0xcU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h0eaa55f8__0) 
                                                                                << 0xbU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h0025e177__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_he7fd5046__0) 
                                                                                << 9U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hd73ca61f__0) 
                                                                                << 8U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hde9e965d__0) 
                                                                                << 7U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hdfb61a5e__0) 
                                                                                << 6U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hc12c5389__0) 
                                                                                << 5U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h96e4e078__0) 
                                                                                << 4U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h8ea9fc50__0) 
                                                                                << 3U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h81a6c77b__0) 
                                                                                << 2U) 
                                                                                | ((IData)(multiplier__DOT____VdfgTmp_ha15c2bc2__0) 
                                                                                << 1U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    multiplier__DOT____VdfgTmp_h44170901__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h441a9aa6__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_ha15c2bc2__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs8 
                                                              >> 1U)))));
    vlSelf->multiplier__DOT__c10 = (((QData)((IData)(
                                                     (1U 
                                                      & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2492b3e8__0) 
                                                          + 
                                                          ((IData)(multiplier__DOT____VdfgTmp_h3e472d0c__0) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->multiplier__DOT__cs8 
                                                                       >> 0x3fU))))) 
                                                         >> 1U)))) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   (1U 
                                                                    & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h63a80e59__0) 
                                                                        + 
                                                                        ((IData)(multiplier__DOT____VdfgTmp_h398165f9__0) 
                                                                         + 
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x3eU))))) 
                                                                       >> 1U)))) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h800b5501__0) 
                                                                           + 
                                                                           ((IData)(multiplier__DOT____VdfgTmp_h3984d4de__0) 
                                                                            + 
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x3dU))))) 
                                                                          >> 1U)))) 
                                                      << 0x3dU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h7a68026c__0) 
                                                                              + 
                                                                              ((IData)(multiplier__DOT____VdfgTmp_hfcae7c71__0) 
                                                                               + 
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x3cU))))) 
                                                                             >> 1U)))) 
                                                         << 0x3cU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h6e36fa40__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h0d2fc7bb__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x3bU))))) 
                                                                                >> 1U)))) 
                                                            << 0x3bU) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h3ba0f35b__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h0d606286__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x3aU))))) 
                                                                                >> 1U)))) 
                                                               << 0x3aU) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h723222c4__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hf15541c7__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x39U))))) 
                                                                                >> 1U)))) 
                                                                  << 0x39U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h7d110dbe__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_he63fdf78__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x38U))))) 
                                                                                >> 1U)))) 
                                                                     << 0x38U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hac454be7__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_he9672031__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x37U))))) 
                                                                                >> 1U)))) 
                                                                        << 0x37U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_ha9863ede__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hee226eda__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x36U))))) 
                                                                                >> 1U)))) 
                                                                           << 0x36U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h3d27c0cf__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_he573b149__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x35U))))) 
                                                                                >> 1U)))) 
                                                                              << 0x35U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc4e33170__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hfdd3bcec__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x34U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x34U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc6da55f3__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hfd4b1944__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x33U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hadf3bd4c__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hf76cb2a1__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x32U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hb95704e9__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h3c43eb02__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x31U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h53d95a73__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h83742b49__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x30U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h17ba66ee__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h8fc9e8b7__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x2fU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hb70ed9c8__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h83b53b52__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x2eU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_ha55d2490__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_ha86f375f__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x2dU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h72597141__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h450fa1c8__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x2cU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h719ebafd__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h5ff26d4c__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x2bU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h8686efda__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h40bc68b3__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x2aU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc42d27ee__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hdf27c16e__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x29U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h185351e1__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h048f677b__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x28U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h83910654__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h0624ef8e__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x27U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h417e4b81__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h38d26c75__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x26U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hecc01515__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h02f274d0__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x25U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h0ddde22f__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h04fa74b9__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x24U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hb73a46ea__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h1a0a272f__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x23U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h946208e3__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hd4223144__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x22U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h8e267653__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h80868a1f__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x21U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h30a0700f__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h2486dbde__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x20U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h56ad6975__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h3ca0686e__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x1fU))))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x40000000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h1c555a0c__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h4ffef471__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x1eU))))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x20000000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_hc77b10c3__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_he7cbdc10__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x1dU))))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x10000000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_ha89a0fd9__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_he626b5f9__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x1cU))))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x8000000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h61c4b768__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hf8229d77__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x1bU))))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x4000000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h5033ba74__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hfe0f3858__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x1aU))))) 
                                                                                << 0x19U)) 
                                                                                | ((0x2000000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h2709dbf5__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hdc5d2a1f__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x19U))))) 
                                                                                << 0x18U)) 
                                                                                | ((0x1000000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h4371ae3b__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_he2bb92e6__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x18U))))) 
                                                                                << 0x17U)) 
                                                                                | ((0x800000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h4c187e80__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_he5ffdd7d__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x17U))))) 
                                                                                << 0x16U)) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h8ed276d3__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_he626a5ee__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x16U))))) 
                                                                                << 0x15U)) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h859124f6__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_he70aa9d9__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x15U))))) 
                                                                                << 0x14U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h4329d74c__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h4fa72ea0__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x14U))))) 
                                                                                << 0x13U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h6c96af09__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h23da217c__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x13U))))) 
                                                                                << 0x12U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_heb4ce7c2__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h2516e977__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x12U))))) 
                                                                                << 0x11U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h5c0ca307__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h29bd2afe__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x11U))))) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_he1b30d21__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hd1e8d0df__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0x10U))))) 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hf80c8d7b__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h867c4fd1__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0xfU))))) 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h9c288473__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h99f0bfee__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0xeU))))) 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hdd2e7c48__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h87d6f989__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0xdU))))) 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h0f7f4f16__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h881043e0__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0xcU))))) 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h222886c6__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h0eaa55f8__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0xbU))))) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_ha22fadd2__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h0025e177__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 0xaU))))) 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h557c9d7b__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_he7fd5046__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 9U))))) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hf23c2413__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hd73ca61f__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 8U))))) 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hf970aed7__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hde9e965d__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 7U))))) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h86849b2c__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hdfb61a5e__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 6U))))) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_he0298dca__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hc12c5389__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 5U))))) 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h1f7c1671__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h96e4e078__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 4U))))) 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_ha05717d3__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h8ea9fc50__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 3U))))) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hf768c16e__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h81a6c77b__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 2U))))) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(multiplier__DOT____VdfgTmp_h441a9aa6__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_ha15c2bc2__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs8 
                                                                                >> 1U)))))) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h12a493fe__0) 
                                                                                >> 1U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->multiplier__DOT__cs9 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c9, 1U);
    vlSelf->multiplier__DOT__s10 = (((QData)((IData)(multiplier__DOT____VdfgTmp_h1959d241__0)) 
                                     << 0x3fU) | (((QData)((IData)(multiplier__DOT____VdfgTmp_hafb35345__0)) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(multiplier__DOT____VdfgTmp_ha1cb1a10__0)) 
                                                      << 0x3dU) 
                                                     | (((QData)((IData)(multiplier__DOT____VdfgTmp_he662753d__0)) 
                                                         << 0x3cU) 
                                                        | (((QData)((IData)(multiplier__DOT____VdfgTmp_h3602f837__0)) 
                                                            << 0x3bU) 
                                                           | (((QData)((IData)(multiplier__DOT____VdfgTmp_h8a01e037__0)) 
                                                               << 0x3aU) 
                                                              | (((QData)((IData)(multiplier__DOT____VdfgTmp_h400b1f45__0)) 
                                                                  << 0x39U) 
                                                                 | (((QData)((IData)(multiplier__DOT____VdfgTmp_hb4f1c945__0)) 
                                                                     << 0x38U) 
                                                                    | (((QData)((IData)(multiplier__DOT____VdfgTmp_h4db4002f__0)) 
                                                                        << 0x37U) 
                                                                       | (((QData)((IData)(multiplier__DOT____VdfgTmp_h31e3c6b5__0)) 
                                                                           << 0x36U) 
                                                                          | (((QData)((IData)(multiplier__DOT____VdfgTmp_h2f8f8731__0)) 
                                                                              << 0x35U) 
                                                                             | (((QData)((IData)(multiplier__DOT____VdfgTmp_h69f98fcb__0)) 
                                                                                << 0x34U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hfd2cee99__0)) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hbd92cf63__0)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h86e54069__0)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hd79b2324__0)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h21a3b043__0)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hdf4ec7d6__0)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h34c69624__0)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hed5317e5__0)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hc527462f__0)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hd87f4ffb__0)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hfa939436__0)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h0f970768__0)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h684cd6ae__0)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hcdf266c4__0)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hc932cfd4__0)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hd2d5e8b9__0)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_ha9145920__0)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hf3b5dd45__0)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h5d2e1708__0)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h76a1425e__0)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(multiplier__DOT____VdfgTmp_h11f5224d__0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h8e6ecd35__0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_he2c821aa__0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h180e5525__0) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h80a9b664__0) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h90242e51__0) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h4f0e6e92__0) 
                                                                                << 0x19U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h055e9227__0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h7a8bbfed__0) 
                                                                                << 0x17U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h462ed107__0) 
                                                                                << 0x16U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h7c6a0bd9__0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h230fc375__0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hae179ebe__0) 
                                                                                << 0x13U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h19141b4c__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h23ad84a0__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h3a7b8da1__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h1bf3dac0__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h812ee6cf__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hc8fb5f0e__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_he997c3e9__0) 
                                                                                << 0xcU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h7ff053c7__0) 
                                                                                << 0xbU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_he31ae5b0__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h10bb38ff__0) 
                                                                                << 9U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h22ae12b8__0) 
                                                                                << 8U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hff1a4f0a__0) 
                                                                                << 7U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h6fa8b038__0) 
                                                                                << 6U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h8789f6b0__0) 
                                                                                << 5U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h2a001c41__0) 
                                                                                << 4U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h982eb522__0) 
                                                                                << 3U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h55827a18__0) 
                                                                                << 2U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h44170901__0) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->multiplier__DOT____VdfgTmp_h12a493fe__0))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->multiplier__DOT__cs10 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c10, 1U);
    vlSelf->multiplier__DOT__c11 = (((QData)((IData)(
                                                     (1U 
                                                      & (((1U 
                                                           & (IData)(
                                                                     (vlSelf->multiplier__DOT__cs9 
                                                                      >> 0x3fU))) 
                                                          + 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->multiplier__DOT__cs4 
                                                                       >> 0x3fU))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                       >> 0x3fU))))) 
                                                         >> 1U)))) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   (1U 
                                                                    & (((1U 
                                                                         & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x3eU))) 
                                                                        + 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x3eU))) 
                                                                         + 
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x3eU))))) 
                                                                       >> 1U)))) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x3dU))) 
                                                                           + 
                                                                           ((1U 
                                                                             & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x3dU))) 
                                                                            + 
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x3dU))))) 
                                                                          >> 1U)))) 
                                                      << 0x3dU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (((1U 
                                                                               & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x3cU))) 
                                                                              + 
                                                                              ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x3cU))) 
                                                                               + 
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x3cU))))) 
                                                                             >> 1U)))) 
                                                         << 0x3cU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x3bU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x3bU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x3bU))))) 
                                                                                >> 1U)))) 
                                                            << 0x3bU) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x3aU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x3aU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x3aU))))) 
                                                                                >> 1U)))) 
                                                               << 0x3aU) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x39U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x39U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x39U))))) 
                                                                                >> 1U)))) 
                                                                  << 0x39U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x38U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x38U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x38U))))) 
                                                                                >> 1U)))) 
                                                                     << 0x38U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x37U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x37U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x37U))))) 
                                                                                >> 1U)))) 
                                                                        << 0x37U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x36U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x36U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x36U))))) 
                                                                                >> 1U)))) 
                                                                           << 0x36U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x35U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x35U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x35U))))) 
                                                                                >> 1U)))) 
                                                                              << 0x35U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x34U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x34U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x34U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x34U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x33U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x33U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x33U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x32U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x32U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x32U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x31U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x31U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x31U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x30U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x30U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x30U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x2fU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x2fU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x2fU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x2eU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x2eU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x2eU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x2dU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x2dU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x2dU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x2cU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x2cU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x2cU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x2bU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x2bU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x2bU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x2aU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x2aU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x2aU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x29U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x29U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x29U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x28U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x28U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x28U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x27U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x27U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x27U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x26U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x26U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x26U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x25U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x25U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x25U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x24U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x24U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x24U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x23U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x23U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x23U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x22U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x22U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x22U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x21U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x21U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x21U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x20U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x20U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x20U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x1fU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x1fU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x1fU))))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x40000000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x1eU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x1eU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x1eU))))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x20000000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x1dU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x1dU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x1dU))))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x10000000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x1cU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x1cU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x1cU))))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x8000000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x1bU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x1bU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x1bU))))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x4000000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x1aU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x1aU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x1aU))))) 
                                                                                << 0x19U)) 
                                                                                | ((0x2000000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x19U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x19U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x19U))))) 
                                                                                << 0x18U)) 
                                                                                | ((0x1000000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x18U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x18U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x18U))))) 
                                                                                << 0x17U)) 
                                                                                | ((0x800000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x17U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x17U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x17U))))) 
                                                                                << 0x16U)) 
                                                                                | ((0x400000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x16U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x16U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x16U))))) 
                                                                                << 0x15U)) 
                                                                                | ((0x200000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x15U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x15U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x15U))))) 
                                                                                << 0x14U)) 
                                                                                | ((0x100000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x14U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x14U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x14U))))) 
                                                                                << 0x13U)) 
                                                                                | ((0x80000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x13U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x13U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x13U))))) 
                                                                                << 0x12U)) 
                                                                                | ((0x40000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x12U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x12U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x12U))))) 
                                                                                << 0x11U)) 
                                                                                | ((0x20000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x11U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x11U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x11U))))) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0x10U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0x10U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0x10U))))) 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0xfU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0xfU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0xfU))))) 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0xeU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0xeU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0xeU))))) 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0xdU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0xdU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0xdU))))) 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0xcU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0xcU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0xcU))))) 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0xbU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0xbU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0xbU))))) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 0xaU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 0xaU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 0xaU))))) 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 9U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 9U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 9U))))) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 8U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 8U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 8U))))) 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 7U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 7U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 7U))))) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 6U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 6U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 6U))))) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 5U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 5U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 5U))))) 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 4U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 4U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 4U))))) 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 3U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 3U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 3U))))) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 2U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 2U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 2U))))) 
                                                                                << 1U)) 
                                                                                | (2U 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs9 
                                                                                >> 1U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs4 
                                                                                >> 1U))) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                                                >> 1U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    multiplier__DOT____VdfgTmp_hc369b665__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x3fU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x3fU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x3fU)))));
    multiplier__DOT____VdfgTmp_hd5cf6297__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x3eU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x3eU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x3eU)))));
    multiplier__DOT____VdfgTmp_hcbc4bd87__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x3dU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x3dU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x3dU)))));
    multiplier__DOT____VdfgTmp_hcdc3d7cd__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x3cU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x3cU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x3cU)))));
    multiplier__DOT____VdfgTmp_hb3893ee6__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x3bU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x3bU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x3bU)))));
    multiplier__DOT____VdfgTmp_h965f6348__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x3aU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x3aU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x3aU)))));
    multiplier__DOT____VdfgTmp_hea75a280__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x39U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x39U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x39U)))));
    multiplier__DOT____VdfgTmp_hda12644a__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x38U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x38U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x38U)))));
    multiplier__DOT____VdfgTmp_hccd46034__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x37U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x37U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x37U)))));
    multiplier__DOT____VdfgTmp_hdb77f6bc__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x36U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x36U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x36U)))));
    multiplier__DOT____VdfgTmp_hdd59a3b6__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x35U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x35U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x35U)))));
    multiplier__DOT____VdfgTmp_h03c21412__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x34U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x34U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x34U)))));
    multiplier__DOT____VdfgTmp_hc5338b03__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x33U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x33U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x33U)))));
    multiplier__DOT____VdfgTmp_hca8c0db5__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x32U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x32U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x32U)))));
    multiplier__DOT____VdfgTmp_hcd2bf105__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x31U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x31U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x31U)))));
    multiplier__DOT____VdfgTmp_hcc96a367__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x30U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x30U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x30U)))));
    multiplier__DOT____VdfgTmp_hdaaa360a__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x2fU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x2fU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x2fU)))));
    multiplier__DOT____VdfgTmp_hd51d0da8__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x2eU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x2eU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x2eU)))));
    multiplier__DOT____VdfgTmp_h0b04c588__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x2dU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x2dU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x2dU)))));
    multiplier__DOT____VdfgTmp_h0d871206__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x2cU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x2cU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x2cU)))));
    multiplier__DOT____VdfgTmp_hcabae527__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x2bU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x2bU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x2bU)))));
    multiplier__DOT____VdfgTmp_hcb3e0ff7__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x2aU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x2aU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x2aU)))));
    multiplier__DOT____VdfgTmp_hdd320ed1__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x29U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x29U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x29U)))));
    multiplier__DOT____VdfgTmp_hdc96ddbd__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x28U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x28U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x28U)))));
    multiplier__DOT____VdfgTmp_h05e569e7__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x27U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x27U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x27U)))));
    multiplier__DOT____VdfgTmp_h18f66b11__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x26U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x26U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x26U)))));
    multiplier__DOT____VdfgTmp_h1a25fa09__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x25U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x25U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x25U)))));
    multiplier__DOT____VdfgTmp_h02242b4f__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x24U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x24U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x24U)))));
    multiplier__DOT____VdfgTmp_h0a5a4780__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x23U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x23U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x23U)))));
    multiplier__DOT____VdfgTmp_hcbf52e76__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x22U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x22U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x22U)))));
    multiplier__DOT____VdfgTmp_hcbaadec2__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x21U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x21U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x21U)))));
    multiplier__DOT____VdfgTmp_h198a3b28__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x20U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x20U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x20U)))));
    multiplier__DOT____VdfgTmp_h0b597f67__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x1fU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x1fU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x1fU)))));
    multiplier__DOT____VdfgTmp_h0fc0cdcd__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x1eU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x1eU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x1eU)))));
    multiplier__DOT____VdfgTmp_h0831b649__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x1dU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x1dU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x1dU)))));
    multiplier__DOT____VdfgTmp_hf7f71097__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x1cU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x1cU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x1cU)))));
    multiplier__DOT____VdfgTmp_hb5c69898__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x1bU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x1bU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x1bU)))));
    multiplier__DOT____VdfgTmp_hf6686aaa__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x1aU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x1aU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x1aU)))));
    multiplier__DOT____VdfgTmp_h0f4f4e42__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x19U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x19U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x19U)))));
    multiplier__DOT____VdfgTmp_h0f4ae7e8__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x18U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x18U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x18U)))));
    multiplier__DOT____VdfgTmp_hd9c7bb89__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x17U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x17U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x17U)))));
    multiplier__DOT____VdfgTmp_hf7f002c7__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x16U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x16U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x16U)))));
    multiplier__DOT____VdfgTmp_h095f52ef__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x15U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x15U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x15U)))));
    multiplier__DOT____VdfgTmp_h0c4158d9__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x14U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x14U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x14U)))));
    multiplier__DOT____VdfgTmp_h12618c7e__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x13U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x13U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x13U)))));
    multiplier__DOT____VdfgTmp_h1f50fc58__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x12U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x12U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x12U)))));
    multiplier__DOT____VdfgTmp_h1d3fa1c8__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x11U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x11U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x11U)))));
    multiplier__DOT____VdfgTmp_h068dc682__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0x10U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0x10U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0x10U)))));
    multiplier__DOT____VdfgTmp_hb14056ed__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0xfU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0xfU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0xfU)))));
    multiplier__DOT____VdfgTmp_hcc812cc7__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0xeU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0xeU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0xeU)))));
    multiplier__DOT____VdfgTmp_hd958c447__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0xdU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0xdU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0xdU)))));
    multiplier__DOT____VdfgTmp_hc725d999__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0xcU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0xcU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0xcU)))));
    multiplier__DOT____VdfgTmp_hc102b4ca__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0xbU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0xbU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0xbU)))));
    multiplier__DOT____VdfgTmp_hcf612958__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 0xaU)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 0xaU)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 0xaU)))));
    multiplier__DOT____VdfgTmp_h0cad1f88__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 9U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 9U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 9U)))));
    multiplier__DOT____VdfgTmp_hf09284c2__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 8U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 8U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 8U)))));
    multiplier__DOT____VdfgTmp_h447e09a8__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 7U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 7U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 7U)))));
    multiplier__DOT____VdfgTmp_hbfa19304__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 6U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 6U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 6U)))));
    multiplier__DOT____VdfgTmp_hc9990b36__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 5U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 5U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 5U)))));
    multiplier__DOT____VdfgTmp_hb70091ba__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 4U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 4U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 4U)))));
    multiplier__DOT____VdfgTmp_h1160abad__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 3U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 3U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 3U)))));
    multiplier__DOT____VdfgTmp_h1f42ffa9__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 2U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 2U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 2U)))));
    multiplier__DOT____VdfgTmp_hdc21b403__0 = (1U & 
                                               ((IData)(
                                                        (vlSelf->multiplier__DOT__cs9 
                                                         >> 1U)) 
                                                + ((IData)(
                                                           (vlSelf->multiplier__DOT__cs4 
                                                            >> 1U)) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT____Vcellout__booth15__partial_product 
                                                              >> 1U)))));
    vlSelf->multiplier__DOT__cs11 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c11, 1U);
    multiplier__DOT____VdfgTmp_h2f1d2cb1__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h1959d241__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hc369b665__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x3fU)))));
    multiplier__DOT____VdfgTmp_hb347d552__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hafb35345__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hd5cf6297__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x3eU)))));
    multiplier__DOT____VdfgTmp_h48e02a05__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_ha1cb1a10__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hcbc4bd87__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x3dU)))));
    multiplier__DOT____VdfgTmp_h2e5df095__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_he662753d__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hcdc3d7cd__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x3cU)))));
    multiplier__DOT____VdfgTmp_h18b93f1d__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h3602f837__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hb3893ee6__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x3bU)))));
    multiplier__DOT____VdfgTmp_he763a83b__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h8a01e037__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h965f6348__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x3aU)))));
    multiplier__DOT____VdfgTmp_hc78970cf__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h400b1f45__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hea75a280__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x39U)))));
    multiplier__DOT____VdfgTmp_heeaca214__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hb4f1c945__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hda12644a__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x38U)))));
    multiplier__DOT____VdfgTmp_h08dc33f5__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h4db4002f__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hccd46034__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x37U)))));
    multiplier__DOT____VdfgTmp_he6347c9f__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h31e3c6b5__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hdb77f6bc__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x36U)))));
    multiplier__DOT____VdfgTmp_hd1dc8d53__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h2f8f8731__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hdd59a3b6__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x35U)))));
    multiplier__DOT____VdfgTmp_h2d87808e__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h69f98fcb__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h03c21412__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x34U)))));
    multiplier__DOT____VdfgTmp_h26862459__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hfd2cee99__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hc5338b03__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x33U)))));
    multiplier__DOT____VdfgTmp_h33448335__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hbd92cf63__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hca8c0db5__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x32U)))));
    multiplier__DOT____VdfgTmp_h51c749d5__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h86e54069__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hcd2bf105__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x31U)))));
    multiplier__DOT____VdfgTmp_h8a42697f__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hd79b2324__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hcc96a367__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x30U)))));
    multiplier__DOT____VdfgTmp_hbf7063bb__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h21a3b043__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hdaaa360a__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x2fU)))));
    multiplier__DOT____VdfgTmp_hd6370645__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hdf4ec7d6__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hd51d0da8__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x2eU)))));
    multiplier__DOT____VdfgTmp_h620bb6ae__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h34c69624__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h0b04c588__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x2dU)))));
    multiplier__DOT____VdfgTmp_hfe2bc95d__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hed5317e5__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h0d871206__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x2cU)))));
    multiplier__DOT____VdfgTmp_h4d2a303e__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hc527462f__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hcabae527__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x2bU)))));
    multiplier__DOT____VdfgTmp_h5beeaef6__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hd87f4ffb__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hcb3e0ff7__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x2aU)))));
    multiplier__DOT____VdfgTmp_h94bcecde__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hfa939436__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hdd320ed1__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x29U)))));
    multiplier__DOT____VdfgTmp_hac42272f__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h0f970768__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hdc96ddbd__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x28U)))));
    multiplier__DOT____VdfgTmp_h5f3b3c98__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h684cd6ae__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h05e569e7__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x27U)))));
    multiplier__DOT____VdfgTmp_hd9596be7__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hcdf266c4__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h18f66b11__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x26U)))));
    multiplier__DOT____VdfgTmp_h10526d24__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hc932cfd4__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h1a25fa09__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x25U)))));
    multiplier__DOT____VdfgTmp_hbb7c1865__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hd2d5e8b9__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h02242b4f__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x24U)))));
    multiplier__DOT____VdfgTmp_hcec39009__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_ha9145920__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h0a5a4780__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x23U)))));
    multiplier__DOT____VdfgTmp_h44475869__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hf3b5dd45__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hcbf52e76__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x22U)))));
    multiplier__DOT____VdfgTmp_h2cb87137__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h5d2e1708__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hcbaadec2__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x21U)))));
    multiplier__DOT____VdfgTmp_hd9291a3f__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h76a1425e__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h198a3b28__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x20U)))));
    multiplier__DOT____VdfgTmp_hf609fc61__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h11f5224d__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h0b597f67__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x1fU)))));
    multiplier__DOT____VdfgTmp_he5e9841b__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h8e6ecd35__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h0fc0cdcd__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x1eU)))));
    multiplier__DOT____VdfgTmp_h2a484961__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_he2c821aa__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h0831b649__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x1dU)))));
    multiplier__DOT____VdfgTmp_h3ced3bca__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h180e5525__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hf7f71097__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x1cU)))));
    multiplier__DOT____VdfgTmp_hdb68f242__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h80a9b664__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hb5c69898__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x1bU)))));
    multiplier__DOT____VdfgTmp_h30d83483__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h90242e51__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hf6686aaa__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x1aU)))));
    multiplier__DOT____VdfgTmp_h585c167f__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h4f0e6e92__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h0f4f4e42__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x19U)))));
    multiplier__DOT____VdfgTmp_h6851d87f__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h055e9227__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h0f4ae7e8__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x18U)))));
    multiplier__DOT____VdfgTmp_haac6af6c__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h7a8bbfed__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hd9c7bb89__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x17U)))));
    multiplier__DOT____VdfgTmp_hf62e5796__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h462ed107__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hf7f002c7__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x16U)))));
    multiplier__DOT____VdfgTmp_h3eb62325__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h7c6a0bd9__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h095f52ef__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x15U)))));
    multiplier__DOT____VdfgTmp_h4d9232a3__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h230fc375__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h0c4158d9__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x14U)))));
    multiplier__DOT____VdfgTmp_hb0fef150__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hae179ebe__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h12618c7e__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x13U)))));
    multiplier__DOT____VdfgTmp_h2fef1100__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h19141b4c__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h1f50fc58__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x12U)))));
    multiplier__DOT____VdfgTmp_h03908420__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h23ad84a0__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h1d3fa1c8__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x11U)))));
    multiplier__DOT____VdfgTmp_h7ea3e322__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h3a7b8da1__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h068dc682__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0x10U)))));
    multiplier__DOT____VdfgTmp_h3af6cff9__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h1bf3dac0__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hb14056ed__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0xfU)))));
    multiplier__DOT____VdfgTmp_hc70d592c__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h812ee6cf__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hcc812cc7__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0xeU)))));
    multiplier__DOT____VdfgTmp_hcb6b8f89__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hc8fb5f0e__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hd958c447__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0xdU)))));
    multiplier__DOT____VdfgTmp_hc1d23b6c__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_he997c3e9__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hc725d999__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0xcU)))));
    multiplier__DOT____VdfgTmp_h9c2cd9d3__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h7ff053c7__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hc102b4ca__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0xbU)))));
    multiplier__DOT____VdfgTmp_hcf6c8c8b__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_he31ae5b0__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hcf612958__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 0xaU)))));
    multiplier__DOT____VdfgTmp_hfe741a91__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h10bb38ff__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h0cad1f88__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 9U)))));
    multiplier__DOT____VdfgTmp_hd7642fa3__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h22ae12b8__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hf09284c2__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 8U)))));
    multiplier__DOT____VdfgTmp_hf152181d__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_hff1a4f0a__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h447e09a8__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 7U)))));
    multiplier__DOT____VdfgTmp_hcd5fcfe9__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h6fa8b038__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hbfa19304__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 6U)))));
    multiplier__DOT____VdfgTmp_h1b72b038__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h8789f6b0__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hc9990b36__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 5U)))));
    multiplier__DOT____VdfgTmp_hb3f81bff__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h2a001c41__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hb70091ba__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 4U)))));
    multiplier__DOT____VdfgTmp_h532a01c6__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h982eb522__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h1160abad__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 3U)))));
    multiplier__DOT____VdfgTmp_h3b7eab9e__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h55827a18__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_h1f42ffa9__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 2U)))));
    vlSelf->multiplier__DOT__s11 = (((QData)((IData)(multiplier__DOT____VdfgTmp_hc369b665__0)) 
                                     << 0x3fU) | (((QData)((IData)(multiplier__DOT____VdfgTmp_hd5cf6297__0)) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(multiplier__DOT____VdfgTmp_hcbc4bd87__0)) 
                                                      << 0x3dU) 
                                                     | (((QData)((IData)(multiplier__DOT____VdfgTmp_hcdc3d7cd__0)) 
                                                         << 0x3cU) 
                                                        | (((QData)((IData)(multiplier__DOT____VdfgTmp_hb3893ee6__0)) 
                                                            << 0x3bU) 
                                                           | (((QData)((IData)(multiplier__DOT____VdfgTmp_h965f6348__0)) 
                                                               << 0x3aU) 
                                                              | (((QData)((IData)(multiplier__DOT____VdfgTmp_hea75a280__0)) 
                                                                  << 0x39U) 
                                                                 | (((QData)((IData)(multiplier__DOT____VdfgTmp_hda12644a__0)) 
                                                                     << 0x38U) 
                                                                    | (((QData)((IData)(multiplier__DOT____VdfgTmp_hccd46034__0)) 
                                                                        << 0x37U) 
                                                                       | (((QData)((IData)(multiplier__DOT____VdfgTmp_hdb77f6bc__0)) 
                                                                           << 0x36U) 
                                                                          | (((QData)((IData)(multiplier__DOT____VdfgTmp_hdd59a3b6__0)) 
                                                                              << 0x35U) 
                                                                             | (((QData)((IData)(multiplier__DOT____VdfgTmp_h03c21412__0)) 
                                                                                << 0x34U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hc5338b03__0)) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hca8c0db5__0)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hcd2bf105__0)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hcc96a367__0)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hdaaa360a__0)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hd51d0da8__0)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h0b04c588__0)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h0d871206__0)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hcabae527__0)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hcb3e0ff7__0)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hdd320ed1__0)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hdc96ddbd__0)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h05e569e7__0)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h18f66b11__0)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h1a25fa09__0)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h02242b4f__0)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h0a5a4780__0)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hcbf52e76__0)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hcbaadec2__0)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h198a3b28__0)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(multiplier__DOT____VdfgTmp_h0b597f67__0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h0fc0cdcd__0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h0831b649__0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hf7f71097__0) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hb5c69898__0) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hf6686aaa__0) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h0f4f4e42__0) 
                                                                                << 0x19U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h0f4ae7e8__0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hd9c7bb89__0) 
                                                                                << 0x17U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hf7f002c7__0) 
                                                                                << 0x16U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h095f52ef__0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h0c4158d9__0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h12618c7e__0) 
                                                                                << 0x13U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h1f50fc58__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h1d3fa1c8__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h068dc682__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hb14056ed__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hcc812cc7__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hd958c447__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hc725d999__0) 
                                                                                << 0xcU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hc102b4ca__0) 
                                                                                << 0xbU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hcf612958__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h0cad1f88__0) 
                                                                                << 9U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hf09284c2__0) 
                                                                                << 8U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h447e09a8__0) 
                                                                                << 7U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hbfa19304__0) 
                                                                                << 6U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hc9990b36__0) 
                                                                                << 5U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hb70091ba__0) 
                                                                                << 4U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h1160abad__0) 
                                                                                << 3U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h1f42ffa9__0) 
                                                                                << 2U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hdc21b403__0) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->multiplier__DOT____Vcellout__booth15__partial_product)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    multiplier__DOT____VdfgTmp_h04efbd35__0 = (1U & 
                                               ((IData)(multiplier__DOT____VdfgTmp_h44170901__0) 
                                                + ((IData)(multiplier__DOT____VdfgTmp_hdc21b403__0) 
                                                   + (IData)(
                                                             (vlSelf->multiplier__DOT__cs10 
                                                              >> 1U)))));
    vlSelf->multiplier__DOT__c12 = (((QData)((IData)(
                                                     (1U 
                                                      & (((IData)(multiplier__DOT____VdfgTmp_h1959d241__0) 
                                                          + 
                                                          ((IData)(multiplier__DOT____VdfgTmp_hc369b665__0) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->multiplier__DOT__cs10 
                                                                       >> 0x3fU))))) 
                                                         >> 1U)))) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   (1U 
                                                                    & (((IData)(multiplier__DOT____VdfgTmp_hafb35345__0) 
                                                                        + 
                                                                        ((IData)(multiplier__DOT____VdfgTmp_hd5cf6297__0) 
                                                                         + 
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x3eU))))) 
                                                                       >> 1U)))) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (((IData)(multiplier__DOT____VdfgTmp_ha1cb1a10__0) 
                                                                           + 
                                                                           ((IData)(multiplier__DOT____VdfgTmp_hcbc4bd87__0) 
                                                                            + 
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x3dU))))) 
                                                                          >> 1U)))) 
                                                      << 0x3dU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (((IData)(multiplier__DOT____VdfgTmp_he662753d__0) 
                                                                              + 
                                                                              ((IData)(multiplier__DOT____VdfgTmp_hcdc3d7cd__0) 
                                                                               + 
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x3cU))))) 
                                                                             >> 1U)))) 
                                                         << 0x3cU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (((IData)(multiplier__DOT____VdfgTmp_h3602f837__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hb3893ee6__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x3bU))))) 
                                                                                >> 1U)))) 
                                                            << 0x3bU) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h8a01e037__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h965f6348__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x3aU))))) 
                                                                                >> 1U)))) 
                                                               << 0x3aU) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h400b1f45__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hea75a280__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x39U))))) 
                                                                                >> 1U)))) 
                                                                  << 0x39U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hb4f1c945__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hda12644a__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x38U))))) 
                                                                                >> 1U)))) 
                                                                     << 0x38U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h4db4002f__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hccd46034__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x37U))))) 
                                                                                >> 1U)))) 
                                                                        << 0x37U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h31e3c6b5__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hdb77f6bc__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x36U))))) 
                                                                                >> 1U)))) 
                                                                           << 0x36U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h2f8f8731__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hdd59a3b6__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x35U))))) 
                                                                                >> 1U)))) 
                                                                              << 0x35U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h69f98fcb__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h03c21412__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x34U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x34U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hfd2cee99__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hc5338b03__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x33U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hbd92cf63__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hca8c0db5__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x32U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h86e54069__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hcd2bf105__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x31U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hd79b2324__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hcc96a367__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x30U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h21a3b043__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hdaaa360a__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x2fU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hdf4ec7d6__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hd51d0da8__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x2eU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h34c69624__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h0b04c588__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x2dU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hed5317e5__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h0d871206__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x2cU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hc527462f__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hcabae527__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x2bU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hd87f4ffb__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hcb3e0ff7__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x2aU))))) 
                                                                                >> 1U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hfa939436__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hdd320ed1__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x29U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h0f970768__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hdc96ddbd__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x28U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h684cd6ae__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h05e569e7__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x27U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hcdf266c4__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h18f66b11__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x26U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hc932cfd4__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h1a25fa09__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x25U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hd2d5e8b9__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h02242b4f__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x24U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_ha9145920__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h0a5a4780__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x23U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hf3b5dd45__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hcbf52e76__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x22U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h5d2e1708__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hcbaadec2__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x21U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h76a1425e__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h198a3b28__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x20U))))) 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h11f5224d__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h0b597f67__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x1fU))))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x40000000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h8e6ecd35__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h0fc0cdcd__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x1eU))))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x20000000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_he2c821aa__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h0831b649__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x1dU))))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x10000000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h180e5525__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hf7f71097__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x1cU))))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x8000000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h80a9b664__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hb5c69898__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x1bU))))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x4000000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h90242e51__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hf6686aaa__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x1aU))))) 
                                                                                << 0x19U)) 
                                                                                | ((0x2000000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h4f0e6e92__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h0f4f4e42__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x19U))))) 
                                                                                << 0x18U)) 
                                                                                | ((0x1000000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h055e9227__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h0f4ae7e8__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x18U))))) 
                                                                                << 0x17U)) 
                                                                                | ((0x800000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h7a8bbfed__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hd9c7bb89__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x17U))))) 
                                                                                << 0x16U)) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h462ed107__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hf7f002c7__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x16U))))) 
                                                                                << 0x15U)) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h7c6a0bd9__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h095f52ef__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x15U))))) 
                                                                                << 0x14U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h230fc375__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h0c4158d9__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x14U))))) 
                                                                                << 0x13U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hae179ebe__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h12618c7e__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x13U))))) 
                                                                                << 0x12U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h19141b4c__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h1f50fc58__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x12U))))) 
                                                                                << 0x11U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h23ad84a0__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h1d3fa1c8__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x11U))))) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h3a7b8da1__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h068dc682__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0x10U))))) 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h1bf3dac0__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hb14056ed__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0xfU))))) 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h812ee6cf__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hcc812cc7__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0xeU))))) 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hc8fb5f0e__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hd958c447__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0xdU))))) 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_he997c3e9__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hc725d999__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0xcU))))) 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h7ff053c7__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hc102b4ca__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0xbU))))) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_he31ae5b0__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hcf612958__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 0xaU))))) 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h10bb38ff__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h0cad1f88__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 9U))))) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h22ae12b8__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hf09284c2__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 8U))))) 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_hff1a4f0a__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h447e09a8__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 7U))))) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h6fa8b038__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hbfa19304__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 6U))))) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h8789f6b0__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hc9990b36__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 5U))))) 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h2a001c41__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hb70091ba__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 4U))))) 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h982eb522__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h1160abad__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 3U))))) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & (((IData)(multiplier__DOT____VdfgTmp_h55827a18__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_h1f42ffa9__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 2U))))) 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(multiplier__DOT____VdfgTmp_h44170901__0) 
                                                                                + 
                                                                                ((IData)(multiplier__DOT____VdfgTmp_hdc21b403__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs10 
                                                                                >> 1U)))))) 
                                                                                | (1U 
                                                                                & (((IData)(vlSelf->multiplier__DOT____VdfgTmp_h12a493fe__0) 
                                                                                + 
                                                                                (1U 
                                                                                & (IData)(vlSelf->multiplier__DOT____Vcellout__booth15__partial_product))) 
                                                                                >> 1U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->multiplier__DOT__s12 = (((QData)((IData)(multiplier__DOT____VdfgTmp_h2f1d2cb1__0)) 
                                     << 0x3fU) | (((QData)((IData)(multiplier__DOT____VdfgTmp_hb347d552__0)) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(multiplier__DOT____VdfgTmp_h48e02a05__0)) 
                                                      << 0x3dU) 
                                                     | (((QData)((IData)(multiplier__DOT____VdfgTmp_h2e5df095__0)) 
                                                         << 0x3cU) 
                                                        | (((QData)((IData)(multiplier__DOT____VdfgTmp_h18b93f1d__0)) 
                                                            << 0x3bU) 
                                                           | (((QData)((IData)(multiplier__DOT____VdfgTmp_he763a83b__0)) 
                                                               << 0x3aU) 
                                                              | (((QData)((IData)(multiplier__DOT____VdfgTmp_hc78970cf__0)) 
                                                                  << 0x39U) 
                                                                 | (((QData)((IData)(multiplier__DOT____VdfgTmp_heeaca214__0)) 
                                                                     << 0x38U) 
                                                                    | (((QData)((IData)(multiplier__DOT____VdfgTmp_h08dc33f5__0)) 
                                                                        << 0x37U) 
                                                                       | (((QData)((IData)(multiplier__DOT____VdfgTmp_he6347c9f__0)) 
                                                                           << 0x36U) 
                                                                          | (((QData)((IData)(multiplier__DOT____VdfgTmp_hd1dc8d53__0)) 
                                                                              << 0x35U) 
                                                                             | (((QData)((IData)(multiplier__DOT____VdfgTmp_h2d87808e__0)) 
                                                                                << 0x34U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h26862459__0)) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h33448335__0)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h51c749d5__0)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h8a42697f__0)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hbf7063bb__0)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hd6370645__0)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h620bb6ae__0)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hfe2bc95d__0)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h4d2a303e__0)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h5beeaef6__0)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h94bcecde__0)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hac42272f__0)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h5f3b3c98__0)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hd9596be7__0)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h10526d24__0)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hbb7c1865__0)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hcec39009__0)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h44475869__0)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_h2cb87137__0)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(multiplier__DOT____VdfgTmp_hd9291a3f__0)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(multiplier__DOT____VdfgTmp_hf609fc61__0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_he5e9841b__0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h2a484961__0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h3ced3bca__0) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hdb68f242__0) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h30d83483__0) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h585c167f__0) 
                                                                                << 0x19U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h6851d87f__0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_haac6af6c__0) 
                                                                                << 0x17U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hf62e5796__0) 
                                                                                << 0x16U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h3eb62325__0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h4d9232a3__0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hb0fef150__0) 
                                                                                << 0x13U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h2fef1100__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h03908420__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h7ea3e322__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h3af6cff9__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hc70d592c__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hcb6b8f89__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hc1d23b6c__0) 
                                                                                << 0xcU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h9c2cd9d3__0) 
                                                                                << 0xbU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hcf6c8c8b__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hfe741a91__0) 
                                                                                << 9U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hd7642fa3__0) 
                                                                                << 8U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hf152181d__0) 
                                                                                << 7U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hcd5fcfe9__0) 
                                                                                << 6U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h1b72b038__0) 
                                                                                << 5U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_hb3f81bff__0) 
                                                                                << 4U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h532a01c6__0) 
                                                                                << 3U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h3b7eab9e__0) 
                                                                                << 2U) 
                                                                                | (((IData)(multiplier__DOT____VdfgTmp_h04efbd35__0) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->multiplier__DOT____VdfgTmp_h19821f64__0))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->multiplier__DOT__cs12 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c12, 1U);
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice3__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x3fU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x3fU)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h2f1d2cb1__0))));
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice2__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x3eU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x3eU)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_hb347d552__0))));
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice1__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x3dU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x3dU)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h48e02a05__0))));
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice0__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x3cU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x3cU)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h2e5df095__0))));
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice3__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x3bU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x3bU)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h18b93f1d__0))));
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice2__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x3aU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x3aU)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_he763a83b__0))));
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice1__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x39U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x39U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_hc78970cf__0))));
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice0__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x38U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x38U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_heeaca214__0))));
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice3__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x37U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x37U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h08dc33f5__0))));
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice2__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x36U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x36U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_he6347c9f__0))));
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice1__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x35U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x35U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_hd1dc8d53__0))));
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice0__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x34U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x34U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h2d87808e__0))));
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice3__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x33U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x33U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h26862459__0))));
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice2__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x32U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x32U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h33448335__0))));
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice1__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x31U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x31U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h51c749d5__0))));
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice0__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x30U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x30U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h8a42697f__0))));
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice3__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x2fU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x2fU)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_hbf7063bb__0))));
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice2__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x2eU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x2eU)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_hd6370645__0))));
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice1__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x2dU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x2dU)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h620bb6ae__0))));
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice0__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x2cU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x2cU)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_hfe2bc95d__0))));
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice3__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x2bU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x2bU)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h4d2a303e__0))));
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice2__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x2aU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x2aU)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h5beeaef6__0))));
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice1__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x29U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x29U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h94bcecde__0))));
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice0__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x28U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x28U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_hac42272f__0))));
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice3__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x27U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x27U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h5f3b3c98__0))));
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice2__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x26U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x26U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_hd9596be7__0))));
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice1__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x25U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x25U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h10526d24__0))));
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice0__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x24U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x24U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_hbb7c1865__0))));
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice3__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x23U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x23U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_hcec39009__0))));
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice2__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x22U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x22U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h44475869__0))));
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice1__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x21U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x21U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h2cb87137__0))));
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice0__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x20U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x20U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_hd9291a3f__0))));
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice3__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x1fU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x1fU)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_hf609fc61__0))));
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice2__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x1eU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x1eU)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_he5e9841b__0))));
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice1__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x1dU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x1dU)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h2a484961__0))));
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice0__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x1cU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x1cU)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h3ced3bca__0))));
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice3__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x1bU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x1bU)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_hdb68f242__0))));
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice2__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x1aU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x1aU)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h30d83483__0))));
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice1__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x19U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x19U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h585c167f__0))));
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice0__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x18U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x18U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h6851d87f__0))));
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice3__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x17U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x17U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_haac6af6c__0))));
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice2__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x16U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x16U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_hf62e5796__0))));
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice1__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x15U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x15U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h3eb62325__0))));
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice0__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x14U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x14U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h4d9232a3__0))));
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice3__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x13U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x13U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_hb0fef150__0))));
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice2__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x12U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x12U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h2fef1100__0))));
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice1__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x11U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x11U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h03908420__0))));
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice0__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0x10U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                 >> 0x10U)) 
                                        + (IData)(multiplier__DOT____VdfgTmp_h7ea3e322__0))));
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice3__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0xfU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                >> 0xfU)) 
                                       + (IData)(multiplier__DOT____VdfgTmp_h3af6cff9__0))));
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice2__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0xeU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                >> 0xeU)) 
                                       + (IData)(multiplier__DOT____VdfgTmp_hc70d592c__0))));
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice1__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0xdU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                >> 0xdU)) 
                                       + (IData)(multiplier__DOT____VdfgTmp_hcb6b8f89__0))));
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice0__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0xcU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                >> 0xcU)) 
                                       + (IData)(multiplier__DOT____VdfgTmp_hc1d23b6c__0))));
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice3__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0xbU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                >> 0xbU)) 
                                       + (IData)(multiplier__DOT____VdfgTmp_h9c2cd9d3__0))));
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice2__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 0xaU)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                                >> 0xaU)) 
                                       + (IData)(multiplier__DOT____VdfgTmp_hcf6c8c8b__0))));
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice1__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 9U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                              >> 9U)) 
                                     + (IData)(multiplier__DOT____VdfgTmp_hfe741a91__0))));
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice0__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 8U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                              >> 8U)) 
                                     + (IData)(multiplier__DOT____VdfgTmp_hd7642fa3__0))));
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice3__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 7U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                              >> 7U)) 
                                     + (IData)(multiplier__DOT____VdfgTmp_hf152181d__0))));
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice2__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 6U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                              >> 6U)) 
                                     + (IData)(multiplier__DOT____VdfgTmp_hcd5fcfe9__0))));
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice1__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 5U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                              >> 5U)) 
                                     + (IData)(multiplier__DOT____VdfgTmp_h1b72b038__0))));
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice0__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 4U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                              >> 4U)) 
                                     + (IData)(multiplier__DOT____VdfgTmp_hb3f81bff__0))));
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice3__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 3U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                              >> 3U)) 
                                     + (IData)(multiplier__DOT____VdfgTmp_h532a01c6__0))));
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice2__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 2U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                              >> 2U)) 
                                     + (IData)(multiplier__DOT____VdfgTmp_h3b7eab9e__0))));
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice1__b 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs11 
                          >> 1U)) + ((IData)((vlSelf->multiplier__DOT__cs12 
                                              >> 1U)) 
                                     + (IData)(multiplier__DOT____VdfgTmp_h04efbd35__0))));
    __VdfgTmp_h1badcce1__0 = ((8U & (((1U & (IData)(
                                                    (vlSelf->multiplier__DOT__cs11 
                                                     >> 3U))) 
                                      + ((1U & (IData)(
                                                       (vlSelf->multiplier__DOT__cs12 
                                                        >> 3U))) 
                                         + (IData)(multiplier__DOT____VdfgTmp_h532a01c6__0))) 
                                     << 2U)) | ((4U 
                                                 & (((1U 
                                                      & (IData)(
                                                                (vlSelf->multiplier__DOT__cs11 
                                                                 >> 2U))) 
                                                     + 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->multiplier__DOT__cs12 
                                                                  >> 2U))) 
                                                      + (IData)(multiplier__DOT____VdfgTmp_h3b7eab9e__0))) 
                                                    << 1U)) 
                                                | ((2U 
                                                    & ((1U 
                                                        & (IData)(
                                                                  (vlSelf->multiplier__DOT__cs11 
                                                                   >> 1U))) 
                                                       + 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->multiplier__DOT__cs12 
                                                                    >> 1U))) 
                                                        + (IData)(multiplier__DOT____VdfgTmp_h04efbd35__0)))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->multiplier__DOT____VdfgTmp_h19821f64__0) 
                                                         >> 1U)))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice3__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice3__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice2__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice2__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice1__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice1__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice0__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice0__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__b 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice3__b) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice2__b) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice1__b) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice0__b))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice3__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice3__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice2__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice2__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice1__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice1__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice0__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice0__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__b 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice3__b) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice2__b) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice1__b) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice0__b))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice3__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice3__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice2__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice2__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice1__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice1__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice0__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice0__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__b 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice3__b) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice2__b) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice1__b) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice0__b))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice3__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice3__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice2__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice2__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice1__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice1__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice0__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice0__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__b 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice3__b) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice2__b) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice1__b) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice0__b))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice3__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice3__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice2__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice2__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice1__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice1__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice0__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice0__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__b 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice3__b) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice2__b) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice1__b) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice0__b))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice3__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice3__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice2__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice2__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice1__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice1__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice0__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice0__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__b 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice3__b) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice2__b) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice1__b) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice0__b))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice3__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice3__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice2__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice2__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice1__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice1__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice0__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice0__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__b 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice3__b) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice2__b) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice1__b) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice0__b))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice3__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice3__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice2__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice2__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice1__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice1__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice0__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice0__b;
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block0__b 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice3__b) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice2__b) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice1__b) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice0__b))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice3__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice3__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice2__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice2__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice1__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice1__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice0__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice0__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__b 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice3__b) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice2__b) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice1__b) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice0__b))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice3__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice3__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice2__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice2__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice1__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice1__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice0__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice0__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__b 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice3__b) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice2__b) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice1__b) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice0__b))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice3__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice3__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice2__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice2__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice1__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice1__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice0__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice0__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__b 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice3__b) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice2__b) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice1__b) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice0__b))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice3__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice3__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice2__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice2__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice1__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice1__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice0__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice0__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__b 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice3__b) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice2__b) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice1__b) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice0__b))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice3__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice3__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice2__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice2__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice1__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice1__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice0__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice0__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__b 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice3__b) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice2__b) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice1__b) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice0__b))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice3__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice3__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice2__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice2__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice1__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice1__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice0__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice0__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__b 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice3__b) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice2__b) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice1__b) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice0__b))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice3__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice3__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice2__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice2__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice1__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice1__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice0__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice0__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__b 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice3__b) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice2__b) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice1__b) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice0__b))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice3__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice3__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice2__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice2__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice1__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice1__b;
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block0__b 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice3__b) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice2__b) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice1__b) 
                                  << 1U) | (IData)(vlSelf->multiplier__DOT____VdfgTmp_h19821f64__0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__a 
        = (0xfU & VL_SHIFTL_III(4,4,32, (IData)(__VdfgTmp_h1badcce1__0), 1U));
    multiplier__DOT____VdfgTmp_hbad2e8b7__0 = ((0x80000000U 
                                                & (((1U 
                                                     & (IData)(
                                                               (vlSelf->multiplier__DOT__cs11 
                                                                >> 0x1fU))) 
                                                    + 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->multiplier__DOT__cs12 
                                                                 >> 0x1fU))) 
                                                     + (IData)(multiplier__DOT____VdfgTmp_hf609fc61__0))) 
                                                   << 0x1eU)) 
                                               | ((0x40000000U 
                                                   & (((1U 
                                                        & (IData)(
                                                                  (vlSelf->multiplier__DOT__cs11 
                                                                   >> 0x1eU))) 
                                                       + 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->multiplier__DOT__cs12 
                                                                    >> 0x1eU))) 
                                                        + (IData)(multiplier__DOT____VdfgTmp_he5e9841b__0))) 
                                                      << 0x1dU)) 
                                                  | ((0x20000000U 
                                                      & (((1U 
                                                           & (IData)(
                                                                     (vlSelf->multiplier__DOT__cs11 
                                                                      >> 0x1dU))) 
                                                          + 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->multiplier__DOT__cs12 
                                                                       >> 0x1dU))) 
                                                           + (IData)(multiplier__DOT____VdfgTmp_h2a484961__0))) 
                                                         << 0x1cU)) 
                                                     | ((0x10000000U 
                                                         & (((1U 
                                                              & (IData)(
                                                                        (vlSelf->multiplier__DOT__cs11 
                                                                         >> 0x1cU))) 
                                                             + 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->multiplier__DOT__cs12 
                                                                          >> 0x1cU))) 
                                                              + (IData)(multiplier__DOT____VdfgTmp_h3ced3bca__0))) 
                                                            << 0x1bU)) 
                                                        | ((0x8000000U 
                                                            & (((1U 
                                                                 & (IData)(
                                                                           (vlSelf->multiplier__DOT__cs11 
                                                                            >> 0x1bU))) 
                                                                + 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->multiplier__DOT__cs12 
                                                                             >> 0x1bU))) 
                                                                 + (IData)(multiplier__DOT____VdfgTmp_hdb68f242__0))) 
                                                               << 0x1aU)) 
                                                           | ((0x4000000U 
                                                               & (((1U 
                                                                    & (IData)(
                                                                              (vlSelf->multiplier__DOT__cs11 
                                                                               >> 0x1aU))) 
                                                                   + 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x1aU))) 
                                                                    + (IData)(multiplier__DOT____VdfgTmp_h30d83483__0))) 
                                                                  << 0x19U)) 
                                                              | ((0x2000000U 
                                                                  & (((1U 
                                                                       & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x19U))) 
                                                                      + 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x19U))) 
                                                                       + (IData)(multiplier__DOT____VdfgTmp_h585c167f__0))) 
                                                                     << 0x18U)) 
                                                                 | ((0x1000000U 
                                                                     & (((1U 
                                                                          & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x18U))) 
                                                                         + 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x18U))) 
                                                                          + (IData)(multiplier__DOT____VdfgTmp_h6851d87f__0))) 
                                                                        << 0x17U)) 
                                                                    | ((0x800000U 
                                                                        & (((1U 
                                                                             & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x17U))) 
                                                                            + 
                                                                            ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x17U))) 
                                                                             + (IData)(multiplier__DOT____VdfgTmp_haac6af6c__0))) 
                                                                           << 0x16U)) 
                                                                       | ((0x400000U 
                                                                           & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x16U))) 
                                                                               + 
                                                                               ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x16U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hf62e5796__0))) 
                                                                              << 0x15U)) 
                                                                          | ((0x200000U 
                                                                              & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x15U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x15U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h3eb62325__0))) 
                                                                                << 0x14U)) 
                                                                             | ((0x100000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x14U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x14U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h4d9232a3__0))) 
                                                                                << 0x13U)) 
                                                                                | ((0x80000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x13U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x13U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hb0fef150__0))) 
                                                                                << 0x12U)) 
                                                                                | ((0x40000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x12U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x12U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h2fef1100__0))) 
                                                                                << 0x11U)) 
                                                                                | ((0x20000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x11U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x11U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h03908420__0))) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x10U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x10U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h7ea3e322__0))) 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0xfU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0xfU))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h3af6cff9__0))) 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0xeU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0xeU))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hc70d592c__0))) 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0xdU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0xdU))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hcb6b8f89__0))) 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0xcU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0xcU))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hc1d23b6c__0))) 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0xbU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0xbU))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h9c2cd9d3__0))) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0xaU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0xaU))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hcf6c8c8b__0))) 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 9U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 9U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hfe741a91__0))) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 8U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 8U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hd7642fa3__0))) 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 7U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 7U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hf152181d__0))) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 6U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 6U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hcd5fcfe9__0))) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 5U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 5U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h1b72b038__0))) 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 4U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 4U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hb3f81bff__0))) 
                                                                                << 3U)) 
                                                                                | (IData)(__VdfgTmp_h1badcce1__0)))))))))))))))))))))))))))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__b 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block0__b;
    multiplier__DOT____Vcellinp__fast_adder_upper__b 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice3__b) 
            << 0x1fU) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice2__b) 
                          << 0x1eU) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice1__b) 
                                        << 0x1dU) | 
                                       (((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice0__b) 
                                         << 0x1cU) 
                                        | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice3__b) 
                                            << 0x1bU) 
                                           | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice2__b) 
                                               << 0x1aU) 
                                              | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice1__b) 
                                                  << 0x19U) 
                                                 | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice0__b) 
                                                     << 0x18U) 
                                                    | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice3__b) 
                                                        << 0x17U) 
                                                       | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice2__b) 
                                                           << 0x16U) 
                                                          | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice1__b) 
                                                              << 0x15U) 
                                                             | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice0__b) 
                                                                 << 0x14U) 
                                                                | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice3__b) 
                                                                    << 0x13U) 
                                                                   | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice2__b) 
                                                                       << 0x12U) 
                                                                      | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice1__b) 
                                                                          << 0x11U) 
                                                                         | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice0__b) 
                                                                             << 0x10U) 
                                                                            | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice3__b) 
                                                                                << 0xfU) 
                                                                               | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice2__b) 
                                                                                << 0xeU) 
                                                                                | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice1__b) 
                                                                                << 0xdU) 
                                                                                | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice0__b) 
                                                                                << 0xcU) 
                                                                                | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice3__b) 
                                                                                << 0xbU) 
                                                                                | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice2__b) 
                                                                                << 0xaU) 
                                                                                | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice1__b) 
                                                                                << 9U) 
                                                                                | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice0__b) 
                                                                                << 8U) 
                                                                                | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice3__b) 
                                                                                << 7U) 
                                                                                | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice2__b) 
                                                                                << 6U) 
                                                                                | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice1__b) 
                                                                                << 5U) 
                                                                                | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice0__b) 
                                                                                << 4U) 
                                                                                | (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block0__b)))))))))))))))))))))))))))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__b 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block0__b;
    multiplier__DOT____Vcellinp__fast_adder_lower__b 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice3__b) 
            << 0x1fU) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice2__b) 
                          << 0x1eU) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice1__b) 
                                        << 0x1dU) | 
                                       (((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice0__b) 
                                         << 0x1cU) 
                                        | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice3__b) 
                                            << 0x1bU) 
                                           | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice2__b) 
                                               << 0x1aU) 
                                              | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice1__b) 
                                                  << 0x19U) 
                                                 | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice0__b) 
                                                     << 0x18U) 
                                                    | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice3__b) 
                                                        << 0x17U) 
                                                       | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice2__b) 
                                                           << 0x16U) 
                                                          | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice1__b) 
                                                              << 0x15U) 
                                                             | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice0__b) 
                                                                 << 0x14U) 
                                                                | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice3__b) 
                                                                    << 0x13U) 
                                                                   | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice2__b) 
                                                                       << 0x12U) 
                                                                      | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice1__b) 
                                                                          << 0x11U) 
                                                                         | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice0__b) 
                                                                             << 0x10U) 
                                                                            | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice3__b) 
                                                                                << 0xfU) 
                                                                               | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice2__b) 
                                                                                << 0xeU) 
                                                                                | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice1__b) 
                                                                                << 0xdU) 
                                                                                | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice0__b) 
                                                                                << 0xcU) 
                                                                                | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice3__b) 
                                                                                << 0xbU) 
                                                                                | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice2__b) 
                                                                                << 0xaU) 
                                                                                | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice1__b) 
                                                                                << 9U) 
                                                                                | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice0__b) 
                                                                                << 8U) 
                                                                                | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice3__b) 
                                                                                << 7U) 
                                                                                | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice2__b) 
                                                                                << 6U) 
                                                                                | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice1__b) 
                                                                                << 5U) 
                                                                                | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice0__b) 
                                                                                << 4U) 
                                                                                | (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block0__b)))))))))))))))))))))))))))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__a 
        = VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 1U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 2U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 3U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                   >> 4U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 4U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 5U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 6U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 7U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                   >> 8U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 8U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 9U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0xaU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0xbU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                   >> 0xcU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0xcU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0xdU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0xeU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0xfU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                   >> 0x10U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0x10U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0x11U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0x12U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0x13U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                   >> 0x14U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0x14U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0x15U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0x16U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0x17U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                   >> 0x18U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0x18U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0x19U));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0x1aU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0x1bU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__a 
        = (0xfU & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                   >> 0x1cU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice0__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0x1cU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice1__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0x1dU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice2__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0x1eU));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice3__DOT__a 
        = (1U & (VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                 >> 0x1fU));
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0x1fU) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice3__b));
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0x1fU) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice3__b)));
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0x1eU) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice2__b));
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0x1eU) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice2__b)));
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0x1dU) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice1__b));
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0x1dU) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice1__b)));
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0x1cU) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice0__b));
    multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0x1cU) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellinp__slice0__b)));
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0x1bU) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice3__b));
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0x1bU) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice3__b)));
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0x1aU) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice2__b));
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0x1aU) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice2__b)));
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0x19U) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice1__b));
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0x19U) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice1__b)));
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0x18U) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice0__b));
    multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0x18U) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellinp__slice0__b)));
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0x17U) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice3__b));
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0x17U) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice3__b)));
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0x16U) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice2__b));
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0x16U) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice2__b)));
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0x15U) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice1__b));
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0x15U) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice1__b)));
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0x14U) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice0__b));
    multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0x14U) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellinp__slice0__b)));
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0x13U) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice3__b));
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0x13U) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice3__b)));
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0x12U) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice2__b));
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0x12U) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice2__b)));
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0x11U) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice1__b));
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0x11U) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice1__b)));
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0x10U) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice0__b));
    multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0x10U) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellinp__slice0__b)));
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0xfU) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice3__b));
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0xfU) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice3__b)));
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0xeU) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice2__b));
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0xeU) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice2__b)));
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0xdU) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice1__b));
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0xdU) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice1__b)));
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0xcU) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice0__b));
    multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0xcU) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellinp__slice0__b)));
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0xbU) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice3__b));
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0xbU) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice3__b)));
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 0xaU) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice2__b));
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 0xaU) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice2__b)));
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 9U) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice1__b));
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 9U) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice1__b)));
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 8U) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice0__b));
    multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 8U) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellinp__slice0__b)));
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 7U) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice3__b));
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 7U) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice3__b)));
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 6U) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice2__b));
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 6U) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice2__b)));
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 5U) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice1__b));
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 5U) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice1__b)));
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 4U) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice0__b));
    multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 4U) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellinp__slice0__b)));
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 3U) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice3__b));
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 3U) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice3__b)));
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 2U) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice2__b));
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 2U) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice2__b)));
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__G 
        = ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
            >> 1U) & (IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice1__b));
    multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__P 
        = (1U & ((VL_SHIFTL_III(32,32,32, multiplier__DOT____VdfgTmp_hbad2e8b7__0, 1U) 
                  >> 1U) ^ (IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellinp__slice1__b)));
    vlSelf->multiplier__DOT__c13 = (((QData)((IData)(
                                                     (1U 
                                                      & (((1U 
                                                           & (IData)(
                                                                     (vlSelf->multiplier__DOT__cs11 
                                                                      >> 0x3fU))) 
                                                          + 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->multiplier__DOT__cs12 
                                                                       >> 0x3fU))) 
                                                           + (IData)(multiplier__DOT____VdfgTmp_h2f1d2cb1__0))) 
                                                         >> 1U)))) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   (1U 
                                                                    & (((1U 
                                                                         & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x3eU))) 
                                                                        + 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x3eU))) 
                                                                         + (IData)(multiplier__DOT____VdfgTmp_hb347d552__0))) 
                                                                       >> 1U)))) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (((1U 
                                                                            & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x3dU))) 
                                                                           + 
                                                                           ((1U 
                                                                             & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x3dU))) 
                                                                            + (IData)(multiplier__DOT____VdfgTmp_h48e02a05__0))) 
                                                                          >> 1U)))) 
                                                      << 0x3dU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (((1U 
                                                                               & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x3cU))) 
                                                                              + 
                                                                              ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x3cU))) 
                                                                               + (IData)(multiplier__DOT____VdfgTmp_h2e5df095__0))) 
                                                                             >> 1U)))) 
                                                         << 0x3cU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x3bU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x3bU))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h18b93f1d__0))) 
                                                                                >> 1U)))) 
                                                            << 0x3bU) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x3aU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x3aU))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_he763a83b__0))) 
                                                                                >> 1U)))) 
                                                               << 0x3aU) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x39U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x39U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hc78970cf__0))) 
                                                                                >> 1U)))) 
                                                                  << 0x39U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x38U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x38U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_heeaca214__0))) 
                                                                                >> 1U)))) 
                                                                     << 0x38U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x37U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x37U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h08dc33f5__0))) 
                                                                                >> 1U)))) 
                                                                        << 0x37U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x36U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x36U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_he6347c9f__0))) 
                                                                                >> 1U)))) 
                                                                           << 0x36U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x35U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x35U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hd1dc8d53__0))) 
                                                                                >> 1U)))) 
                                                                              << 0x35U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x34U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x34U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h2d87808e__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x34U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x33U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x33U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h26862459__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x32U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x32U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h33448335__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x31U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x31U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h51c749d5__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x30U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x30U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h8a42697f__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x2fU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x2fU))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hbf7063bb__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x2eU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x2eU))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hd6370645__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x2dU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x2dU))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h620bb6ae__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x2cU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x2cU))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hfe2bc95d__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x2bU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x2bU))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h4d2a303e__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x2aU))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x2aU))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h5beeaef6__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x29U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x29U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h94bcecde__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x28U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x28U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hac42272f__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x27U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x27U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h5f3b3c98__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x26U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x26U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hd9596be7__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x25U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x25U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h10526d24__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x24U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x24U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hbb7c1865__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x23U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x23U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hcec39009__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x22U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x22U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h44475869__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x21U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x21U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_h2cb87137__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs11 
                                                                                >> 0x20U))) 
                                                                                + 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->multiplier__DOT__cs12 
                                                                                >> 0x20U))) 
                                                                                + (IData)(multiplier__DOT____VdfgTmp_hd9291a3f__0))) 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(multiplier__DOT____VdfgTmp_hbad2e8b7__0))))))))))))))))))))))))))))))))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__b 
        = multiplier__DOT____Vcellinp__fast_adder_upper__b;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__b_in 
        = multiplier__DOT____Vcellinp__fast_adder_upper__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__b 
        = multiplier__DOT____Vcellinp__fast_adder_lower__b;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__b_in 
        = multiplier__DOT____Vcellinp__fast_adder_lower__b;
    vlSelf->multiplier__DOT__s13 = (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice3__b)) 
                                     << 0x3fU) | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice2__b)) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice1__b)) 
                                                      << 0x3dU) 
                                                     | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice0__b)) 
                                                         << 0x3cU) 
                                                        | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice3__b)) 
                                                            << 0x3bU) 
                                                           | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice2__b)) 
                                                               << 0x3aU) 
                                                              | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice1__b)) 
                                                                  << 0x39U) 
                                                                 | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice0__b)) 
                                                                     << 0x38U) 
                                                                    | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice3__b)) 
                                                                        << 0x37U) 
                                                                       | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice2__b)) 
                                                                           << 0x36U) 
                                                                          | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice1__b)) 
                                                                              << 0x35U) 
                                                                             | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice0__b)) 
                                                                                << 0x34U) 
                                                                                | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice3__b)) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice2__b)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice1__b)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice0__b)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice3__b)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice2__b)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice1__b)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice0__b)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice3__b)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice2__b)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice1__b)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice0__b)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice3__b)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice2__b)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice1__b)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice0__b)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice3__b)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice2__b)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice1__b)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice0__b)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(multiplier__DOT____Vcellinp__fast_adder_lower__b))))))))))))))))))))))))))))))))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__G) 
                       << 2U) | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__G) 
                                 << 1U)));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(vlSelf->multiplier__DOT____VdfgTmp_h19821f64__0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c0))));
    vlSelf->multiplier__DOT__cs13 = VL_SHIFTL_QQI(64,64,32, vlSelf->multiplier__DOT__c13, 1U);
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c1))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__a 
        = (IData)((vlSelf->multiplier__DOT__cs13 >> 0x20U));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__a 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__cs13 
                           >> 0x20U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x20U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x21U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x22U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x23U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__a 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__cs13 
                           >> 0x24U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x24U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x25U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x26U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x27U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__a 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__cs13 
                           >> 0x28U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x28U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x29U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x2aU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x2bU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__a 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__cs13 
                           >> 0x2cU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x2cU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x2dU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x2eU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x2fU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__a 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__cs13 
                           >> 0x30U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x30U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x31U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x32U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x33U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__a 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__cs13 
                           >> 0x34U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x34U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x35U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x36U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x37U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__a 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__cs13 
                           >> 0x38U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x38U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x39U)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x3aU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x3bU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__a 
        = (0xfU & (IData)((vlSelf->multiplier__DOT__cs13 
                           >> 0x3cU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice0__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x3cU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice1__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x3dU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice2__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x3eU)));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice3__DOT__a 
        = (1U & (IData)((vlSelf->multiplier__DOT__cs13 
                         >> 0x3fU)));
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x3fU)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice3__b));
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__P 
        = (IData)(((vlSelf->multiplier__DOT__cs13 >> 0x3fU) 
                   ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice3__b)));
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x3eU)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice2__b));
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x3eU)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice2__b)));
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x3dU)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice1__b));
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x3dU)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice1__b)));
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x3cU)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice0__b));
    multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x3cU)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellinp__slice0__b)));
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x3bU)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice3__b));
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x3bU)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice3__b)));
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x3aU)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice2__b));
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x3aU)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice2__b)));
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x39U)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice1__b));
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x39U)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice1__b)));
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x38U)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice0__b));
    multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x38U)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellinp__slice0__b)));
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x37U)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice3__b));
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x37U)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice3__b)));
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x36U)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice2__b));
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x36U)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice2__b)));
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x35U)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice1__b));
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x35U)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice1__b)));
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x34U)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice0__b));
    multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x34U)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellinp__slice0__b)));
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x33U)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice3__b));
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x33U)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice3__b)));
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x32U)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice2__b));
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x32U)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice2__b)));
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x31U)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice1__b));
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x31U)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice1__b)));
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x30U)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice0__b));
    multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x30U)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellinp__slice0__b)));
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x2fU)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice3__b));
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x2fU)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice3__b)));
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x2eU)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice2__b));
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x2eU)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice2__b)));
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x2dU)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice1__b));
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x2dU)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice1__b)));
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x2cU)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice0__b));
    multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x2cU)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellinp__slice0__b)));
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x2bU)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice3__b));
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x2bU)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice3__b)));
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x2aU)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice2__b));
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x2aU)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice2__b)));
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x29U)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice1__b));
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x29U)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice1__b)));
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x28U)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice0__b));
    multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x28U)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellinp__slice0__b)));
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x27U)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice3__b));
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x27U)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice3__b)));
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x26U)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice2__b));
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x26U)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice2__b)));
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x25U)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice1__b));
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x25U)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice1__b)));
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x24U)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice0__b));
    multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x24U)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellinp__slice0__b)));
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x23U)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice3__b));
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x23U)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice3__b)));
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x22U)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice2__b));
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x22U)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice2__b)));
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x21U)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice1__b));
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x21U)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice1__b)));
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__G 
        = ((IData)((vlSelf->multiplier__DOT__cs13 >> 0x20U)) 
           & (IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice0__b));
    multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__P 
        = (1U & ((IData)((vlSelf->multiplier__DOT__cs13 
                          >> 0x20U)) ^ (IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellinp__slice0__b)));
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block0__s 
        = ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c0)) 
                                  << 1U) | (IData)(vlSelf->multiplier__DOT____VdfgTmp_h19821f64__0))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block1__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block0__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice3__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice3__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice2__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice2__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice1__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice1__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice0__DOT__G 
        = multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__G;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__G 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__G) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__G) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__G) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__G))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__slice0__DOT__P 
        = multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__P;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__P 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__P) 
            << 3U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__P) 
                       << 2U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__P) 
                                  << 1U) | (IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__P))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block0__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block0__DOT__cout 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block1__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__cin 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block1__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block1__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c1))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block1__s 
        = ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block1__cin)))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block2__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block1__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block1__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block1__DOT__cout 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block2__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__cin 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block2__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block2__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c1))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block2__s 
        = ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block2__cin)))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block3__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block2__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block2__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block2__DOT__cout 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block3__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__cin 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block3__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block3__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c1))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block3__s 
        = ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block3__cin)))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block4__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block3__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block3__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block3__DOT__cout 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block4__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__cin 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block4__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block4__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c1))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block4__s 
        = ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block4__cin)))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block5__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block4__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block4__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block4__DOT__cout 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block5__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__cin 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block5__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block5__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c1))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block5__s 
        = ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block5__cin)))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block6__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block5__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block5__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block5__DOT__cout 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block6__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__cin 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block6__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block6__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c1))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block6__s 
        = ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block6__cin)))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block7__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block6__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block6__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block6__DOT__cout 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block7__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__cin 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block7__cin;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__c 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block7__cin) 
            << 6U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block6__cin) 
                       << 5U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block5__cin) 
                                  << 4U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block4__cin) 
                                             << 3U) 
                                            | (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block3__cin) 
                                                << 2U) 
                                               | (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block2__cin) 
                                                   << 1U) 
                                                  | (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block1__cin)))))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block7__cin))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c1))));
    multiplier__DOT__fast_adder_lower__DOT____Vcellout__block7__s 
        = ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellinp__block7__cin)))));
    vlSelf->multiplier__DOT__cout = (1U & ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__G) 
                                           + ((IData)(multiplier__DOT__fast_adder_lower__DOT__block7__DOT____Vcellout__slice3__P) 
                                              * (IData)(vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__s 
        = multiplier__DOT__fast_adder_lower__DOT____Vcellout__block7__s;
    multiplier__DOT____Vcellout__fast_adder_lower__s 
        = (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellout__block7__s) 
            << 0x1cU) | (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellout__block6__s) 
                          << 0x18U) | (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellout__block5__s) 
                                        << 0x14U) | 
                                       (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellout__block4__s) 
                                         << 0x10U) 
                                        | (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellout__block3__s) 
                                            << 0xcU) 
                                           | (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellout__block2__s) 
                                               << 8U) 
                                              | (((IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellout__block1__s) 
                                                  << 4U) 
                                                 | (IData)(multiplier__DOT__fast_adder_lower__DOT____Vcellout__block0__s))))))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__cin 
        = vlSelf->multiplier__DOT__cout;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__cin 
        = vlSelf->multiplier__DOT__cout;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__cin_effective 
        = vlSelf->multiplier__DOT__cout;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__cout 
        = vlSelf->multiplier__DOT__cout;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__P) 
                    * (IData)(vlSelf->multiplier__DOT__cout))));
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__s 
        = multiplier__DOT____Vcellout__fast_adder_lower__s;
    vlSelf->multiplier__DOT__fast_adder_lower__DOT__block7__DOT__cout 
        = vlSelf->multiplier__DOT__fast_adder_lower__DOT__cout;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c1))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block0__s 
        = ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(vlSelf->multiplier__DOT__cout)))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block1__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block0__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block0__s;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block0__DOT__cout 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block1__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__cin 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block1__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block1__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c1))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block1__s 
        = ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block1__cin)))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block2__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block1__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block1__s;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block1__DOT__cout 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block2__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__cin 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block2__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block2__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c1))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block2__s 
        = ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block2__cin)))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block3__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block2__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block2__s;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block2__DOT__cout 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block3__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__cin 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block3__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block3__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c1))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block3__s 
        = ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block3__cin)))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block4__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block3__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block3__s;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block3__DOT__cout 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block4__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__cin 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block4__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block4__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c1))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block4__s 
        = ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block4__cin)))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block5__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block4__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block4__s;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block4__DOT__cout 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block5__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__cin 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block5__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block5__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c1))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block5__s 
        = ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block5__cin)))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block6__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block5__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block5__s;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block5__DOT__cout 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block6__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__cin 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block6__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block6__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c1))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block6__s 
        = ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block6__cin)))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block7__cin 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block6__DOT____Vcellout__slice3__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__c2))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block6__s;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block6__DOT__cout 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block7__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__cin 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block7__cin;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__c 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block7__cin) 
            << 6U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block6__cin) 
                       << 5U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block5__cin) 
                                  << 4U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block4__cin) 
                                             << 3U) 
                                            | (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block3__cin) 
                                                << 2U) 
                                               | (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block2__cin) 
                                                   << 1U) 
                                                  | (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block1__cin)))))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c0 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__P) 
                    * (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block7__cin))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c1 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c0))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c2 
        = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__G) 
                 + ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__P) 
                    * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c1))));
    vlSelf->multiplier__DOT__cout_upper = (1U & ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__G) 
                                                 + 
                                                 ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__P) 
                                                  * (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c2))));
    multiplier__DOT__fast_adder_upper__DOT____Vcellout__block7__s 
        = ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice3__P) 
             ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c2)) 
            << 3U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice2__P) 
                        ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c1)) 
                       << 2U) | ((((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice1__P) 
                                   ^ (IData)(vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__c0)) 
                                  << 1U) | ((IData)(multiplier__DOT__fast_adder_upper__DOT__block7__DOT____Vcellout__slice0__P) 
                                            ^ (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellinp__block7__cin)))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__cout 
        = vlSelf->multiplier__DOT__cout_upper;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__s 
        = multiplier__DOT__fast_adder_upper__DOT____Vcellout__block7__s;
    multiplier__DOT____Vcellout__fast_adder_upper__s 
        = (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellout__block7__s) 
            << 0x1cU) | (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellout__block6__s) 
                          << 0x18U) | (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellout__block5__s) 
                                        << 0x14U) | 
                                       (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellout__block4__s) 
                                         << 0x10U) 
                                        | (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellout__block3__s) 
                                            << 0xcU) 
                                           | (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellout__block2__s) 
                                               << 8U) 
                                              | (((IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellout__block1__s) 
                                                  << 4U) 
                                                 | (IData)(multiplier__DOT__fast_adder_upper__DOT____Vcellout__block0__s))))))));
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__block7__DOT__cout 
        = vlSelf->multiplier__DOT__fast_adder_upper__DOT__cout;
    vlSelf->multiplier__DOT__fast_adder_upper__DOT__s 
        = multiplier__DOT____Vcellout__fast_adder_upper__s;
    vlSelf->product = (((QData)((IData)(multiplier__DOT____Vcellout__fast_adder_upper__s)) 
                        << 0x20U) | (QData)((IData)(multiplier__DOT____Vcellout__fast_adder_lower__s)));
    vlSelf->multiplier__DOT__product = vlSelf->product;
}
