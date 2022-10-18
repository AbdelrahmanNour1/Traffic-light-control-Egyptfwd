/*
 * dio.h
 *
 * Created: 10/7/2022 12:18:10 AM
 *  Author: Lord
 */ 


#ifndef DIO_H_
#define DIO_H_
// include .h
#include "../../Util/registers.h"
#include "../../Util/bitmanipulation.h"
// all internal driver typedefs
// all driver macros

#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

// Direction defines
#define IN 0
#define OUT 1

// value defines
#define LOW 0
#define HIGH 1

// all driver function prototypes
void DIO_init(uint8_t portNumber, uint8_t pinNumber, uint8_t direction); //	initialize dio direction
void DIO_write(uint8_t portNumber, uint8_t pinNumber, uint8_t value); // write data to dio
void DIO_toggle(uint8_t portNumber, uint8_t pinNumber); // toggle dio
void DIO_read(uint8_t portNumber, uint8_t pinNumber, uint8_t *value); // read dio 


#endif /* DIO_H_ */