/*
 * UART_H.c

 *
 *  Created on: Apr 22, 2021
 *      Author: Yara Mohsen
 */


#include "UART_H.h"
#include "UART.h"


static 	uint8 index =0;
static uint8 *Str_temp=" ";
static uint8 *Str_battery=" ";
static uint8 flag_str=0;



void UART_SendString_update(void)
{

	if(flag_str==0){

		if(Str_temp[index] == '\0'){
			flag_str=1;
		index=0;
	}

	else{
		UART_SEND_BYTE(Str_temp[index]);
		index++;
	}
}
else if(flag_str==1){
	if(Str_battery[index] == '\0'){
		flag_str=2;
		index=0;

	}

	else{
		UART_SEND_BYTE(Str_battery[index]);
				index++;
	}
}

}

void UART_SendString(const uint8 *Str,API_STATE_t API_state)
{
	flag_str=0;
switch(API_state)
{
case API_TEMP:
	Str_temp=Str;
	break;
case API_BATTERY:
	Str_battery=Str;
	break;


}


}
