/*
 * timer.c
 *
 * Created: 10/11/2022 2:20:49 AM
 *  Author: Lord
 */ 

#include "timer.h"
#include <math.h>
#include "../../Util/bitmanipulation.h"

//initializes the timer into normal mode
void TIMER_init()
{
	TCCR0 = 0x00;
}
void TIMER_delay(uint16_t ms)
{
	uint16_t Numberofoverflows, initialtimer;
	double TimerMAXdelay, TimerTick;
	uint32_t overflowcounter = 0;
	TimerTick = 256.0/1000.0; // timertick = prescaler (256) / clock frequency (1 mhz)
	TimerMAXdelay = TimerTick * 256;
	if(ms < TimerMAXdelay)
	{
			initialtimer = (TimerMAXdelay-ms)/TimerTick;
			Numberofoverflows = 1;
	}
	else if(ms == (int)TimerMAXdelay)
	{
		initialtimer = 0;
		Numberofoverflows = 1;
	}
	else
	{
			Numberofoverflows = ceil((double)ms/TimerMAXdelay);
			initialtimer = (1<<8) - ((double)ms/TimerTick)/Numberofoverflows;
	}
	TCNT0 = initialtimer;
	SET_BIT(TCCR0,2); // 256 prescaler
	while(overflowcounter < Numberofoverflows)
	{
		/* will be repeated
		stop after one overflow -> 256 micro sec
		wait until overflow flag to be set */
		while(READ_BIT(TIFR,0)==0);
		//clear overflow flag
		SET_BIT(TIFR,0);
		overflowcounter++;
	}
	overflowcounter = 0;
	
	// timer stop
	TCCR0 = 0x00;
}
