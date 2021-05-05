/*
 * Motor.h
 *
 *  Created on: Apr 12, 2021
 *      Author: Yara Mohsen
 */

#ifndef MOTOR_H_
#define MOTOR_H_

#define MO_1  portD4
#define MO_2  portD5

typedef enum {
	MOTOR_OFF,
	MOTOR_ON

	}MOTOR_STATE_Type;

extern void Motor_Init(void);
extern void Motor_ON(void);
extern void Motor_OFF(void);
extern void MOTOR_Update(void);



#endif /* MOTOR_H_ */
