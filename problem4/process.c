#include "main.h"

void processMessage(unsigned int data)
{
    const unsigned int letter = data;
    const unsigned int a = (0xFF000000 & letter) >> (3 * 8);
    const unsigned int b = (0x00FF0000 & letter) >> (2 * 8);
    const unsigned int c = (0x0000FF00 & letter) >> (1 * 8);
    const unsigned int d = (0x000000FF & letter) >> (0 * 8);

    printLetter(a);
    printLetter(b);
    printLetter(c);
    printLetter(d);
}
