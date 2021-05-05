/*
 * Volt_H.c

 *
 *  Created on: Apr 12, 2021
 *      Author: Yara Mohsen
 */


#include "ADC.h"

#include "VOLT_H.h"
#include "DIO.h"



uint16 VOLT_SENSOR_Reading_Val = 0;
static uint16 adc=0;

void VOLT_SENSOR_Init(void)
{

}

void VOLT_SENSOR_Update(void){

DIO_Write_Channel(portC1,HIGH);
		ADC_StartConversion(VOLT_CH);
		adc=ADC_Read();
DIO_Write_Channel(portC1,LOW);


}


uint16 VOLT_SENSOR_get(void)
{
    VOLT_SENSOR_Reading_Val=((uint32)adc*5000)/1024;

     return adc;
}

