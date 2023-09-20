/*
 * types.h
 *
 *  Created on: Aug 31, 2023
 *      Author: Pro
 */

#ifndef MCAL_DIO_TYPES_H_
#define MCAL_DIO_TYPES_H_


typedef unsigned char u8 ;
typedef unsigned char s8 ;

typedef unsigned char u16 ;
typedef unsigned char s16 ;

typedef unsigned char u32 ;
typedef unsigned char s32 ;

typedef float f32 ;
typedef double f64 ;

#define NULL 0



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

	LOW,  //0
	HIGH //1


}DIO_Value;

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
