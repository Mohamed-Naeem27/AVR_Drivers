/*
 * Sven_Segment.c
 *
 *  Created on: Sep 9, 2023
 *      Author: Pro
 */
#include <avr/delay.h>
#include "../LIB/STD_types.h"
void SEV_SEG(u8 number , float time_sec)
{
 Seven_Segment_Initialization();

 	 u16 time_ms = time_sec*1000;


			if(number < 100)
				{ //9 9  4 8
				u8 right = number % 10 ; //en2
				u8 lift = number / 10 ; //en1

				for(u16 i=0 ; i< time_ms/20
				; i++)
				{
					Seven_Segment_Disable2();
					Seven_Segment_Disable1();

					Seven_Segment_Write_Number(lift);
					Seven_Segment_Enable1();
					   _delay_ms(10);
					Seven_Segment_Disable1();

					Seven_Segment_Write_Number(right);
					Seven_Segment_Enable2();
					   _delay_ms(10);
				}
				}

}
