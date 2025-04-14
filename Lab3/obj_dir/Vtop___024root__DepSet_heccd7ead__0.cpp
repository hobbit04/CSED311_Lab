// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__reset = vlSelfRef.reset;
    vlSelfRef.top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.top__DOT__cpu__DOT__reset = vlSelfRef.top__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__reset = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__memory__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__clk = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__clk 
        = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__memory__DOT__clk 
        = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__clk 
        = vlSelfRef.top__DOT__cpu__DOT__clk;
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h1c498fed_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h13831e5c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h3b71eb4c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_hffc94ff4_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h7581e136_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_hc701609c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_ha22840e8_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_hfb65ae0a_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_hba486806_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_h2e837fce_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h8faf0667_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h6fd92d74_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vtop__ConstPool__TABLE_hb4df73e3_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__functs;
    top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__functs = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*10:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__cpu__DOT__reg_file__DOT__rf__v33;
    __VdlyVal__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v33;
    __VdlyDim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v33;
    __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__cpu__DOT__memory__DOT__mem__v0;
    __VdlyVal__top__DOT__cpu__DOT__memory__DOT__mem__v0 = 0;
    SData/*13:0*/ __VdlyDim0__top__DOT__cpu__DOT__memory__DOT__mem__v0;
    __VdlyDim0__top__DOT__cpu__DOT__memory__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__memory__DOT__mem__v0;
    __VdlySet__top__DOT__cpu__DOT__memory__DOT__mem__v0 = 0;
    // Body
    __VdlySet__top__DOT__cpu__DOT__memory__DOT__mem__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 = 0U;
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 1U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 2U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 3U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 4U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 5U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 6U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 7U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 8U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 9U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0xaU;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0xbU;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0xcU;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0xdU;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0xeU;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0xfU;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x10U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x11U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x12U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x13U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x14U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x15U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x16U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x17U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x18U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x19U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x1aU;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x1bU;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x1cU;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x1dU;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x1eU;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x1fU;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i = 0x20U;
    }
    if (VL_UNLIKELY((vlSelfRef.reset))) {
        vlSelfRef.top__DOT__cpu__DOT__memory__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelfRef.top__DOT__cpu__DOT__memory__DOT__i)) {
            vlSelfRef.top__DOT__cpu__DOT__memory__DOT__mem[(0x3fffU 
                                                            & vlSelfRef.top__DOT__cpu__DOT__memory__DOT__i)] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__memory__DOT__i 
                = ((IData)(1U) + vlSelfRef.top__DOT__cpu__DOT__memory__DOT__i);
        }
        VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(16, Vtop__ConstPool__CONST_h1c498fed_0)
                     ,  &(vlSelfRef.top__DOT__cpu__DOT__memory__DOT__mem)
                     , 0, ~0ULL);
    } else if (vlSelfRef.top__DOT__cpu__DOT__MemWrite) {
        __VdlyVal__top__DOT__cpu__DOT__memory__DOT__mem__v0 
            = vlSelfRef.top__DOT__cpu__DOT__B;
        __VdlyDim0__top__DOT__cpu__DOT__memory__DOT__mem__v0 
            = (0x3fffU & vlSelfRef.top__DOT__cpu__DOT__memory__DOT__mem_addr);
        __VdlySet__top__DOT__cpu__DOT__memory__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.reset) {
        __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 1U;
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__current_state = 0U;
        vlSelfRef.top__DOT__cpu__DOT__current_pc = 0U;
    } else {
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__RegWrite) 
             & (0U != (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                >> 7U))))) {
            __VdlyVal__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 
                = vlSelfRef.top__DOT__cpu__DOT__WriteData;
            __VdlyDim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 
                = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IR 
                            >> 7U));
            __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 = 1U;
        }
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__current_state 
            = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__next_state;
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__PCWrite) 
             | ((IData)(vlSelfRef.top__DOT__cpu__DOT__PCWriteCond) 
                & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_bcond)))) {
            vlSelfRef.top__DOT__cpu__DOT__current_pc 
                = vlSelfRef.top__DOT__cpu__DOT__next_pc;
        }
    }
    vlSelfRef.top__DOT__cpu__DOT__MDR = vlSelfRef.top__DOT__cpu__DOT__MemData;
    vlSelfRef.top__DOT__cpu__DOT__A = vlSelfRef.top__DOT__cpu__DOT__regA_value;
    vlSelfRef.top__DOT__cpu__DOT__ALUOut = vlSelfRef.top__DOT__cpu__DOT__alu_result;
    if (__VdlySet__top__DOT__cpu__DOT__memory__DOT__mem__v0) {
        vlSelfRef.top__DOT__cpu__DOT__memory__DOT__mem[__VdlyDim0__top__DOT__cpu__DOT__memory__DOT__mem__v0] 
            = __VdlyVal__top__DOT__cpu__DOT__memory__DOT__mem__v0;
    }
    if (__VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0) {
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[4U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[5U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[6U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[7U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[8U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[9U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xaU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xbU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xcU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xdU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xeU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0xfU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x10U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x11U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x12U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x13U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x14U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x15U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x16U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x17U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x18U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x19U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1aU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1bU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1cU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1dU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1eU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0x1fU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0x2ffcU;
    }
    if (__VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v33) {
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[__VdlyDim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v33] 
            = __VdlyVal__top__DOT__cpu__DOT__reg_file__DOT__rf__v33;
    }
    vlSelfRef.top__DOT__cpu__DOT__B = vlSelfRef.top__DOT__cpu__DOT__regB_value;
    if (vlSelfRef.top__DOT__cpu__DOT__IRWrite) {
        vlSelfRef.top__DOT__cpu__DOT__IR = vlSelfRef.top__DOT__cpu__DOT__MemData;
    }
    vlSelfRef.top__DOT__cpu__DOT__ecall_reg_cond = 
        (0xaU == vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
         [0x11U]);
    vlSelfRef.print_reg[0U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0U];
    vlSelfRef.print_reg[1U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [1U];
    vlSelfRef.print_reg[2U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [2U];
    vlSelfRef.print_reg[3U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [3U];
    vlSelfRef.print_reg[4U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [4U];
    vlSelfRef.print_reg[5U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [5U];
    vlSelfRef.print_reg[6U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [6U];
    vlSelfRef.print_reg[7U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [7U];
    vlSelfRef.print_reg[8U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [8U];
    vlSelfRef.print_reg[9U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [9U];
    vlSelfRef.print_reg[0xaU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xaU];
    vlSelfRef.print_reg[0xbU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xbU];
    vlSelfRef.print_reg[0xcU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xcU];
    vlSelfRef.print_reg[0xdU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xdU];
    vlSelfRef.print_reg[0xeU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xeU];
    vlSelfRef.print_reg[0xfU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xfU];
    vlSelfRef.print_reg[0x10U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x10U];
    vlSelfRef.print_reg[0x11U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x11U];
    vlSelfRef.print_reg[0x12U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x12U];
    vlSelfRef.print_reg[0x13U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x13U];
    vlSelfRef.print_reg[0x14U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x14U];
    vlSelfRef.print_reg[0x15U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x15U];
    vlSelfRef.print_reg[0x16U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x16U];
    vlSelfRef.print_reg[0x17U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x17U];
    vlSelfRef.print_reg[0x18U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x18U];
    vlSelfRef.print_reg[0x19U] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x19U];
    vlSelfRef.print_reg[0x1aU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1aU];
    vlSelfRef.print_reg[0x1bU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1bU];
    vlSelfRef.print_reg[0x1cU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1cU];
    vlSelfRef.print_reg[0x1dU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1dU];
    vlSelfRef.print_reg[0x1eU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1eU];
    vlSelfRef.print_reg[0x1fU] = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1fU];
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__current_state 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__current_state;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_machine__DOT__current_state 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__current_state;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    __Vtableidx1 = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__current_state;
    vlSelfRef.top__DOT__cpu__DOT__PCWriteCond = Vtop__ConstPool__TABLE_h13831e5c_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__PCWrite = Vtop__ConstPool__TABLE_h3b71eb4c_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__IorD = Vtop__ConstPool__TABLE_hffc94ff4_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__MemRead = Vtop__ConstPool__TABLE_h7581e136_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__MemWrite = Vtop__ConstPool__TABLE_hc701609c_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__MemtoReg = Vtop__ConstPool__TABLE_ha22840e8_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__IRWrite = Vtop__ConstPool__TABLE_hfb65ae0a_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__PCSource = Vtop__ConstPool__TABLE_h13831e5c_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__ALUOp = Vtop__ConstPool__TABLE_hba486806_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__ALUSrcB = Vtop__ConstPool__TABLE_h2e837fce_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__ALUSrcA = Vtop__ConstPool__TABLE_h8faf0667_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__RegWrite = Vtop__ConstPool__TABLE_h6fd92d74_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__ecall_reg_cond 
        = vlSelfRef.top__DOT__cpu__DOT__ecall_reg_cond;
    vlSelfRef.top__DOT__print_reg[0U] = vlSelfRef.print_reg
        [0U];
    vlSelfRef.top__DOT__print_reg[1U] = vlSelfRef.print_reg
        [1U];
    vlSelfRef.top__DOT__print_reg[2U] = vlSelfRef.print_reg
        [2U];
    vlSelfRef.top__DOT__print_reg[3U] = vlSelfRef.print_reg
        [3U];
    vlSelfRef.top__DOT__print_reg[4U] = vlSelfRef.print_reg
        [4U];
    vlSelfRef.top__DOT__print_reg[5U] = vlSelfRef.print_reg
        [5U];
    vlSelfRef.top__DOT__print_reg[6U] = vlSelfRef.print_reg
        [6U];
    vlSelfRef.top__DOT__print_reg[7U] = vlSelfRef.print_reg
        [7U];
    vlSelfRef.top__DOT__print_reg[8U] = vlSelfRef.print_reg
        [8U];
    vlSelfRef.top__DOT__print_reg[9U] = vlSelfRef.print_reg
        [9U];
    vlSelfRef.top__DOT__print_reg[0xaU] = vlSelfRef.print_reg
        [0xaU];
    vlSelfRef.top__DOT__print_reg[0xbU] = vlSelfRef.print_reg
        [0xbU];
    vlSelfRef.top__DOT__print_reg[0xcU] = vlSelfRef.print_reg
        [0xcU];
    vlSelfRef.top__DOT__print_reg[0xdU] = vlSelfRef.print_reg
        [0xdU];
    vlSelfRef.top__DOT__print_reg[0xeU] = vlSelfRef.print_reg
        [0xeU];
    vlSelfRef.top__DOT__print_reg[0xfU] = vlSelfRef.print_reg
        [0xfU];
    vlSelfRef.top__DOT__print_reg[0x10U] = vlSelfRef.print_reg
        [0x10U];
    vlSelfRef.top__DOT__print_reg[0x11U] = vlSelfRef.print_reg
        [0x11U];
    vlSelfRef.top__DOT__print_reg[0x12U] = vlSelfRef.print_reg
        [0x12U];
    vlSelfRef.top__DOT__print_reg[0x13U] = vlSelfRef.print_reg
        [0x13U];
    vlSelfRef.top__DOT__print_reg[0x14U] = vlSelfRef.print_reg
        [0x14U];
    vlSelfRef.top__DOT__print_reg[0x15U] = vlSelfRef.print_reg
        [0x15U];
    vlSelfRef.top__DOT__print_reg[0x16U] = vlSelfRef.print_reg
        [0x16U];
    vlSelfRef.top__DOT__print_reg[0x17U] = vlSelfRef.print_reg
        [0x17U];
    vlSelfRef.top__DOT__print_reg[0x18U] = vlSelfRef.print_reg
        [0x18U];
    vlSelfRef.top__DOT__print_reg[0x19U] = vlSelfRef.print_reg
        [0x19U];
    vlSelfRef.top__DOT__print_reg[0x1aU] = vlSelfRef.print_reg
        [0x1aU];
    vlSelfRef.top__DOT__print_reg[0x1bU] = vlSelfRef.print_reg
        [0x1bU];
    vlSelfRef.top__DOT__print_reg[0x1cU] = vlSelfRef.print_reg
        [0x1cU];
    vlSelfRef.top__DOT__print_reg[0x1dU] = vlSelfRef.print_reg
        [0x1dU];
    vlSelfRef.top__DOT__print_reg[0x1eU] = vlSelfRef.print_reg
        [0x1eU];
    vlSelfRef.top__DOT__print_reg[0x1fU] = vlSelfRef.print_reg
        [0x1fU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0U] = vlSelfRef.print_reg
        [0U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[1U] = vlSelfRef.print_reg
        [1U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[2U] = vlSelfRef.print_reg
        [2U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[3U] = vlSelfRef.print_reg
        [3U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[4U] = vlSelfRef.print_reg
        [4U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[5U] = vlSelfRef.print_reg
        [5U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[6U] = vlSelfRef.print_reg
        [6U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[7U] = vlSelfRef.print_reg
        [7U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[8U] = vlSelfRef.print_reg
        [8U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[9U] = vlSelfRef.print_reg
        [9U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0xaU] = 
        vlSelfRef.print_reg[0xaU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0xbU] = 
        vlSelfRef.print_reg[0xbU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0xcU] = 
        vlSelfRef.print_reg[0xcU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0xdU] = 
        vlSelfRef.print_reg[0xdU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0xeU] = 
        vlSelfRef.print_reg[0xeU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0xfU] = 
        vlSelfRef.print_reg[0xfU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x10U] 
        = vlSelfRef.print_reg[0x10U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x11U] 
        = vlSelfRef.print_reg[0x11U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x12U] 
        = vlSelfRef.print_reg[0x12U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x13U] 
        = vlSelfRef.print_reg[0x13U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x14U] 
        = vlSelfRef.print_reg[0x14U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x15U] 
        = vlSelfRef.print_reg[0x15U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x16U] 
        = vlSelfRef.print_reg[0x16U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x17U] 
        = vlSelfRef.print_reg[0x17U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x18U] 
        = vlSelfRef.print_reg[0x18U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x19U] 
        = vlSelfRef.print_reg[0x19U];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x1aU] 
        = vlSelfRef.print_reg[0x1aU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x1bU] 
        = vlSelfRef.print_reg[0x1bU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x1cU] 
        = vlSelfRef.print_reg[0x1cU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x1dU] 
        = vlSelfRef.print_reg[0x1dU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x1eU] 
        = vlSelfRef.print_reg[0x1eU];
    vlSelfRef.top__DOT__cpu__DOT__print_reg[0x1fU] 
        = vlSelfRef.print_reg[0x1fU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0U] 
        = vlSelfRef.print_reg[0U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[1U] 
        = vlSelfRef.print_reg[1U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[2U] 
        = vlSelfRef.print_reg[2U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[3U] 
        = vlSelfRef.print_reg[3U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[4U] 
        = vlSelfRef.print_reg[4U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[5U] 
        = vlSelfRef.print_reg[5U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[6U] 
        = vlSelfRef.print_reg[6U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[7U] 
        = vlSelfRef.print_reg[7U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[8U] 
        = vlSelfRef.print_reg[8U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[9U] 
        = vlSelfRef.print_reg[9U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xaU] 
        = vlSelfRef.print_reg[0xaU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xbU] 
        = vlSelfRef.print_reg[0xbU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xcU] 
        = vlSelfRef.print_reg[0xcU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xdU] 
        = vlSelfRef.print_reg[0xdU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xeU] 
        = vlSelfRef.print_reg[0xeU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xfU] 
        = vlSelfRef.print_reg[0xfU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x10U] 
        = vlSelfRef.print_reg[0x10U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x11U] 
        = vlSelfRef.print_reg[0x11U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x12U] 
        = vlSelfRef.print_reg[0x12U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x13U] 
        = vlSelfRef.print_reg[0x13U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x14U] 
        = vlSelfRef.print_reg[0x14U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x15U] 
        = vlSelfRef.print_reg[0x15U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x16U] 
        = vlSelfRef.print_reg[0x16U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x17U] 
        = vlSelfRef.print_reg[0x17U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x18U] 
        = vlSelfRef.print_reg[0x18U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x19U] 
        = vlSelfRef.print_reg[0x19U];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1aU] 
        = vlSelfRef.print_reg[0x1aU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1bU] 
        = vlSelfRef.print_reg[0x1bU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1cU] 
        = vlSelfRef.print_reg[0x1cU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1dU] 
        = vlSelfRef.print_reg[0x1dU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1eU] 
        = vlSelfRef.print_reg[0x1eU];
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1fU] 
        = vlSelfRef.print_reg[0x1fU];
    vlSelfRef.top__DOT__cpu__DOT__memory__DOT__din 
        = vlSelfRef.top__DOT__cpu__DOT__B;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IR 
                    >> 0xfU));
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IR 
                    >> 0x14U));
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IR 
                    >> 7U));
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__IR 
        = vlSelfRef.top__DOT__cpu__DOT__IR;
    vlSelfRef.top__DOT__cpu__DOT__regA_value = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IR 
                   >> 0xfU))];
    vlSelfRef.top__DOT__cpu__DOT__regB_value = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IR 
                   >> 0x14U))];
    top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__functs 
        = ((8U & (vlSelfRef.top__DOT__cpu__DOT__IR 
                  >> 0x1bU)) | (7U & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                      >> 0xcU)));
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = (0x7fU & vlSelfRef.top__DOT__cpu__DOT__IR);
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__IRWrite 
        = vlSelfRef.top__DOT__cpu__DOT__IRWrite;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__PCWriteCond 
        = vlSelfRef.top__DOT__cpu__DOT__PCWriteCond;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__PCWriteCond 
        = vlSelfRef.top__DOT__cpu__DOT__PCWriteCond;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__PCWrite 
        = vlSelfRef.top__DOT__cpu__DOT__PCWrite;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__PCWrite 
        = vlSelfRef.top__DOT__cpu__DOT__PCWrite;
    vlSelfRef.top__DOT__cpu__DOT__memory__DOT__mem_write 
        = vlSelfRef.top__DOT__cpu__DOT__MemWrite;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__MemWrite 
        = vlSelfRef.top__DOT__cpu__DOT__MemWrite;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__write_enable 
        = vlSelfRef.top__DOT__cpu__DOT__RegWrite;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__RegWrite 
        = vlSelfRef.top__DOT__cpu__DOT__RegWrite;
    if (vlSelfRef.top__DOT__cpu__DOT__MemtoReg) {
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__MemtoReg = 1U;
        vlSelfRef.top__DOT__cpu__DOT__WriteData = vlSelfRef.top__DOT__cpu__DOT__MDR;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__MemtoReg = 0U;
        vlSelfRef.top__DOT__cpu__DOT__WriteData = vlSelfRef.top__DOT__cpu__DOT__ALUOut;
    }
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__PCSource 
        = vlSelfRef.top__DOT__cpu__DOT__PCSource;
    vlSelfRef.top__DOT__cpu__DOT__memory__DOT__mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__MemRead;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__MemRead 
        = vlSelfRef.top__DOT__cpu__DOT__MemRead;
    if (vlSelfRef.top__DOT__cpu__DOT__IorD) {
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__IorD = 1U;
        vlSelfRef.top__DOT__cpu__DOT__addr = vlSelfRef.top__DOT__cpu__DOT__ALUOut;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__IorD = 0U;
        vlSelfRef.top__DOT__cpu__DOT__addr = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    }
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSrcB 
        = vlSelfRef.top__DOT__cpu__DOT__ALUSrcB;
    if (vlSelfRef.top__DOT__cpu__DOT__ALUSrcA) {
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSrcA = 1U;
        vlSelfRef.top__DOT__cpu__DOT__alu_in_1 = vlSelfRef.top__DOT__cpu__DOT__A;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSrcA = 0U;
        vlSelfRef.top__DOT__cpu__DOT__alu_in_1 = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    }
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__ALUOp 
        = vlSelfRef.top__DOT__cpu__DOT__ALUOp;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__ALUOp 
        = vlSelfRef.top__DOT__cpu__DOT__ALUOp;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1_dout 
        = vlSelfRef.top__DOT__cpu__DOT__regA_value;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelfRef.top__DOT__cpu__DOT__regB_value;
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__functs 
        = top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__functs;
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode 
        = vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__opcode 
        = vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode;
    __Vtableidx2 = (((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                     << 4U) | (IData)(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__current_state));
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__next_state 
        = Vtop__ConstPool__TABLE_hb4df73e3_0[__Vtableidx2];
    vlSelfRef.top__DOT__cpu__DOT__is_ecall = (0x73U 
                                              == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode));
    vlSelfRef.top__DOT__cpu__DOT__ALUControl = ((0U 
                                                 == (IData)(vlSelfRef.top__DOT__cpu__DOT__ALUOp))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.top__DOT__cpu__DOT__ALUOp))
                                                  ? 
                                                 (0x10U 
                                                  | (IData)(top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__functs))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.top__DOT__cpu__DOT__ALUOp))
                                                   ? 
                                                  ((0x13U 
                                                    == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                    ? 
                                                   (0x20U 
                                                    | (IData)(top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__functs))
                                                    : (IData)(top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__functs))
                                                   : 0U)));
    vlSelfRef.top__DOT__cpu__DOT__immediate = ((0x40U 
                                                & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                ? (
                                                   (0x20U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                      >> 0x1fU))) 
                                                          << 0x14U) 
                                                         | (((0xff000U 
                                                              & vlSelfRef.top__DOT__cpu__DOT__IR) 
                                                             | (0x800U 
                                                                & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                   >> 9U))) 
                                                            | (0x7feU 
                                                               & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                  >> 0x14U))))
                                                         : 0U)
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                            >> 0x14U))
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | ((0x800U 
                                                             & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                << 4U)) 
                                                            | ((0x7e0U 
                                                                & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                   >> 0x14U)) 
                                                               | (0x1eU 
                                                                  & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                     >> 7U)))))
                                                         : 0U)
                                                        : 0U))))
                                                    : 0U)
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | ((0xfe0U 
                                                             & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                  >> 7U))))
                                                         : 0U)
                                                        : 0U))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                            >> 0x14U))
                                                         : 0U)
                                                        : 0U)))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | (vlSelfRef.top__DOT__cpu__DOT__IR 
                                                            >> 0x14U))
                                                         : 0U)
                                                        : 0U))))));
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__IRWrite 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__IRWrite;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__PCWriteCond 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__PCWriteCond;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__PCWrite 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__PCWrite;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__MemWrite 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__MemWrite;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__RegWrite 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__RegWrite;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__MemtoReg 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__MemtoReg;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd_din 
        = vlSelfRef.top__DOT__cpu__DOT__WriteData;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__PCSource 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__PCSource;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__MemRead 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__MemRead;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__IorD 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__IorD;
    vlSelfRef.top__DOT__cpu__DOT__memory__DOT__addr 
        = vlSelfRef.top__DOT__cpu__DOT__addr;
    vlSelfRef.top__DOT__cpu__DOT__memory__DOT__mem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__addr, 2U);
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__ALUSrcB 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSrcB;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__ALUSrcA 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSrcA;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_in_1 
        = vlSelfRef.top__DOT__cpu__DOT__alu_in_1;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__ALUOp 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__ALUOp;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_machine__DOT__opcode 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__opcode;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_machine__DOT__next_state 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__next_state;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall 
        = vlSelfRef.top__DOT__cpu__DOT__is_ecall;
    vlSelfRef.is_halted = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ecall_reg_cond) 
                           & (IData)(vlSelfRef.top__DOT__cpu__DOT__is_ecall));
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__ALUControl 
        = vlSelfRef.top__DOT__cpu__DOT__ALUControl;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__ALUControl 
        = vlSelfRef.top__DOT__cpu__DOT__ALUControl;
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out 
        = vlSelfRef.top__DOT__cpu__DOT__immediate;
    vlSelfRef.top__DOT__cpu__DOT__alu_in_2 = ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ALUSrcB))
                                               ? vlSelfRef.top__DOT__cpu__DOT__immediate
                                               : ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__ALUSrcB))
                                                   ? 4U
                                                   : vlSelfRef.top__DOT__cpu__DOT__B));
    vlSelfRef.top__DOT__cpu__DOT__MemData = ((IData)(vlSelfRef.top__DOT__cpu__DOT__MemRead)
                                              ? vlSelfRef.top__DOT__cpu__DOT__memory__DOT__mem
                                             [(0x3fffU 
                                               & vlSelfRef.top__DOT__cpu__DOT__memory__DOT__mem_addr)]
                                              : 0U);
    vlSelfRef.top__DOT__is_halted = vlSelfRef.is_halted;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_in_2 
        = vlSelfRef.top__DOT__cpu__DOT__alu_in_2;
    vlSelfRef.top__DOT__cpu__DOT__alu_bcond = 0U;
    if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ALUControl))) {
        if ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ALUControl))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__ALUControl) 
                          >> 1U)))) {
                vlSelfRef.top__DOT__cpu__DOT__alu_bcond 
                    = ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ALUControl))
                        ? VL_GTES_III(32, vlSelfRef.top__DOT__cpu__DOT__alu_in_1, vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                        : VL_LTS_III(32, vlSelfRef.top__DOT__cpu__DOT__alu_in_1, vlSelfRef.top__DOT__cpu__DOT__alu_in_2));
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__ALUControl) 
                             >> 1U)))) {
            vlSelfRef.top__DOT__cpu__DOT__alu_bcond 
                = ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ALUControl))
                    ? (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                       != vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                    : (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                       == vlSelfRef.top__DOT__cpu__DOT__alu_in_2));
        }
    }
    vlSelfRef.top__DOT__cpu__DOT__alu_result = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__ALUControl) 
                  >> 4U)))) {
        if ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ALUControl))) {
            vlSelfRef.top__DOT__cpu__DOT__alu_result 
                = ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ALUControl))
                    ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ALUControl))
                        ? (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                           & vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                        : (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                           | vlSelfRef.top__DOT__cpu__DOT__alu_in_2))
                    : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ALUControl))
                        ? (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                           >> (0x1fU & vlSelfRef.top__DOT__cpu__DOT__alu_in_2))
                        : (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                           ^ vlSelfRef.top__DOT__cpu__DOT__alu_in_2)));
        } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__ALUControl) 
                             >> 1U)))) {
            vlSelfRef.top__DOT__cpu__DOT__alu_result 
                = ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ALUControl))
                    ? (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                       << (0x1fU & vlSelfRef.top__DOT__cpu__DOT__alu_in_2))
                    : ((IData)((8U != (0x28U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ALUControl))))
                        ? (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                           + vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                        : (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                           - vlSelfRef.top__DOT__cpu__DOT__alu_in_2)));
        }
    }
    vlSelfRef.top__DOT__cpu__DOT__memory__DOT__dout 
        = vlSelfRef.top__DOT__cpu__DOT__MemData;
    vlSelfRef.top__DOT__cpu__DOT__is_halted = vlSelfRef.top__DOT__is_halted;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__alu_bcond 
        = vlSelfRef.top__DOT__cpu__DOT__alu_bcond;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_bcond 
        = vlSelfRef.top__DOT__cpu__DOT__alu_bcond;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_result 
        = vlSelfRef.top__DOT__cpu__DOT__alu_result;
    vlSelfRef.top__DOT__cpu__DOT__next_pc = ((IData)(vlSelfRef.top__DOT__cpu__DOT__PCSource)
                                              ? vlSelfRef.top__DOT__cpu__DOT__ALUOut
                                              : vlSelfRef.top__DOT__cpu__DOT__alu_result);
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__next_pc 
        = vlSelfRef.top__DOT__cpu__DOT__next_pc;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("top.v", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
