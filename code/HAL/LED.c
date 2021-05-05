/*
 * LED.c


 *
 *  Created on: Apr 12, 2021
 *      Author: Yara Mohsen
 */


#include"led.h"
#include "STD_Types.h"


static LED_STATE_t led_update[2];


void LED_Init(void)
{

	DIO_Write_Channel(VOLT_LED,LOW);
	DIO_Write_Channel(TEMP_LED,LOW);

}

void LED_Control(LED_STATE_t STATE,DIO_ENUM_CH ID)
{



	switch(ID){
	case portC0:
		led_update[0]=STATE;
		break;

	case portC1:
		led_update[1]=STATE;
			break;
	}
}

void LED_Update(void)
{uint8 led_index;

for(led_index=0;led_index<2;led_index++){
	if(led_update[led_index]== LED_STATE_ON)
	{
		DIO_Write_Channel((portC0+led_index),HIGH);
	}
	else
	{
		DIO_Write_Channel((portC0+led_index),LOW);
	}
}
}
