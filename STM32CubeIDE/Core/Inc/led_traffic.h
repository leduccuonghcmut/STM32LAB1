#include "main.h"
#ifndef INC_LED_1_H_
#define INC_LED_1_H_

//void led_1(int num){
////				HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
////				HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
////				HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, GPIO_PIN_SET);
////				HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_SET);
////				HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_SET);
////				HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, GPIO_PIN_SET);
////				HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, GPIO_PIN_SET);
//    GPIO_TypeDef* ports[] = {a_GPIO_Port, b_GPIO_Port, c_GPIO_Port, d_GPIO_Port, e_GPIO_Port, f_GPIO_Port, g_GPIO_Port};
//    uint16_t pins[] = {a_Pin, b_Pin, c_Pin, d_Pin, e_Pin, f_Pin, g_Pin};
//
//    // Lookup table for each number (0-9)
//    GPIO_PinState states[10][7] = {
//        {GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET},  // 0
//        {GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_SET,   GPIO_PIN_SET,   GPIO_PIN_SET},  // 1
//        {GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_RESET},// 2
//        {GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_SET,   GPIO_PIN_RESET},// 3
//        {GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET},// 4
//        {GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET},// 5
//        {GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET},// 6
//        {GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_SET,   GPIO_PIN_SET,   GPIO_PIN_SET},  // 7
//        {GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET},// 8
//        {GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET} // 9
//    };
//
//    // Default all LEDs ON for out-of-range numbers
//    if (num < 0 || num > 9) {
//        for (int i = 0; i < 7; i++) {
//            HAL_GPIO_WritePin(ports[i], pins[i], GPIO_PIN_SET);
//        }
//    } else {
//        // Set GPIO pins according to the lookup table for the number
//        for (int i = 0; i < 7; i++) {
//            HAL_GPIO_WritePin(ports[i], pins[i], states[num][i]);
//        }
//    }
//}
void led_1(int num){
				HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, GPIO_PIN_SET);
    GPIO_TypeDef* ports[] = {LED_a_GPIO_Port, LED_b_GPIO_Port, LED_c_GPIO_Port, LED_d_GPIO_Port, LED_e_GPIO_Port, LED_f_GPIO_Port, LED_g_GPIO_Port};
    uint16_t pins[] = {LED_a_Pin, LED_b_Pin, LED_c_Pin, LED_d_Pin, LED_e_Pin, LED_f_Pin, LED_g_Pin};

    // Lookup table for each number (0-9)
    GPIO_PinState states[10][7] = {
        {GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET},  // 0
        {GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_SET,   GPIO_PIN_SET,   GPIO_PIN_SET},  // 1
        {GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_RESET},// 2
        {GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_SET,   GPIO_PIN_RESET},// 3
        {GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET},// 4
        {GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET},// 5
        {GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET},// 6
        {GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_SET,   GPIO_PIN_SET,   GPIO_PIN_SET},  // 7
        {GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET},// 8
        {GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET} // 9
    };

    // Default all LEDs ON for out-of-range numbers
    if (num < 0 || num > 9) {
        for (int i = 0; i < 7; i++) {
            HAL_GPIO_WritePin(ports[i], pins[i], GPIO_PIN_SET);
        }
    } else {
        // Set GPIO pins according to the lookup table for the number
        for (int i = 0; i < 7; i++) {
            HAL_GPIO_WritePin(ports[i], pins[i], states[num][i]);
        }
    }
}

void led_2(int num){
//				HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
//				HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
//				HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, GPIO_PIN_SET);
//				HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_SET);
//				HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_SET);
//				HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, GPIO_PIN_SET);
//				HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, GPIO_PIN_SET);
    GPIO_TypeDef* ports[] = {aa_GPIO_Port, bb_GPIO_Port, cc_GPIO_Port, dd_GPIO_Port, ee_GPIO_Port, ff_GPIO_Port, gg_GPIO_Port};
    uint16_t pins[] = {aa_Pin, bb_Pin, cc_Pin, dd_Pin, ee_Pin, ff_Pin, gg_Pin};

    // Lookup table for each number (0-9)
    GPIO_PinState states[10][7] = {
        {GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET},  // 0
        {GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_SET,   GPIO_PIN_SET,   GPIO_PIN_SET},  // 1
        {GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_RESET},// 2
        {GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_SET,   GPIO_PIN_RESET},// 3
        {GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET},// 4
        {GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET},// 5
        {GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET},// 6
        {GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_SET,   GPIO_PIN_SET,   GPIO_PIN_SET},  // 7
        {GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET},// 8
        {GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_RESET, GPIO_PIN_SET,   GPIO_PIN_RESET, GPIO_PIN_RESET} // 9
    };

    // Default all LEDs ON for out-of-range numbers
    if (num < 0 || num > 9) {
        for (int i = 0; i < 7; i++) {
            HAL_GPIO_WritePin(ports[i], pins[i], GPIO_PIN_SET);
        }
    } else {
        // Set GPIO pins according to the lookup table for the number
        for (int i = 0; i < 7; i++) {
            HAL_GPIO_WritePin(ports[i], pins[i], states[num][i]);
        }
    }
}

#endif /* INC_LED_1_H_ */
