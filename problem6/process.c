#include <stdio.h>

unsigned int number = 0;

void print20bitNumber(unsigned short signal)
{
    /*
     * Use high and low to create the 20 bit number and
     * store it in the "number" variable.
     * Then print it out as a desimal number.
     * Keep in mind that this function is called
     * twice for each number and you must only print
     * a complete 20 bit number.
     *
     * high 16 bit:
     * 1000-0000-HHHH-HHHH
     *
     * low 16 bit:
     * 0100-LLLL-LLLL-LLLL
     *
     * Answer, 32 bit:
     * 0000-0000-0000-HHHH-HHHH-LLLL-LLLL-LLLL
     */

    unsigned short command = signal & 0xF000;
    if (command == 0x8000) {
        // HIGH
	number = (signal & 0x00FF) << 12;
    } else if (command == 0x4000) {
        // LOW
	number = (signal & 0x0FFF) | number;
    	printf("%d\n", number);
	number = 0;
    }
}
