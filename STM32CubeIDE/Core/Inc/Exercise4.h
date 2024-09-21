#ifndef INC_EXERCISE4_H_
#define INC_EXERCISE4_H_

#include "main.h"
void led(int num){
		HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, GPIO_PIN_SET);
	switch(num){
		case 0:
			HAL_GPIO_WritePin(LED_a_GPIO_Port,LED_a_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_b_GPIO_Port,LED_b_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_c_GPIO_Port,LED_c_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_d_GPIO_Port,LED_d_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_e_GPIO_Port,LED_e_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_f_GPIO_Port,LED_f_Pin,GPIO_PIN_RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_b_GPIO_Port,LED_b_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_c_GPIO_Port,LED_c_Pin,GPIO_PIN_RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(LED_a_GPIO_Port,LED_a_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_b_GPIO_Port,LED_b_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_d_GPIO_Port,LED_d_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_e_GPIO_Port,LED_e_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_g_GPIO_Port,LED_g_Pin,GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(LED_a_GPIO_Port,LED_a_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_b_GPIO_Port,LED_b_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_c_GPIO_Port,LED_c_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_d_GPIO_Port,LED_d_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_g_GPIO_Port,LED_g_Pin,GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(LED_b_GPIO_Port,LED_b_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_c_GPIO_Port,LED_c_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_f_GPIO_Port,LED_f_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_g_GPIO_Port,LED_g_Pin,GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(LED_a_GPIO_Port,LED_a_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_c_GPIO_Port,LED_c_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_d_GPIO_Port,LED_d_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_f_GPIO_Port,LED_f_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_g_GPIO_Port,LED_g_Pin,GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(LED_a_GPIO_Port,LED_a_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_c_GPIO_Port,LED_c_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_d_GPIO_Port,LED_d_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_e_GPIO_Port,LED_e_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_f_GPIO_Port,LED_f_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_g_GPIO_Port,LED_g_Pin,GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(LED_a_GPIO_Port,LED_a_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_b_GPIO_Port,LED_b_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_c_GPIO_Port,LED_c_Pin,GPIO_PIN_RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(LED_a_GPIO_Port,LED_a_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_b_GPIO_Port,LED_b_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_c_GPIO_Port,LED_c_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_d_GPIO_Port,LED_d_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_e_GPIO_Port,LED_e_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_f_GPIO_Port,LED_f_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_g_GPIO_Port,LED_g_Pin,GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(LED_a_GPIO_Port,LED_a_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_b_GPIO_Port,LED_b_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_c_GPIO_Port,LED_c_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_d_GPIO_Port,LED_d_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_f_GPIO_Port,LED_f_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_g_GPIO_Port,LED_g_Pin,GPIO_PIN_RESET);
			break;
		default:

			break;
	}
}


#endif /* INC_EXERCISE4_H_ */
