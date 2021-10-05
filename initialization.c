https://www.electronicwings.com/8051/lcd16x2-interfacing-in-4-bit-mode-with-8051

Programming LCD16x2 4-bit mode 
Initialization

1.Wait for 15ms, Power-on initialization time for LCD16x2.
2.Send 0x02 command which initializes LCD 16x2 in 4-bit mode.
3.Send 0x28 command which configures LCD in 2-line, 4-bit mode, and 5x8 dots.
4.Send any Display ON command (0x0E, 0x0C)
5.Send 0x06 command (increment cursor)
    
    
void LCD_Init (void)		/* LCD Initialize function */
{
	delay(20);		/* LCD Power ON Initialization time >15ms */
	LCD_Command (0x02);	/* 4bit mode */
	LCD_Command (0x28);	/* Initialization of 16X2 LCD in 4bit mode */
	LCD_Command (0x0C);	/* Display ON Cursor OFF */
	LCD_Command (0x06);	/* Auto Increment cursor */
	LCD_Command (0x01);	/* Clear display */
	LCD_Command (0x80);	/* Cursor at home position */
}
 

Now we successfully initialized LCD & it is ready to accept data in 4-bit mode to display.

To send command/data to 16x2 LCD we have to send a higher nibble followed by a lower nibble. 
As 16x2 LCD’s D4 - D7 pins are connected as data pins, we have to shift the lower nibble to the right by 4 before transmitting.
