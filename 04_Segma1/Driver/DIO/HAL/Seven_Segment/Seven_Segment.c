/*
 * Seven_Segment.c
 *
 *  Created on: Sep 9, 2023
 *      Author: Pro
 */
#include "../../MCAL/DIO/Blt_Math.h"
#include "../../MCAL/DIO/DIO_types.h"
#include "../../MCAL/DIO/DIO.h"


void Seven_Segment_Initialization()
{
DIO_SetPinDirection(PORTA , pin0 , OUTPUT); //A
DIO_SetPinDirection(PORTA , pin1 , OUTPUT); //B
DIO_SetPinDirection(PORTA , pin2 , OUTPUT); //C
DIO_SetPinDirection(PORTA , pin3 , OUTPUT); //D

DIO_SetPinDirection(PORTB , pin2 , OUTPUT); //EN1
DIO_SetPinDirection(PORTB , pin1 , OUTPUT); //EN2
}

void Seven_Segment_Enable1()
{
DIO_SetPinValue(PORTB , pin2 , HIGH);
}

void Seven_Segment_Enable2()
{
DIO_SetPinValue(PORTB , pin1 , HIGH);
}

void Seven_Segment_Disable1()
{
DIO_SetPinValue(PORTB , pin2 , LOW);
}

void Seven_Segment_Disable2()
{
DIO_SetPinValue(PORTB , pin1 , LOW);
}

void Seven_Segment_Write_Number(u8 number)
{
  if(number < 10)
     {
	   // 3   0b0000 0011
	   //            ABCD
	 DIO_SetPinValue(PORTA , pin0 ,  GET_BIt(number , 0)); //A
	 DIO_SetPinValue(PORTA , pin1 ,  GET_BIt(number , 1)); //B
     DIO_SetPinValue(PORTA , pin2 ,  GET_BIt(number , 2)); //C
     DIO_SetPinValue(PORTA , pin3 ,  GET_BIt(number , 3)); //D
     }
}
