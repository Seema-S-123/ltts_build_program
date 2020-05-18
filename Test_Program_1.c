

//  main.c

//  C_Program_1


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "CUnit/Basic.h"
#include "CUnit/CUnit.h"

enum weather_code {Winter_subzero = 1, Winter_Spring_fall = 2, Summer =3} ;

int basic_weather(int temperature)
{
    enum weather_code current_weather;
     // Freezing if temperature is less than or equal to 0

    if (temperature <= 0) 
    {

        printf("Freezing...Temperature of %d Farenheit. \n", temperature);
        current_weather = Winter_subzero;
      }
    
    if (temperature >=80 )
    {

        printf("Summer time...Temperature is %d Farenheit.\n", temperature);
        current_weather = Summer;
    } else 

    {
         printf("Winter/Spring/Fall ...Temperature is %d Farenheit.\n", temperature);
         current_weather = Winter_Spring_fall;
    }


}


void testbasic_weather(void)
{

CU_ASSERT ( 1 == basic_weather(0));
CU_ASSERT ( 3 == basic_weather(100));
CU_ASSERT ( 2 == basic_weather(60));


}

/*int main(int argc, const char * argv[]) {

    int temperature;
    
    enum weather_code manage_thermostat_code;
    printf("Hello, World!\n");
    //printf("Enter the temperature in Farenheit: ");
    //scanf("%d", &temperature);

    //Current temperature
    temperature = 80;
    manage_thermostat_code = basic_weather(temperature);
    printf ("%d", manage_thermostat_code);
    return 0;
} */


int main() {
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("TestSuite", 0, 0);

    CU_add_test(suite, "Test_Suite_1", testbasic_weather);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}

