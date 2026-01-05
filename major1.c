/* 

 Team Name: Team 8 - (SysForge)

 Members Names: Colten Mikulastik, Mayuresh Keshav Kamble, Nathanlie Ortega, and Igor Leeck
 
 Member Functionality Role: Nathanlie Ortega

 Course: CSCE 3600.002

 major1.c - The main program for bitwise operations menu program

 */

#include "major1.h"

int main() 
{
    int menu_option;
    unsigned int input_value, rotate_amount;
    long long temp_input;
    int operation_result;

    while (1) 
    {
        //The Menu Selection Display 
        printf("\nEnter the menu option for the operation to perform:\n");
        printf("(1) Count Leading Zeroes\n");
        printf("(2) Endian Swap\n");
        printf("(3) Rotate-right\n");
        printf("(4) Parity\n");
        printf("(5) EXIT\n");
        printf("--> ");
        
        scanf("%d", &menu_option);                      //This will read menu selection
         
        if (menu_option < 1 || menu_option > 5)         //A validate menu choice if outside 1-5 range
        {
            printf("Error: Invalid option. Please try again.\n");
            continue;
        }
        

        if (menu_option == 5)                           //The option 5 is termination if it is selected
        {
            printf("Program terminating. Goodbye...\n");
            break;
        }

        
        //This will prompt and read integer operand until valid
    do {
        
        printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
        scanf("%lld", &temp_input);
        
        if (temp_input >= 1 && temp_input <= 4294967295) 
        {
            input_value = (unsigned int)temp_input;
        }


    } while (temp_input < 1 || temp_input > 4294967295);
        


        //Menu selection options using switch
        switch (menu_option) 
        {
            case 1:                 //Case 1 for CLZ - Nathanlie Ortega

                operation_result = clz(input_value);

                printf("The number of leading zeroes in %u is %d\n", input_value, operation_result);
                break;

            case 2:                 //Case 2 for endian - Colten Mikulastik
                printf("Endian swap of %u gives %u\n", input_value, endian(input_value));
                break;

            case 3:                 //Case 3 for rotate - Igor Leeck

                printf("Enter the number of positions to rotate-right the input (between 0 and 31, inclusively): ");
                scanf("%u", &rotate_amount);

                //Todo: Add function for rotating in right call in this line
                printf("%u rotated by %u position gives: %u\n", input_value, rotate_amount, rotate(input_value, rotate_amount));
                break;

            case 4:                 //Case 4 for parity - Mayuresh Kamble

                //Todo: Add function for parity call in this line          
                operation_result = parity(input_value);

                printf("Parity of %u is %d\n", input_value, operation_result);
                break;
        }
    }
    
    return 0;
}
