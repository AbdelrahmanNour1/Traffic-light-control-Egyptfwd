/*
 * led.c
 *
 * Created: 10/7/2022 2:49:38 AM
 *  Author: Lord
 */ 

#include "led.h"

//LED_init calls DIO_init and initializes the led pin into output
void LED_init(uint8_t ledPort,uint8_t ledPin)
{
	DIO_init(ledPort,ledPin,OUT);
}
//LED_on calls DIO_write and initializes the led into high (5v)
void LED_on(uint8_t ledPort,uint8_t ledPin)
{
	DIO_write(ledPort,ledPin,HIGH);
}
//LED_off calls DIO_write and initializes the led into low (0v)
void LED_off(uint8_t ledPort,uint8_t ledPin)
{
	DIO_write(ledPort,ledPin,LOW);
}
//LED_toggle calls DIO_toggle and switches the value of the led
void LED_toggle(uint8_t ledPort,uint8_t ledPin)
{
	DIO_toggle(ledPort,ledPin);
}

