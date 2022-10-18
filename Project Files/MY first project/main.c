/*
 * MY first project.c
 * Write high on pin 0 on port A
 * Created: 10/6/2022 7:55:24 PM
 * Author : Lord
 */ 
#include "C:\Users\Lord\Documents\Atmel Studio\7.0\MY first project\MY first project\Application\application.h"

int main(void)
{	// initialize
	APP_init();

	while(1)
	{
	APP_start();	
	/*BUTTON_init(BUTTON_PORT,BUTTON_PIN);
	LED_init(CAR_PORT,CAR_GREEN_PIN);
	LED_init(PED_PORT,PED_YELLOW_PIN);
	LED_init(PED_PORT,PED_RED_PIN);
	LED_init(PED_PORT,PED_GREEN_PIN);
	TIMER_init();
	uint8_t value;
	while(1){
	BUTTON_read(BUTTON_PORT,BUTTON_PIN,&value);
	if(value==HIGH){
	LED_toggle(CAR_PORT,CAR_GREEN_PIN);
	LED_on(PED_PORT,PED_GREEN_PIN);
	TIMER_delay(250);
	LED_on(PED_PORT,PED_YELLOW_PIN);
	TIMER_delay(250);
	LED_on(PED_PORT,PED_RED_PIN);
	TIMER_delay(250);
	LED_off(PED_PORT,PED_GREEN_PIN);
	LED_off(PED_PORT,PED_YELLOW_PIN);
	LED_off(PED_PORT,PED_RED_PIN);
	TIMER_delay(250);
	}else{
	LED_on(CAR_PORT,CAR_GREEN_PIN);
	}
	
	}*/
	}
}

