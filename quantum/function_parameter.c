#include <stdio.h>
#include <stdlib.h>

void hello(char name[]);
void age(int agee);

int main()
{
    char name1[20];
    int age1;
    printf("Enter your first name: ");
    scanf("%s",name1);
    
    printf("Enter your age: ");
    scanf("%d", &age1);
    hello(name1);
    age(age1);
    return 0;
}

void hello(char name[])
{
    printf("Hello %s.\n", name);
}

void age(int agee)
{
    printf("Your age is %d.\n", agee);
}