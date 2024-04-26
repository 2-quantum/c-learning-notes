#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int integer = 5;
    float flute = 3.009879;
    double dible = 45.90393795739573;
    char singlechar = 'a';
    char word[] = "apple";
    char arr[][9] = {"I am 1st","I am 2nd","I am 3rd","I am 4th"};

    printf("This is integer %d. \n", integer);
    printf("This is float %.2f. \n", flute);
    printf("This is double %1f. \n", dible);
    printf("This is single character %c. \n", singlechar);
    printf("This is word %s. \n", word);
    printf("This is at 1st position in array: %s. Technically its at 0th positin. \n", arr[0]);
    printf("This is at 2nd position in array: %s. Technically its at 1st positin. \n", arr[1]);
    printf("This is at 3rd position in array: %s. Technically its at 2nd positin. \n", arr[2]);
    printf("This is at 4th position in array: %s. Technically its at 3rd positin. \n", arr[3]);
    return 0;
}

//OUTPUT
/*
This is integer 5. 
This is float 3.01. 
This is double 45.903938.
This is single character a.
This is word apple.
This is at 1st position in array: I am 1st. Technically its at 0th positin.
This is at 2nd position in array: I am 2nd. Technically its at 1st positin.
This is at 3rd position in array: I am 3rd. Technically its at 2nd positin.
This is at 4th position in array: I am 4th. Technically its at 3rd positin.
*/