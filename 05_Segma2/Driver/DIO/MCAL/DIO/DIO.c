/*
 * DIO.c
 *
 *  Created on: Aug 31, 2023
 *      Author: Pro
 */

#include "DIO_REG.h"
#include "../../LIB/BIT_Math.h"
#include "../../LIB/STD_types.h"
#include "DIO_types.h"


void DIO_SetPortDirection(DIO_PORT_ID port_ID , DIO_Direction direction)
{
    if (OUTPUT == direction)
    {
    	switch(port_ID)
    	{
    	case PORTA: DDRA_Reg = 0xFF ; break;
    	case PORTB: DDRB_Reg = 0xFF ; break;
    	case PORTC: DDRC_Reg = 0xFF ; break;
    	case PORTD: DDRD_Reg = 0xFF ; break;
    	}
    }


    else if (INPUT == direction)
    {
    	switch(port_ID)
    	{
     	case PORTA: DDRA_Reg = 0xFF ; break;
    	case PORTB: DDRB_Reg = 0xFF ; break;
    	case PORTC: DDRC_Reg = 0xFF ; break;
    	case PORTD: DDRD_Reg = 0xFF ; break;
    	}
    }
}

void DIO_SetPortValue(DIO_PORT_ID port_ID , u8 value )
{
   	switch (port_ID)
   	{
   	   case PORTA: PORTA_Reg = value ;break;
   	   case PORTB: PORTB_Reg = value ;break;
   	   case PORTC: PORTC_Reg = value ;break;
   	   case PORTD: PORTD_Reg = value ;break;
   	}
}

void DIO_SetPinDirection(DIO_PORT_ID port_ID , DIO_PIN_ID pin_ID , DIO_Direction direction)
{
   if (port_ID <= PORTD && pin_ID <= pin7)
   {
	 if(OUTPUT == direction)
	   {
		 switch(port_ID)
		 {
		 case PORTA: SET_BIt(DDRA_Reg , pin_ID) ;break;
		 case PORTB: SET_BIt(DDRB_Reg , pin_ID) ;break;
		 case PORTC: SET_BIt(DDRC_Reg , pin_ID) ;break;
		 case PORTD: SET_BIt(DDRD_Reg , pin_ID) ;break;
		 }

	   }
	 else if (INPUT == direction)
	 {
		switch(port_ID)
		 {
		 case PORTA: CLEAR_BIt(DDRA_Reg , pin_ID) ;break;
		 case PORTB: CLEAR_BIt(DDRB_Reg , pin_ID) ;break;
		 case PORTC: CLEAR_BIt(DDRC_Reg , pin_ID) ;break;
		 case PORTD: CLEAR_BIt(DDRD_Reg , pin_ID) ;break;
		 }

	 }
   }
}

void DIO_SetPinValue(DIO_PORT_ID port_ID , DIO_PIN_ID pin_ID , STD_level_Type value )
{
    if (port_ID <= PORTD && pin_ID <= pin7)
    {
    	if (value == HIGH)
    	{
    		switch (port_ID)
    		{
    		case PORTA : SET_BIt(PORTA_Reg, pin_ID) ; break;
    		case PORTB : SET_BIt(PORTB_Reg, pin_ID) ; break;
    		case PORTC : SET_BIt(PORTC_Reg, pin_ID) ; break;
    		case PORTD : SET_BIt(PORTD_Reg, pin_ID) ; break;
    		}

    	}

    	else if (value == LOW)
    	{
    	    switch (port_ID)
    		{
    		case PORTA : CLEAR_BIt(PORTA_Reg, pin_ID) ; break;
    		case PORTB : CLEAR_BIt(PORTB_Reg, pin_ID) ; break;
    		case PORTC : CLEAR_BIt(PORTC_Reg, pin_ID) ; break;
    		case PORTD : CLEAR_BIt(PORTD_Reg, pin_ID) ; break;
    		}

    	}
    }

}

STD_level_Type DIO_GetpinValue(DIO_PORT_ID port_ID , DIO_PIN_ID pin_ID)
{
	STD_level_Type PinValue;
	if (port_ID <= PORTD && pin_ID <= pin7)
	    {
		      switch (port_ID)
		       {
		            case PORTA : PinValue = GET_BIt(PINA_Reg, pin_ID) ; break;
		       		case PORTB : PinValue = GET_BIt(PINB_Reg, pin_ID) ; break;
		       		case PORTC : PinValue = GET_BIt(PINC_Reg, pin_ID) ; break;
		       		case PORTD : PinValue = GET_BIt(PIND_Reg, pin_ID) ; break;
		       }

	    }
return PinValue;
}
