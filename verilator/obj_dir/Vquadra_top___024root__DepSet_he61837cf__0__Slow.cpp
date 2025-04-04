// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_top.h for the primary calling header

#include "Vquadra_top__pch.h"
#include "Vquadra_top___024root.h"

VL_ATTR_COLD void Vquadra_top___024root___eval_static(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_static\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_b__0 = vlSelfRef.rst_b;
}

VL_ATTR_COLD void Vquadra_top___024root___eval_initial(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_initial\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vquadra_top___024root___eval_final(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_final\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__stl(Vquadra_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vquadra_top___024root___eval_phase__stl(Vquadra_top___024root* vlSelf);

VL_ATTR_COLD void Vquadra_top___024root___eval_settle(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_settle\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vquadra_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/jlintel/Intel/zadanie/rtl-model/quadra_top.vs", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vquadra_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__stl(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___dump_triggers__stl\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vquadra_top___024root___stl_sequent__TOP__0(Vquadra_top___024root* vlSelf);
VL_ATTR_COLD void Vquadra_top___024root____Vm_traceActivitySetAll(Vquadra_top___024root* vlSelf);

VL_ATTR_COLD void Vquadra_top___024root___eval_stl(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_stl\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vquadra_top___024root___stl_sequent__TOP__0(vlSelf);
        Vquadra_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<IData/*20:0*/, 128> Vquadra_top__ConstPool__TABLE_hbc96f5d1_0;
extern const VlUnpacked<SData/*14:0*/, 128> Vquadra_top__ConstPool__TABLE_h2c5a33e4_0;
extern const VlUnpacked<SData/*9:0*/, 128> Vquadra_top__ConstPool__TABLE_h9a41d1e1_0;

VL_ATTR_COLD void Vquadra_top___024root___stl_sequent__TOP__0(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___stl_sequent__TOP__0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.y_dv = vlSelfRef.quadra_top__DOT__quadra_inst__DOT__y_dv_r;
    __Vtableidx1 = (0x7fU & (vlSelfRef.x >> 0x11U));
    vlSelfRef.quadra_top__DOT__quadra_inst__DOT__a 
        = Vquadra_top__ConstPool__TABLE_hbc96f5d1_0
        [__Vtableidx1];
    __Vtableidx2 = (0x7fU & (vlSelfRef.x >> 0x11U));
    vlSelfRef.quadra_top__DOT__quadra_inst__DOT__b 
        = Vquadra_top__ConstPool__TABLE_h2c5a33e4_0
        [__Vtableidx2];
    __Vtableidx3 = (0x7fU & (vlSelfRef.x >> 0x11U));
    vlSelfRef.quadra_top__DOT__quadra_inst__DOT__c 
        = Vquadra_top__ConstPool__TABLE_h9a41d1e1_0
        [__Vtableidx3];
}

VL_ATTR_COLD void Vquadra_top___024root___eval_triggers__stl(Vquadra_top___024root* vlSelf);

VL_ATTR_COLD bool Vquadra_top___024root___eval_phase__stl(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_phase__stl\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vquadra_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vquadra_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__ico(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___dump_triggers__ico\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__act(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___dump_triggers__act\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_b)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__nba(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___dump_triggers__nba\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_b)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vquadra_top___024root____Vm_traceActivitySetAll(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root____Vm_traceActivitySetAll\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vquadra_top___024root___ctor_var_reset(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___ctor_var_reset\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_b = VL_RAND_RESET_I(1);
    vlSelf->x = VL_RAND_RESET_I(24);
    vlSelf->x_dv = VL_RAND_RESET_I(1);
    vlSelf->y = VL_RAND_RESET_I(24);
    vlSelf->y_dv = VL_RAND_RESET_I(1);
    vlSelf->quadra_top__DOT__dv_p0 = VL_RAND_RESET_I(1);
    vlSelf->quadra_top__DOT__dv_p1 = VL_RAND_RESET_I(1);
    vlSelf->quadra_top__DOT__dv_p2 = VL_RAND_RESET_I(1);
    vlSelf->quadra_top__DOT__quadra_inst__DOT__dv_p0 = VL_RAND_RESET_I(1);
    vlSelf->quadra_top__DOT__quadra_inst__DOT__dv_p1 = VL_RAND_RESET_I(1);
    vlSelf->quadra_top__DOT__quadra_inst__DOT__dv_p2 = VL_RAND_RESET_I(1);
    vlSelf->quadra_top__DOT__quadra_inst__DOT__a = VL_RAND_RESET_I(21);
    vlSelf->quadra_top__DOT__quadra_inst__DOT__b = VL_RAND_RESET_I(15);
    vlSelf->quadra_top__DOT__quadra_inst__DOT__c = VL_RAND_RESET_I(10);
    vlSelf->quadra_top__DOT__quadra_inst__DOT__t1_full = VL_RAND_RESET_I(32);
    vlSelf->quadra_top__DOT__quadra_inst__DOT__t1 = VL_RAND_RESET_I(31);
    vlSelf->quadra_top__DOT__quadra_inst__DOT__t2_full = VL_RAND_RESET_Q(36);
    vlSelf->quadra_top__DOT__quadra_inst__DOT__t2 = VL_RAND_RESET_I(32);
    vlSelf->quadra_top__DOT__quadra_inst__DOT__s = VL_RAND_RESET_I(29);
    vlSelf->quadra_top__DOT__quadra_inst__DOT__y_dv_r = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_b__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
