/*
 * OS.c

 *
 *  Created on: Apr 14, 2021
 *      Author: Yara Mohsen
 */
#include "STD_Types.h"
#include "OS.h"
#include "Battery_API.h"
#include "TEMP_API.h"
#include "VOLT_H.h"
#include "temp.h"
#include "led.h"
#include "Motor.h"
#include "UART_H.h"
#include "test.h"
extern uint16 counter;

//if you want to add tasks edit the max number of tasks "SCH_MAX_TASKS"

TASK_t SCH_Task[SCH_MAX_TASKS]={{VOLT_SENSOR_Update,1000},
                                {Battery_API_Update,1000},
                                {TMP_SENSOR_Update,1000},
                                {TEMP_API_Update,1000},
                                {LED_Update,500},
                                {MOTOR_Update,500},
                                {UART_SendString_update,1}};



void SCH_Init(void){

}


void SCH_Update(void){
     uint8 Id;

      for(Id = 0; Id < SCH_MAX_TASKS; Id++){
        	if(counter%SCH_Task[Id].Period==0  )
        			{

        		        SCH_Task[Id].pTask();


        			}
                            }



      if(counter==60000)
      {
    	  counter=0;
      }

     }

