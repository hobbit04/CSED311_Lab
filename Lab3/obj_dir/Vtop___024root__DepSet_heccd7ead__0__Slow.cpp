// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.v", 2, "", "Settle region did not converge.");
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__functs;
    top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__functs = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*10:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelfRef.top__DOT__cpu__DOT__current_pc;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IR 
                    >> 0xfU));
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IR 
                    >> 0x14U));
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd 
        = (0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IR 
                    >> 7U));
    vlSelfRef.top__DOT__cpu__DOT__memory__DOT__din 
        = vlSelfRef.top__DOT__cpu__DOT__B;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__current_state 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__current_state;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_machine__DOT__current_state 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__current_state;
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__IR 
        = vlSelfRef.top__DOT__cpu__DOT__IR;
    vlSelfRef.top__DOT__cpu__DOT__regA_value = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IR 
                   >> 0xfU))];
    vlSelfRef.top__DOT__cpu__DOT__regB_value = vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelfRef.top__DOT__cpu__DOT__IR 
                   >> 0x14U))];
    vlSelfRef.top__DOT__cpu__DOT__ecall_reg_cond = 
        (0xaU == vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf
         [0x11U]);
    vlSelfRef.top__DOT__reset = vlSelfRef.reset;
    vlSelfRef.top__DOT__clk = vlSelfRef.clk;
    top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__functs 
        = ((8U & (vlSelfRef.top__DOT__cpu__DOT__IR 
                  >> 0x1bU)) | (7U & (vlSelfRef.top__DOT__cpu__DOT__IR 
                                      >> 0xcU)));
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = (0x7fU & vlSelfRef.top__DOT__cpu__DOT__IR);
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
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1_dout 
        = vlSelfRef.top__DOT__cpu__DOT__regA_value;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelfRef.top__DOT__cpu__DOT__regB_value;
    vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__ecall_reg_cond 
        = vlSelfRef.top__DOT__cpu__DOT__ecall_reg_cond;
    vlSelfRef.top__DOT__cpu__DOT__reset = vlSelfRef.top__DOT__reset;
    vlSelfRef.top__DOT__cpu__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__functs 
        = top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__functs;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__opcode 
        = vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode;
    __Vtableidx2 = (((IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                     << 4U) | (IData)(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__current_state));
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__next_state 
        = Vtop__ConstPool__TABLE_hb4df73e3_0[__Vtableidx2];
    vlSelfRef.top__DOT__cpu__DOT__is_ecall = (0x73U 
                                              == (IData)(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode));
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
                                                   ? (IData)(top__DOT__cpu__DOT____Vcellinp__alu_ctrl_unit__functs)
                                                   : 0U)));
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
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_machine__DOT__opcode 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__opcode;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_machine__DOT__next_state 
        = vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__next_state;
    vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall 
        = vlSelfRef.top__DOT__cpu__DOT__is_ecall;
    vlSelfRef.is_halted = ((IData)(vlSelfRef.top__DOT__cpu__DOT__ecall_reg_cond) 
                           & (IData)(vlSelfRef.top__DOT__cpu__DOT__is_ecall));
    vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out 
        = vlSelfRef.top__DOT__cpu__DOT__immediate;
    vlSelfRef.top__DOT__cpu__DOT__alu_in_2 = ((2U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ALUSrcB))
                                               ? vlSelfRef.top__DOT__cpu__DOT__immediate
                                               : ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu__DOT__ALUSrcB))
                                                   ? 4U
                                                   : vlSelfRef.top__DOT__cpu__DOT__B));
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
    vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__ALUControl 
        = vlSelfRef.top__DOT__cpu__DOT__ALUControl;
    vlSelfRef.top__DOT__cpu__DOT__alu__DOT__ALUControl 
        = vlSelfRef.top__DOT__cpu__DOT__ALUControl;
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
                        ? VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__alu_in_1, vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                        : (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                           ^ vlSelfRef.top__DOT__cpu__DOT__alu_in_2)));
        } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu__DOT__ALUControl) 
                             >> 1U)))) {
            vlSelfRef.top__DOT__cpu__DOT__alu_result 
                = ((1U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ALUControl))
                    ? VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__cpu__DOT__alu_in_1, vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                    : ((8U & (IData)(vlSelfRef.top__DOT__cpu__DOT__ALUControl))
                        ? (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                           - vlSelfRef.top__DOT__cpu__DOT__alu_in_2)
                        : (vlSelfRef.top__DOT__cpu__DOT__alu_in_1 
                           + vlSelfRef.top__DOT__cpu__DOT__alu_in_2)));
        }
    }
    vlSelfRef.top__DOT__cpu__DOT__MemData = ((IData)(vlSelfRef.top__DOT__cpu__DOT__MemRead)
                                              ? vlSelfRef.top__DOT__cpu__DOT__memory__DOT__mem
                                             [(0x3fffU 
                                               & vlSelfRef.top__DOT__cpu__DOT__memory__DOT__mem_addr)]
                                              : 0U);
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
    vlSelfRef.top__DOT__cpu__DOT__memory__DOT__dout 
        = vlSelfRef.top__DOT__cpu__DOT__MemData;
    vlSelfRef.top__DOT__cpu__DOT__pc__DOT__next_pc 
        = vlSelfRef.top__DOT__cpu__DOT__next_pc;
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    vlSelf->top__DOT__cpu__DOT__PCWriteCond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PCWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IorD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MemRead = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MemtoReg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IRWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PCSource = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ALUSrcB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ALUSrcA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__WriteData = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MemData = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regA_value = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__regB_value = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__immediate = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUControl = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ecall_reg_cond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IR = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MDR = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUOut = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__PCWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__PCWriteCond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__ecall_reg_cond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__memory__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__PCWriteCond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__PCWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__IorD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__MemRead = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__MemtoReg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__IRWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__PCSource = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSrcB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSrcA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__current_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__current_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__PCWriteCond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__PCWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__IorD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__MemRead = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__MemtoReg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__IRWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__PCSource = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__ALUSrcB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__ALUSrcA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__state_machine__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__state_machine__DOT__current_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__state_machine__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__IR = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__functs = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__ALUControl = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__ALUControl = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
