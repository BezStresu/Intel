// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_top.h for the primary calling header

#include "Vquadra_top__pch.h"
#include "Vquadra_top__Syms.h"
#include "Vquadra_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__ico(Vquadra_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vquadra_top___024root___eval_triggers__ico(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_triggers__ico\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vquadra_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__act(Vquadra_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vquadra_top___024root___eval_triggers__act(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_triggers__act\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.rst_b)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_b__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_b__0 = vlSelfRef.rst_b;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vquadra_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
