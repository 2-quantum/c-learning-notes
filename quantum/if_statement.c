#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    if (num1 > num2)
    {
        printf("%f is larger than %f.\n", num1, num2);
        printf("\n");
        printf("               OR\n");
        printf("\n");
        printf("First number is larger than second.");
    }
    else if (num1 < num2)
    {
        printf("%f is larger than %f.\n", num2, num1);
        printf("\n");
        printf("               OR\n");
        printf("\n");
        printf("Second number is larger than first.");
    }
    else if (num1 = num2)
    {
        printf("Both are equal.\n");
    }
    else
    {
        printf("Your input is invalid.\n");
    }

    return 0;
}