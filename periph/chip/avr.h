#ifndef PERIPH_CHIP_AVR_H
#define PERIPH_CHIP_AVR_H

#if defined(CHIP_ATMEGA168)
#define CHIP_ATMEGA_168_328
#endif

#if defined(CHIP_ATMEGA328)
#define CHIP_ATMEGA_168_328
#endif

#if defined(CHIP_ATMEGA328P)
#define CHIP_ATMEGA_168_328
#endif

#if defined(CHIP_ATMEGA1280)
#define CHIP_ATMEGA_1280_2560
#endif

#if defined(CHIP_ATMEGA2560)
#define CHIP_ATMEGA_1280_2560
#endif

#if defined(CHIP_ATMEGA_168_328)
#define CHIP_AVR_ATMEGA
#endif

#if defined(CHIP_ATMEGA_1280_2560)
#define CHIP_AVR_ATMEGA
#endif

#if defined(CHIP_AVR_ATMEGA)
#define CHIP_AVR
#endif

#endif