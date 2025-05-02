// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__reset = vlSelfRef.reset;
    vlSelfRef.top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.top__DOT__cpu__DOT__reset = vlSelfRef.top__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__reset = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__reset 
        = vlSelfRef.top__DOT__cpu__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__clk = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__clk = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__clk 
        = vlSelfRef.top__DOT__cpu__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__clk = vlSelfRef.top__DOT__cpu__DOT__clk;
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
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
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
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

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_he30476b8_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vtop__ConstPool__TABLE_hff25af95_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0;
    SData/*13:0*/ __VdlyDim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    __VdlyDim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    __VdlySet__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0;
    // Body
    __VdlySet__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 0U;
    if (VL_UNLIKELY(vlSelfRef.reset)) {
        vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i)) {
            vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem[(0x3ffU 
                                                          & vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i)] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i 
                = ((IData)(1U) + vlSelfRef.top__DOT__cpu__DOT__imem__DOT__i);
        }
        VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(8, Vtop__ConstPool__CONST_he30476b8_0)
                     ,  &(vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem)
                     , 0, ~0ULL);
    }
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if (vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write) {
            __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0 
                = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data;
            __VdlyDim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0 
                = (0x3fffU & vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__dmem_addr);
            __VdlySet__top__DOT__cpu__DOT__dmem__DOT__mem__v0 = 1U;
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i)) {
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem[(0x3fffU 
                                                          & vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i)] = 0U;
            vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i 
                = ((IData)(1U) + vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__i);
        }
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1_data = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2_data = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc = 0U;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_inst = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2 = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data = 0U;
        vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out = 0U;
        vlSelfRef.top__DOT__cpu__DOT__current_pc = 0U;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm = vlSelfRef.top__DOT__cpu__DOT__imm_gen_out;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1_data 
            = vlSelfRef.top__DOT__cpu__DOT__rs1_data;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2_data 
            = vlSelfRef.top__DOT__cpu__DOT__rs2_data;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op 
            = vlSelfRef.top__DOT__cpu__DOT__alu_op;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1 = vlSelfRef.top__DOT__cpu__DOT__rs1_in;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2 
            = vlSelfRef.top__DOT__cpu__DOT__mem_data;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc = vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc;
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 
            = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input 
            = ((8U & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                      >> 0x1bU)) | (7U & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                          >> 0xcU)));
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_inst = vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2 = (0x1fU 
                                                   & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                      >> 0x14U));
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data 
            = vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_2;
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall)))) {
            vlSelfRef.top__DOT__cpu__DOT__IF_ID_pc 
                = vlSelfRef.top__DOT__cpu__DOT__current_pc;
            vlSelfRef.top__DOT__cpu__DOT__current_pc 
                = vlSelfRef.top__DOT__cpu__DOT__next_pc;
        }
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out 
            = vlSelfRef.top__DOT__cpu__DOT__alu_result;
    }
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_src = (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.reset))) 
                                                   && (IData)(vlSelfRef.top__DOT__cpu__DOT__alu_src));
    vlSelfRef.top__DOT__cpu__DOT__MEM_WB_is_halted 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_is_halted));
    vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read));
    vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_to_reg));
    if (__VdlySet__top__DOT__cpu__DOT__dmem__DOT__mem__v0) {
        vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem[__VdlyDim0__top__DOT__cpu__DOT__dmem__DOT__mem__v0] 
            = __VdlyVal__top__DOT__cpu__DOT__dmem__DOT__mem__v0;
    }
    vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_write));
    vlSelfRef.top__DOT__cpu__DOT__branch_unit__DOT__imm 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm;
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__EX_rs1 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1;
    vlSelfRef.is_halted = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_is_halted;
    vlSelfRef.top__DOT__cpu__DOT__EX_MEM_is_halted 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_halted));
    vlSelfRef.top__DOT__cpu__DOT__branch_unit__DOT__pc 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc;
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__MEM_mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read;
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall)
                                                  ? (IData)(vlSelfRef.top__DOT__cpu__DOT__mem_read)
                                                  : 
                                                 ((1U 
                                                   & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__is_flush))) 
                                                  && (IData)(vlSelfRef.top__DOT__cpu__DOT__mem_read))));
    vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_to_reg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_to_reg));
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__functs 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input;
    __Vtableidx2 = (((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input) 
                     << 2U) | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op));
    vlSelfRef.top__DOT__cpu__DOT__alu_control = Vtop__ConstPool__TABLE_hff25af95_0
        [__Vtableidx2];
    vlSelfRef.top__DOT__cpu__DOT__branch_unit__DOT__opcode 
        = (0x7fU & (vlSelfRef.top__DOT__cpu__DOT__ID_EX_inst 
                    >> 0U));
    vlSelfRef.top__DOT__cpu__DOT__branch_unit__DOT__funct3 
        = (7U & (vlSelfRef.top__DOT__cpu__DOT__ID_EX_inst 
                 >> 0xcU));
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__EX_rs2 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2;
    vlSelfRef.top__DOT__is_halted = vlSelfRef.is_halted;
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_control 
        = vlSelfRef.top__DOT__cpu__DOT__alu_control;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_control 
        = vlSelfRef.top__DOT__cpu__DOT__alu_control;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__din = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem_write 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write;
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_write = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && ((1U 
                                                  & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall))) 
                                                 && ((1U 
                                                      & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__is_flush))) 
                                                     && (IData)(vlSelfRef.top__DOT__cpu__DOT__mem_write))));
    vlSelfRef.top__DOT__cpu__DOT__is_halted = vlSelfRef.top__DOT__is_halted;
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_halted = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__cpu__DOT__halt_sim));
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__EX_mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read;
    vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_to_reg 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__cpu__DOT__mem_to_reg));
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__addr = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__dmem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out, 2U);
    vlSelfRef.top__DOT__cpu__DOT__mem_data = ((IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read)
                                               ? vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem
                                              [(0x3fffU 
                                                & vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__dmem_addr)]
                                               : 0U);
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__addr = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__imem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__current_pc, 2U);
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__dout = vlSelfRef.top__DOT__cpu__DOT__mem_data;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
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

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h6d51447d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h675ff796_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h899171e2_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h15bd3065_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h1eb10c64_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h621af196_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.top__DOT__cpu__DOT__writeback_data = 
        ((IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg)
          ? vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2
          : vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1);
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd_din 
        = vlSelfRef.top__DOT__cpu__DOT__writeback_data;
    vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write));
    if (vlSelfRef.reset) {
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd = 0U;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd = 0U;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd = 0U;
        vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst = 0U;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd;
        vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd;
        vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd = (0x1fU 
                                                  & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                                                     >> 7U));
        if (vlSelfRef.top__DOT__cpu__DOT__is_stall) {
            if (vlSelfRef.top__DOT__cpu__DOT__is_flush) {
                vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst = 0U;
            }
        } else {
            vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                = vlSelfRef.top__DOT__cpu__DOT__instruction;
        }
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
        ((1U & (~ (IData)(vlSelfRef.reset))) && ((1U 
                                                  & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__is_stall))) 
                                                 && ((1U 
                                                      & (~ (IData)(vlSelfRef.top__DOT__cpu__DOT__is_flush))) 
                                                     && (IData)(vlSelfRef.top__DOT__cpu__DOT__reg_write))));
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
    vlSelfRef.top__DOT__cpu__DOT__branch_unit__DOT__rs1 
        = vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1;
    vlSelfRef.top__DOT__cpu__DOT__branch_unit__DOT__rs2 
        = vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_2;
    vlSelfRef.top__DOT__cpu__DOT__alu_in_2 = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_src)
                                               ? vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm
                                               : vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_2);
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__EX_rd 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_in_2 
        = vlSelfRef.top__DOT__cpu__DOT__alu_in_2;
    vlSelfRef.top__DOT__cpu__DOT__alu_result = 0U;
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
        [(0x3ffU & vlSelfRef.top__DOT__cpu__DOT__imem__DOT__imem_addr)];
    if ((0x63U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__ID_EX_inst))) {
        vlSelfRef.top__DOT__cpu__DOT__is_flush = ((0x4000U 
                                                   & vlSelfRef.top__DOT__cpu__DOT__ID_EX_inst)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSelfRef.top__DOT__cpu__DOT__ID_EX_inst)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelfRef.top__DOT__cpu__DOT__ID_EX_inst)
                                                     ? 
                                                    (vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1 
                                                     >= vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_2)
                                                     : 
                                                    (vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1 
                                                     < vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_2))
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelfRef.top__DOT__cpu__DOT__ID_EX_inst)
                                                     ? 
                                                    VL_GTES_III(32, vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1, vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_2)
                                                     : 
                                                    VL_LTS_III(32, vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1, vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_2)))
                                                   : 
                                                  ((1U 
                                                    & (~ 
                                                       (vlSelfRef.top__DOT__cpu__DOT__ID_EX_inst 
                                                        >> 0xdU))) 
                                                   && ((0x1000U 
                                                        & vlSelfRef.top__DOT__cpu__DOT__ID_EX_inst)
                                                        ? 
                                                       (vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1 
                                                        != vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_2)
                                                        : 
                                                       (vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1 
                                                        == vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_2))));
        vlSelfRef.top__DOT__cpu__DOT__branch_addr = 
            ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_flush)
              ? (vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc 
                 + vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm)
              : ((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc));
    } else if ((0x6fU == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__ID_EX_inst))) {
        vlSelfRef.top__DOT__cpu__DOT__is_flush = 1U;
        vlSelfRef.top__DOT__cpu__DOT__branch_addr = 
            (vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc 
             + vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm);
    } else if ((0x67U == (0x7fU & vlSelfRef.top__DOT__cpu__DOT__ID_EX_inst))) {
        vlSelfRef.top__DOT__cpu__DOT__is_flush = 1U;
        vlSelfRef.top__DOT__cpu__DOT__branch_addr = 
            (0xfffffffeU & (vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1 
                            + vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm));
    } else {
        vlSelfRef.top__DOT__cpu__DOT__is_flush = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_addr = 
            ((IData)(4U) + vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc);
    }
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_result 
        = vlSelfRef.top__DOT__cpu__DOT__alu_result;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__dout = vlSelfRef.top__DOT__cpu__DOT__instruction;
    if (vlSelfRef.top__DOT__cpu__DOT__is_flush) {
        vlSelfRef.top__DOT__cpu__DOT__branch_unit__DOT__is_flush = 1U;
        vlSelfRef.top__DOT__cpu__DOT__branch_unit__DOT__branch_addr 
            = vlSelfRef.top__DOT__cpu__DOT__branch_addr;
        vlSelfRef.top__DOT__cpu__DOT__next_pc = vlSelfRef.top__DOT__cpu__DOT__branch_addr;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__branch_unit__DOT__is_flush = 0U;
        vlSelfRef.top__DOT__cpu__DOT__branch_unit__DOT__branch_addr 
            = vlSelfRef.top__DOT__cpu__DOT__branch_addr;
        vlSelfRef.top__DOT__cpu__DOT__next_pc = ((IData)(4U) 
                                                 + vlSelfRef.top__DOT__cpu__DOT__current_pc);
    }
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
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__next_pc 
        = vlSelfRef.top__DOT__cpu__DOT__next_pc;
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
           | (3U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)));
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__rs1_and_rs2_conditions 
        = ((0x33U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
           | (0x23U == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode)));
    __Vtableidx1 = vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode;
    vlSelfRef.top__DOT__cpu__DOT__mem_read = Vtop__ConstPool__TABLE_h6d51447d_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__mem_to_reg = Vtop__ConstPool__TABLE_h6d51447d_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__mem_write = Vtop__ConstPool__TABLE_h675ff796_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__alu_src = Vtop__ConstPool__TABLE_h899171e2_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__reg_write = Vtop__ConstPool__TABLE_h15bd3065_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__alu_op = Vtop__ConstPool__TABLE_h1eb10c64_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__is_ecall = Vtop__ConstPool__TABLE_h621af196_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out 
        = vlSelfRef.top__DOT__cpu__DOT__imm_gen_out;
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__use_rs2 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__rs1_and_rs2_conditions) 
           & (0U != (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                              >> 0x14U))));
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
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__ID_rs1 
        = vlSelfRef.top__DOT__cpu__DOT__rs1_in;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1 
        = vlSelfRef.top__DOT__cpu__DOT__rs1_in;
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__use_rs1 
        = (((IData)(vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__rs1_and_rs2_conditions) 
            | (IData)(vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__rs1_conditions)) 
           & (0U != (IData)(vlSelfRef.top__DOT__cpu__DOT__rs1_in)));
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
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
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
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
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
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
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
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
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
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
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
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
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
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
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
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
