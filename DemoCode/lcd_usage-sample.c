/* COMP2215: Task 02---MODEL ANSWER */
/* For La Fortuna board.            */


#include <avr/io.h>
#include "lcd/lcd.h"
#include <util/delay.h>


#define BUFFSIZE 256

void init(void);

void main(void) {
    init();
    display_string("A B C D E F G H I J K L M\n");
    display_string("N O P Q R S T U V W X Y Z\n");
    display_string("a b c d e f g h i j k l m\n");
    display_string("n o p q r s t u v w x y z\n");
    display_string("0 1 2 3 4 5 6 7 8 9\n");
    display_string("HELLO WORLD!\n");
	//for (;;) {
	//	_delay_ms(100);
	//	display_string("Hello World!\n");
	//}
}


void init(void) {
    /* 8MHz clock, no prescaling (DS, p. 48) */
    CLKPR = (1 << CLKPCE);
    CLKPR = 0;

    init_lcd();
}
