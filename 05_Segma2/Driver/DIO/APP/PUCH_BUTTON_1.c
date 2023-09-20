/*
 * PUCH_BUTTON_1.c
 *
 *  Created on: Sep 4, 2023
 *      Author: Pro
 */

#include "../LIB/STD_types.h"
#include "../MCAL/DIO/DIO_types.h"
#include "../MCAL/DIO/DIO.h"


void PUCH_BUTTON_1()
{
	DIO_SetPinDirection(PORTA , pin0, INPUT);
	DIO_SetPinDirection(PORTA , pin1, OUTPUT);

while(1)
{
	STD_level_Type Pin_Value = DIO_GetpinValue(PORTA , pin0);

	if(/*DIO_GetpinValue(PORTA , pin0)*/Pin_Value ==HIGH)
	{
	DIO_SetPinValue(PORTA , pin1, HIGH);
	}

	else if (/*DIO_GetpinValue(PORTA , pin0)*/ Pin_Value ==LOW)
	{
		DIO_SetPinValue(PORTA , pin1, LOW);
    }
}

}

