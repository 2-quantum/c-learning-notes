#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    printf("Enter your grade from A - F in capital: ");
    scanf("%c", &grade);
    switch (grade)
    {
    case 'A':
        printf("You did very well.\n");
        break;
    case 'B':
        printf("You did good.\n");
        break;
    case 'C':
        printf("You can improve.\n");
        break;
    case 'D':
        printf("You can do better.\n");
        break;
    case 'E':
        printf("You should do better.\n");
        break;
    case 'F':
        printf("You failed.\n");
        break;
    default:
        printf("Invalid input.\n");
        break;
    }
}