/*
 * LCD.c

 *
 *  Created on: Dec 25, 2020
 *      Author: yara
 */
#include "DIO_Reg.h"
#include "STD_Types.h"
#include "BIT_MATH.h"
#include"DIO.h"
#include"LCD.h"
/*
#define F_CPU 8000000
#include<util/delay.h>

static LCD_INTI_Type state_init=LCD_START;
static LCD_WRITE_Type state_write=LCD_WRITE_PART1;

void LCD_Init_update(void)
{


}
void LCD_Init(void)
{
//50ms OFFSET
	switch(state_init)
	{
	case LCD_START:
		LCD_WriteCommand(0x02);
		break;

	case SELECT_DATA:
	//1ms
		LCD_WriteCommand(0x28);
		break;

	case WRITE_ENABLE:
		//1ms
		LCD_WriteCommand(0x01);
		break;
	case LCD_ENABLE:
		//3ms

		LCD_WriteCommand(0x0C);
		break;
	case WRITE_DATA:
		//1ms

		LCD_WriteCommand(0x06);
		state_init=LCD_START;
		break;

	}
}

void LCD_WriteCommand(uint8 command)
{
	switch(state_write)
		{
	case LCD_WRITE_PART1:
	DIO_Write_Channel(RS,LOW);
	DIO_Write_Channel(D7,GET_BIT(command,7));
	DIO_Write_Channel(D6,GET_BIT(command,6));
	DIO_Write_Channel(D5,GET_BIT(command,5));
	DIO_Write_Channel(D4,GET_BIT(command,4));

	DIO_Write_Channel(En,HIGH);
	state_write=LCD_DISABLE1;
	break;

	case LCD_DISABLE1:

	DIO_Write_Channel(En,LOW);
	state_write=LCD_WRITE_PART2;
	break;

	case LCD_WRITE_PART2:

	DIO_Write_Channel(D7,GET_BIT(command,3));
	DIO_Write_Channel(D6,GET_BIT(command,2));
	DIO_Write_Channel(D5,GET_BIT(command,1));
	DIO_Write_Channel(D4,GET_BIT(command,0));

	DIO_Write_Channel(En,HIGH);
	state_write=LCD_DISABLE2;
	break;

	case LCD_DISABLE2:
	DIO_Write_Channel(En,LOW);
	state_init= state_init+1;
	state_write=LCD_WRITE_PART1;

	break;


}

void LCD_WriteData(uint8 data)
{
	switch(state_write)
			{
		case LCD_WRITE_PART1:
		DIO_Write_Channel(RS,HIGH);
		DIO_Write_Channel(D7,GET_BIT(command,7));
		DIO_Write_Channel(D6,GET_BIT(command,6));
		DIO_Write_Channel(D5,GET_BIT(command,5));
		DIO_Write_Channel(D4,GET_BIT(command,4));

		DIO_Write_Channel(En,HIGH);
		state_write=LCD_DISABLE1;
		break;

		case LCD_DISABLE1:

		DIO_Write_Channel(En,LOW);
		state_write=LCD_WRITE_PART2;
		break;

		case LCD_WRITE_PART2:

		DIO_Write_Channel(D7,GET_BIT(command,3));
		DIO_Write_Channel(D6,GET_BIT(command,2));
		DIO_Write_Channel(D5,GET_BIT(command,1));
		DIO_Write_Channel(D4,GET_BIT(command,0));

		DIO_Write_Channel(En,HIGH);
		state_write=LCD_DISABLE2;
		break;

		case LCD_DISABLE2:
		DIO_Write_Channel(En,LOW);
		state_write=LCD_WRITE_PART1;

		break;



}

void LCD_GoTo(uint8 x, uint8 y)
{
	if(0 == y)
	{
		if (x>=0 && x <=15)
		{
			LCD_WriteCommand(0x80 + x);
		}
	}
	else if (1 == y)
	{
		if (x>=0 && x <=15)
		{
			LCD_WriteCommand(0xC0 + x);
		}
	}
}

void LCD_voidClear(void)
{

	 	LCD_WriteCommand(0x01);

}


void LCD_WriteNumber16(uint16 num){


	LCD_WriteData((num%1000)/100+'0');
	LCD_WriteData((num%100)/10+'0');
	LCD_WriteData((num%10)+'0');

}


void LCD_WriteNumber64(uint64 num){


		if(num==0){
			LCD_WriteData('0');
		}

		else{

			uint8 i=0,j,arr[16]={0};

	while(num){

		arr[i]=((num%10)+'0');
		i++;
		num=num/10;

	}
	for(j=i;j>0;j--){

		LCD_WriteData(arr[j-1]);
	}
}


*/
