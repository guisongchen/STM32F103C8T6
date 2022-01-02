#include "stm32f10x.h"                  // Device header
#include "Delay.h"

int main(void) {
    GPIO_InitTypeDef GPIOConf;
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
    
    GPIOConf.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIOConf.GPIO_Pin = GPIO_Pin_0;
    GPIOConf.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIOConf);
    
    while(1) {
        GPIO_WriteBit(GPIOA, GPIO_Pin_0, Bit_SET);
        Delay_ms(500);
        GPIO_WriteBit(GPIOA, GPIO_Pin_0, Bit_RESET);
        Delay_ms(500);
    }
}
