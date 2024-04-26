#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float num1 = 3.333;
    float num2 = 3.666;
    float num3 = 4;
    float num4 = 3;
    float num5 = 36;

    printf("The value of 4^3 is %f.\n", pow(num3, num4));
    printf("The square root of 36 is %f.\n", sqrt(num5));
    printf("The ceiling of 3.333 is %f.\n", ceil(num1));
    printf("The floor of 3.666 is %f.\n", floor(num2));
    return 0;
}

// OUTPUT
/*
The value of 4^3 is 64.000000.                                                                 
The square root of 36 is 6.000000.                                                             
The ceiling of 3.333 is 4.000000.                                                              
The floor of 3.666 is 3.000000.
*/