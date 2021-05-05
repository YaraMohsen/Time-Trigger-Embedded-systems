/*
 * UART_H.h

 *
 *  Created on: Apr 22, 2021
 *      Author: Yara Mohsen
 */

#ifndef UART_H_H_
#define UART_H_H_

#include "STD_Types.h"
typedef enum{
        API_TEMP = 0,
        API_BATTERY
}API_STATE_t;

extern void UART_SendString(const uint8 *Str,API_STATE_t API_state);
extern void UART_SendString_update(void);


#endif /* UART_H_H_ */
