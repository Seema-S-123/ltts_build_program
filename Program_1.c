//
//  main.c
//  C_Program_1

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int temperature;
    printf("Hello, World!\n");
    //printf("Enter the temperature in Farenheit: ");
    //scanf("%d", &temperature);
    temperature = 80;
    
    // Freezing if temperature is less than or equal to 0
    if (temperature <= 0) {
        printf("Freezing...Temperature of %d Farenheit. \n", temperature);
    }
    
    if (temperature >=80 ) {
        printf("Summer time...Temperature is %d Farenheit.\n", temperature);
    } else 
    
    {
         printf("Winter/Spring/Fall ...Temperature is %d Farenheit.\n", temperature);
    }
    return 0;
}
