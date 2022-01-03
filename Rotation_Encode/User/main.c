#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "RotationEncode.h"

int main(void) {
    int16_t num;
    OLED_Init();
    RotationEncode_init();
    OLED_ShowString(1, 1, "Encode num:");
    while(1) {
        num += RotationEncode_getChangeCnt();
        OLED_ShowSignedNum(1, 12, num, 4);
    }
}
