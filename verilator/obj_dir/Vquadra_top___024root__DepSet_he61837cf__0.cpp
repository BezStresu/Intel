// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_top.h for the primary calling header

#include "Vquadra_top__pch.h"
#include "Vquadra_top___024root.h"

void Vquadra_top___024root___ico_sequent__TOP__0(Vquadra_top___024root* vlSelf);

void Vquadra_top___024root___eval_ico(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_ico\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vquadra_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<IData/*20:0*/, 128> Vquadra_top__ConstPool__TABLE_hbc96f5d1_0;
extern const VlUnpacked<SData/*14:0*/, 128> Vquadra_top__ConstPool__TABLE_h2c5a33e4_0;
extern const VlUnpacked<SData/*9:0*/, 128> Vquadra_top__ConstPool__TABLE_h9a41d1e1_0;

VL_INLINE_OPT void Vquadra_top___024root___ico_sequent__TOP__0(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___ico_sequent__TOP__0\n"); );
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

void Vquadra_top___024root___eval_triggers__ico(Vquadra_top___024root* vlSelf);

bool Vquadra_top___024root___eval_phase__ico(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_phase__ico\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vquadra_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vquadra_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vquadra_top___024root___eval_act(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_act\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vquadra_top___024root___nba_sequent__TOP__0(Vquadra_top___024root* vlSelf);

void Vquadra_top___024root___eval_nba(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_nba\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vquadra_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vquadra_top___024root___nba_sequent__TOP__0(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___nba_sequent__TOP__0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_b) {
        if (vlSelfRef.quadra_top__DOT__quadra_inst__DOT__dv_p2) {
            vlSelfRef.quadra_top__DOT__quadra_inst__DOT__y_dv_r = 1U;
            vlSelfRef.y = (0xffffffU & vlSelfRef.quadra_top__DOT__quadra_inst__DOT__s);
            vlSelfRef.quadra_top__DOT__quadra_inst__DOT__s 
                = (0x1fffffffU & ((VL_EXTENDS_II(29,21, vlSelfRef.quadra_top__DOT__quadra_inst__DOT__a) 
                                   + VL_EXTENDS_II(29,31, vlSelfRef.quadra_top__DOT__quadra_inst__DOT__t1)) 
                                  + vlSelfRef.quadra_top__DOT__quadra_inst__DOT__t2));
            vlSelfRef.quadra_top__DOT__quadra_inst__DOT__t2 
                = (IData)((0xfffffffffULL & VL_SHIFTRS_QQI(36,36,32, vlSelfRef.quadra_top__DOT__quadra_inst__DOT__t2_full, 4U)));
            vlSelfRef.quadra_top__DOT__quadra_inst__DOT__t2_full 
                = (0xfffffffffULL & ((QData)((IData)(vlSelfRef.quadra_top__DOT__quadra_inst__DOT__c)) 
                                     * (QData)((IData)(
                                                       (0x3ffffffU 
                                                        & VL_SHIFTR_III(26,26,32, 
                                                                        (0x3ffffffU 
                                                                         & ((0x1ffffU 
                                                                             & vlSelfRef.x) 
                                                                            * 
                                                                            (0x1ffffU 
                                                                             & vlSelfRef.x))), 0x11U))))));
        } else {
            vlSelfRef.quadra_top__DOT__quadra_inst__DOT__y_dv_r = 0U;
        }
        if (vlSelfRef.quadra_top__DOT__quadra_inst__DOT__dv_p1) {
            vlSelfRef.quadra_top__DOT__quadra_inst__DOT__t1 
                = (0x7fffffffU & VL_SHIFTRS_III(31,32,32, vlSelfRef.quadra_top__DOT__quadra_inst__DOT__t1_full, 2U));
            vlSelfRef.quadra_top__DOT__quadra_inst__DOT__t1_full 
                = ((IData)(vlSelfRef.quadra_top__DOT__quadra_inst__DOT__b) 
                   * (0x1ffffU & vlSelfRef.x));
        }
    } else {
        vlSelfRef.quadra_top__DOT__quadra_inst__DOT__y_dv_r = 0U;
        vlSelfRef.y = 0U;
        vlSelfRef.quadra_top__DOT__quadra_inst__DOT__s = 0U;
        vlSelfRef.quadra_top__DOT__quadra_inst__DOT__t1 = 0U;
        vlSelfRef.quadra_top__DOT__quadra_inst__DOT__t2 = 0U;
    }
    vlSelfRef.y_dv = vlSelfRef.quadra_top__DOT__quadra_inst__DOT__y_dv_r;
    vlSelfRef.quadra_top__DOT__quadra_inst__DOT__dv_p2 
        = ((IData)(vlSelfRef.rst_b) && (IData)(vlSelfRef.quadra_top__DOT__quadra_inst__DOT__dv_p1));
    vlSelfRef.quadra_top__DOT__quadra_inst__DOT__dv_p1 
        = ((IData)(vlSelfRef.rst_b) && (IData)(vlSelfRef.quadra_top__DOT__quadra_inst__DOT__dv_p0));
    vlSelfRef.quadra_top__DOT__quadra_inst__DOT__dv_p0 
        = ((IData)(vlSelfRef.rst_b) && (IData)(vlSelfRef.quadra_top__DOT__dv_p2));
    vlSelfRef.quadra_top__DOT__dv_p2 = ((IData)(vlSelfRef.rst_b) 
                                        && (IData)(vlSelfRef.quadra_top__DOT__dv_p1));
    vlSelfRef.quadra_top__DOT__dv_p1 = ((IData)(vlSelfRef.rst_b) 
                                        && (IData)(vlSelfRef.quadra_top__DOT__dv_p0));
    vlSelfRef.quadra_top__DOT__dv_p0 = ((IData)(vlSelfRef.rst_b) 
                                        && (IData)(vlSelfRef.x_dv));
}

void Vquadra_top___024root___eval_triggers__act(Vquadra_top___024root* vlSelf);

bool Vquadra_top___024root___eval_phase__act(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_phase__act\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vquadra_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vquadra_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vquadra_top___024root___eval_phase__nba(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_phase__nba\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vquadra_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__ico(Vquadra_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__nba(Vquadra_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__act(Vquadra_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vquadra_top___024root___eval(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vquadra_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/jlintel/Intel/zadanie/rtl-model/quadra_top.vs", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vquadra_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vquadra_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/jlintel/Intel/zadanie/rtl-model/quadra_top.vs", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vquadra_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/jlintel/Intel/zadanie/rtl-model/quadra_top.vs", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vquadra_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vquadra_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vquadra_top___024root___eval_debug_assertions(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_debug_assertions\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_b & 0xfeU)))) {
        Verilated::overWidthError("rst_b");}
    if (VL_UNLIKELY(((vlSelfRef.x & 0xff000000U)))) {
        Verilated::overWidthError("x");}
    if (VL_UNLIKELY(((vlSelfRef.x_dv & 0xfeU)))) {
        Verilated::overWidthError("x_dv");}
}
#endif  // VL_DEBUG
