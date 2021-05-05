/*
 * BIT_MATH.h

 *
 *  Created on: Dec 11, 2020
 *      Author: yara mohsen
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_





#define WRITE_BIT(byte,bit,value)  byte=((byte&(~(1<<bit)))|(value<<bit))

#define SET_BIT(REG,BIT)   (REG=REG|(1<<BIT))
#define CLEAR_BIT(REG,BIT)   (REG&=~(1<<BIT))
#define TOOGLE_BIT(REG,BIT)   (REG=REG^(1<<BIT))
#define GET_BIT(byte,bit)     ((byte>>bit)&1)

#endif /* BIT_MATH_H_ */
