#ifndef PERIPH_MAP_AVR_H
#define PERIPH_MAP_AVR_H

#include <periph/chip/avr.h>

#if defined(CHIP_AVR_ATMEGA)
#include <periph/map/avr/atmega.h>
#else
#error "Undefined AVR subarch (error in chip/avr.h maybe)"
#endif



#endif