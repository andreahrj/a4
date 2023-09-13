#include <stdio.h>

unsigned int number = 0;
unsigned short high_signal = 0x0000;
unsigned short low_signal = 0x0000;

void print20bitNumber(unsigned short signal)
{

    unsigned short top_bits = (signal & 0xF000);

    if (top_bits == 0x8000) {
        high_signal = signal & 0x0FFF;
    } else if (top_bits == 0x4000) {
        low_signal = signal & 0x0FFF;
    }

    if (high_signal && low_signal) {
        number = ((unsigned int)high_signal << 8) | low_signal;
        printf("%u\n", number);
        number = 0;
        high_signal = 0x0000;
        low_signal = 0x0000;

    }
}
