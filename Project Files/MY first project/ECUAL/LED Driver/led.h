/*
 * led.h
 *
 * Created: 10/7/2022 2:49:26 AM
 *  Author: Lord
 */ 


#ifndef LED_H_
#define LED_H_
#include "../../MCAL/DIO Driver/dio.h"

// car led macro
#define CAR_PORT PORT_A
#define CAR_GREEN_PIN 0
#define CAR_YELLOW_PIN 1
#define CAR_RED_PIN 2

// ped led macro
#define PED_PORT PORT_B
#define PED_GREEN_PIN 0
#define PED_YELLOW_PIN 1
#define PED_RED_PIN 2

void LED_init(uint8_t ledPort,uint8_t ledPin);
void LED_on(uint8_t ledPort,uint8_t ledPin);
void LED_off(uint8_t ledPort,uint8_t ledPin);
void LED_toggle(uint8_t ledPort,uint8_t ledPin);	


#endif /* LED_H_ */