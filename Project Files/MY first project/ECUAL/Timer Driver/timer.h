/*
 * timer.h
 *
 * Created: 10/11/2022 2:21:01 AM
 *  Author: Lord
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "../../Util/registers.h"

void TIMER_init();
void TIMER_delay(uint16_t ms);


#endif /* TIMER_H_ */