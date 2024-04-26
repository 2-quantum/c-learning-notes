#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 25;
    printf("%p\n", &num);
    printf("%d\n", *&num);
    printf("%p\n", &*&num);
    printf("%d\n", *&*&num);
    printf("%p\n", &*&*&num);
}