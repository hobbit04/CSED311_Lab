// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.v", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*3:0*/, 64> Vtop__ConstPool__TABLE_hff25af95_0;
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
extern const VlUnpacked<CData/*1:0*/, 8> Vtop__ConstPool__TABLE_hc3d036fe_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_h6171c202_0_0;
    __VdfgRegularize_h6171c202_0_0 = 0;
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__ID_rs2 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__EX_rd 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd;
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__EX_mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read;
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__EX_reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__MEM_rd 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd;
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__MEM_mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read;
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__MEM_reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__EX_rs1 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__EX_rs2 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_rd 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_rd;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__WB_rd 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__WB_reg_write 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__current_pc 
        = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__addr = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_rd;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__write_enable 
        = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__instruction 
        = vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst;
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__functs 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input;
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op 
        = vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__addr = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__din = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_dmem_data;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem_read 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem_write 
        = vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_write;
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__update_PHT_index 
        = vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_PHT_index;
    vlSelfRef.top__DOT__cpu__DOT__rs2_data = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                   >> 0x14U))];
    vlSelfRef.is_halted = vlSelfRef.top__DOT__cpu__DOT__MEM_WB_is_halted;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__imem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__current_pc, 2U);
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__dmem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out, 2U);
    __VdfgRegularize_h6171c202_0_0 = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_branch) 
                                      | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_is_jal));
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT____Vcellinp__saturation_counter__current_state 
        = vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT
        [vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_PHT_index];
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
    vlSelfRef.top__DOT__reset = vlSelfRef.reset;
    vlSelfRef.top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__predict_BTB_index 
        = (0x1fU & vlSelfRef.top__DOT__cpu__DOT__current_pc);
    __Vtableidx3 = (((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input) 
                     << 2U) | (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_op));
    vlSelfRef.top__DOT__cpu__DOT__alu_control = Vtop__ConstPool__TABLE_hff25af95_0
        [__Vtableidx3];
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
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = (0x7fU & vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst);
    vlSelfRef.top__DOT__cpu__DOT__writeback_data = 
        ((IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_to_reg)
          ? vlSelfRef.top__DOT__cpu__DOT__MEM_WB_pc_plus_4
          : ((IData)(vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg)
              ? vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2
              : vlSelfRef.top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1));
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
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelfRef.top__DOT__cpu__DOT__rs2_data;
    vlSelfRef.top__DOT__is_halted = vlSelfRef.is_halted;
    vlSelfRef.top__DOT__cpu__DOT__instruction = vlSelfRef.top__DOT__cpu__DOT__imem__DOT__mem
        [(0x3ffU & vlSelfRef.top__DOT__cpu__DOT__imem__DOT__imem_addr)];
    vlSelfRef.top__DOT__cpu__DOT__mem_data = ((IData)(vlSelfRef.top__DOT__cpu__DOT__EX_MEM_mem_read)
                                               ? vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__mem
                                              [(0x3fffU 
                                                & vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__dmem_addr)]
                                               : 0U);
    if (__VdfgRegularize_h6171c202_0_0) {
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__update_BTB_index 
            = (0x1fU & vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc);
        vlSelfRef.top__DOT__cpu__DOT__update_pc = vlSelfRef.top__DOT__cpu__DOT__ID_EX_pc;
    } else {
        vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__update_BTB_index = 0x1fU;
        vlSelfRef.top__DOT__cpu__DOT__update_pc = 0xffffffffU;
    }
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__saturation_counter__DOT__current_state 
        = vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT____Vcellinp__saturation_counter__current_state;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__forward_ecall 
        = vlSelfRef.top__DOT__cpu__DOT__forward_ecall;
    vlSelfRef.top__DOT__cpu__DOT__reset = vlSelfRef.top__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__predict_PHT_index 
        = ((IData)(vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__predict_BTB_index) 
           ^ (IData)(vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__BHSR));
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag_match 
        = (vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag
           [vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__predict_BTB_index] 
           == (vlSelfRef.top__DOT__cpu__DOT__current_pc 
               >> 5U));
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_control 
        = vlSelfRef.top__DOT__cpu__DOT__alu_control;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_control 
        = vlSelfRef.top__DOT__cpu__DOT__alu_control;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__forward_rs1 
        = vlSelfRef.top__DOT__cpu__DOT__forward_rs1;
    vlSelfRef.top__DOT__cpu__DOT__forwarding_unit__DOT__forward_rs2 
        = vlSelfRef.top__DOT__cpu__DOT__forward_rs2;
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
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd_din 
        = vlSelfRef.top__DOT__cpu__DOT__writeback_data;
    vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1 
        = ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__forward_rs1))
            ? vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out
            : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__forward_rs1))
                ? vlSelfRef.top__DOT__cpu__DOT__writeback_data
                : vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs1_data));
    vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_2 
        = ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__forward_rs2))
            ? vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out
            : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__forward_rs2))
                ? vlSelfRef.top__DOT__cpu__DOT__writeback_data
                : vlSelfRef.top__DOT__cpu__DOT__ID_EX_rs2_data));
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
    vlSelfRef.top__DOT__cpu__DOT__is_halted = vlSelfRef.top__DOT__is_halted;
    vlSelfRef.top__DOT__cpu__DOT__imem__DOT__dout = vlSelfRef.top__DOT__cpu__DOT__instruction;
    vlSelfRef.top__DOT__cpu__DOT__dmem__DOT__dout = vlSelfRef.top__DOT__cpu__DOT__mem_data;
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__update_pc 
        = vlSelfRef.top__DOT__cpu__DOT__update_pc;
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
    vlSelfRef.top__DOT__cpu__DOT__predicted_branch_taken 
        = (vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__valid
           [vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__predict_BTB_index] 
           & ((IData)(vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__tag_match) 
              & (vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__PHT
                 [vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__predict_PHT_index] 
                 >> 1U)));
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
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_in_1 
        = vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_1;
    vlSelfRef.top__DOT__cpu__DOT__alu_in_2 = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_alu_src)
                                               ? vlSelfRef.top__DOT__cpu__DOT__ID_EX_imm
                                               : vlSelfRef.top__DOT__cpu__DOT__alu_forward_data_2);
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
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__ID_rs1 
        = vlSelfRef.top__DOT__cpu__DOT__rs1_in;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1 
        = vlSelfRef.top__DOT__cpu__DOT__rs1_in;
    vlSelfRef.top__DOT__cpu__DOT__rs1_data = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [vlSelfRef.top__DOT__cpu__DOT__rs1_in];
    vlSelfRef.top__DOT__cpu__DOT__ecall_forward_data 
        = ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__forward_ecall))
            ? vlSelfRef.top__DOT__cpu__DOT__EX_MEM_alu_out
            : ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__forward_ecall))
                ? vlSelfRef.top__DOT__cpu__DOT__writeback_data
                : vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
               [vlSelfRef.top__DOT__cpu__DOT__rs1_in]));
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__use_rs1 
        = (((IData)(vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__rs1_and_rs2_conditions) 
            | (IData)(vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__rs1_conditions)) 
           & (0U != (IData)(vlSelfRef.top__DOT__cpu__DOT__rs1_in)));
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
    vlSelfRef.top__DOT__cpu__DOT__branch_predictor__DOT__predicted_next_pc 
        = vlSelfRef.top__DOT__cpu__DOT__predicted_next_pc;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1_dout 
        = vlSelfRef.top__DOT__cpu__DOT__rs1_data;
    vlSelfRef.top__DOT__cpu__DOT__halt_sim = ((IData)(vlSelfRef.top__DOT__cpu__DOT__is_ecall) 
                                              & (0xaU 
                                                 == vlSelfRef.top__DOT__cpu__DOT__ecall_forward_data));
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__stall_by_load 
        = (((((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd) 
              == (IData)(vlSelfRef.top__DOT__cpu__DOT__rs1_in)) 
             & (IData)(vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__use_rs1)) 
            | (((IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_rd) 
                == (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IF_ID_inst 
                             >> 0x14U))) & (IData)(vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__use_rs2))) 
           & (IData)(vlSelfRef.top__DOT__cpu__DOT__ID_EX_mem_read));
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
    vlSelfRef.top__DOT__cpu__DOT__is_stall = ((IData)(vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__stall_by_load) 
                                              | (IData)(vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__stall_by_ecall));
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
    vlSelfRef.top__DOT__cpu__DOT__stall_detection__DOT__is_stall 
        = vlSelfRef.top__DOT__cpu__DOT__is_stall;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__is_stall 
        = vlSelfRef.top__DOT__cpu__DOT__is_stall;
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
    vlSelfRef.top__DOT__cpu__DOT__next_pc = ((IData)(vlSelfRef.top__DOT__cpu__DOT__prediction_wrong)
                                              ? vlSelfRef.top__DOT__cpu__DOT__actual_addr
                                              : vlSelfRef.top__DOT__cpu__DOT__predicted_next_pc);
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__next_pc 
        = vlSelfRef.top__DOT__cpu__DOT__next_pc;
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__is_stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__forward_ecall = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forward_rs1 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forward_rs2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__predicted_next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__predicted_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_op = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__halt_sim = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__rs1_in = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ecall_forward_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_control = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__alu_in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_forward_data_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_forward_data_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__actual_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__actual_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__update_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__prediction_wrong = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__writeback_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__IF_ID_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__IF_ID_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__IF_ID_predicted_next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__IF_ID_predicted_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_alu_op = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__ID_EX_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_predicted_next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_predicted_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_is_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_plus_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_is_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_pc_plus_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__stall_detection__DOT__ID_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__stall_detection__DOT__ID_rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__stall_detection__DOT__ID_opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__stall_detection__DOT__EX_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__stall_detection__DOT__EX_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__stall_detection__DOT__EX_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__stall_detection__DOT__MEM_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__stall_detection__DOT__MEM_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__stall_detection__DOT__MEM_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__stall_detection__DOT__is_stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__stall_detection__DOT__rs1_and_rs2_conditions = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__stall_detection__DOT__rs1_conditions = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__stall_detection__DOT__use_rs1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__stall_detection__DOT__use_rs2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__stall_detection__DOT__stall_by_load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__stall_detection__DOT__stall_by_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__EX_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__EX_rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__WB_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__WB_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__forward_ecall = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__forward_rs1 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__forward_rs2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__update_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__update_BTB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__update_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__predicted_next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__predicted_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__tag_match = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__update_BTB_index = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__update_PHT_index = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__predict_BTB_index = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__predict_PHT_index = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__IF_ID_PHT_index = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_PHT_index = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__next_PHT = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__tag[__Vi0] = VL_RAND_RESET_I(27);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BHSR = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT____Vcellinp__saturation_counter__current_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__saturation_counter__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__saturation_counter__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__saturation_counter__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__is_stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_op = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__functs = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_control = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_control = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__dmem_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
