//This program will ask users to input values for temperature 
//in degrees celsius, and then it converts to degrees fahrenheit
#include <stdio.h>
main()
{
    float dCel, dFah;
    char choice;
    
    do {
        printf("What is the value of the measured temperature? \n\n");
        scanf(" %f", &dCel);

        dFah = ((dCel * 1.8) + 32);
        printf("The temp in Fahrenheit is equal to %fdegrees Fahrenheit\n\n", dFah);
        printf("Do you want to enter another value for temperature? (Y/N)\n\n");
        scanf(" %c", &choice);
        //if the user enters any other value apart from n or N, it will continue to run
        
    }
    while (choice != 'N' && choice != 'n');
    
    return 0;
}
        
    
        