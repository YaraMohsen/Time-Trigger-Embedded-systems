/*
 * VOLT_H.h
 *
 *  Created on: Apr 12, 2021
 *      Author: Yara Mohsen
 */

#ifndef VOLT_H_H_
#define VOLT_H_H_

#include "STD_Types.h"
#include "LCD.h"

#define VOLT_CH CH_0

typedef enum{
        VOLT_STATE_START = 0,
        VOLT_STATE_READ
}VOLT_STATE_t;


extern uint16 VOLT_SENSOR_get(void);
extern void VOLT_SENSOR_Init(void);
extern void VOLT_SENSOR_Update(void);

#endif /* VOLT_H_H_ */
