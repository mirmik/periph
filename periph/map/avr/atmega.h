#ifndef CHIP_MAP_AVR_ATMEGA_H
#define CHIP_MAP_AVR_ATMEGA_H

#include <periph/chip/avr.h>
#include <periph/regs/avr.h>

#define GPIOA_BASE 0x20
#define GPIOB_BASE 0x23
#define GPIOC_BASE 0x26
#define GPIOD_BASE 0x29
#define GPIOE_BASE 0x2C
#define GPIOF_BASE 0x2F
#define GPIOG_BASE 0x32

#define TIMER0_BASE 0x44
#define TIMER1_BASE 0x80
#define TIMER3_BASE 0x90
#define TIMER4_BASE 0xA0
#define TIMER2_BASE 0xB0

#define USART0_BASE 0xC0
#define USART1_BASE 0xC8
#define USART2_BASE 0xD0

#define TIMER5_BASE 0x120

#define GPIOH_BASE 0x100
#define GPIOJ_BASE 0x103
#define GPIOK_BASE 0x106
#define GPIOL_BASE 0x109

////////////////////////////////////////////////

#define GPIOB ((struct gpio_regs *)(GPIOB_BASE))
#define GPIOC ((struct gpio_regs *)(GPIOC_BASE))
#define GPIOD ((struct gpio_regs *)(GPIOD_BASE))
#if defined (CHIP_ATMEGA2560)
#define GPIOA ((struct gpio_regs *)(GPIOA_BASE))
#define GPIOE ((struct gpio_regs *)(GPIOE_BASE))
#define GPIOF ((struct gpio_regs *)(GPIOF_BASE))
#define GPIOG ((struct gpio_regs *)(GPIOG_BASE))
#define GPIOH ((struct gpio_regs *)(GPIOH_BASE))
#define GPIOJ ((struct gpio_regs *)(GPIOJ_BASE))
#define GPIOK ((struct gpio_regs *)(GPIOK_BASE))
#define GPIOL ((struct gpio_regs *)(GPIOL_BASE))
#endif

#define USART0 ((struct usart_regs *)(USART0_BASE))
#if defined (CHIP_ATMEGA2560)
#define USART1 ((struct usart_regs *)(USART1_BASE))
#define USART2 ((struct usart_regs *)(USART2_BASE))
#endif

#define TIMER0 ((struct timer8_regs *)(TIMER0_BASE))
#define TIMER2 ((struct timer8_regs *)(TIMER2_BASE))
#define TIMER1 ((struct timer16_regs *)(TIMER1_BASE))
#if defined (CHIP_ATMEGA2560)
#define TIMER3 ((struct timer16_regs *)(TIMER3_BASE))
#define TIMER4 ((struct timer16_regs *)(TIMER4_BASE))
#define TIMER5 ((struct timer16_regs *)(TIMER5_BASE))
#endif

#endif