/*
* Blinking an LED
*/


#include <avr/io.h>
#include <util/delay.h>

#define var 1000 

char main (void) {

	/*
	* Set 5th bit of Register DDRB to 1 
	* to configure PB5 of the chip as output
	* PB5 equals ArduinoPin13
	* reference: https://www.arduino.cc/en/Hacking/PinMapping168
	*/
	DDRB |= (1<<PB5);

	/*
	* Loop to toggle 5th bit ot PORTB
	* ^= bitwise exclusive OR
	*/

	while (1) {
		PORTB ^= (1<<PB5);
		_delay_ms(var);
	}

return 1;
}
