/*
 * temp.h
 *
 *  Created on: Apr 12, 2021
 *      Author: Yara Mohsen
 */

#ifndef TEMP_H_
#define TEMP_H_
#include "STD_Types.h"

#define TEMP_CH CH_1

typedef enum{
        TEAMP_STATE_START = 0,
        TEMP_STATE_READ
}TEMP_STATE_t;


extern uint16 TEMP_SENSOR_get(void);
extern void TMP_SENSOR_Init(void);
extern void TMP_SENSOR_Update(void);

#endif /* TEMP_H_ */
