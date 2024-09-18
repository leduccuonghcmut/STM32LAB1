#include "main.h"
#ifndef INC_DISPLAYCLOCK_H_
#define INC_DISPLAYCLOCK_H_
void setNumberOnClock(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(led0_GPIO_Port, led0_Pin, GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(led1_GPIO_Port, led1_Pin, GPIO_PIN_SET);
		break;
	case 2:
		HAL_GPIO_WritePin(led2_GPIO_Port, led2_Pin, GPIO_PIN_SET);
		break;
	case 3:
		HAL_GPIO_WritePin(led3_GPIO_Port, led3_Pin, GPIO_PIN_SET);
		break;
	case 4:
		HAL_GPIO_WritePin(led4_GPIO_Port, led4_Pin, GPIO_PIN_SET);
		break;
	case 5:
		HAL_GPIO_WritePin(led5_GPIO_Port, led5_Pin, GPIO_PIN_SET);
		break;
	case 6:
		HAL_GPIO_WritePin(led6_GPIO_Port, led6_Pin, GPIO_PIN_SET);
		break;
	case 7:
		HAL_GPIO_WritePin(led7_GPIO_Port, led7_Pin, GPIO_PIN_SET);
		break;
	case 8:
		HAL_GPIO_WritePin(led8_GPIO_Port, led8_Pin, GPIO_PIN_SET);
		break;
	case 9:
		HAL_GPIO_WritePin(led9_GPIO_Port, led9_Pin, GPIO_PIN_SET);
		break;
	case 10:
		HAL_GPIO_WritePin(led10_GPIO_Port, led10_Pin, GPIO_PIN_SET);
		break;
	case 11:
		HAL_GPIO_WritePin(led11_GPIO_Port, led11_Pin, GPIO_PIN_SET);
		break;

	default:

		break;
	}
}

void clearNumberOnClock(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(led0_GPIO_Port, led0_Pin, GPIO_PIN_RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(led1_GPIO_Port, led1_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(led2_GPIO_Port, led2_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(led3_GPIO_Port, led3_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(led4_GPIO_Port, led4_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(led5_GPIO_Port, led5_Pin, GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(led6_GPIO_Port, led6_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(led7_GPIO_Port, led7_Pin, GPIO_PIN_RESET);
		break;
	case 8:
		HAL_GPIO_WritePin(led8_GPIO_Port, led8_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(led9_GPIO_Port, led9_Pin, GPIO_PIN_RESET);
		break;
	case 10:
		HAL_GPIO_WritePin(led10_GPIO_Port, led10_Pin, GPIO_PIN_RESET);
		break;
	case 11:
		HAL_GPIO_WritePin(led11_GPIO_Port, led11_Pin, GPIO_PIN_RESET);
		break;

	default:

		break;
	}
}

void clearAllClock(void){
		HAL_GPIO_WritePin(led0_GPIO_Port, led0_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(led1_GPIO_Port, led1_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(led2_GPIO_Port, led2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(led3_GPIO_Port, led3_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(led4_GPIO_Port, led4_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(led5_GPIO_Port, led5_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(led6_GPIO_Port, led6_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(led7_GPIO_Port, led7_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(led8_GPIO_Port, led8_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(led9_GPIO_Port, led9_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(led10_GPIO_Port, led10_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(led11_GPIO_Port, led11_Pin, GPIO_PIN_RESET);
}
#endif /* INC_DISPLAYCLOCK_H_ */
