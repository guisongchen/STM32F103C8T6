#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "LED.h"
#include "KEY.h"

int main(void) {
    uint8_t num = 0;
    LED_init();
    Key_init();
    while(1) {
        num = Key_getNum();
        if (num == 1) {
            LED1_revert();
        }
        
        if (num == 2) {
            LED2_revert();
        }
    }
}
