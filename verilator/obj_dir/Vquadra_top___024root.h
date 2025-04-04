// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vquadra_top.h for the primary calling header

#ifndef VERILATED_VQUADRA_TOP___024ROOT_H_
#define VERILATED_VQUADRA_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vquadra_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vquadra_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_b,0,0);
    VL_IN8(x_dv,0,0);
    VL_OUT8(y_dv,0,0);
    CData/*0:0*/ quadra_top__DOT__dv_p0;
    CData/*0:0*/ quadra_top__DOT__dv_p1;
    CData/*0:0*/ quadra_top__DOT__dv_p2;
    CData/*0:0*/ quadra_top__DOT__quadra_inst__DOT__dv_p0;
    CData/*0:0*/ quadra_top__DOT__quadra_inst__DOT__dv_p1;
    CData/*0:0*/ quadra_top__DOT__quadra_inst__DOT__dv_p2;
    CData/*0:0*/ quadra_top__DOT__quadra_inst__DOT__y_dv_r;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_b__0;
    CData/*0:0*/ __VactContinue;
    SData/*14:0*/ quadra_top__DOT__quadra_inst__DOT__b;
    SData/*9:0*/ quadra_top__DOT__quadra_inst__DOT__c;
    VL_IN(x,23,0);
    VL_OUT(y,23,0);
    IData/*20:0*/ quadra_top__DOT__quadra_inst__DOT__a;
    IData/*31:0*/ quadra_top__DOT__quadra_inst__DOT__t1_full;
    IData/*30:0*/ quadra_top__DOT__quadra_inst__DOT__t1;
    IData/*31:0*/ quadra_top__DOT__quadra_inst__DOT__t2;
    IData/*28:0*/ quadra_top__DOT__quadra_inst__DOT__s;
    IData/*31:0*/ __VactIterCount;
    QData/*35:0*/ quadra_top__DOT__quadra_inst__DOT__t2_full;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vquadra_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vquadra_top___024root(Vquadra_top__Syms* symsp, const char* v__name);
    ~Vquadra_top___024root();
    VL_UNCOPYABLE(Vquadra_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
