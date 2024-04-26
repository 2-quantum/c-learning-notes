#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cube(double input);

int main()
{
    double input;
    printf("Enter a number to cube: ");
    scanf("%lf", &input);
    printf("Answer: %f" , cube(input));
    return 0;
}

double cube(double input)
{
    double result = input * input * input;
    return result;
}