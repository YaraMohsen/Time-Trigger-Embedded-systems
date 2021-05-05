/*
 * ADC.c
 *
 *  Created on: Apr 18, 2021
 *      Author: Yara Mohsen
 */


#include "ADC.h"
#include "VOLT_H.h"
#include "temp.h"



void ADC_Init(ADC_Vref_Type vref,ADC_Scaler_Type scaler)
{
	// VRES select
	switch(vref)
	{
		case REF_AREF:
		CLEAR_BIT(ADMUX,REFS0);
		CLEAR_BIT(ADMUX,REFS1);
		break;
		case REF_AVCC:
		SET_BIT(ADMUX,REFS0);
		CLEAR_BIT(ADMUX,REFS1);
		break;
		case REF_256V:
		SET_BIT(ADMUX,REFS0);
		SET_BIT(ADMUX,REFS1);
	}

	//pre-scaler select
	ADCSRA&=0xf8; // clear the first 3 bits
	ADCSRA|=scaler;

	//right adjust
	CLEAR_BIT(ADMUX,ADLAR);

	//ADC enable
	SET_BIT(ADCSRA,ADEN);
}


void ADC_StartConversion(ADC_Channel_Type ch)
{

	//channel select
	ADMUX&=0xE0; //0B11100000
	ADMUX|=ch;

	//start conversion
	SET_BIT(ADCSRA,ADSC);
}

uint16 ADC_Read(void)
{
	while(GET_BIT(ADCSRA,ADSC));
	return ADC;
}


