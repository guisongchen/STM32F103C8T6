#ifndef __PHOTO_SENSER_H
#define __PHOTO_SENSER_H

#include "stm32f10x.h"                  // Device header

void PhotoSenser_init(void);
uint8_t PhotoSenser_getStatus(void);

#endif // __PHOTO_SENSER_H
