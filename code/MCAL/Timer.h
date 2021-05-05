/*
 * Timer.h

 *
 *  Created on: Mar 19, 2021
 *      Author: Yara Mohsen
 */

#ifndef TIMER_H_
#define TIMER_H_
#include "BIT_MATH.h"
#include "STD_Types.h"
typedef enum
{
	TIMER0_STOP=0,
	TIMER0_SCALER_1,
	TIMER0_SCALER_8,
	TIMER0_SCALER_64,
	TIMER0_SCALER_256,
	TIMER0_SCALER_1024,
	TIMER0_EXTENAL_FALLING,
	TIMER0_EXTENAL_RISING

}Timer0Scaler_type;

typedef enum
{
	TIMER0_NORMAL_MODE=0,
	TIMER0_PHASECORRECT_MODE,
	TIMER0_CTC_MODE,
	TIMER0_FASTPWM_MODE

}Timer0Mode_type;

typedef enum
{
	OC0_DISCONNECTED=0,
	OC0_TOGGLE,
	OC0_NON_INVERTING,
	OC0_INVERTING

}OC0Mode_type;

void Timer0_Init(Timer0Mode_type Mode,Timer0Scaler_type Scaler,OC0Mode_type OC_Mode);
void Timer0_OVF_InterruptEnbale (void);
void Timer0_OVF_InterruptDisable (void);
void Timer0_OC_InterruptEnbale (void);
void Timer0_OC_InterruptDisable (void);
void Timer0_OVF_SetCallBack (void(*LocalFptr)(void));
void Timer0_OC_SetCallBack (void(*LocalFptr)(void));








#endif /* TIMER_H_ */
