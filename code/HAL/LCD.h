/*
 * LCD.h

 *
 *  Created on: Dec 25, 2020
 *      Author: yara
 */



#ifndef LCD_H_
#define LCD_H_
/*
#define RS  portA1
#define En  portA2



#define D4  portA3
#define D5  portA4
#define D6  portA5
#define D7  portA6


typedef enum
{
E_OK,
E_NOK
}STD_RETURN_Type;

typedef enum
{
LCD_START,
SELECT_DATA,
WRITE_ENABLE,
LCD_ENABLE,
WRITE_DATA,
LCD_DISABLE
}LCD_INTI_Type;

typedef enum
{
LCD_WRITE_PART1,
LCD_DISABLE1,
LCD_WRITE_PART2,
LCD_DISABLE2
}LCD_WRITE_Type;

extern void LCD_Init(void);
extern void LCD_WriteCommand(uint8 command);
extern void LCD_WriteData(uint8 data);
extern void LCD_GoTo(uint8 x, uint8 y);
extern void LCD_voidClear(void);
extern void LCD_WriteNumber16(uint16 num);
extern void LCD_WriteNumber64(uint64 num);


*/
#endif /* LCD_H_ */
