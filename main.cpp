#define F_CPU 16000000UL

#include <avr/io.h>

#include "logic_&_numerical_functions.h"
#include "LCD_Drive.cpp"
int main(void)
{
	DDRD=0xff;
	
    
	
    
		initial_LCD();
		//char DATA[] ="Mahmoud_1312";
		//send_DATA(DATA);
    send_number(2002);
}

