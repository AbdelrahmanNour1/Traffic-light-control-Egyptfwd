/*
 * button.h
 *
 * Created: 10/7/2022 1:41:17 PM
 *  Author: Lord
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../MCAL/DIO Driver/dio.h"

#define BUTTON_PORT PORT_D
#define BUTTON_PIN  2

//buttonstate
#define LOW 0
#define HIGH 1

void BUTTON_init(uint8_t buttonPort,uint8_t buttonPin);
void BUTTON_read(uint8_t buttonPort,uint8_t buttonPin, uint8_t *value);



#endif /* BUTTON_H_ */