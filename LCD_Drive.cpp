#include <avr/io.h>
#include<util/delay.h>
#include "LCD_Drive.h"
#include "logic_&_numerical_functions.cpp"
void initial_LCD()
{	
	send_command(func_set);
	_delay_ms(0.1);
	send_command(display_control);
	_delay_ms(0.1);
	send_command(clear);
	_delay_ms(2);

send_command(entry_mode);
_delay_ms(0.1);

}
void send_command(uint8_t command)
{uint8_t intial_state =0x00;
PORTD=intial_state;	
uint8_t enable=0x40;
uint8_t disable=0xbf;
	PORTD=(intial_state | MS4B(command));
 PORTD=(intial_state | LS4B(command)); 
 PORTD|= enable ;
 _delay_ms(5);
 PORTD&=disable;
 _delay_ms(1);
}
/*void send_DATA(char *DATA)
{uint8_t intial_state_data =0x20;
	uint8_t enable=0x40;
	uint8_t disable=0xbf;
for(int i=0;int(DATA[i])!=int("\0");i++)
{
	uint8_t converted_DATA=int(DATA[i]);
	PORTD=intial_state_data;
	PORTD=(intial_state_data | MS4B(converted_DATA));
	PORTD=(intial_state_data | LS4B(converted_DATA));
 PORTD|= enable ;
 _delay_ms(5);
 PORTD&=disable;
 _delay_ms(1);
}*/
void send_number(int num)
{uint8_t intial_state_data =0x20;
	uint8_t enable=0x40;
	uint8_t disable=0xbf;
	uint8_t mod=0;
	PORTD=intial_state_data;
for (int j=0;num!=0;j++)
{
	mod=num%10;
	
	PORTD=(intial_state_data | MS4B(mod+48));
	PORTD=(intial_state_data | LS4B(mod+48));
	PORTD|= enable ;
	_delay_ms(5);
	PORTD&=disable;
	_delay_ms(1);
	num/=10;
}

	
	




}



