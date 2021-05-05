/*
 * UART.c
 *
 *  Created on: Apr 22, 2021
 *      Author: Yara Mohsen
 */


#include "UART.h"




void UART_INIT(void)
{

		SET_BIT(UCSRB,TXEN);
		SET_BIT(UCSRB,RXEN);
		UBRRL=51;
}

void UART_SEND_BYTE(uint8 data)
{
	//while(!GET_BIT(UCSRA,UDRE));
	UDR=data;
}




