// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(is_halted,0,0);
        CData/*0:0*/ top__DOT__reset;
        CData/*0:0*/ top__DOT__clk;
        CData/*0:0*/ top__DOT__is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__PCWriteCond;
        CData/*0:0*/ top__DOT__cpu__DOT__PCWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__IorD;
        CData/*0:0*/ top__DOT__cpu__DOT__MemRead;
        CData/*0:0*/ top__DOT__cpu__DOT__MemWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__MemtoReg;
        CData/*0:0*/ top__DOT__cpu__DOT__IRWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__PCSource;
        CData/*1:0*/ top__DOT__cpu__DOT__ALUOp;
        CData/*1:0*/ top__DOT__cpu__DOT__ALUSrcB;
        CData/*0:0*/ top__DOT__cpu__DOT__ALUSrcA;
        CData/*0:0*/ top__DOT__cpu__DOT__RegWrite;
        CData/*5:0*/ top__DOT__cpu__DOT__ALUControl;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_bcond;
        CData/*0:0*/ top__DOT__cpu__DOT__is_ecall;
        CData/*0:0*/ top__DOT__cpu__DOT__ecall_reg_cond;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__PCWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__PCWriteCond;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__alu_bcond;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__clk;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs2;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rd;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__write_enable;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__ecall_reg_cond;
        CData/*0:0*/ top__DOT__cpu__DOT__memory__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__memory__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__memory__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__memory__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__clk;
        CData/*6:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__opcode;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__PCWriteCond;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__PCWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__IorD;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__MemRead;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__MemWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__MemtoReg;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__IRWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__PCSource;
        CData/*1:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__ALUOp;
        CData/*1:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSrcB;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSrcA;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__RegWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall;
        CData/*3:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__current_state;
        CData/*3:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__next_state;
        CData/*3:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__current_state;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__PCWriteCond;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__PCWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__IorD;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__MemRead;
    };
    struct {
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__MemWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__MemtoReg;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__IRWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__PCSource;
        CData/*1:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__ALUOp;
        CData/*1:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__ALUSrcB;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__ALUSrcA;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__RegWrite;
        CData/*6:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__state_machine__DOT__opcode;
        CData/*3:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__state_machine__DOT__current_state;
        CData/*3:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__state_machine__DOT__next_state;
        CData/*6:0*/ top__DOT__cpu__DOT__imm_gen__DOT__opcode;
        CData/*3:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__functs;
        CData/*6:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode;
        CData/*1:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__ALUOp;
        CData/*5:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__ALUControl;
        CData/*5:0*/ top__DOT__cpu__DOT__alu__DOT__ALUControl;
        CData/*0:0*/ top__DOT__cpu__DOT__alu__DOT__alu_bcond;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ top__DOT__cpu__DOT__WriteData;
        IData/*31:0*/ top__DOT__cpu__DOT__MemData;
        IData/*31:0*/ top__DOT__cpu__DOT__regA_value;
        IData/*31:0*/ top__DOT__cpu__DOT__regB_value;
        IData/*31:0*/ top__DOT__cpu__DOT__immediate;
        IData/*31:0*/ top__DOT__cpu__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__addr;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_in_1;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_in_2;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_result;
        IData/*31:0*/ top__DOT__cpu__DOT__IR;
        IData/*31:0*/ top__DOT__cpu__DOT__MDR;
        IData/*31:0*/ top__DOT__cpu__DOT__A;
        IData/*31:0*/ top__DOT__cpu__DOT__B;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUOut;
        IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rd_din;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs1_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs2_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__addr;
        IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__din;
        IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__dout;
        IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__mem_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT__IR;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__alu_in_1;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__alu_in_2;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__alu_result;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(print_reg[32],31,0);
        VlUnpacked<IData/*31:0*/, 32> top__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__reg_file__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__reg_file__DOT__rf;
        VlUnpacked<IData/*31:0*/, 16384> top__DOT__cpu__DOT__memory__DOT__mem;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__MEM_DEPTH = 0x00004000U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
