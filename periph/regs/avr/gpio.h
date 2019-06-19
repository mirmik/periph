#ifndef AVR_GPIO_H
#define AVR_GPIO_H

#include "inttypes.h"

struct gpio_regs {
	volatile uint8_t pin;
	volatile uint8_t ddr;
	volatile uint8_t port;
} __attribute__((packed));

#endif