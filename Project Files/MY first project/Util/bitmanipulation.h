/*
 * bitmanipulation.h
 *
 * Created: 10/11/2022 2:22:55 AM
 *  Author: Lord
 */ 


#ifndef BITMANIPULATION_H_
#define BITMANIPULATION_H_

#define CLEAR_BIT(REG,NUM) REG &=~ (1<<NUM)
#define SET_BIT(REG,NUM) REG |= (1<<NUM)
#define TOGGLE_BIT(REG,NUM) REG ^= (1<<NUM)
#define READ_BIT(REG,NUM) ((REG&(1<<NUM))>>NUM)



#endif /* BITMANIPULATION_H_ */