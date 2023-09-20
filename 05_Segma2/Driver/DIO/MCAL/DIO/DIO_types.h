/*
 * types.h
 *
 *  Created on: Aug 31, 2023
 *      Author: Pro
 */

#ifndef MCAL_DIO_TYPES_H_
#define MCAL_DIO_TYPES_H_


typedef enum
{

	INPUT,   // 0
	OUTPUT  // 1

}DIO_Direction;

typedef enum
{

	PORTA,
	PORTB,
	PORTC,
	PORTD

}DIO_PORT_ID;

typedef enum
{

	pin0,
	pin1,
	pin2,
	pin3,
	pin4,
	pin5,
	pin6,
	pin7

}DIO_PIN_ID;




#endif /* MCAL_DIO_TYPES_H_ */
