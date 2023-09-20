/*
 * Seven_Segment.h
 *
 *  Created on: Sep 9, 2023
 *      Author: Pro
 */

#ifndef HAL_SEVEN_SEGMENT_SEVEN_SEGMENT_H_
#define HAL_SEVEN_SEGMENT_SEVEN_SEGMENT_H_

void Seven_Segment_Initialization();
void Seven_Segment_Write_Number(u8 number);  //Variable Number

void Seven_Segment_Enable1();
void Seven_Segment_Enable2();

void Seven_Segment_Disable1();
void Seven_Segment_Disable2();



#endif /* HAL_SEVEN_SEGMENT_SEVEN_SEGMENT_H_ */
