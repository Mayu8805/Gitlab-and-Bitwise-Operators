// #include <stdio.h>
#include "major1.h"

unsigned int endian(unsigned int input)
{
    // take input and break into bytes using logical and
    // divide input into its bytes B4-1
    int B4 = input & 255;
    int B3 = ((input >> 8) & 255);
    int B2 = ((input >> 16) & 255);
    int B1 = ((input >> 24) & 255);
    // move the bytes to their new positions, and add together
    // shifting the bytes by their new position
    B4 = B4 << 24;
    B3 = B3 << 16;
    B2 = B2 << 8;
    unsigned int output = B1 + B2 + B3 + B4;
    return output;
}