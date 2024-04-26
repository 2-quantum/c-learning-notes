#include <stdio.h>
#include <stdlib.h>

struct Students
{
    char name[20];
    int roll;
    char sec;
    int class;
    double percent;
};

int main()
{
    struct Students student1;
    printf("Enter your name: ");
    scanf("%s", student1.name);
    printf("Enter your roll number: ");
    scanf("%d", &student1.roll);
    printf("Enter your section: ");
    scanf(" %c", &student1.sec);
    printf("Enter your class in numbers like 1: ");
    scanf("%d", &student1.class);
    printf("Enter your percentage: ");
    scanf("%lf", &student1.percent);
    printf("\n");
    printf("\n");

    printf("YOUR OUTPUT BEGINS.\n");

    printf("\n");
    printf("\n");
    printf("Your name is %s.\n", student1.name);
    printf("Your roll number is %d.\n", student1.roll);
    printf("Your section is %c.\n", student1.sec);
    printf("Your class is %d.\n", student1.class);
    printf("You got %lf %%.\n", student1.percent);
    return 0;
}

// always use space before %c to consume any enter or whitespace .