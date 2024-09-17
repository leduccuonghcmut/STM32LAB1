#include "main.h"
#ifndef INC_CLOCK_H_
#define INC_CLOCK_H_

void clock(int num) {
    GPIO_TypeDef* ports[] = {led0_GPIO_Port, led1_GPIO_Port, led2_GPIO_Port, led3_GPIO_Port, led4_GPIO_Port, led5_GPIO_Port, led6_GPIO_Port, led7_GPIO_Port, led8_GPIO_Port, led9_GPIO_Port, led10_GPIO_Port, led11_GPIO_Port};
    uint16_t pins[] = {led0_Pin, led1_Pin, led2_Pin, led3_Pin, led4_Pin, led5_Pin, led6_Pin, led7_Pin, led8_Pin, led9_Pin, led10_Pin, led11_Pin};

    if (num >= 0) {
        HAL_GPIO_WritePin(ports[0], pins[0], GPIO_PIN_SET);
    }
    if (num >= 1) {
        HAL_GPIO_WritePin(ports[1], pins[1], GPIO_PIN_SET);
    }
    if (num >= 2) {
        HAL_GPIO_WritePin(ports[2], pins[2], GPIO_PIN_SET);
    }
    if (num >= 3) {
        HAL_GPIO_WritePin(ports[3], pins[3], GPIO_PIN_SET);
    }
    if (num >= 4) {
        HAL_GPIO_WritePin(ports[4], pins[4], GPIO_PIN_SET);
    }
    if (num >= 5) {
        HAL_GPIO_WritePin(ports[5], pins[5], GPIO_PIN_SET);
    }
    if (num >= 6) {
        HAL_GPIO_WritePin(ports[6], pins[6], GPIO_PIN_SET);
    }
    if (num >= 7) {
        HAL_GPIO_WritePin(ports[7], pins[7], GPIO_PIN_SET);
    }
    if (num >= 8) {
        HAL_GPIO_WritePin(ports[8], pins[8], GPIO_PIN_SET);
    }
    if (num >= 9) {
        HAL_GPIO_WritePin(ports[9], pins[9], GPIO_PIN_SET);
    }
    if (num >= 10) {
        HAL_GPIO_WritePin(ports[10], pins[10], GPIO_PIN_SET);
    }
    if (num >= 11) {
        HAL_GPIO_WritePin(ports[11], pins[11], GPIO_PIN_SET);
    }
}



#endif /* INC_CLOCK_H_ */
