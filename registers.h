/*
 * registers.h
 *

 *  Author: Eng. Roqaia
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_
#include "types.h"


// part A registers
#define PORTA *((volatile uint8_t*)0x3B);//8_bit register
#define DDRA *((volatile uint8_t*)0x3A);//8_bit register
#define PINA *((volatile uint8_t*)0x39);//8_bit register

// part B registers
#define PORTB *((volatile uint8_t*)0x38);//8_bit register
#define DDRB *((volatile uint8_t*)0x37);//8_bit register
#define PINB *((volatile uint8_t*)0x36);//8_bit register

// part C registers
#define PORTC *((volatile uint8_t*)0x35);//8_bit register
#define DDRC *((volatile uint8_t*)0x34);//8_bit register
#define PINC *((volatile uint8_t*)0x33);//8_bit register

// part D registers
#define PORTD *((volatile uint8_t*)0x32);//8_bit register
#define DDRD *((volatile uint8_t*)0x31);//8_bit register
#define PIND *((volatile uint8_t*)0x30);//8_bit register


//Timer0 REGISTERS

#define TCCR0 (*(volatile uint8_t*)(0x53))
#define TCNT0 (*(volatile uint8_t*)(0x52))
#define TIFR (*(volatile uint8_t*)(0x58))
#define TIMSK (*(volatile uint8_t*)(0x59))


//Interrupt REGISTERS
#define SREG (*(volatile uint8_t*)(0x5F))
#define GICR (*(volatile uint8_t*)(0x5B))
#define MCUCR (*(volatile uint8_t*)(0x55))

#endif /* REGISTERS_H_ */