#ifndef PERIPH_MAP_H
#define PERIPH_MAP_H

#include <periph/chip.h>

#if defined(CHIP_ARCH_AVR)
#include <periph/map/avr.h>

#if defined(CHIP_ARCH_ARM)
#include <periph/map/arm.h>

#else
#error "CHIP_ARCH_ is not defined"

#endif 

#endif