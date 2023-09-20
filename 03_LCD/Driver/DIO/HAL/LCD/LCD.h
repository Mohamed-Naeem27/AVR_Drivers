/*
 * LCD.h
 *
 *  Created on: Sep 9, 2023
 *      Author: Pro
 */

#ifndef HAL_LCD_LCD_H_
#define HAL_LCD_LCD_H_

void LCD_Initialize(void);
void LCD_WriteCmd(u8 Cmd);
void LCD_WriteData(u8 Data);

#endif /* HAL_LCD_LCD_H_ */
