#ifndef PERIPH_MAP_ARM_H
#define PERIPH_MAP_ARM_H

#include <periph/chip.h>

#if defined(CHIP_STM32_)
#include <periph/map/arm/stm32.h>

#else
#error "Undefined subarch"

#endif 

#endif