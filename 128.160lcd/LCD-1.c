#include "lcd_init.c"
#include "lcd.c"
sbit LED0=P0^0;
unsigned long i;
void main()
{
	LCD_Init();
	LCD_Fill(0,0,LCD_W,LCD_H,BLACK);
	LED0=0;
	i=LED0;
	while (1)
	{
		LCD_ShowIntNum(50,0,i,1,0xffff,0x0000,12);
	}
}