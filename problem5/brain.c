#include <stdio.h>
#include "commands.h"

int i = 1;
void brain(unsigned short command)
{
    /*
     * Check the bits in the command parameter
     * and call the correct command.
     *
     * 1000-XXXX-XXXX-XXXX
     * messageFound();
     *
     * 0100-CCCC-CCCC-CCCC
     * drillDown(C);
     *
     * 0010-DDDD-DDDD-DDDD
     * drillLeft(D);
     *
     * 0001-DDDD-DDDD-DDDD
     * drillRight(D);
     */

    /*
     * Use the printf command to debug your commands
     * Make sure that you have no printf lines in your
     * final version.
     */

    // if you want to count calls to brain
    // printf("%u\n", i);
    // i++;
    unsigned short function = command & 0xF000;
    if (function == 0x8000) {
        messageFound();
    } else if (function == 0x4000) {
	unsigned int C = command & 0x0FFF;
	drillDown(C);
    } else if (function == 0x2000) {
	unsigned int D = command & 0x0FFF;
	drillLeft(D);
    } else if (function == 0x1000) {
	unsigned int D = command & 0x0FFF;
	drillRight(D);
	// if you want to count drillRight calls
	// printf("%u\n", i);
	// i++;
    }
}
