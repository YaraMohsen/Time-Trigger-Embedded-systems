/*
 * OS.h
 *
 *  Created on: Apr 14, 2021
 *      Author: Yara Mohsen
 */

#ifndef OS_H_
#define OS_H_


#define SCH_MAX_TASKS 7
/******************************************************************************/

typedef struct{
        void (*pTask)(void);
        uint32 Period;
}TASK_t;



/******************************************************************************/
void SCH_Init(void);
void SCH_Update(void);

/******************************************************************************/

#endif /* OS_H_ */
