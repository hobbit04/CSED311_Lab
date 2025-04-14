// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"is_halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+36,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"is_halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+39+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"is_halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+74+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+106,0,"PCWriteCond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"PCWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"IorD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"MemtoReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"IRWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"PCSource",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"ALUOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+115,0,"ALUSrcB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+116,0,"ALUSrcA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"WriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"MemData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"regA_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"regB_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"alu_in_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"alu_in_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"ALUControl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+129,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+130,0,"alu_bcond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"is_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"ecall_reg_cond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"MDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"ALUOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+138,0,"ALUControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+139,0,"alu_in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"alu_in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+142,0,"alu_bcond",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("alu_ctrl_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+143,0,"functs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+144,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+145,0,"ALUOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+146,0,"ALUControl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("ctrl_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+147,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+150,0,"PCWriteCond",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"PCWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"IorD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"MemRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"MemtoReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"IRWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"PCSource",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+158,0,"ALUOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+159,0,"ALUSrcB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+160,0,"ALUSrcA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"RegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"is_ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+164,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("state_machine", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+165,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+166,0,"current_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+167,0,"next_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("state_to_control", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+168,0,"current_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+169,0,"PCWriteCond",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"PCWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"IorD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"MemRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"MemtoReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"IRWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"PCSource",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"ALUOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+178,0,"ALUSrcB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+179,0,"ALUSrcA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"RegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("imm_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+181,0,"IR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"imm_gen_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("memory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+275,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+184,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+192,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+193,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"PCWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"PCWriteCond",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"alu_bcond",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+198,0,"next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"current_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+200,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+203,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+204,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+205,0,"rd_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+206,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"ecall_reg_cond",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+208,0,"rs1_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"rs2_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+210+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+242,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+243+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+275,(0x4000U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.reset));
    bufp->fullBit(oldp+2,(vlSelfRef.clk));
    bufp->fullBit(oldp+3,(vlSelfRef.is_halted));
    bufp->fullIData(oldp+4,(vlSelfRef.print_reg[0]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.print_reg[1]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.print_reg[2]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.print_reg[3]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.print_reg[4]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.print_reg[5]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.print_reg[6]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.print_reg[7]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.print_reg[8]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.print_reg[9]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.print_reg[10]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.print_reg[11]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.print_reg[12]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.print_reg[13]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.print_reg[14]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.print_reg[15]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.print_reg[16]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.print_reg[17]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.print_reg[18]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.print_reg[19]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.print_reg[20]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.print_reg[21]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.print_reg[22]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.print_reg[23]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.print_reg[24]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.print_reg[25]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.print_reg[26]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.print_reg[27]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.print_reg[28]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.print_reg[29]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.print_reg[30]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.print_reg[31]),32);
    bufp->fullBit(oldp+36,(vlSelfRef.top__DOT__reset));
    bufp->fullBit(oldp+37,(vlSelfRef.top__DOT__clk));
    bufp->fullBit(oldp+38,(vlSelfRef.top__DOT__is_halted));
    bufp->fullIData(oldp+39,(vlSelfRef.top__DOT__print_reg[0]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.top__DOT__print_reg[1]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.top__DOT__print_reg[2]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.top__DOT__print_reg[3]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.top__DOT__print_reg[4]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.top__DOT__print_reg[5]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.top__DOT__print_reg[6]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.top__DOT__print_reg[7]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.top__DOT__print_reg[8]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.top__DOT__print_reg[9]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.top__DOT__print_reg[10]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.top__DOT__print_reg[11]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.top__DOT__print_reg[12]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.top__DOT__print_reg[13]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.top__DOT__print_reg[14]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.top__DOT__print_reg[15]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.top__DOT__print_reg[16]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.top__DOT__print_reg[17]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.top__DOT__print_reg[18]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.top__DOT__print_reg[19]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.top__DOT__print_reg[20]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.top__DOT__print_reg[21]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.top__DOT__print_reg[22]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.top__DOT__print_reg[23]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.top__DOT__print_reg[24]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.top__DOT__print_reg[25]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.top__DOT__print_reg[26]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.top__DOT__print_reg[27]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.top__DOT__print_reg[28]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.top__DOT__print_reg[29]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.top__DOT__print_reg[30]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.top__DOT__print_reg[31]),32);
    bufp->fullBit(oldp+71,(vlSelfRef.top__DOT__cpu__DOT__reset));
    bufp->fullBit(oldp+72,(vlSelfRef.top__DOT__cpu__DOT__clk));
    bufp->fullBit(oldp+73,(vlSelfRef.top__DOT__cpu__DOT__is_halted));
    bufp->fullIData(oldp+74,(vlSelfRef.top__DOT__cpu__DOT__print_reg[0]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.top__DOT__cpu__DOT__print_reg[1]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.top__DOT__cpu__DOT__print_reg[2]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.top__DOT__cpu__DOT__print_reg[3]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.top__DOT__cpu__DOT__print_reg[4]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.top__DOT__cpu__DOT__print_reg[5]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.top__DOT__cpu__DOT__print_reg[6]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.top__DOT__cpu__DOT__print_reg[7]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.top__DOT__cpu__DOT__print_reg[8]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.top__DOT__cpu__DOT__print_reg[9]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.top__DOT__cpu__DOT__print_reg[10]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.top__DOT__cpu__DOT__print_reg[11]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.top__DOT__cpu__DOT__print_reg[12]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.top__DOT__cpu__DOT__print_reg[13]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.top__DOT__cpu__DOT__print_reg[14]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.top__DOT__cpu__DOT__print_reg[15]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.top__DOT__cpu__DOT__print_reg[16]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.top__DOT__cpu__DOT__print_reg[17]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.top__DOT__cpu__DOT__print_reg[18]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.top__DOT__cpu__DOT__print_reg[19]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.top__DOT__cpu__DOT__print_reg[20]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.top__DOT__cpu__DOT__print_reg[21]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.top__DOT__cpu__DOT__print_reg[22]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.top__DOT__cpu__DOT__print_reg[23]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.top__DOT__cpu__DOT__print_reg[24]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.top__DOT__cpu__DOT__print_reg[25]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.top__DOT__cpu__DOT__print_reg[26]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.top__DOT__cpu__DOT__print_reg[27]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.top__DOT__cpu__DOT__print_reg[28]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.top__DOT__cpu__DOT__print_reg[29]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.top__DOT__cpu__DOT__print_reg[30]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.top__DOT__cpu__DOT__print_reg[31]),32);
    bufp->fullBit(oldp+106,(vlSelfRef.top__DOT__cpu__DOT__PCWriteCond));
    bufp->fullBit(oldp+107,(vlSelfRef.top__DOT__cpu__DOT__PCWrite));
    bufp->fullBit(oldp+108,(vlSelfRef.top__DOT__cpu__DOT__IorD));
    bufp->fullBit(oldp+109,(vlSelfRef.top__DOT__cpu__DOT__MemRead));
    bufp->fullBit(oldp+110,(vlSelfRef.top__DOT__cpu__DOT__MemWrite));
    bufp->fullBit(oldp+111,(vlSelfRef.top__DOT__cpu__DOT__MemtoReg));
    bufp->fullBit(oldp+112,(vlSelfRef.top__DOT__cpu__DOT__IRWrite));
    bufp->fullBit(oldp+113,(vlSelfRef.top__DOT__cpu__DOT__PCSource));
    bufp->fullCData(oldp+114,(vlSelfRef.top__DOT__cpu__DOT__ALUOp),2);
    bufp->fullCData(oldp+115,(vlSelfRef.top__DOT__cpu__DOT__ALUSrcB),2);
    bufp->fullBit(oldp+116,(vlSelfRef.top__DOT__cpu__DOT__ALUSrcA));
    bufp->fullBit(oldp+117,(vlSelfRef.top__DOT__cpu__DOT__RegWrite));
    bufp->fullIData(oldp+118,(vlSelfRef.top__DOT__cpu__DOT__WriteData),32);
    bufp->fullIData(oldp+119,(vlSelfRef.top__DOT__cpu__DOT__MemData),32);
    bufp->fullIData(oldp+120,(vlSelfRef.top__DOT__cpu__DOT__regA_value),32);
    bufp->fullIData(oldp+121,(vlSelfRef.top__DOT__cpu__DOT__regB_value),32);
    bufp->fullIData(oldp+122,(vlSelfRef.top__DOT__cpu__DOT__immediate),32);
    bufp->fullIData(oldp+123,(vlSelfRef.top__DOT__cpu__DOT__current_pc),32);
    bufp->fullIData(oldp+124,(vlSelfRef.top__DOT__cpu__DOT__next_pc),32);
    bufp->fullIData(oldp+125,(vlSelfRef.top__DOT__cpu__DOT__addr),32);
    bufp->fullIData(oldp+126,(vlSelfRef.top__DOT__cpu__DOT__alu_in_1),32);
    bufp->fullIData(oldp+127,(vlSelfRef.top__DOT__cpu__DOT__alu_in_2),32);
    bufp->fullCData(oldp+128,(vlSelfRef.top__DOT__cpu__DOT__ALUControl),4);
    bufp->fullIData(oldp+129,(vlSelfRef.top__DOT__cpu__DOT__alu_result),32);
    bufp->fullBit(oldp+130,(vlSelfRef.top__DOT__cpu__DOT__alu_bcond));
    bufp->fullBit(oldp+131,(vlSelfRef.top__DOT__cpu__DOT__is_ecall));
    bufp->fullBit(oldp+132,(vlSelfRef.top__DOT__cpu__DOT__ecall_reg_cond));
    bufp->fullIData(oldp+133,(vlSelfRef.top__DOT__cpu__DOT__IR),32);
    bufp->fullIData(oldp+134,(vlSelfRef.top__DOT__cpu__DOT__MDR),32);
    bufp->fullIData(oldp+135,(vlSelfRef.top__DOT__cpu__DOT__A),32);
    bufp->fullIData(oldp+136,(vlSelfRef.top__DOT__cpu__DOT__B),32);
    bufp->fullIData(oldp+137,(vlSelfRef.top__DOT__cpu__DOT__ALUOut),32);
    bufp->fullCData(oldp+138,(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__ALUControl),4);
    bufp->fullIData(oldp+139,(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_in_1),32);
    bufp->fullIData(oldp+140,(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_in_2),32);
    bufp->fullIData(oldp+141,(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_result),32);
    bufp->fullBit(oldp+142,(vlSelfRef.top__DOT__cpu__DOT__alu__DOT__alu_bcond));
    bufp->fullCData(oldp+143,(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__functs),4);
    bufp->fullCData(oldp+144,(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode),7);
    bufp->fullCData(oldp+145,(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__ALUOp),2);
    bufp->fullCData(oldp+146,(vlSelfRef.top__DOT__cpu__DOT__alu_ctrl_unit__DOT__ALUControl),4);
    bufp->fullBit(oldp+147,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__reset));
    bufp->fullBit(oldp+148,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__clk));
    bufp->fullCData(oldp+149,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__opcode),7);
    bufp->fullBit(oldp+150,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__PCWriteCond));
    bufp->fullBit(oldp+151,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__PCWrite));
    bufp->fullBit(oldp+152,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__IorD));
    bufp->fullBit(oldp+153,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__MemRead));
    bufp->fullBit(oldp+154,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__MemWrite));
    bufp->fullBit(oldp+155,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__MemtoReg));
    bufp->fullBit(oldp+156,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__IRWrite));
    bufp->fullBit(oldp+157,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__PCSource));
    bufp->fullCData(oldp+158,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__ALUOp),2);
    bufp->fullCData(oldp+159,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSrcB),2);
    bufp->fullBit(oldp+160,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSrcA));
    bufp->fullBit(oldp+161,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__RegWrite));
    bufp->fullBit(oldp+162,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall));
    bufp->fullCData(oldp+163,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__current_state),4);
    bufp->fullCData(oldp+164,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__next_state),4);
    bufp->fullCData(oldp+165,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_machine__DOT__opcode),7);
    bufp->fullCData(oldp+166,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_machine__DOT__current_state),4);
    bufp->fullCData(oldp+167,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_machine__DOT__next_state),4);
    bufp->fullCData(oldp+168,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__current_state),4);
    bufp->fullBit(oldp+169,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__PCWriteCond));
    bufp->fullBit(oldp+170,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__PCWrite));
    bufp->fullBit(oldp+171,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__IorD));
    bufp->fullBit(oldp+172,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__MemRead));
    bufp->fullBit(oldp+173,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__MemWrite));
    bufp->fullBit(oldp+174,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__MemtoReg));
    bufp->fullBit(oldp+175,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__IRWrite));
    bufp->fullBit(oldp+176,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__PCSource));
    bufp->fullCData(oldp+177,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__ALUOp),2);
    bufp->fullCData(oldp+178,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__ALUSrcB),2);
    bufp->fullBit(oldp+179,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__ALUSrcA));
    bufp->fullBit(oldp+180,(vlSelfRef.top__DOT__cpu__DOT__ctrl_unit__DOT__state_to_control__DOT__RegWrite));
    bufp->fullIData(oldp+181,(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__IR),32);
    bufp->fullIData(oldp+182,(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out),32);
    bufp->fullCData(oldp+183,(vlSelfRef.top__DOT__cpu__DOT__imm_gen__DOT__opcode),7);
    bufp->fullBit(oldp+184,(vlSelfRef.top__DOT__cpu__DOT__memory__DOT__reset));
    bufp->fullBit(oldp+185,(vlSelfRef.top__DOT__cpu__DOT__memory__DOT__clk));
    bufp->fullIData(oldp+186,(vlSelfRef.top__DOT__cpu__DOT__memory__DOT__addr),32);
    bufp->fullIData(oldp+187,(vlSelfRef.top__DOT__cpu__DOT__memory__DOT__din),32);
    bufp->fullBit(oldp+188,(vlSelfRef.top__DOT__cpu__DOT__memory__DOT__mem_read));
    bufp->fullBit(oldp+189,(vlSelfRef.top__DOT__cpu__DOT__memory__DOT__mem_write));
    bufp->fullIData(oldp+190,(vlSelfRef.top__DOT__cpu__DOT__memory__DOT__dout),32);
    bufp->fullIData(oldp+191,(vlSelfRef.top__DOT__cpu__DOT__memory__DOT__i),32);
    bufp->fullIData(oldp+192,(vlSelfRef.top__DOT__cpu__DOT__memory__DOT__mem_addr),32);
    bufp->fullBit(oldp+193,(vlSelfRef.top__DOT__cpu__DOT__pc__DOT__reset));
    bufp->fullBit(oldp+194,(vlSelfRef.top__DOT__cpu__DOT__pc__DOT__clk));
    bufp->fullBit(oldp+195,(vlSelfRef.top__DOT__cpu__DOT__pc__DOT__PCWrite));
    bufp->fullBit(oldp+196,(vlSelfRef.top__DOT__cpu__DOT__pc__DOT__PCWriteCond));
    bufp->fullBit(oldp+197,(vlSelfRef.top__DOT__cpu__DOT__pc__DOT__alu_bcond));
    bufp->fullIData(oldp+198,(vlSelfRef.top__DOT__cpu__DOT__pc__DOT__next_pc),32);
    bufp->fullIData(oldp+199,(vlSelfRef.top__DOT__cpu__DOT__pc__DOT__current_pc),32);
    bufp->fullBit(oldp+200,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__reset));
    bufp->fullBit(oldp+201,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__clk));
    bufp->fullCData(oldp+202,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1),5);
    bufp->fullCData(oldp+203,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2),5);
    bufp->fullCData(oldp+204,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd),5);
    bufp->fullIData(oldp+205,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rd_din),32);
    bufp->fullBit(oldp+206,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__write_enable));
    bufp->fullBit(oldp+207,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__ecall_reg_cond));
    bufp->fullIData(oldp+208,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs1_dout),32);
    bufp->fullIData(oldp+209,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rs2_dout),32);
    bufp->fullIData(oldp+210,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[0]),32);
    bufp->fullIData(oldp+211,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[1]),32);
    bufp->fullIData(oldp+212,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[2]),32);
    bufp->fullIData(oldp+213,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[3]),32);
    bufp->fullIData(oldp+214,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[4]),32);
    bufp->fullIData(oldp+215,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[5]),32);
    bufp->fullIData(oldp+216,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[6]),32);
    bufp->fullIData(oldp+217,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[7]),32);
    bufp->fullIData(oldp+218,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[8]),32);
    bufp->fullIData(oldp+219,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[9]),32);
    bufp->fullIData(oldp+220,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[10]),32);
    bufp->fullIData(oldp+221,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[11]),32);
    bufp->fullIData(oldp+222,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[12]),32);
    bufp->fullIData(oldp+223,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[13]),32);
    bufp->fullIData(oldp+224,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[14]),32);
    bufp->fullIData(oldp+225,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[15]),32);
    bufp->fullIData(oldp+226,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[16]),32);
    bufp->fullIData(oldp+227,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[17]),32);
    bufp->fullIData(oldp+228,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[18]),32);
    bufp->fullIData(oldp+229,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[19]),32);
    bufp->fullIData(oldp+230,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[20]),32);
    bufp->fullIData(oldp+231,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[21]),32);
    bufp->fullIData(oldp+232,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[22]),32);
    bufp->fullIData(oldp+233,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[23]),32);
    bufp->fullIData(oldp+234,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[24]),32);
    bufp->fullIData(oldp+235,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[25]),32);
    bufp->fullIData(oldp+236,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[26]),32);
    bufp->fullIData(oldp+237,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[27]),32);
    bufp->fullIData(oldp+238,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[28]),32);
    bufp->fullIData(oldp+239,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[29]),32);
    bufp->fullIData(oldp+240,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[30]),32);
    bufp->fullIData(oldp+241,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__print_reg[31]),32);
    bufp->fullIData(oldp+242,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__i),32);
    bufp->fullIData(oldp+243,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+244,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+245,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+246,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+247,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+248,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+249,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+250,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+251,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+252,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+253,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+254,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+255,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+256,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+257,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+258,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+259,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+260,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+261,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+262,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+263,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+264,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+265,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+266,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+267,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+268,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+269,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+270,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+271,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+272,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+273,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+274,(vlSelfRef.top__DOT__cpu__DOT__reg_file__DOT__rf[31]),32);
}
