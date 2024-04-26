#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num =1;
    char grade = 'A';
    double percent = 99.99;
    char string[] = "name";

    printf("num %p.\n",&num);
    printf("grade %p.\n",&grade);
    printf("percent %p.\n",&percent);
    printf("string %p.\n",&string);
}