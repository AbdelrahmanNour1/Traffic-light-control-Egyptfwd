/*
 * dio.c
 *
 * Created: 10/7/2022 12:17:48 AM
 *  Author: Lord
 */ 
// include .h
#include "dio.h"
// global variables
// function definitions

// DIO_init initializes the pin into input or output
void DIO_init(uint8_t portNumber, uint8_t pinNumber, uint8_t direction)
{
	switch(portNumber)
	{
		case PORT_A:
			if(direction == IN)
			{
				CLEAR_BIT(DDRA,pinNumber); // input
			}
			else if(direction == OUT)
			{
				SET_BIT(DDRA,pinNumber); // output
			}
			else
			{
				// ERROR handling
			}
			break;
		case PORT_B:
			if(direction == IN)
			{
				CLEAR_BIT(DDRB,pinNumber); // input
			}
			else if(direction == OUT)
			{
				SET_BIT(DDRB,pinNumber); // output
			}
			else
			{
				// ERROR handling
			}
			break;
		case PORT_C:
			if(direction == IN)
			{
				CLEAR_BIT(DDRC,pinNumber); // input
			}
			else if(direction == OUT)
			{
				SET_BIT(DDRC,pinNumber); // output
			}
			else
			{
				// ERROR handling
			}
			break;
		case PORT_D:
			if(direction == IN)
			{
				CLEAR_BIT(DDRD,pinNumber); // input
			}
			else if(direction == OUT)
			{
				SET_BIT(DDRD,pinNumber); // output
			}
			else
			{
				// ERROR handling
			}
			break;
		default:
			// Error handle
			break;
	}
	
}
// DIO_write initializes the pin into high (5v) or low (0v)
void DIO_write(uint8_t portNumber, uint8_t pinNumber, uint8_t value)
{
	switch(portNumber)
	{
		case PORT_A:
			if(value == LOW)
			{
			CLEAR_BIT(PORTA,pinNumber); // write 0
			}
			else if(value == HIGH)
			{
			SET_BIT(PORTA,pinNumber); // write 1
			}
			else
			{
			// ERROR handling
			}
			break;
		case PORT_B:
			if(value == LOW)
			{
			CLEAR_BIT(PORTB,pinNumber); // write 0
			}
			else if(value == HIGH)
			{
			SET_BIT(PORTB,pinNumber); // write 1
			}
			else
			{
			// ERROR handling
			}
			break;
		case PORT_C:
			if(value == LOW)
			{
				CLEAR_BIT(PORTC,pinNumber); // write 0
			}
			else if(value == HIGH)
			{
				SET_BIT(PORTC,pinNumber); // write 1
			}
			else
			{
				// ERROR handling
			}
			break;
		case PORT_D:
			if(value == LOW)
			{
				CLEAR_BIT(PORTD,pinNumber); // write 0
			}
			else if(value == HIGH)
			{
				SET_BIT(PORTD,pinNumber); // write 1
			}
			else
			{
				// ERROR handling
			}
			break;
		default:
			// Error handle
			break;
		
	}
}
// DIO_toggle switches the state of the pin( high -> low and low -> high)
void DIO_toggle(uint8_t portNumber, uint8_t pinNumber)
{
	switch(portNumber){
		case PORT_A:
			TOGGLE_BIT(PORTA,pinNumber);
			break;
		case PORT_B:
			TOGGLE_BIT(PORTB,pinNumber);
			break;
		case PORT_C:
			TOGGLE_BIT(PORTC,pinNumber);
			break;
		case PORT_D:
			TOGGLE_BIT(PORTD,pinNumber);
			break;
		default:
			// Error handle
			break;
	}
}
// DIO_read reads the value of the pin (high or low)
void DIO_read(uint8_t portNumber, uint8_t pinNumber, uint8_t *value)
{
	switch(portNumber)
	{
		case PORT_A:
			*value = READ_BIT(PINA,pinNumber);
			break;
		case PORT_B:
			*value = READ_BIT(PINB,pinNumber);
			break;
		case PORT_C:
			*value = READ_BIT(PINC,pinNumber);
			break;
		case PORT_D:
			*value = READ_BIT(PIND,pinNumber);
			break;
		default:
			// Error handle
			break;
	}
}
	
