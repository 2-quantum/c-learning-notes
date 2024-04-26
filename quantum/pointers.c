#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 1;
    int * pnum = &num;
    char grade = 'A';
    char * pgrade = &grade;
    double percent = 99.99;
    double * ppercent = &percent;
    char string[]= "name";
    char * pstring = string;

    printf("%p %p %p %p\n", &num,&grade,&percent,string);

    printf("num: %p \ngrade: %p \npercent: %p \nstring: %p\n", pnum ,pgrade, ppercent,pstring );
}


/*
Use & and %p for ponter and no & for string.
*/