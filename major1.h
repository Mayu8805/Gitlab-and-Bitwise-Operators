#include <stdio.h>
#ifndef MAJOR1_H
#define MAJOR1_H

// "each member is expected to add their own function prototypes" ~ instructions
// I'll just add placeholders for now I think


// just most likely that these are going to be implemented in each file ig
// the other devs can add there stuff in here when they are ready
int clz(unsigned int input_value);                     //CLZ Functionality - Nathanlie Ortega
unsigned int endian(unsigned int input);                                  // endian Functionality - Colten Mikulastik
unsigned rotate(unsigned int source, unsigned int shift); //rotate functionality - Igor Leeck
int parity(unsigned int input_value);

#endif // MAJOR1_H
