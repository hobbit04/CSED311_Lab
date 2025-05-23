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
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__reset = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__clk 
        = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__clk = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__clk = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__clk 
        = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__clk = vlSelfRef.top__DOT__cpu__DOT__clk;
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
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

extern const VlWide<9>/*287:0*/ Vtop__ConstPool__CONST_he82fe73f_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vtop__ConstPool__TABLE_hff25af95_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_0;
    __VdfgRegularize_hd87f99a1_0_0 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vdly__top__DOT__cpu__DOT__branch_predictor__DOT__BHSR;
    __Vdly__top__DOT__cpu__DOT__branch_predictor__DOT__BHSR = 0;
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__dmem__DOT__delay_counter;
    __Vdly__top__DOT__cpu__DOT__dmem__DOT__delay_counter = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v0;
    __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v32;
    __VdlyVal__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v32 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v32;
    __VdlyDim0__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v32;
    __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__tag__v0;
    __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__tag__v0 = 0;
    IData/*26:0*/ __VdlyVal__top__DOT__cpu__DOT__branch_predictor__DOT__tag__v32;
    __VdlyVal__top__DOT__cpu__DOT__branch_predictor__DOT__tag__v32 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__cpu__DOT__branch_predictor__DOT__tag__v32;
    __VdlyDim0__top__DOT__cpu__DOT__branch_predictor__DOT__tag__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__tag__v32;
    __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__tag__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__valid__v0;
    __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__valid__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__cpu__DOT__branch_predictor__DOT__valid__v32;
    __VdlyDim0__top__DOT__cpu__DOT__branch_predictor__DOT__valid__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__valid__v32;
    __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__valid__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v0;
    __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v0 = 0;
    CData/*1:0*/ __VdlyVal__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v32;
    __VdlyVal__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v32 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v32;
    __VdlyDim0__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v32;
    __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v32 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    VL_ZERO_W(128, __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0);
    SData/*13:0*/ __VdlyDim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    __VdlyDim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    __VdlySet__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0;
    // Body
    __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__valid__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__valid__v32 = 0U;
    __Vdly__top__DOT__cpu__DOT__branch_predictor__DOT__BHSR 
        = vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BHSR;
    __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v32 = 0U;
    __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__tag__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__tag__v32 = 0U;
    __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v32 = 0U;
    __Vdly__top__DOT__cpu__DOT__dmem__DOT__delay_counter 
        = vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__delay_counter;
    __VdlySet__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0U;
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 1U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 3U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 4U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 5U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 6U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 7U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 8U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 9U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0xaU;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0xbU;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0xcU;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0xdU;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0xeU;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0xfU;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x10U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x11U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x12U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x13U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x14U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x15U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x16U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x17U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x18U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x19U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x1aU;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x1bU;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x1cU;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x1dU;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x1eU;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x1fU;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x20U;
    }
    if (VL_UNLIKELY((vlSelfRef.reset))) {
        vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i)) {
            vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem[(0x3fffU 
                                                          & vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i)] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i 
                = ((IData)(1U) + vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i);
        }
        VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(9, Vtop__ConstPool__CONST_he82fe73f_0)
                     ,  &(vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem)
                     , 0, ~0ULL);
    }
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___mem_write) 
             & (0U == vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__delay_counter))) {
            __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0[0U] 
                = vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___din[0U];
            __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0[1U] 
                = vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___din[1U];
            __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0[2U] 
                = vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___din[2U];
            __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0[3U] 
                = vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___din[3U];
            __VdlyDim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0 
                = (0x3fffU & vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___mem_addr);
            __VdlySet__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 1U;
        }
    }
    if ((((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__prediction_wrong)) 
         | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall))) {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1_data = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2_data = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_predicted_next_pc = 0xffffffffU;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2 = 0U;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1_data 
            = vlSelfRef.top__DOT__cpu__DOT__rs1_data;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2_data 
            = vlSelfRef.top__DOT__cpu__DOT__rs2_data;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_predicted_next_pc 
            = vlSelfRef.top__DOT__cpu__DOT__IF_ID_predicted_next_pc;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm = vlSelfRef.top__DOT__cpu__DOT__imm_gen_out;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1 = vlSelfRef.top__DOT__cpu__DOT__rs1_in;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op 
            = vlSelfRef.top__DOT__cpu__DOT__alu_op;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input 
            = ((8U & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                      >> 0x1bU)) | (7U & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                          >> 0xcU)));
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2 = (0x1fU 
                                                   & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                      >> 0x14U));
    }
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i)) {
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem[(0x3fffU 
                                                          & vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i)][0U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem[(0x3fffU 
                                                          & vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i)][1U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem[(0x3fffU 
                                                          & vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i)][2U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem[(0x3fffU 
                                                          & vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i)][3U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i 
                = ((IData)(1U) + vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i);
        }
        __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__valid__v0 = 1U;
        __Vdly__top__DOT__cpu__DOT__branch_predictor__DOT__BHSR = 0U;
        __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v0 = 1U;
        __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__tag__v0 = 1U;
        __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v0 = 1U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_PHT_index = 0U;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_plus_4 = 0U;
        __Vdly__top__DOT__cpu__DOT__dmem__DOT__delay_counter = 0U;
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___mem_read = 0U;
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___mem_write = 0U;
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___mem_addr = 0U;
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___din[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___din[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___din[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___din[3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__IF_ID_PHT_index = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc_plus_4 = 0U;
    } else {
        if ((0xffffffffU != vlSelfRef.top__DOT__cpu__DOT__update_pc)) {
            __VdlyDim0__top__DOT__cpu__DOT__branch_predictor__DOT__valid__v32 
                = vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__update_BTB_index;
            __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__valid__v32 = 1U;
            __Vdly__top__DOT__cpu__DOT__branch_predictor__DOT__BHSR 
                = ((0x1eU & ((IData)(vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BHSR) 
                             << 1U)) | (IData)(vlSelfRef.top__DOT__cpu__DOT__actual_branch_taken));
            __VdlyVal__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v32 
                = vlSelfRef.top__DOT__cpu__DOT__branch_addr;
            __VdlyDim0__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v32 
                = vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__update_BTB_index;
            __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v32 = 1U;
            __VdlyVal__top__DOT__cpu__DOT__branch_predictor__DOT__tag__v32 
                = (vlSelfRef.top__DOT__cpu__DOT__update_pc 
                   >> 5U);
            __VdlyDim0__top__DOT__cpu__DOT__branch_predictor__DOT__tag__v32 
                = vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__update_BTB_index;
            __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__tag__v32 = 1U;
            __VdlyVal__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v32 
                = vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__next_PHT;
            __VdlyDim0__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v32 
                = vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__update_PHT_index;
            __VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v32 = 1U;
        }
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_PHT_index 
            = vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__IF_ID_PHT_index;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2 
            = vlSelfRef.top__DOT__cpu__DOT__mem_data;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 
            = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_plus_4 
            = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc_plus_4;
        if (((IData)(vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__request_arrived) 
             & (0U == vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__delay_counter))) {
            __Vdly__top__DOT__cpu__DOT__dmem__DOT__delay_counter = 0x32U;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___mem_read 
                = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___mem_write 
                = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___mem_addr 
                = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___din[0U] 
                = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___din[1U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___din[2U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___din[3U] = 0U;
        } else if ((0U < vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__delay_counter)) {
            __Vdly__top__DOT__cpu__DOT__dmem__DOT__delay_counter 
                = (vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__delay_counter 
                   - (IData)(1U));
        } else {
            __Vdly__top__DOT__cpu__DOT__dmem__DOT__delay_counter = 0U;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___mem_read = 0U;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___mem_write = 0U;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___mem_addr = 0U;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___din[0U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___din[1U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___din[2U] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___din[3U] = 0U;
        }
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__IF_ID_PHT_index 
            = vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__predict_PHT_index;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc_plus_4 
            = ((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc);
    }
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc = ((((IData)(vlSelfRef.reset) 
                                                | (IData)(vlSelfRef.top__DOT__cpu__DOT__prediction_wrong)) 
                                               | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall))
                                               ? 0xffffffffU
                                               : vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc);
    vlSelfRef.top__DOT__cpu__DOT__MEM_WB_is_halted 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_is_halted));
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_branch = ((1U 
                                                   & (~ 
                                                      (((IData)(vlSelfRef.reset) 
                                                        | (IData)(vlSelfRef.top__DOT__cpu__DOT__prediction_wrong)) 
                                                       | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall)))) 
                                                  && (IData)(vlSelfRef.top__DOT__cpu__DOT__branch));
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jal = ((1U 
                                                   & (~ 
                                                      (((IData)(vlSelfRef.reset) 
                                                        | (IData)(vlSelfRef.top__DOT__cpu__DOT__prediction_wrong)) 
                                                       | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall)))) 
                                                  && (IData)(vlSelfRef.top__DOT__cpu__DOT__is_jal));
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_predicted_branch_taken 
        = ((1U & (~ (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__prediction_wrong)) 
                     | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall)))) 
           && (IData)(vlSelfRef.top__DOT__cpu__DOT__IF_ID_predicted_branch_taken));
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jalr = (
                                                   (1U 
                                                    & (~ 
                                                       (((IData)(vlSelfRef.reset) 
                                                         | (IData)(vlSelfRef.top__DOT__cpu__DOT__prediction_wrong)) 
                                                        | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall)))) 
                                                   && (IData)(vlSelfRef.top__DOT__cpu__DOT__is_jalr));
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_src = (
                                                   (1U 
                                                    & (~ 
                                                       (((IData)(vlSelfRef.reset) 
                                                         | (IData)(vlSelfRef.top__DOT__cpu__DOT__prediction_wrong)) 
                                                        | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall)))) 
                                                   && (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_src));
    vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_to_reg));
    vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_to_reg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc_to_reg));
    if (__VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__valid__v0) {
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[4U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[5U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[6U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[7U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[8U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[9U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0xaU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0xbU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0xcU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0xdU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0xeU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0xfU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0x10U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0x11U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0x12U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0x13U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0x14U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0x15U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0x16U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0x17U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0x18U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0x19U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0x1aU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0x1bU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0x1cU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0x1dU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0x1eU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[0x1fU] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__valid__v32) {
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid[__VdlyDim0__top__DOT__cpu__DOT__branch_predictor__DOT__valid__v32] = 1U;
    }
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BHSR 
        = __Vdly__top__DOT__cpu__DOT__branch_predictor__DOT__BHSR;
    if (__VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v0) {
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[4U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[5U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[6U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[7U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[8U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[9U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0xaU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0xbU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0xcU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0xdU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0xeU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0xfU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x10U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x11U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x12U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x13U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x14U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x15U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x16U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x17U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x18U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x19U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x1aU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x1bU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x1cU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x1dU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x1eU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x1fU] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v32) {
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB[__VdlyDim0__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v32] 
            = __VdlyVal__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v32;
    }
    if (__VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__tag__v0) {
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[4U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[5U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[6U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[7U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[8U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[9U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0xaU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0xbU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0xcU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0xdU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0xeU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0xfU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0x10U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0x11U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0x12U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0x13U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0x14U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0x15U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0x16U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0x17U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0x18U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0x19U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0x1aU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0x1bU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0x1cU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0x1dU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0x1eU] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[0x1fU] = 0U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__tag__v32) {
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag[__VdlyDim0__top__DOT__cpu__DOT__branch_predictor__DOT__tag__v32] 
            = __VdlyVal__top__DOT__cpu__DOT__branch_predictor__DOT__tag__v32;
    }
    if (__VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v0) {
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0U] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[1U] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[2U] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[3U] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[4U] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[5U] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[6U] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[7U] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[8U] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[9U] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0xaU] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0xbU] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0xcU] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0xdU] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0xeU] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0xfU] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x10U] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x11U] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x12U] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x13U] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x14U] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x15U] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x16U] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x17U] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x18U] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x19U] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x1aU] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x1bU] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x1cU] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x1dU] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x1eU] = 2U;
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x1fU] = 2U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v32) {
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT[__VdlyDim0__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v32] 
            = __VdlyVal__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v32;
    }
    if (__VdlySet__top__DOT__cpu__DOT__dmem__DOT__mem__v0) {
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem[__VdlyDim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0][0U] 
            = __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0[0U];
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem[__VdlyDim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0][1U] 
            = __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0[1U];
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem[__VdlyDim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0][2U] 
            = __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0[2U];
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem[__VdlyDim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0][3U] 
            = __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0[3U];
    }
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__update_PHT_index 
        = vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_PHT_index;
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT____Vcellinp__saturation_counter__current_state 
        = vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT
        [vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_PHT_index];
    vlSelfRef.is_halted = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_is_halted;
    vlSelfRef.top__DOT__cpu__DOT__EX_MEM_is_halted 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_halted));
    __VdfgRegularize_hd87f99a1_0_0 = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_branch) 
                                      | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jal));
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__prediction_wrong))) {
        vlSelfRef.top__DOT__cpu__DOT__IF_ID_predicted_next_pc = 0xffffffffU;
        vlSelfRef.top__DOT__cpu__DOT__IF_ID_predicted_branch_taken = 0U;
        vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc = 0xffffffffU;
    } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall)))) {
        vlSelfRef.top__DOT__cpu__DOT__IF_ID_predicted_next_pc 
            = vlSelfRef.top__DOT__cpu__DOT__predicted_next_pc;
        vlSelfRef.top__DOT__cpu__DOT__IF_ID_predicted_branch_taken 
            = vlSelfRef.top__DOT__cpu__DOT__predicted_branch_taken;
        vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out = 0U;
        vlSelfRef.top__DOT__cpu__DOT__current_pc = 0U;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data 
            = vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_2;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out 
            = vlSelfRef.top__DOT__cpu__DOT__alu_result;
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall)))) {
            vlSelfRef.top__DOT__cpu__DOT__current_pc 
                = vlSelfRef.top__DOT__cpu__DOT__next_pc;
        }
    }
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__EX_rs1 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1;
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op;
    vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_to_reg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_to_reg));
    vlSelfRef.top__DOT__cpu__DOT__EX_MEM_pc_to_reg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_to_reg));
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__functs 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input;
    __Vtableidx3 = (((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input) 
                     << 2U) | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op));
    vlSelfRef.top__DOT__cpu__DOT__alu_control = Vtop__ConstPool__TABLE_hff25af95_0
        [__Vtableidx3];
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__EX_rs2 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__delay_counter 
        = __Vdly__top__DOT__cpu__DOT__dmem__DOT__delay_counter;
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__saturation_counter__DOT__current_state 
        = vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT____Vcellinp__saturation_counter__current_state;
    vlSelfRef.top__DOT__is_halted = vlSelfRef.is_halted;
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_control 
        = vlSelfRef.top__DOT__cpu__DOT__alu_control;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_control 
        = vlSelfRef.top__DOT__cpu__DOT__alu_control;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem_ready 
        = (0U == vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__delay_counter);
    vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_write));
    vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read));
    vlSelfRef.top__DOT__cpu__DOT__is_halted = vlSelfRef.top__DOT__is_halted;
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_halted = 
        ((1U & (~ (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__prediction_wrong)) 
                   | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall)))) 
         && (IData)(vlSelfRef.top__DOT__cpu__DOT__halt_sim));
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_to_reg 
        = ((1U & (~ (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__prediction_wrong)) 
                     | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall)))) 
           && (IData)(vlSelfRef.top__DOT__cpu__DOT__mem_to_reg));
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc_to_reg = 
        ((1U & (~ (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__prediction_wrong)) 
                   | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall)))) 
         && (IData)(vlSelfRef.top__DOT__cpu__DOT__pc_to_reg));
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__is_output_valid 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___mem_read) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem_ready));
    if (vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__is_output_valid) {
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__dout[0U] 
            = vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem
            [(0x3fffU & vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___mem_addr)][0U];
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__dout[1U] 
            = vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem
            [(0x3fffU & vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___mem_addr)][1U];
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__dout[2U] 
            = vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem
            [(0x3fffU & vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___mem_addr)][2U];
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__dout[3U] 
            = vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem
            [(0x3fffU & vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___mem_addr)][3U];
        vlSelfRef.top__DOT__cpu__DOT__mem_data = vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem
            [(0x3fffU & vlSelfRef.top__DOT__cpu__DOT__dmem__DOT___mem_addr)][0U];
    } else {
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__dout[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__dout[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__dout[2U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__dout[3U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__mem_data = 0U;
    }
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__din[0U] 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__din[1U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__din[2U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__din[3U] = 0U;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem_write 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write;
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_write = 
        ((1U & (~ (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__prediction_wrong)) 
                   | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall)))) 
         && (IData)(vlSelfRef.top__DOT__cpu__DOT__mem_write));
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__MEM_mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__request_arrived 
        = (((IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read) 
            | (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write)) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__is_input_valid));
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read = 
        ((1U & (~ (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__prediction_wrong)) 
                   | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall)))) 
         && (IData)(vlSelfRef.top__DOT__cpu__DOT__mem_read));
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__addr = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out;
    if (__VdfgRegularize_hd87f99a1_0_0) {
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__update_BTB_index 
            = (0x1fU & vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc);
        vlSelfRef.top__DOT__cpu__DOT__update_pc = vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__update_BTB_index = 0x1fU;
        vlSelfRef.top__DOT__cpu__DOT__update_pc = 0xffffffffU;
    }
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__update_pc 
        = vlSelfRef.top__DOT__cpu__DOT__update_pc;
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__EX_mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read;
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__current_pc 
        = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__addr = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__imem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__current_pc, 2U);
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__predict_BTB_index 
        = (0x1fU & vlSelfRef.top__DOT__cpu__DOT__current_pc);
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__predict_PHT_index 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__predict_BTB_index) 
           ^ (IData)(vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BHSR));
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag_match 
        = (vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag
           [vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__predict_BTB_index] 
           == (vlSelfRef.top__DOT__cpu__DOT__current_pc 
               >> 5U));
    vlSelfRef.top__DOT__cpu__DOT__predicted_branch_taken 
        = (vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid
           [vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__predict_BTB_index] 
           & ((IData)(vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag_match) 
              & (vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT
                 [vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__predict_PHT_index] 
                 >> 1U)));
    if (vlSelfRef.top__DOT__cpu__DOT__predicted_branch_taken) {
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__predicted_branch_taken = 1U;
        vlSelfRef.top__DOT__cpu__DOT__predicted_next_pc 
            = vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BTB
            [vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__predict_BTB_index];
    } else {
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__predicted_branch_taken = 0U;
        vlSelfRef.top__DOT__cpu__DOT__predicted_next_pc 
            = ((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__current_pc);
    }
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__predicted_next_pc 
        = vlSelfRef.top__DOT__cpu__DOT__predicted_next_pc;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __VdlyVal__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __VdlyDim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    // Body
    __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0U;
    __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0U;
    if (vlSelfRef.clk) {
        if (vlSelfRef.reset) {
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
            __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 1U;
        }
    } else if (((IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write) 
                & (0U != (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd)))) {
        __VdlyVal__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 
            = vlSelfRef.top__DOT__cpu__DOT__writeback_data;
        __VdlyDim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 
            = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd;
        __VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 1U;
    }
    if (__VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v0) {
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[1U] = 0U;
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0x2ffcU;
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
    }
    if (__VdlySet__top__DOT__cpu__DOT__reg_file__DOT__rf__v32) {
        vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[__VdlyDim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32] 
            = __VdlyVal__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    }
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
}

extern const VlUnpacked<CData/*1:0*/, 8> Vtop__ConstPool__TABLE_hc3d036fe_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h37edc241_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_ha12b071a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hff6fb0c7_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h380a7dc1_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h6d51447d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h675ff796_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h64bfb459_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_ha561d072_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_hc073f347_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h621af196_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.top__DOT__cpu__DOT__writeback_data = 
        ((IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_to_reg)
          ? vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_plus_4
          : ((IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg)
              ? vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2
              : vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1));
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd_din 
        = vlSelfRef.top__DOT__cpu__DOT__writeback_data;
    vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write));
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd = 0U;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd;
    }
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__WB_reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__write_enable 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write));
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__WB_rd 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd;
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__MEM_reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write = 
        ((1U & (~ (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__prediction_wrong)) 
                   | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall)))) 
         && (IData)(vlSelfRef.top__DOT__cpu__DOT__reg_write));
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__MEM_rd 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_rd 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd;
    vlSelfRef.top__DOT__cpu__DOT__forward_ecall = 0U;
    vlSelfRef.top__DOT__cpu__DOT__forward_ecall = (
                                                   ((0x11U 
                                                     == (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd)) 
                                                    & (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write))
                                                    ? 2U
                                                    : 
                                                   (((0x11U 
                                                      == (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd)) 
                                                     & (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write))
                                                     ? 1U
                                                     : 0U));
    vlSelfRef.top__DOT__cpu__DOT__forward_rs1 = 0U;
    vlSelfRef.top__DOT__cpu__DOT__forward_rs1 = (((
                                                   (0U 
                                                    != (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1)) 
                                                   & ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1) 
                                                      == (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd))) 
                                                  & (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write))
                                                  ? 2U
                                                  : 
                                                 ((((0U 
                                                     != (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1)) 
                                                    & ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1) 
                                                       == (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd))) 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write))
                                                   ? 1U
                                                   : 0U));
    vlSelfRef.top__DOT__cpu__DOT__forward_rs2 = 0U;
    vlSelfRef.top__DOT__cpu__DOT__forward_rs2 = (((
                                                   (0U 
                                                    != (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2)) 
                                                   & ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2) 
                                                      == (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd))) 
                                                  & (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write))
                                                  ? 2U
                                                  : 
                                                 ((((0U 
                                                     != (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2)) 
                                                    & ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2) 
                                                       == (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd))) 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write))
                                                   ? 1U
                                                   : 0U));
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd = ((((IData)(vlSelfRef.reset) 
                                                | (IData)(vlSelfRef.top__DOT__cpu__DOT__prediction_wrong)) 
                                               | (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall))
                                               ? 0U
                                               : (0x1fU 
                                                  & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                     >> 7U)));
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__forward_ecall 
        = vlSelfRef.top__DOT__cpu__DOT__forward_ecall;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__forward_rs1 
        = vlSelfRef.top__DOT__cpu__DOT__forward_rs1;
    vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1 
        = ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__forward_rs1))
            ? vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out
            : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__forward_rs1))
                ? vlSelfRef.top__DOT__cpu__DOT__writeback_data
                : vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1_data));
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__forward_rs2 
        = vlSelfRef.top__DOT__cpu__DOT__forward_rs2;
    vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_2 
        = ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__forward_rs2))
            ? vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out
            : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__forward_rs2))
                ? vlSelfRef.top__DOT__cpu__DOT__writeback_data
                : vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2_data));
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__EX_reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_in_1 
        = vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1;
    vlSelfRef.top__DOT__cpu__DOT__alu_in_2 = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_src)
                                               ? vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm
                                               : vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_2);
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__EX_rd 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd;
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.top__DOT__cpu__DOT__prediction_wrong))) {
        vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall)))) {
        vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst = vlSelfRef.top__DOT__cpu__DOT__instruction;
    }
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_in_2 
        = vlSelfRef.top__DOT__cpu__DOT__alu_in_2;
    vlSelfRef.top__DOT__cpu__DOT__alu_result = 0U;
    vlSelfRef.top__DOT__cpu__DOT__alu_bcond = 0U;
    if ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))) {
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control) 
                          >> 1U)))) {
                vlSelfRef.top__DOT__cpu__DOT__alu_result 
                    = ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                        ? (vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1 
                           | vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                        : (vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1 
                           & vlSelfRef.top__DOT__cpu__DOT__alu_in_2));
            }
        }
        if ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))) {
            vlSelfRef.top__DOT__cpu__DOT__alu_bcond 
                = ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                    ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                        ? (vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1 
                           >= vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                        : (vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1 
                           < vlSelfRef.top__DOT__cpu__DOT__alu_in_2))
                    : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                        ? VL_GTES_III(32, vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1, vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                        : VL_LTS_III(32, vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1, vlSelfRef.top__DOT__cpu__DOT__alu_in_2)));
        } else if ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))) {
            vlSelfRef.top__DOT__cpu__DOT__alu_bcond 
                = ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                    ? (vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1 
                       != vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                    : (vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1 
                       == vlSelfRef.top__DOT__cpu__DOT__alu_in_2));
        }
    } else {
        vlSelfRef.top__DOT__cpu__DOT__alu_result = 
            ((4U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
              ? ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                  ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                      ? (vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1 
                         >> (0x1fU & vlSelfRef.top__DOT__cpu__DOT__alu_in_2))
                      : (vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1 
                         >> (0x1fU & vlSelfRef.top__DOT__cpu__DOT__alu_in_2)))
                  : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                      ? (vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1 
                         ^ vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                      : ((vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1 
                          < vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                          ? 1U : 0U))) : ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                                           ? ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                                               ? (VL_LTS_III(32, vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1, vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                                                   ? 1U
                                                   : 0U)
                                               : (vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelfRef.top__DOT__cpu__DOT__alu_in_2)))
                                           : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_control))
                                               ? (vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1 
                                                  - vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                                               : (vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1 
                                                  + vlSelfRef.top__DOT__cpu__DOT__alu_in_2))));
    }
    vlSelfRef.top__DOT__cpu__DOT__instruction = vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
        [(0x3fffU & vlSelfRef.top__DOT__cpu__DOT__imem__DOT__imem_addr)];
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_result 
        = vlSelfRef.top__DOT__cpu__DOT__alu_result;
    vlSelfRef.top__DOT__cpu__DOT__branch_addr = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jalr)
                                                  ? vlSelfRef.top__DOT__cpu__DOT__alu_result
                                                  : 
                                                 (vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm 
                                                  + vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc));
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_bcond 
        = vlSelfRef.top__DOT__cpu__DOT__alu_bcond;
    vlSelfRef.top__DOT__cpu__DOT__actual_branch_taken 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jal) 
           | ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jalr) 
              | ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_branch) 
                 & (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_bcond))));
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__dout = vlSelfRef.top__DOT__cpu__DOT__instruction;
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__ID_rs2 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__instruction 
        = vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst;
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = (0x7fU & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst);
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__update_BTB 
        = vlSelfRef.top__DOT__cpu__DOT__branch_addr;
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__update_taken 
        = vlSelfRef.top__DOT__cpu__DOT__actual_branch_taken;
    __Vtableidx1 = (((IData)(vlSelfRef.top__DOT__cpu__DOT__actual_branch_taken) 
                     << 2U) | (IData)(vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT____Vcellinp__saturation_counter__current_state));
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__next_PHT 
        = Vtop__ConstPool__TABLE_hc3d036fe_0[__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__actual_addr = ((IData)(vlSelfRef.top__DOT__cpu__DOT__actual_branch_taken)
                                                  ? vlSelfRef.top__DOT__cpu__DOT__branch_addr
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc));
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__ID_opcode 
        = vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__opcode 
        = vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode;
    vlSelfRef.top__DOT__cpu__DOT__imm_gen_out = ((0x40U 
                                                  & (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                  ? 
                                                 ((0x20U 
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
                                                                    (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                     >> 0x1fU))) 
                                                         << 0x14U) 
                                                        | (((0xff000U 
                                                             & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst) 
                                                            | (0x800U 
                                                               & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                  >> 9U))) 
                                                           | (0x7feU 
                                                              & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
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
                                                                    (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
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
                                                                    (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | ((0x800U 
                                                            & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                    >> 7U)))))
                                                        : 0U)
                                                       : 0U))))
                                                   : 0U)
                                                  : 
                                                 ((0x20U 
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
                                                                    (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | ((0xfe0U 
                                                            & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                               >> 0x14U)) 
                                                           | (0x1fU 
                                                              & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
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
                                                                    (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
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
                                                                    (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                           >> 0x14U))
                                                        : 0U)
                                                       : 0U))))));
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__stall_by_ecall 
        = ((0x73U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
           & (((0x11U == (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd)) 
               & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write)) 
              | ((0x11U == (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd)) 
                 & (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read))));
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__rs1_conditions 
        = ((0x13U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
           | ((3U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
              | (0x67U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))));
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__rs1_and_rs2_conditions 
        = ((0x33U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
           | ((0x23U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
              | (0x63U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode))));
    __Vtableidx2 = vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode;
    vlSelfRef.top__DOT__cpu__DOT__is_jal = Vtop__ConstPool__TABLE_h37edc241_0
        [__Vtableidx2];
    vlSelfRef.top__DOT__cpu__DOT__is_jalr = Vtop__ConstPool__TABLE_ha12b071a_0
        [__Vtableidx2];
    vlSelfRef.top__DOT__cpu__DOT__branch = Vtop__ConstPool__TABLE_hff6fb0c7_0
        [__Vtableidx2];
    vlSelfRef.top__DOT__cpu__DOT__pc_to_reg = Vtop__ConstPool__TABLE_h380a7dc1_0
        [__Vtableidx2];
    vlSelfRef.top__DOT__cpu__DOT__mem_read = Vtop__ConstPool__TABLE_h6d51447d_0
        [__Vtableidx2];
    vlSelfRef.top__DOT__cpu__DOT__mem_to_reg = Vtop__ConstPool__TABLE_h6d51447d_0
        [__Vtableidx2];
    vlSelfRef.top__DOT__cpu__DOT__mem_write = Vtop__ConstPool__TABLE_h675ff796_0
        [__Vtableidx2];
    vlSelfRef.top__DOT__cpu__DOT__alu_src = Vtop__ConstPool__TABLE_h64bfb459_0
        [__Vtableidx2];
    vlSelfRef.top__DOT__cpu__DOT__reg_write = Vtop__ConstPool__TABLE_ha561d072_0
        [__Vtableidx2];
    vlSelfRef.top__DOT__cpu__DOT__alu_op = Vtop__ConstPool__TABLE_hc073f347_0
        [__Vtableidx2];
    vlSelfRef.top__DOT__cpu__DOT__is_ecall = Vtop__ConstPool__TABLE_h621af196_0
        [__Vtableidx2];
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__saturation_counter__DOT__branch_taken 
        = vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__update_taken;
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__saturation_counter__DOT__next_state 
        = vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__next_PHT;
    vlSelfRef.top__DOT__cpu__DOT__prediction_wrong 
        = ((0xffffffffU != vlSelfRef.top__DOT__cpu__DOT__ID_EX_predicted_next_pc) 
           & (((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_predicted_branch_taken) 
               != (IData)(vlSelfRef.top__DOT__cpu__DOT__actual_branch_taken)) 
              | (vlSelfRef.top__DOT__cpu__DOT__ID_EX_predicted_next_pc 
                 != vlSelfRef.top__DOT__cpu__DOT__actual_addr)));
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out 
        = vlSelfRef.top__DOT__cpu__DOT__imm_gen_out;
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__use_rs2 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__rs1_and_rs2_conditions) 
           & (0U != (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                              >> 0x14U))));
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_jal 
        = vlSelfRef.top__DOT__cpu__DOT__is_jal;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_jalr 
        = vlSelfRef.top__DOT__cpu__DOT__is_jalr;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__branch 
        = vlSelfRef.top__DOT__cpu__DOT__branch;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__pc_to_reg 
        = vlSelfRef.top__DOT__cpu__DOT__pc_to_reg;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__mem_read;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg 
        = vlSelfRef.top__DOT__cpu__DOT__mem_to_reg;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write 
        = vlSelfRef.top__DOT__cpu__DOT__mem_write;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src 
        = vlSelfRef.top__DOT__cpu__DOT__alu_src;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__reg_write;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__alu_op 
        = vlSelfRef.top__DOT__cpu__DOT__alu_op;
    if (vlSelfRef.top__DOT__cpu__DOT__is_ecall) {
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall = 1U;
        vlSelfRef.top__DOT__cpu__DOT__rs1_in = 0x11U;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall = 0U;
        vlSelfRef.top__DOT__cpu__DOT__rs1_in = (0x1fU 
                                                & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                   >> 0xfU));
    }
    vlSelfRef.top__DOT__cpu__DOT__next_pc = ((IData)(vlSelfRef.top__DOT__cpu__DOT__prediction_wrong)
                                              ? vlSelfRef.top__DOT__cpu__DOT__actual_addr
                                              : vlSelfRef.top__DOT__cpu__DOT__predicted_next_pc);
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__ID_rs1 
        = vlSelfRef.top__DOT__cpu__DOT__rs1_in;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1 
        = vlSelfRef.top__DOT__cpu__DOT__rs1_in;
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__use_rs1 
        = (((IData)(vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__rs1_and_rs2_conditions) 
            | (IData)(vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__rs1_conditions)) 
           & (0U != (IData)(vlSelfRef.top__DOT__cpu__DOT__rs1_in)));
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__next_pc 
        = vlSelfRef.top__DOT__cpu__DOT__next_pc;
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__stall_by_load 
        = (((((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd) 
              == (IData)(vlSelfRef.top__DOT__cpu__DOT__rs1_in)) 
             & (IData)(vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__use_rs1)) 
            | (((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd) 
                == (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                             >> 0x14U))) & (IData)(vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__use_rs2))) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read));
    vlSelfRef.top__DOT__cpu__DOT__is_stall = ((IData)(vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__stall_by_load) 
                                              | (IData)(vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__stall_by_ecall));
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__is_stall 
        = vlSelfRef.top__DOT__cpu__DOT__is_stall;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__is_stall 
        = vlSelfRef.top__DOT__cpu__DOT__is_stall;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__cpu__DOT__rs2_data = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                   >> 0x14U))];
    vlSelfRef.top__DOT__cpu__DOT__rs1_data = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [vlSelfRef.top__DOT__cpu__DOT__rs1_in];
    vlSelfRef.top__DOT__cpu__DOT__ecall_forward_data 
        = ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__forward_ecall))
            ? vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out
            : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__forward_ecall))
                ? vlSelfRef.top__DOT__cpu__DOT__writeback_data
                : vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
               [vlSelfRef.top__DOT__cpu__DOT__rs1_in]));
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelfRef.top__DOT__cpu__DOT__rs2_data;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1_dout 
        = vlSelfRef.top__DOT__cpu__DOT__rs1_data;
    vlSelfRef.top__DOT__cpu__DOT__halt_sim = ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_ecall) 
                                              & (0xaU 
                                                 == vlSelfRef.top__DOT__cpu__DOT__ecall_forward_data));
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
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
            VL_FATAL_MT("top.v", 4, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("top.v", 4, "", "NBA region did not converge.");
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
                VL_FATAL_MT("top.v", 4, "", "Active region did not converge.");
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
