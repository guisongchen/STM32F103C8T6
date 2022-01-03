#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "Buzzer.h"
#include "PhotoSenser.h"

int main(void) {
    Buzzer_init();
    PhotoSenser_init();
    while(1) {
        if (PhotoSenser_getStatus() == 1) {
            Buzzer_on();
        } else {
            Buzzer_off();
        }
    }
}
