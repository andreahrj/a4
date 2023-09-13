#include <stdio.h>
#include "commands.h"

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
    printf("0x%x\n", command);
}
