#include "main.h"
#ifndef INC_CLEARCLOCK_H_
#define INC_CLEARCLOCK_H_
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


#endif /* INC_CLEARCLOCK_H_ */
