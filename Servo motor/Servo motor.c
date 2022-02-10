#define F_CPU 15745600
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <servo.h>
#include <lcd.h>

//Main function
int main(void)
{
 unsigned char i = 0;
 cli();
 lcd_port_init();
 servo_port_init();
 sei();
 	
 while(1)
 {
	lcd_cursor(1, 1);
	lcd_string("0 degrees");
	servo_1(0);
	_delay_ms(2000);
	lcd_init();
	lcd_cursor(1, 1);
	lcd_string("90 degrees");
	servo_1(90);
	_delay_ms(2000);
	lcd_init();
	lcd_cursor(1, 1);
	lcd_string("180 degrees");
	servo_1(180);
	_delay_ms(2000);
	lcd_init();
	lcd_cursor(1, 1);
	lcd_string("135 degrees");
	servo_1(135);
	lcd_init();
	lcd_cursor(1, 1);
	lcd_string("90 degrees");
	servo_1(90);
	lcd_init();
	lcd_cursor("45 degrees");
	servo_1(45);
	lcd_init();
 } 
}