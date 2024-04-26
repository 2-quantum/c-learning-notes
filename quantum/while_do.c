/*
in while loop first condition is checked but in do while loop first it prints then checks condition.
*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1 = 1;
    int num2 = 1;
    while(num1<=10){
        printf("%d\n",num1);
        num1++;
    }
    do {
        printf("%d\n",num2);
        num2++;
    }while(num2<=10);
}