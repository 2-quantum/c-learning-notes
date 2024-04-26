#include <stdio.h>
#include <stdlib.h>

void large(double num1, double num2, double num3);

int main()
{
    double num1;
    double num2;
    double num3;
    printf("Enter the 1st number: ");
    scanf("%lf", &num1);
    printf("Enter the 2nd number: ");
    scanf("%lf", &num2);
    printf("Enter the 3rd number: ");
    scanf("%lf", &num3);
    large(num1, num2, num3);
    return 0;
}

void large(double num1, double num2, double num3)
{
    if (num1 > num2 && num1 > num3)
    {
        printf("%lf is the largest.\n", num1);
    }else if (num2 > num1 && num2 > num3)
    {
        printf("%lf is the largest.\n", num2);
    }else if (num3 > num1 && num3 > num2)
    {
        printf("%lf is the largest.\n", num3);
    }else if (num1 > num2 && num1 == num3)
    {
        printf("%lf is the largest. And 1st and 3rd numbers are equal.\n", num1);
    }else if (num1 > num3 && num1 == num2)
    {
        printf("%lf is the largest. And 1st and 2nd numbers are equal.\n", num1);
    }else if (num2 > num1 && num2 == num3)
    {
        printf("%lf is the largest. And 2nd and 3rd numbers are equal.\n", num2);
    }else if (num1 == num2 && num2 == num3)
    {
        printf("All three numbers are equal.\n");
    }else
    {
        printf("Plese verify your input.\n");
    }
}