/*
 * Motor.c

 *
 *  Created on: Apr 12, 2021
 *      Author: Yara Mohsen
 */

#include "DIO.h"
#include "Motor.h"


static MOTOR_STATE_Type MOTOR_State= MOTOR_OFF;
void Motor_Init(void)
{

}

void Motor_ON(void)
{
	MOTOR_State= MOTOR_ON;


}

void Motor_OFF(void)
{
	MOTOR_State= MOTOR_OFF;


}


void MOTOR_Update(void)
{


	if(MOTOR_State==MOTOR_OFF)
	{
		DIO_Write_Channel(MO_1,LOW);
		DIO_Write_Channel(MO_2,LOW);
	}
	else if(MOTOR_State==MOTOR_ON)
		{
			DIO_Write_Channel(MO_1,HIGH);
			DIO_Write_Channel(MO_2,LOW);
		}

}

