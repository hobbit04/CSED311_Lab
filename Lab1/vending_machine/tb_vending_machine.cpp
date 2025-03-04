#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <string>

using namespace std;
#include "Vvending_machine.h"
#include "Vvending_machine___024root.h"
#define D_WIDTH 16
#define MAX_SIM_TIME 200
vluint64_t sim_time = 0;
int o_available_item_expected = 0;
int current = 0;
int success = 0;
const char* to_binary(int input) {
    string result = "";
    while (input > 0) {
        result = to_string(input % 2) + result;
        input = input / 2;
    }

    return ("0b" + result).c_str();
}

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vvending_machine* dut = new Vvending_machine;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    


    while (sim_time < MAX_SIM_TIME) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time);
        sim_time++;


        if (sim_time >= 1 && sim_time < 2)
        {
            dut -> reset_n = 1;
        }

        if (sim_time >= 2 && sim_time < 3)
        {
            dut -> reset_n = 0;
        }

        if (sim_time >= 4 && sim_time < 8)
        {
            dut -> reset_n = 1;
            dut -> i_input_coin = 0;
            dut -> i_select_item = 0;
            dut -> i_trigger_return = 0;
        }
       
        if (sim_time==8)
        {   
            printf(" initial test sim_time: %d\n", sim_time);
            if (dut -> o_available_item == o_available_item_expected)
            {
                success++;
                printf("PASSED  : o_available_item: %d, expected %d \n", dut -> o_available_item, o_available_item_expected);
            }
               
        }

       
       
        switch (sim_time) {
            case 10:
                printf("\n Available item test sim_time: %d\n", sim_time);
                dut->i_input_coin = 1; // 100원 넣음
                break;
            case 11: 
                dut->i_input_coin = 0;
                break;
            case 12: 
                dut->i_input_coin = 1; // 100원 넣음
                break;
            case 13:
                dut->i_input_coin = 0; 
                break;
            case 14: 
                dut->i_input_coin = 1; // 100원 넣음
                break;
            case 15:
                dut->i_input_coin = 0;
                break;
            case 16: 
                dut->i_input_coin = 1; // 100원 넣음
                break;

            case 17: 
                dut->i_input_coin = 0; 
                if (dut->o_available_item == 0b0001) { // 총 400원 존재
                    success++;
                    printf("PASSED : available item: %d, expected 0b0001 \n", dut->o_available_item);
                } else {
                    printf("FAILED : available item: %d, expected 0b0001 \n", dut->o_available_item);
                }
                break;

            case 18:                 
                dut->i_input_coin = 1; // 100원 넣음
                break;
            case 19: 
                dut->i_input_coin = 0;
                if (dut->o_available_item == 0b0011) { // 총 500원 존재
                    success++;
                    printf("PASSED : available item: %d, expected 0b0011 \n", dut->o_available_item);
                } else {
                    printf("FAILED : available item: %d, expected 0b0011 \n", dut->o_available_item);
                }
                break;

            case 20:
                dut->i_input_coin = 1; // 100원 넣음 
                break;
            case 21:
                dut->i_input_coin = 0;
                break;
            case 22: 
                dut->i_input_coin = 1; // 100원 넣음 
                break;
            case 23:
                dut->i_input_coin = 0;
                break;
            case 24: 
                dut->i_input_coin = 1; // 100원 넣음 
                break;
            case 25:
                dut->i_input_coin = 0;
                break;
            case 26: 
                dut->i_input_coin = 1; // 100원 넣음
                break;
            case 27:
                dut->i_input_coin = 0;
                break;
            case 28: 
                dut->i_input_coin = 1; // 100원 넣음
                break;
            case 29:
                dut->i_input_coin = 0;
                if (dut->o_available_item == 0b0111) { // 총 1000원 존재
                    success++;
                    printf("PASSED : available item: %d, expected 0b0111 \n", dut->o_available_item);
                } else {
                    printf("FAILED : available item: %d, expected 0b0111 \n", dut->o_available_item);
                }
                break;
            case 30: 
                dut->i_input_coin = 1; // 100원 넣음 
                break;
            case 31:
                dut->i_input_coin = 0;
                break;
            case 32: 
                dut->i_input_coin = 1; // 100원 넣음
                break;
            case 33:
                dut->i_input_coin = 0;  
                break;       
            case 34: 
                dut->i_input_coin = 1; // 100원 넣음
                break;
            case 35:
                dut->i_input_coin = 0;  
                break;                  
            case 36: 
                dut->i_input_coin = 1; // 100원 넣음
                break;
            case 37:
                dut->i_input_coin = 0;  
                break;      
            case 38: 
                dut->i_input_coin = 1; // 100원 넣음
                break;
            case 39:
                dut->i_input_coin = 0;  
                break;      
            case 40: 
                dut->i_input_coin = 1; // 100원 넣음
                break;
            case 41:
                dut->i_input_coin = 0;  
                break;      
            case 42: 
                dut->i_input_coin = 1; // 100원 넣음
                break;
            case 43:
                dut->i_input_coin = 0;  
                break;      
            case 44: 
                dut->i_input_coin = 1; // 100원 넣음
                break;
            case 45:
                dut->i_input_coin = 0;  
                break;      
            case 46: 
                dut->i_input_coin = 1; // 100원 넣음
                break;
            case 47:
                dut->i_input_coin = 0;  
                break;      
            case 48: 
                dut->i_input_coin = 1; // 100원 넣음
                break;
            case 49:
                dut->i_input_coin = 0;
                if (dut->o_available_item == 0b1111) { // 총 2000원 존재
                    success++;
                    printf("PASSED : available item: %d, expected 0b1111  \n", dut->o_available_item);
                } else {
                    printf("FAILED : available item: %d, expected 0b1111  \n", dut->o_available_item);
                }
                break;
            

            

//////////////////////////////////100 return_coin test////////////////////////////////////////////////////////
           
            case 52:
            printf("\n Return_coin test sim_time: %d\n", sim_time);
                dut->reset_n = 0;
                break;
            case 53:
                dut->reset_n = 1;


            case 54:
                dut->i_input_coin = 0b001; // 100원 넣음
                break;
            case 55:
                dut->i_input_coin = 0;
                dut->i_trigger_return = 1; // 반환 요청
                break;

            case 61:
                dut->i_trigger_return = 0; 
                if (dut->o_return_coin == 0b001) { // 이때쯤에 100원 하나를 반환해줘야 함함
                    success++;
                    printf("PASSED : return coin: %d, expected 0b001 \n", dut->o_return_coin);
                } else {
                    printf("FAILED : return coin: %d, expected 0b001 \n", dut->o_return_coin);
                }
                break;  
//////////////////////////////////500 return_coin test////////////////////////////////////////////////////////
           
            case 62:
                dut->reset_n = 0;
                break;
            case 63:
                dut->reset_n = 1;

           
            case 64:
                dut->i_input_coin = 0b010; // 500원 넣음
                break;
            case 65:
                dut->i_input_coin = 0;
                dut->i_trigger_return = 1; // 반환 요청
                break;
            case 71:
                dut->i_trigger_return = 0;
                if (dut->o_return_coin == 0b010) { // 500원 반환
                    success++;
                    printf("PASSED : return coin: %d, expected 0b010 \n", dut->o_return_coin);
                } else {
                    printf("FAILED : return coin: %d, expected 0b010 \n", dut->o_return_coin);
                }
                break;
//////////////////////////////////1000 return_coin test////////////////////////////////////////////////////////
           
            case 72:
                dut->reset_n = 0;
                break;
            case 73:
                dut->reset_n = 1;

           
            case 74:
                dut->i_input_coin = 0b100; // 1000원 넣음 
                break;
            case 75:
                dut->i_input_coin = 0;
                dut->i_trigger_return = 1;
                break;
            case 81:
                dut->i_trigger_return = 0;
                if (dut->o_return_coin == 0b100) { // 1000원 반환
                    success++;
                    printf("PASSED : return coin: %d, expected 0b100 \n", dut->o_return_coin);
                } else {
                    printf("FAILED : return coin: %d, expected 0b100 \n", dut->o_return_coin);
                }
                break;
//////////////////////////////////600 return_coin test////////////////////////////////////////////////////////
           
            case 82:
                dut->reset_n = 0;
                break;
            case 83:
                dut->reset_n = 1;

           
            case 84:
                dut->i_input_coin = 0b011; // 600원 넣음 (한번에 ㄷㄷ)
                break;
            case 85:
                dut->i_input_coin = 0;
                dut->i_trigger_return = 1; // 반환 요청
                break;
            case 91:
                dut->i_trigger_return = 0;
                if (dut->o_return_coin == 0b011) { // 500원+100원 반환 
                    success++;
                    printf("PASSED : return coin: %d, expected 0b011 \n", dut->o_return_coin);
                } else {
                    printf("FAILED : return coin: %d, expected 0b011 \n", dut->o_return_coin);
                }
                break;   
//////////////////////////////////1100 return_coin test////////////////////////////////////////////////////////
           
            case 92:
                dut->reset_n = 0;
                break;
            case 93:
                dut->reset_n = 1;
            
            case 94:
                dut->i_input_coin = 0b101; // 1100원 넣음 (한번에 ㄷㄷ)
                break;
            case 95:
                dut->i_input_coin = 0;
                dut->i_trigger_return = 1; // 반환 요청
                break;
            case 101:
                dut->i_trigger_return = 0;
                if (dut->o_return_coin == 0b101) { // 1000원 + 100원 반환
                    success++;
                    printf("PASSED : return coin: %d, expected 0b101 \n", dut->o_return_coin);
                } else {
                    printf("FAILED : return coin: %d, expected 0b101 \n", dut->o_return_coin);
                }
                break;   
//////////////////////////////////1500 return_coin test////////////////////////////////////////////////////////
           
            case 102:
                dut->reset_n = 0;
                break;
            case 103:
                dut->reset_n = 1;

           
            case 104:
                dut->i_input_coin = 0b110; // 1500원 넣음 (한번에 ㄷㄷ)
                break;
            case 105:
                dut->i_input_coin = 0;
                dut->i_trigger_return = 1;
                break;
            case 111:
                dut->i_trigger_return = 0;
                if (dut->o_return_coin == 0b110) { // 1000원 + 500원 반환
                    success++;
                    printf("PASSED : return coin: %d, expected 0b110 \n", dut->o_return_coin);
                } else {
                    printf("FAILED : return coin: %d, expected 0b110 \n", dut->o_return_coin);
                }
                break;         
 
           
            case 112:
                dut->reset_n = 0;
                break;
            case 113:
                dut->reset_n = 1;

           
            case 114:
                dut->i_input_coin = 0b111; // 1600원 넣음 (한번에 ㄷㄷ)
                break;
            case 115:
                dut->i_input_coin = 0;
                dut->i_trigger_return = 1;
                break;
            case 121:
                dut->i_trigger_return = 0;
                if (dut->o_return_coin == 0b111) { // 1000원 + 500원 + 100원 반환
                    success++;
                    printf("PASSED : return coin: %d, expected 0b111 \n", dut->o_return_coin);
                } else {
                    printf("FAILED : return coin: %d, expected 0b111 \n", dut->o_return_coin);
                }
                break;       


/////////////////////////////////select item test////////////////////////////////////////////////////////
           

            case 122:
            printf("\n Select item test sim_time: %d\n", sim_time);
                dut->reset_n = 0;
                break;
            case 123:
                dut->reset_n = 1;

            case 124:
                dut->i_input_coin = 0b111; // 1600원 넣음
                break;
            case 125:
                dut->i_input_coin = 0;
                break;
            case 126:
                dut->i_select_item = 0b0110; // 2번, 3번 아이템 동시에 출력
                break;
            case 127:
                dut->i_select_item = 0b000;
                if (dut->o_output_item == 0b0110) { // 현재 1500원이 있으니 가능하죠!! (남는 돈 반환은 따로 체크하지 않네요)
                    success++;
                    printf("PASSED : output item: %s, expected 0b0110 \n", to_binary(dut->o_output_item));
                } else {
                    printf("FAILED : output item: %, expected 0b0110 \n", to_binary(dut->o_output_item));
                }
///////////////////////////////////////////////////////////////////////////////////////////////////////////
        }
    }
    printf("\nsuccess: %d / 13\n", success);


    m_trace->close();

    delete dut;
    exit(0);
}



