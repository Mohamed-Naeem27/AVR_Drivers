/*
 * LCD.c
 *
 *  Created on: Sep 9, 2023
 *      Author: Pro
 */


#include <avr/delay.h>
#include "../../LIB/BIT_Math.h"
#include "../../LIB/STD_types.h"

#include "../../MCAL/DIO/DIO_types.h"
#include "../../MCAL/DIO/DIO.h"


static u8 InitStepFinished = 0;

void LCD_Initialize(void)
{
DIO_SetPortDirection(PORTA , OUTPUT);
DIO_SetPortDirection(PORTA , OUTPUT);
_delay_ms(30);

LCD_WriteCmd(0x20);
LCD_WriteCmd(0x20);
LCD_WriteCmd(0x80);
_delay_ms(1);

LCD_WriteCmd(0x00);
LCD_WriteCmd(0xF0);
_delay_ms(1);

LCD_WriteCmd(0x00);
LCD_WriteCmd(0x10);
_delay_ms(2);

InitStepFinished =1;
}

void LCD_WriteCmd(u8 Cmd)
{// Cmd 0000 0000
 // 0010 0000
DIO_SetPinValue(PORTB , pin1 , LOW); //RS 0
DIO_SetPinValue(PORTB , pin2 , LOW); //RW 0

DIO_SetPinValue(PORTA , pin4 , GET_BIt(Cmd , 4)); //DB 4
DIO_SetPinValue(PORTA , pin5 , GET_BIt(Cmd , 5)); //DB 5
DIO_SetPinValue(PORTA , pin6 , GET_BIt(Cmd , 6)); //DB 6
DIO_SetPinValue(PORTA , pin7 , GET_BIt(Cmd , 7)); //DB 7

DIO_SetPinValue(PORTB , pin3 , HIGH);
_delay_ms(1);
DIO_SetPinValue(PORTB , pin3 , LOW);

if(InitStepFinished)
{

DIO_SetPinValue(PORTA , pin4 , GET_BIt(Cmd , 0)); //DB 4
DIO_SetPinValue(PORTA , pin5 , GET_BIt(Cmd , 1)); //DB 5
DIO_SetPinValue(PORTA , pin6 , GET_BIt(Cmd , 2)); //DB 6
DIO_SetPinValue(PORTA , pin7 , GET_BIt(Cmd , 3)); //DB 7

DIO_SetPinValue(PORTB , pin3 , HIGH);
_delay_ms(1);
DIO_SetPinValue(PORTB , pin3 , LOW);
}
_delay_ms(2);

}

void LCD_WriteData(u8 Data)
{
	DIO_SetPinValue(PORTB , pin1 , HIGH); //RS 0
	DIO_SetPinValue(PORTB , pin2 , LOW); //RW 0

	DIO_SetPinValue(PORTA , pin4 , GET_BIt(Data , 4)); //DB 4
	DIO_SetPinValue(PORTA , pin5 , GET_BIt(Data , 5)); //DB 5
	DIO_SetPinValue(PORTA , pin6 , GET_BIt(Data , 6)); //DB 6
	DIO_SetPinValue(PORTA , pin7 , GET_BIt(Data , 7)); //DB 7

	DIO_SetPinValue(PORTB , pin3 , HIGH);
	_delay_ms(1);
	DIO_SetPinValue(PORTB , pin3 , LOW);

	DIO_SetPinValue(PORTA , pin4 , GET_BIt(Data , 0)); //DB 4
	DIO_SetPinValue(PORTA , pin5 , GET_BIt(Data , 1)); //DB 5
	DIO_SetPinValue(PORTA , pin6 , GET_BIt(Data , 2)); //DB 6
	DIO_SetPinValue(PORTA , pin7 , GET_BIt(Data , 3)); //DB 7

	DIO_SetPinValue(PORTB , pin3 , HIGH);
	_delay_ms(1);
	DIO_SetPinValue(PORTB , pin3 , LOW);

	_delay_ms(2);

}
