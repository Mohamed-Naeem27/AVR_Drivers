/*
 * LED.c
 *
 *  Created on: Sep 4, 2023
 *      Author: Pro
 */
#include "../LIB/STD_types.h"
#include "../MCAL/DIO/DIO_types.h"
#include "../MCAL/DIO/DIO.h"
#include "avr/delay.h"

void LED()
{

  //DIO_SetPortDirection(PORTC , OUTPUT);
  //DIO_SetPortValue(PORTC ,0xFF);

    DIO_SetPinDirection(PORTC , pin1 , OUTPUT);
while(1)
{
    DIO_SetPinValue(PORTC , pin1 , HIGH);
    _delay_ms(100);
    DIO_SetPinValue(PORTC , pin1 , LOW);
    _delay_ms(100);
}

  //DIO_SetPinDirection(PORTD , pin3 , OUTPUT);
  //DIO_SetPinValue(PORTD , pin3 , HIGH);


}

