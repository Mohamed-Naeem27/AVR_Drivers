/*
 * LCD_1.c
 *
 *  Created on: Sep 9, 2023
 *      Author: Pro
 */

#include <avr/delay.h>

void LCD_1()
{
LCD_Initialize();

LCD_WriteData('E');
LCD_WriteData('n');
LCD_WriteData('g');
LCD_WriteData('M');
LCD_WriteData('o');
LCD_WriteData('h');
LCD_WriteData('m');
LCD_WriteData('e');
LCD_WriteData('d');

_delay_ms(3000);
LCD_WriteCmd(0x01);


}

