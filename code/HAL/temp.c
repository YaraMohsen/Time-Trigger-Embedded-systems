/*
 * temp.c

 *
 *  Created on: Apr 12, 2021
 *      Author: Yara Mohsen
 */



#include "temp.h"
#include "ADC.h"


uint16 TEMP_SENSOR_Reading_Val = 0;
static uint16 TEMP_adc=0;

void TEMP_SENSOR_Init(void)
{

}

void TMP_SENSOR_Update(void){


		ADC_StartConversion(TEMP_CH);
		TEMP_adc=ADC_Read();

}


uint16 TEMP_SENSOR_get(void)
{
    TEMP_SENSOR_Reading_Val=((uint32)TEMP_adc*5000)/1024;
     return TEMP_adc;
}

