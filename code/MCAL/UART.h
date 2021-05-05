/*
 * UART.h
 *
 *  Created on: Apr 22, 2021
 *      Author: Yara Mohsen
 */

#ifndef UART_H_
#define UART_H_


#include "STD_Types.h"
#include "BIT_MATH.h"
#include "DIO_Reg.h"



extern void UART_INIT(void);
extern void UART_SEND_BYTE(uint8 data);
extern uint8 UART_RECIEVE_BYTE(void);


#endif /* UART_H_ */
