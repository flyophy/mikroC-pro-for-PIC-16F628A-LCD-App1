#line 1 "D:/TÜM YEDEKLERÝM/Elektronik-20191028T093703Z-001/Elektronik/WEB SÝTEM/GÝTHUB/LCD UYGULAMASI/mikroC KODU/LCD DENEME -1-.c"

sbit LCD_RS at RB2_bit;
sbit LCD_EN at RB3_bit;
sbit LCD_D4 at RB4_bit;
sbit LCD_D5 at RB5_bit;
sbit LCD_D6 at RB6_bit;
sbit LCD_D7 at RB7_bit;

sbit LCD_RS_Direction at TRISB2_bit;
sbit LCD_EN_Direction at TRISB3_bit;
sbit LCD_D4_Direction at TRISB4_bit;
sbit LCD_D5_Direction at TRISB5_bit;
sbit LCD_D6_Direction at TRISB6_bit;
sbit LCD_D7_Direction at TRISB7_bit;




void main()
{
 Lcd_Init();
 Lcd_Cmd(_Lcd_CLEAR);
 Lcd_Cmd(_Lcd_CURSOR_OFF);
 while(1)
 {
 Lcd_Out(1,1,"WELCOME");
 delay_ms(500);
 Lcd_Out(2,1,"Hoþgeldiniz");
 delay_ms(6000);
 Lcd_Cmd(_Lcd_CLEAR);
 Lcd_Out(1,1,"INSTAGRAM");
 delay_ms(1000);
 Lcd_Out(2,1,"Xxxxxxxxx");
 delay_ms(5000);
 Lcd_Cmd(_Lcd_CLEAR);
 Lcd_Out(1,1,"Facebook");
 Lcd_Out(2,1,"XxxxxXxxx");
 delay_ms(5000);
 Lcd_Cmd(_Lcd_CLEAR);
 }
}
