#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char firstname[20];
    char fullname[12];
    int marks;
    double percent;
    char grade;
    
    printf("Enter your first name: ");
    scanf("%s", firstname);
    while (getchar() != '\n');
    printf("Enter your full name: ");
    fgets(fullname, 12, stdin);
    fullname[strcspn(fullname, "\n")] = '\0';
    printf("Enter your marks: ");
    scanf("%d", &marks);
    printf("Enter your percentage: ");
    scanf("%lf", &percent);
    while (getchar() != '\n');
    printf("Enter your grade: ");
    scanf("%c", &grade);
    //printf("%s %s %d %f %c\n", firstname, fullname, marks, percent, grade);
    printf("\n");
    printf("YOUR OUTPUT BEGINS.\n");
    printf("\n");
    printf("Your first name is %s.\n",firstname);
    printf("Your full name is %s.\n",fullname);
    printf("Your marks is %d.\n",marks);
    printf("You got %f.\n",percent);
    printf("Your grade is %c.\n",grade);
    return 0;
}


//If we are getting input from user we have to explicitely mention the string length.(refer line 6)
// while (getchar() != '\n'); This line removes new line character which allows the fgets to run otherwise it will take previons input i.e new line character as his input and will not run as expected.
// fullname[strcspn(fullname, "\n")] = '\0'; This runs due to including library string and it takes fullname input and replace \n with \0. 