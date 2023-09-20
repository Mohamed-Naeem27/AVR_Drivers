/*
 * Blt_Math.h
 *
 *  Created on: Sep 3, 2023
 *      Author: Pro
 */

#ifndef MCAL_DIO_BLT_MATH_H_
#define MCAL_DIO_BLT_MATH_H_

#define SET_BIt(PORT_ID , PIN_ID)          (PORT_ID) |=  (1 << (PIN_ID))
#define CLEAR_BIt(PORT_ID , PIN_ID)        (PORT_ID) &=  ~(1 << (PIN_ID))
#define TOGGLE_BIt(PORT_ID , PIN_ID)       (PORT_ID) ^=  (1 << (PIN_ID))
#define GET_BIt(PORT_ID , PIN_ID)          (((PORT_ID) >> (PIN_ID)) & 0x01)

#endif /* MCAL_DIO_BLT_MATH_H_ */
