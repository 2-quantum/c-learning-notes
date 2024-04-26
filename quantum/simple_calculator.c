#include <stdio.h>
#include <stdlib.h>

void sum(double num1, double num2);
void subtract(double num1, double num2);
void multiply(double num1, double num2);
void divide(double num1, double num2);

int main()
{
    double num1;
    double num2;
    int operation;
    printf("Select the operation you want to perform by writing the numbers from 1 to 4 respectively.\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your operation (Range 1-4): ");
    scanf("%d", &operation);
    if (operation >= 1 && operation <= 4)
    {
        printf("Enter the first number: ");
        scanf("%lf", &num1);
        printf("Enter the second number: ");
        scanf("%lf", &num2);
        if (operation == 1)
        {
            sum(num1, num2);
        }
        else if (operation == 2)
        {
            subtract(num1, num2);
        }
        else if (operation == 3)
        {
            multiply(num1, num2);
        }
        else if (operation == 4)
        {
            divide(num1, num2);
        }
    }
    else
    {
        printf("Please enter a valid input.\n");
    }
    return 0;
}

void sum(double num1, double num2)
{
    printf("The sum of both number is %lf.\n", num1 + num2);
}
void subtract(double num1, double num2)
{
    if (num1 > num2)
    {
        printf("The subtraction of both the number is %lf.\n", num1 - num2);
    }
    else if (num1 < num2)
    {
        printf("The subtraction of both the number is %lf.\n", num2 - num1);
    }
    else if (num1 = num2)
    {
        printf("The subtraction of both the number is 0.\n");
    }
    else
    {
        printf("Your input is invalid");
    }
}
void multiply(double num1, double num2)
{
    printf("Your product is %lf.\n", num1 * num2);
}
void divide(double num1, double num2)
{
    if (num1 > num2)
    {
        printf("The quotient is %lf.\n", num1 / num2);
    }
    else if (num1 < num2)
    {
        printf("The quotient is %lf.\n", num2 / num1);
    }
    else if (num1 = num2)
    {
        printf("The quotient is 1.\n");
    }
    else
    {
        printf("Your input is invalid");
    }
}