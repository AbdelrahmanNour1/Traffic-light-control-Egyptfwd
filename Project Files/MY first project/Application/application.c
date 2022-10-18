/*
 * application.c
 *
 * Created: 10/7/2022 1:30:48 PM
 *  Author: Lord
 */ 

#include "application.h"
uint8_t mode,premode;

void APP_init(void)
{
	// initialize normal mode
	mode = 1;
	premode = 0;
	
	// car led initialize
	LED_init(CAR_PORT,CAR_GREEN_PIN);
	LED_init(CAR_PORT,CAR_YELLOW_PIN);
	LED_init(CAR_PORT,CAR_RED_PIN);
	
	//ped led initialize
	LED_init(PED_PORT,PED_GREEN_PIN);
	LED_init(PED_PORT,PED_YELLOW_PIN);
	LED_init(PED_PORT,PED_RED_PIN);
	
	// button initialize
	BUTTON_init(BUTTON_PORT,BUTTON_PIN);
	
	//timer initialize
	TIMER_init();
	
	// interrupt initialize
	sei();
	RISING_EDGE();
	EXT_INT();	
}

void APP_start(void)
{
	// case 1 (car led red)
	for(int i =0 ;i < 20;i++)
	{
		if(premode)
		{
				for(int i =0;i<20;i++)
				{
					LED_toggle(CAR_PORT,CAR_YELLOW_PIN);
					LED_toggle(PED_PORT,PED_YELLOW_PIN);
					TIMER_delay(250);
				}
				LED_on(PED_PORT,PED_RED_PIN);
				LED_on(CAR_PORT,CAR_GREEN_PIN);
				TIMER_delay(5000);
				premode = 0;
				break;
		}
		else if(mode)
		{
			LED_on(PED_PORT,PED_RED_PIN);
			LED_off(CAR_PORT,CAR_GREEN_PIN);
			LED_on(CAR_PORT,CAR_RED_PIN);
			TIMER_delay(250);
			premode = 0;
		}
		else
		{
			LED_on(CAR_PORT,CAR_RED_PIN);
			LED_off(PED_PORT,PED_RED_PIN);
			LED_on(PED_PORT,PED_GREEN_PIN);
			TIMER_delay(5000);
			LED_off(PED_PORT,PED_GREEN_PIN);
			mode = 1;
			premode = 1;
			break;
		}
	}
	
	//  case 2( yellow blink)
	for(int i =0 ;i < 20;i++)
	{
		if(premode)
		{
			LED_off(CAR_PORT,CAR_RED_PIN);
			for(int i =0;i<20;i++)
			{
				LED_toggle(CAR_PORT,CAR_YELLOW_PIN);
				LED_toggle(PED_PORT,PED_YELLOW_PIN);
				TIMER_delay(250);
			}
			premode = 0;
			break;
		}
		else if(mode)
		{
			LED_on(PED_PORT,PED_RED_PIN);
			LED_off(CAR_PORT,CAR_RED_PIN);
			LED_off(PED_PORT,PED_YELLOW_PIN);
			LED_toggle(CAR_PORT,CAR_YELLOW_PIN);
			TIMER_delay(250);
		}
		else
		{
			LED_off(CAR_PORT,CAR_YELLOW_PIN);
			LED_off(PED_PORT,PED_YELLOW_PIN);
			LED_off(PED_PORT,CAR_RED_PIN);
			for(int i =0;i<20;i++)
			{
				LED_toggle(CAR_PORT,CAR_YELLOW_PIN);
				LED_toggle(PED_PORT,PED_YELLOW_PIN);
				TIMER_delay(250);
			}
			LED_off(CAR_PORT,CAR_YELLOW_PIN);
			LED_off(PED_PORT,PED_YELLOW_PIN);
			LED_off(PED_PORT,PED_RED_PIN);
			LED_on(PED_PORT,PED_GREEN_PIN);
			LED_on(CAR_PORT,CAR_RED_PIN);
			TIMER_delay(5000);
			LED_off(PED_PORT,PED_GREEN_PIN);
			LED_off(CAR_PORT,CAR_RED_PIN);
			mode = 1;
			premode = 1;
			break;
		}
	}
	
	// case 3 (green)
	for(int i =0;i<20;i++)
	{
		if(premode)
		{
			
			for(int i =0;i<20;i++)
			{
				LED_toggle(CAR_PORT,CAR_YELLOW_PIN);
				LED_toggle(PED_PORT,PED_YELLOW_PIN);
				TIMER_delay(250);
			}
			LED_on(PED_PORT,PED_RED_PIN);
			LED_on(CAR_PORT,CAR_GREEN_PIN);
			TIMER_delay(5000);
			premode = 0;
			break;
		}
		else if(mode)
		{
			LED_on(PED_PORT,PED_RED_PIN);
			LED_off(CAR_PORT,CAR_RED_PIN);
			LED_off(CAR_PORT,CAR_YELLOW_PIN);
			LED_on(CAR_PORT,CAR_GREEN_PIN);
			TIMER_delay(250);
		}
		else
		{
			LED_off(PED_PORT,PED_RED_PIN);
			LED_off(CAR_PORT,CAR_GREEN_PIN);
			LED_off(CAR_PORT,CAR_YELLOW_PIN);
			LED_off(PED_PORT,PED_YELLOW_PIN);
			for(int i =0;i<20;i++)
			{
				LED_toggle(CAR_PORT,CAR_YELLOW_PIN);
				LED_toggle(PED_PORT,PED_YELLOW_PIN);
				TIMER_delay(250);
			}
			LED_off(CAR_PORT,CAR_YELLOW_PIN);
			LED_off(PED_PORT,PED_YELLOW_PIN);
			LED_off(PED_PORT,PED_RED_PIN);
			LED_off(CAR_PORT,CAR_GREEN_PIN);
			LED_on(CAR_PORT,CAR_RED_PIN);
			LED_on(PED_PORT,PED_GREEN_PIN);
			TIMER_delay(5000);
			LED_off(CAR_PORT,CAR_RED_PIN);
			LED_off(PED_PORT,PED_GREEN_PIN);
			mode = 1;
			premode = 1;
			break;
		}
	}
	// last toggle
	for(int i =0;i<20;i++)
	{
		if(premode)
		{
			for(int i =0;i<20;i++)
			{
				LED_toggle(CAR_PORT,CAR_YELLOW_PIN);
				LED_toggle(PED_PORT,PED_YELLOW_PIN);
				TIMER_delay(250);
			}
			LED_off(PED_PORT,PED_GREEN_PIN);
			LED_on(PED_PORT,PED_RED_PIN);
			LED_on(CAR_PORT,CAR_GREEN_PIN);
			TIMER_delay(5000);
			LED_off(CAR_PORT,CAR_GREEN_PIN);
			for(int i =0;i<20;i++)
			{
				LED_toggle(CAR_PORT,CAR_YELLOW_PIN);
				TIMER_delay(250);
			}
			premode = 0;
			break;
		}
		else if(mode)
		{
			LED_on(PED_PORT,PED_RED_PIN);
			LED_off(CAR_PORT,CAR_GREEN_PIN);
			LED_toggle(CAR_PORT,CAR_YELLOW_PIN);
			TIMER_delay(250);
		}
		else
		{
			LED_off(PED_PORT,PED_RED_PIN);
			LED_off(CAR_PORT,CAR_GREEN_PIN);
			LED_off(CAR_PORT,CAR_YELLOW_PIN);
			LED_off(PED_PORT,PED_YELLOW_PIN);
			for(int i =0;i<20;i++)
			{
				LED_toggle(CAR_PORT,CAR_YELLOW_PIN);
				LED_toggle(PED_PORT,PED_YELLOW_PIN);
				TIMER_delay(250);
			}
			LED_off(PED_PORT,PED_RED_PIN);
			LED_off(CAR_PORT,CAR_YELLOW_PIN);
			LED_off(PED_PORT,PED_YELLOW_PIN);
			LED_on(PED_PORT,PED_GREEN_PIN);
			LED_on(CAR_PORT,CAR_RED_PIN);
			TIMER_delay(5000);
			LED_off(PED_PORT,PED_GREEN_PIN);
			LED_off(CAR_PORT,CAR_RED_PIN);
			mode=1;
			premode = 1;
			break;
			}
		
	}
}
ISR(EXT_INT_0)
{
	mode = 0;
}