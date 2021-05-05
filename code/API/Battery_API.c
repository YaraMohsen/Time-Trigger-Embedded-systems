/*
 * Battery_API.c
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


#include "STD_Types.h"
#include "Battery_API.h"
#include "VOLT_H.h"
#include "led.h"

#include "UART_H.h"

uint16 Read_Data =0;

uint8 Array_BATTERY_High[]={"bat high - "};
uint8 Array_BATTERY_LOW[]={"bat low - "};

void Battery_API_Update(void)
{
	//DIO_ToggelPin(portC1);

    Read_Data= VOLT_SENSOR_get();
    //LCD_WriteNumber64(Read_Data);

      if (Read_Data>500)
      {
		LED_Control(LED_STATE_OFF,VOLT_LED);
		UART_SendString(Array_BATTERY_High,API_BATTERY);


      }
      else
      {
  		LED_Control(LED_STATE_ON,VOLT_LED);
  		UART_SendString(Array_BATTERY_LOW,API_BATTERY);

      }



	}





