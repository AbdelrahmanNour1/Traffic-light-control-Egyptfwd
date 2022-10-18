/*
 * interrupts.h
 *
 * Created: 10/11/2022 2:21:56 AM
 *  Author: Lord
 */ 


#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_
#include "registers.h"

//vector
#define EXT_INT_0 __vector_1

//enable global interrupt
#define sei()  __asm__ __volatile__ ("sei" ::: "memory")
#define cli()  __asm__ __volatile__ ("cli" ::: "memory")

//sense on rising edge
#define RISING_EDGE() MCUCR|= (1<<1) | (1<<0)

//enable external interrupt
#define EXT_INT() GICR|=(1<<6)

//isr
#define ISR(INT_VECT) \
void INT_VECT(void) __attribute__ ((signal,used)); \
void INT_VECT(void)



#endif /* INTERRUPTS_H_ */