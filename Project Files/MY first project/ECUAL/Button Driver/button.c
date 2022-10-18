/*
 * button.c
 *
 * Created: 10/7/2022 1:41:04 PM
 *  Author: Lord
 */ 

#include "button.h"

//BUTTON_init calls DIO_init and initializes the pin as input
void BUTTON_init(uint8_t buttonPort,uint8_t buttonPin)
{
	DIO_init(buttonPort,buttonPin,IN);
}
//BUTTON_read calls DIO_read and reads the value of the button(pressed or not)
void BUTTON_read(uint8_t buttonPort,uint8_t buttonPin, uint8_t *value)
{
	DIO_read(buttonPort,buttonPin,value);
}
