#ifndef PERIPH_MAP_H
#define PERIPH_MAP_H

#include <periph/chip.h>

#if defined(CHIP_AVR)
#include <periph/map/avr.h>

#elif defined(CHIP_ARM)
#include <periph/map/arm.h>

#else
#error "CHIP_ARCH_ is not defined"

#endif 

#endif