/*
 * led.h

 *
 *  Created on: Apr 12, 2021
 *      Author: Yara Mohsen
 */

#ifndef LED_H_
#define LED_H_

#include "DIO.h"

#define VOLT_LED portC0
#define TEMP_LED portC1


typedef enum{
        LED_STATE_OFF = 0,
        LED_STATE_ON
}LED_STATE_t;


extern void LED_Init(void);
extern void LED_Control(LED_STATE_t STATE,DIO_ENUM_CH ID);
extern void LED_Update(void);

#endif /* LED_H_ */
