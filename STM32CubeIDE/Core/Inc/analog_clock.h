#include "main.h"
#ifndef INC_ANALOG_CLOCK_H_
#define INC_ANALOG_CLOCK_H_

//void clock(int num){
//	GPIO_TypeDef* ports[] = {led0_GPIO_Port, led1_GPIO_Port, led2_GPIO_Port, led3_GPIO_Port, led4_GPIO_Port, led5_GPIO_Port, led6_GPIO_Port,led7_GPIO_Port,led8_GPIO_Port,led9_GPIO_Port,led10_GPIO_Port,led11_GPIO_Port};
//	    uint16_t pins[] = {led0_Pin, led1_Pin, led2_Pin, led3_Pin, led4_Pin, led5_Pin, led6_Pin,led7_Pin,led8_Pin,led9_Pin,led10_Pin,led11_Pin};
//
//	    GPIO_PinState states[12][12] = {
//	        {GPIO_PIN_RESET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET},  //0
//			{GPIO_PIN_SET, GPIO_PIN_RESET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET},  //1
//			{GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_RESET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET},	//2
//			{GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_RESET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET},  //3
//			{GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_RESET, GPIO_PIN_SET, GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET},  //4
//			{GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_RESET, GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET},  //5
//			{GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_RESET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET},  //6
//			{GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET,GPIO_PIN_RESET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET},  //7
//			{GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_RESET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET},  //8
//			{GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_RESET,GPIO_PIN_SET,GPIO_PIN_SET},  //9
//			{GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_RESET,GPIO_PIN_SET},  //10
//			{GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET, GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_SET,GPIO_PIN_RESET},  //11
//	    };
//	    if (num < 0 || num > 11) {
//	        for (int i = 0; i < 12; i++) {
//	            HAL_GPIO_WritePin(ports[i], pins[i], GPIO_PIN_SET);
//	        }
//	    } else {
//	        // Set GPIO pins according to the lookup table for the number
//	        for (int i = 0; i < 12; i++) {
//	            HAL_GPIO_WritePin(ports[i], pins[i], states[num][i]);
//	        }
//	    }
//}
void clock(int num) {
    GPIO_TypeDef* ports[] = {led0_GPIO_Port, led1_GPIO_Port, led2_GPIO_Port, led3_GPIO_Port, led4_GPIO_Port, led5_GPIO_Port, led6_GPIO_Port, led7_GPIO_Port, led8_GPIO_Port, led9_GPIO_Port, led10_GPIO_Port, led11_GPIO_Port};
    uint16_t pins[] = {led0_Pin, led1_Pin, led2_Pin, led3_Pin, led4_Pin, led5_Pin, led6_Pin, led7_Pin, led8_Pin, led9_Pin, led10_Pin, led11_Pin};

    // Xóa tất cả LED trước khi cập nhật trạng thái mới
    for (int i = 0; i < 12; i++) {
        HAL_GPIO_WritePin(ports[i], pins[i], GPIO_PIN_RESET);
    }

    // Bật LED tương ứng với số num
    if (num >= 0 && num < 12) {
        HAL_GPIO_WritePin(ports[num], pins[num], GPIO_PIN_SET);
    }
}


#endif /* INC_ANALOG_CLOCK_H_ */
