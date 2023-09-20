/*
 * PUCH_BUTTON_2.c
 *
 *  Created on: Sep 4, 2023
 *      Author: Pro
 */

#include "../MCAL/DIO/DIO_types.h"
#include "../MCAL/DIO/DIO.h"
#include "avr/delay.h"

void PUCH_BUTTON_2()
{
DIO_SetPinDirection(PORTA , pin0 , INPUT);
DIO_SetPinDirection(PORTA , pin1 , INPUT);
DIO_SetPinDirection(PORTA , pin2 , INPUT);

DIO_SetPinDirection(PORTA , pin3 , OUTPUT);
DIO_SetPinDirection(PORTA , pin4 , OUTPUT);
DIO_SetPinDirection(PORTA , pin5 , OUTPUT);

while(1)
{

DIO_Value Button0_Value = DIO_GetpinValue(PORTA , pin0);
DIO_Value Button1_Value = DIO_GetpinValue(PORTA , pin1);
DIO_Value Button2_Value = DIO_GetpinValue(PORTA , pin2);


if(Button0_Value == HIGH && Button1_Value == LOW && Button2_Value == LOW)
{
DIO_SetPinValue(PORTA , pin3 , HIGH);
DIO_SetPinValue(PORTA , pin4 , HIGH);
DIO_SetPinValue(PORTA , pin5 , HIGH);

}
else if (Button0_Value == LOW && Button1_Value == LOW && Button2_Value == LOW)
{
DIO_SetPinValue(PORTA, pin3 , HIGH);
DIO_SetPinValue(PORTA, pin4 , LOW);
DIO_SetPinValue(PORTA, pin5 , LOW);
_delay_ms(300);

DIO_SetPinValue(PORTA, pin3 , LOW);
DIO_SetPinValue(PORTA, pin4 , HIGH);
DIO_SetPinValue(PORTA, pin5 , LOW);
_delay_ms(300);

DIO_SetPinValue(PORTA, pin3 , LOW);
DIO_SetPinValue(PORTA, pin4 , LOW);
DIO_SetPinValue(PORTA, pin5 , HIGH);
_delay_ms(300);

}

else if (Button0_Value == LOW && Button1_Value == HIGH && Button2_Value == LOW)
{
DIO_SetPinValue(PORTA, pin3 , LOW);
DIO_SetPinValue(PORTA, pin4 , LOW);
DIO_SetPinValue(PORTA, pin5 , LOW);
_delay_ms(300);                          // 000

DIO_SetPinValue(PORTA, pin3 , HIGH);
DIO_SetPinValue(PORTA, pin4 , LOW);
DIO_SetPinValue(PORTA, pin5 , LOW);
_delay_ms(300);                          // 010

DIO_SetPinValue(PORTA, pin3 , HIGH);
DIO_SetPinValue(PORTA, pin4 , HIGH);
DIO_SetPinValue(PORTA, pin5 , LOW);
_delay_ms(300);                          // 011

DIO_SetPinValue(PORTA, pin3 , LOW);
DIO_SetPinValue(PORTA, pin4 , LOW);
DIO_SetPinValue(PORTA, pin5 , HIGH);
_delay_ms(300);                          // 100

DIO_SetPinValue(PORTA, pin3 , HIGH);
DIO_SetPinValue(PORTA, pin4 , LOW);
DIO_SetPinValue(PORTA, pin5 , HIGH);
_delay_ms(300);                          // 101

DIO_SetPinValue(PORTA, pin3 , LOW);
DIO_SetPinValue(PORTA, pin4 , HIGH);
DIO_SetPinValue(PORTA, pin5 , HIGH);
_delay_ms(300);                          // 110

DIO_SetPinValue(PORTA, pin3 , HIGH);
DIO_SetPinValue(PORTA, pin4 , HIGH);
DIO_SetPinValue(PORTA, pin5 , HIGH);
_delay_ms(300);                          // 111

}
else
{
	DIO_SetPinValue(PORTA, pin3 , LOW);
	DIO_SetPinValue(PORTA, pin4 , LOW);
	DIO_SetPinValue(PORTA, pin5 , LOW);
}

}
}
