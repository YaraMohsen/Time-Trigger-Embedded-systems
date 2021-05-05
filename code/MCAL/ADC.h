/*
 * ADC.h
 *
 *  Created on: Apr 18, 2021
 *      Author: Yara Mohsen
 */

#ifndef ADC_H_
#define ADC_H_

#include "DIO_Reg.h"
#include "BIT_MATH.h"
#include "Std_Types.h"

typedef enum
{
	REF_AREF,
	REF_AVCC,
	REF_256V
}ADC_Vref_Type;

typedef enum
 {
	SCALER_2=1,
	SCALER_4,
	SCALER_8,
	SCALER_16,
	SCALER_32,
	SCALER_64,
	SCALER_128
}ADC_Scaler_Type;

typedef enum
{
	CH_0,
	CH_1

}ADC_Channel_Type;

typedef enum
{
	ON_K,
	OK


}ADC_FLAG_Type;

typedef enum
{
	ONT_ACTIVE,
	START,
	READ


}ADC_RUN_Type;



void ADC_Init(ADC_Vref_Type vref,ADC_Scaler_Type scaler);
//void ADC_Enable(void);

void ADC_StartConversion(ADC_Channel_Type ch);
uint16 ADC_Read(void);
Bool_Type ADC_ReadChecking(uint16* padc);



#endif /* ADC_H_ */
