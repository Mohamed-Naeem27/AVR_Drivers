/*
 * BIT_Math.h
 *
 *  Created on: Sep 9, 2023
 *      Author: Pro
 */

#ifndef LIB_BIT_MATH_H_
#define LIB_BIT_MATH_H_

#define SET_BIt(PORT_ID , PIN_ID)          (PORT_ID) |=  (1 << (PIN_ID))
#define CLEAR_BIt(PORT_ID , PIN_ID)        (PORT_ID) &=  ~(1 << (PIN_ID))
#define TOGGLE_BIt(PORT_ID , PIN_ID)       (PORT_ID) ^=  (1 << (PIN_ID))
#define GET_BIt(PORT_ID , PIN_ID)          (((PORT_ID) >> (PIN_ID)) & 0x01)


#endif /* LIB_BIT_MATH_H_ */
