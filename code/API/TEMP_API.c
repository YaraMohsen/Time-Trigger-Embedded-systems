/*
 * TEMP_API.c
 *
 *  Created on: Apr 18, 2021
 *      Author: Yara Mohsen
 */


/*
 * API.c

 *
 *  Created on: Apr 14, 2021
 *      Author: Yara Mohsen
 */

#include "TEMP_API.h"
#include "STD_Types.h"

#include "temp.h"
#include "Motor.h"
#include "led.h"
#include "UART_H.h"


uint16 TEMP_Data =0;

uint8 Array_TEMP_High[]={"tepm high - "};
uint8 Array_TEMP_LOW[]={"tepm LOW - "};

void TEMP_API_Update(void)
{


	TEMP_Data=TEMP_SENSOR_get();
		//DIO_Write_Channel(portC1,LOW);

       if(TEMP_Data>500)
         {
    	   	 LED_Control(LED_STATE_ON,TEMP_LED);
             Motor_ON();
             UART_SendString(Array_TEMP_High,API_TEMP);
		 }
		 else
		 {
			 LED_Control(LED_STATE_OFF,TEMP_LED);
             Motor_OFF();
             UART_SendString(Array_TEMP_LOW,API_TEMP);

            }




}
