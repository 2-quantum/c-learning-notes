#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double num1;
    double num2;
    printf("This is a simple sum calculator");
    printf("\n");
    printf("Enter your first number: ");
    scanf("%lf", &num1);
    printf("Enter your second number: ");
    scanf("%lf", &num2);
    printf("\n");
    printf("Your sum is %f.", num1 + num2);
    return 0;
}