/*
 * main.c

 *
 *  Created on: Apr 12, 2021
 *      Author: Yara Mohsen
 */

#include "DIO_Reg.h"
#include "STD_Types.h"
#include "BIT_MATH.h"
#include "DIO.h"
#include "Timer.h"
#include "OS.h"
#include "ADC.h"
#include "UART.h"

//#include "LCD.h"

#define F_CPU 8000000

#include<util/delay.h>

uint8 counter_os=0;
uint16 counter=0;
uint8 active_flag=0;

uint16 adc_read=0;

int main()
{
	DIO_Init();
	ADC_Init(REF_AVCC,SCALER_64);
	UART_INIT();
	//LCD_Init();

	Timer0_Init(TIMER0_NORMAL_MODE,TIMER0_SCALER_8,OC0_DISCONNECTED);
	LED_Init();
	sei();

	//TMP_SENSOR_Init();
	//VOLT_SENSOR_Init();

	Timer0_OVF_InterruptEnbale();
	TCNT0=6;
	DIO_Write_Channel(portC1,LOW);
	while(1)
	{

if(active_flag==1)
  {

    SCH_Update();
	//DIO_ToggelPin(portC1);
	active_flag=0;

	}

}

return 0;
}


ISR(TIMER0_OVF_vect)
{
	counter_os++;
	TCNT0=6;

	if(counter_os==4){

		counter++;
		counter_os=0;

		active_flag=1;
	}

}
