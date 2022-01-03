#include "Buzzer.h"

void Buzzer_init(void) {
    GPIO_InitTypeDef GPIOConf;
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
    GPIOConf.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIOConf.GPIO_Pin = GPIO_Pin_12;
    GPIOConf.GPIO_Speed = GPIO_Speed_50MHz;
    
    GPIO_Init(GPIOB, &GPIOConf);
    
    // turn off buzzer
    GPIO_SetBits(GPIOB, GPIO_Pin_12);
}

void Buzzer_on(void) {
    GPIO_WriteBit(GPIOB, GPIO_Pin_12, Bit_RESET);
}

void Buzzer_off(void) {
    GPIO_WriteBit(GPIOB, GPIO_Pin_12, Bit_SET);
}

void Buzzer_revert(void) {
	if (GPIO_ReadOutputDataBit(GPIOB, GPIO_Pin_12) == 0) {
		GPIO_WriteBit(GPIOB, GPIO_Pin_12, Bit_SET);
	} else {
		GPIO_WriteBit(GPIOB, GPIO_Pin_12, Bit_RESET);
	}
}
