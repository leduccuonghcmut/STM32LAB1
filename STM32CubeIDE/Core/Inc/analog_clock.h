#include "main.h"
#ifndef INC_ANALOG_CLOCK_H_
#define INC_ANALOG_CLOCK_H_

//void clock(int num) {
//    GPIO_TypeDef* ports[] = {led0_GPIO_Port, led1_GPIO_Port, led2_GPIO_Port, led3_GPIO_Port, led4_GPIO_Port, led5_GPIO_Port, led6_GPIO_Port, led7_GPIO_Port, led8_GPIO_Port, led9_GPIO_Port, led10_GPIO_Port, led11_GPIO_Port};
//    uint16_t pins[] = {led0_Pin, led1_Pin, led2_Pin, led3_Pin, led4_Pin, led5_Pin, led6_Pin, led7_Pin, led8_Pin, led9_Pin, led10_Pin, led11_Pin};
//
//    // Xóa tất cả LED trước khi cập nhật trạng thái mới
//    for (int i = 0; i < 12; i++) {
//        HAL_GPIO_WritePin(ports[i], pins[i], GPIO_PIN_RESET);
//    }
//
//    // Bật LED tương ứng với số num
//    if (num >= 0 && num < 12) {Z
//        HAL_GPIO_WritePin(ports[num], pins[num], GPIO_PIN_SET);
//    }
//}
void clock(int num){
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

#endif /* INC_ANALOG_CLOCK_H_ */
