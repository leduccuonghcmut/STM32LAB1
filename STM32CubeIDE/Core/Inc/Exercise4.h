#ifndef INC_EXERCISE4_H_
#define INC_EXERCISE4_H_

//#include "main.h"
//void ex4_run(int num){
//	switch(num){
//		case 0:
//			HAL_GPIO_WritePin(LED_a_GPIO_Port,LED_a_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_b_GPIO_Port,LED_b_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_c_GPIO_Port,LED_c_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_d_GPIO_Port,LED_d_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_e_GPIO_Port,LED_e_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_f_GPIO_Port,LED_f_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_g_GPIO_Port,LED_g_Pin,GPIO_PIN_SET);
//			break;
//		case 1:
//			HAL_GPIO_WritePin(LED_a_GPIO_Port,LED_a_Pin,GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_b_GPIO_Port,LED_b_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_c_GPIO_Port,LED_c_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_d_GPIO_Port,LED_d_Pin,GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_e_GPIO_Port,LED_e_Pin,GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_f_GPIO_Port,LED_f_Pin,GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_g_GPIO_Port,LED_g_Pin,GPIO_PIN_SET);
//			break;
//		case 2:
//			HAL_GPIO_WritePin(LED_a_GPIO_Port,LED_a_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_b_GPIO_Port,LED_b_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_c_GPIO_Port,LED_c_Pin,GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_d_GPIO_Port,LED_d_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_e_GPIO_Port,LED_e_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_f_GPIO_Port,LED_f_Pin,GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_g_GPIO_Port,LED_g_Pin,GPIO_PIN_RESET);
//			break;
//		case 3:
//			HAL_GPIO_WritePin(LED_a_GPIO_Port,LED_a_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_b_GPIO_Port,LED_b_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_c_GPIO_Port,LED_c_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_d_GPIO_Port,LED_d_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_e_GPIO_Port,LED_e_Pin,GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_f_GPIO_Port,LED_f_Pin,GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_g_GPIO_Port,LED_g_Pin,GPIO_PIN_RESET);
//			break;
//		case 4:
//			HAL_GPIO_WritePin(LED_a_GPIO_Port,LED_a_Pin,GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_b_GPIO_Port,LED_b_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_c_GPIO_Port,LED_c_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_d_GPIO_Port,LED_d_Pin,GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_e_GPIO_Port,LED_e_Pin,GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_f_GPIO_Port,LED_f_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_g_GPIO_Port,LED_g_Pin,GPIO_PIN_RESET);
//			break;
//		case 5:
//			HAL_GPIO_WritePin(LED_a_GPIO_Port,LED_a_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_b_GPIO_Port,LED_b_Pin,GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_c_GPIO_Port,LED_c_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_d_GPIO_Port,LED_d_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_e_GPIO_Port,LED_e_Pin,GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_f_GPIO_Port,LED_f_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_g_GPIO_Port,LED_g_Pin,GPIO_PIN_RESET);
//			break;
//		case 6:
//			HAL_GPIO_WritePin(LED_a_GPIO_Port,LED_a_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_b_GPIO_Port,LED_b_Pin,GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_c_GPIO_Port,LED_c_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_d_GPIO_Port,LED_d_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_e_GPIO_Port,LED_e_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_f_GPIO_Port,LED_f_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_g_GPIO_Port,LED_g_Pin,GPIO_PIN_RESET);
//			break;
//		case 7:
//			HAL_GPIO_WritePin(LED_a_GPIO_Port,LED_a_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_b_GPIO_Port,LED_b_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_c_GPIO_Port,LED_c_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_d_GPIO_Port,LED_d_Pin,GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_e_GPIO_Port,LED_e_Pin,GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_f_GPIO_Port,LED_f_Pin,GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_g_GPIO_Port,LED_g_Pin,GPIO_PIN_SET);
//			break;
//		case 8:
//			HAL_GPIO_WritePin(LED_a_GPIO_Port,LED_a_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_b_GPIO_Port,LED_b_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_c_GPIO_Port,LED_c_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_d_GPIO_Port,LED_d_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_e_GPIO_Port,LED_e_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_f_GPIO_Port,LED_f_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_g_GPIO_Port,LED_g_Pin,GPIO_PIN_RESET);
//			break;
//		case 9:
//			HAL_GPIO_WritePin(LED_a_GPIO_Port,LED_a_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_b_GPIO_Port,LED_b_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_c_GPIO_Port,LED_c_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_d_GPIO_Port,LED_d_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_e_GPIO_Port,LED_e_Pin,GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_f_GPIO_Port,LED_f_Pin,GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(LED_g_GPIO_Port,LED_g_Pin,GPIO_PIN_RESET);
//			break;
//		default:
//			HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, GPIO_PIN_SET);
//			break;
//	}
//}

void led(int num){
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





#endif /* INC_EXERCISE4_H_ */
