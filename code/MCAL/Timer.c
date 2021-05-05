/*
 * Timer.c

 *
 *  Created on: Mar 19, 2021
 *      Author: Yara Mohsen
 */
#include "DIO_Reg.h"
#include"Timer.h"






void Timer0_Init(Timer0Mode_type Mode,Timer0Scaler_type Scaler,OC0Mode_type OC_Mode)
{

	switch (Mode)
	{
		case TIMER0_NORMAL_MODE : CLEAR_BIT(TCCR0,WGM00);
								  CLEAR_BIT(TCCR0,WGM01);
								  break;

		case TIMER0_PHASECORRECT_MODE : SET_BIT(TCCR0,WGM00);
										CLEAR_BIT(TCCR0,WGM01);
										break;

		case TIMER0_CTC_MODE : CLEAR_BIT(TCCR0,WGM00);
							   SET_BIT(TCCR0,WGM01);
							   break;

		case TIMER0_FASTPWM_MODE :  SET_BIT(TCCR0,WGM00);
									SET_BIT(TCCR0,WGM01);
									break;

	}

	switch (OC_Mode)
	{
		case OC0_DISCONNECTED : CLEAR_BIT(TCCR0,COM00);
								CLEAR_BIT(TCCR0,COM01);
								break;

		case OC0_TOGGLE :  SET_BIT(TCCR0,COM00);
						   CLEAR_BIT(TCCR0,COM01);
						   break;

		case OC0_NON_INVERTING : CLEAR_BIT(TCCR0,COM00);
								 SET_BIT(TCCR0,COM01);
								 break;

		case OC0_INVERTING :  SET_BIT(TCCR0,COM00);
							  SET_BIT(TCCR0,COM01);
							  break;

	}

	TCCR0 &= 0b11111000;
	TCCR0 |= Scaler;

}

void Timer0_OVF_InterruptEnbale (void)
{
	SET_BIT(TIMSK,TOIE0);
}
void Timer0_OVF_InterruptDisable (void)
{
	CLEAR_BIT(TIMSK,TOIE0);
}

void Timer0_OC_InterruptEnbale (void)
{
	SET_BIT(TIMSK,OCIE0);
}
void Timer0_OC_InterruptDisable (void)
{
	CLEAR_BIT(TIMSK,OCIE0);
}
//////////////////////////////////////////


