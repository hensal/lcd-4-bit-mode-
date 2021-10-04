void LCD_Init()
{
    LCD_Port = 0;         /*PORT as Output Port*/
    MSdelay(15);          /* 15 ms, Power-On delay*/
    LCD_Command(0x02);    /*send for initialization of LCD with nibble method */
    LCD_Command(0x28);    /*use 2 line and initialize 5*7 matrix in (4-bit mode)*/
    LCD_Command(0x01);    /*clear display screen*/
    LCD_Command(0x0c);    /*display on cursor off*/
    LCD_Command(0x06);    /*increment cursor (shift cursor to right)*/	
}   
