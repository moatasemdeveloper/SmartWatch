#include "Led.h"
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

//this Led Driver to init led and toggle led
LED::LED()
{
	DDRB = 0xff;
	DDRA=0xff;
	PORTB = 0x00;
	PORTA=0x00;
}
void LED::LED_toggle()
{
	_delay_ms(500);
	PORTB = ~PORTB;
	_delay_ms(500);
	PORTA = ~PORTA;
        
}
