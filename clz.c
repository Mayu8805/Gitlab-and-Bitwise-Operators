/*

  Team Name: Team 8 - (SysForge)

  Member Functionality Role: Nathanlie Ortega

  Course: CSCE 3600.002
  
  clz.c - Count Leading Zeros implementation

 */

#include "major1.h"

int clz(unsigned int input_value)
{
    int count = 0;

    unsigned int mask = 1u << 31;       //This will start with most significant bit.
    
    
    while (mask != 0)                   //This is to check in each bit from left to right.
    {

        if (input_value & mask)         //This means that it has found the first '1' bit.
        {
            break;

        }
        count++;


        mask = mask >> 1;               //This will be shift the mask to check next bit.

    }
    
    return count;
}