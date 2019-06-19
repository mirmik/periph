#ifndef AVR2560_TIMER_REGS
#define AVR2560_TIMER_REGS

#include <inttypes.h>

struct timsk_array {
#if defined (CHIP_ATMEGA2560)
	volatile uint8_t timsk[5];
#elif defined (CHIP_ATMEGA328P)
	volatile uint8_t timsk[2];
#else 
#	error "unrecognized chip"
#endif
}; 

struct timer8_regs {
	volatile uint8_t tccr_a;
	volatile uint8_t tccr_b;
	volatile uint8_t tcnt;
	volatile uint8_t ocr_a;
	volatile uint8_t ocr_b;
} __attribute__((packed));


struct timer16_regs {
	 volatile uint8_t tccr_a;
	 volatile uint8_t tccr_b;	
	 volatile uint8_t tccr_c;
	 volatile uint8_t reserved;
	 volatile uint16_t tcnt; 
	 volatile uint16_t icr;
	 volatile uint16_t ocr_a;
	 volatile uint16_t ocr_b;
	 volatile uint16_t ocr_c;
} __attribute__((packed));

#define TIMER_DIVIDER_1 1
#define TIMER_DIVIDER_8 2
#define TIMER_DIVIDER_64 3
#define TIMER_DIVIDER_256 4
#define TIMER_DIVIDER_1024 5

#define TIMERS_8BIT_MAP (1<<2 | 1<<0)
#define TIMERS_16BIT_MAP (1<<1 | 1<<3 | 1<<4 | 1<<5)
#define TIMERS_TOTAL 6

#endif