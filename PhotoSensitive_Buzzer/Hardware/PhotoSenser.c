#include "PhotoSenser.h"

void PhotoSenser_init(void) {
    GPIO_InitTypeDef GPIOConf;
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
    GPIOConf.GPIO_Mode = GPIO_Mode_IPU;
    GPIOConf.GPIO_Pin = GPIO_Pin_13;
    GPIOConf.GPIO_Speed = GPIO_Speed_50MHz;
    
    GPIO_Init(GPIOB, &GPIOConf);
}

uint8_t PhotoSenser_getStatus(void) {
    return GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_13);
}
