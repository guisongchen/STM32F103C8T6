#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Infrared_encode.h"

int main(void) {
    OLED_Init();
    InfraredEncode_init();
    OLED_ShowString(1, 1, "Encode cnt: ");
    while(1) {
        OLED_ShowNum(1, 13, InfraredEncode_getCnt(), 4);
    }
}
