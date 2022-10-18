/*
 * registers.h
 *
 * Created: 10/6/2022 11:27:33 PM
 *  Author: Lord
 */ 

/************************************************************************/
/* All microcontroller registers                                        */
/************************************************************************/

#ifndef REGISTERS_H_
#define REGISTERS_H_
#include "types.h"



/************************************************************************/
/* DIO registers                                                        */
/************************************************************************/
// PORTA registers
#define PORTA *((volatile uint8_t*)0x3B) // 8-bit register
#define DDRA *((volatile uint8_t*)0x3A) // 8-bit register
#define PINA *((volatile uint8_t*)0x39) // 8-bit register

// PORTB registers
#define PORTB *((volatile uint8_t*)0x38) // 8-bit register
#define DDRB *((volatile uint8_t*)0x37) // 8-bit register
#define PINB *((volatile uint8_t*)0x36) // 8-bit register

// PORTC registers
#define PORTC *((volatile uint8_t*)0x35) // 8-bit register
#define DDRC *((volatile uint8_t*)0x34) // 8-bit register
#define PINC *((volatile uint8_t*)0x33) // 8-bit register

// PORTD registers
#define PORTD *((volatile uint8_t*)0x32) // 8-bit register
#define DDRD *((volatile uint8_t*)0x31) // 8-bit register
#define PIND *((volatile uint8_t*)0x30) // 8-bit register

//TIMER registers
#define TCCR0 *((volatile uint8_t*)0x53) // 8-bit register
#define TCNT0 *((volatile uint8_t*)0x52) // 8-bit register
#define TIFR *((volatile uint8_t*)0x58) // 8-bit register
#define TIMSK (*(volatile uint8_t*)(0x59)) // 8-bit register
#define OCR0 (*(volatile uint8_t*)(0x5C)) // 8-bit register

//INTERRUPTS registers
#define SREG (*(volatile uint8_t*)(0x5F))
#define GICR (*(volatile uint8_t*)(0x5B))
#define MCUCR (*(volatile uint8_t*)(0x55))





#endif /* REGISTERS_H_ */