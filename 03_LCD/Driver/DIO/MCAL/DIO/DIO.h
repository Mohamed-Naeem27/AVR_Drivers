/*
 * DIO.h
 *
 *  Created on: Aug 31, 2023
 *      Author: Pro
 */

#ifndef MCAL_DIO_DIO_H_
#define MCAL_DIO_DIO_H_


void DIO_SetPortDirection(DIO_PORT_ID port_ID , DIO_Direction direction);
void DIO_SetPortValue(DIO_PORT_ID port_ID , u8 value );

void DIO_SetPinDirection(DIO_PORT_ID port_ID , DIO_PIN_ID pin_ID , DIO_Direction direction);
void DIO_SetPinValue(DIO_PORT_ID port_ID , DIO_PIN_ID pin_ID ,STD_level_Type value );

STD_level_Type DIO_GetpinValue(DIO_PORT_ID port_ID , DIO_PIN_ID pin_ID);


#endif /* MCAL_DIO_DIO_H_ */
