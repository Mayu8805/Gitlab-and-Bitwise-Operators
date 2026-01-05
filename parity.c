/*

 Team Name: Team 8 - (SysForge)

 Members Names: Colten Mikulastik, Mayuresh Keshav Kamble, Nathanlie Ortega, and Igor Leeck
 
 Member Functionality Role: Mayuresh Keshav Kamble

 Course: CSCE 3600.002

 parity.c - Function to calculate parity of a 32-bit number

 */

#include "major1.h"

/*
 * Function: parity
 * Purpose: Calculate the parity of a 32-bit unsigned integer
 * Parity is 0 if the number of set bits (1s) is even, 1 if odd
 * 
 * Parameters:
 *   input_value - A 32-bit unsigned integer to check parity
 * 
 * Returns:
 *   0 if parity is even (even number of 1s)
 *   1 if parity is odd (odd number of 1s)
 */
int parity(unsigned int input_value)
{
    int count = 0;
    
    // Count the number of set bits (1s) in the input value
    while (input_value > 0)
    {
        count += input_value & 1;    // Check if the least significant bit is 1
        input_value >>= 1;            // Right shift to check the next bit
    }
    
    // Return 1 if count is odd, 0 if count is even
    return count % 2;
}