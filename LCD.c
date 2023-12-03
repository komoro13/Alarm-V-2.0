#include <xc.h>
#include "LCD.h"
#include "config.h"

#define EN RC7
#define RW RC6
#define RS RC5

void LCD_Write_String(char* Str)
{
  for(int i=0; Str[i]!='\0'; i++)
    LCD_write_char(Str[i]);
}
void LCD_Set_Cursor(unsigned char ROW, unsigned char COL)
{
  switch(ROW) 
  {
    case 2:
      LCD_command(0xC0 + COL-1);
      break;
    case 3:
      LCD_command(0x94 + COL-1);
      break;
    case 4:
      LCD_command(0xD4 + COL-1);
      break;
    // Case 1
    default:
      LCD_command(0x80 + COL-1);
  }
}


void LCD_command(unsigned char cmd)
{
    PORTB = cmd;
    RS = 0;
    EN = 1;
    __delay_ms(4);
    EN = 0;
    
}
void LCD_write_char(unsigned char ch)
{
    PORTA = (PORTA & 0x0F) | (ch & 0xF0);
            
    RS = 1;
    EN = 1;
    __delay_ms(1);
    EN = 0;
    
    PORTA = (PORTA & 0x0F) | (ch<<4);
    

    EN = 1;
    __delay_ms(1);
    EN = 0;
    
    __delay_ms(5);
          
}

void LCD_init() 
{
  
  __delay_ms(20); //delay for self-intialization
  	LCD_command (0x02);	// 4bit mode 
	LCD_command (0x28);	// Initialization of 16X2 LCD in 4bit mode 
	LCD_command (0x0C);	// Display ON Cursor OFF 
	LCD_command (0x06);	// Auto Increment cursor 
	LCD_command (0x01);	// Clear display 
	LCD_command (0x80);	// Cursor at home position 
}

