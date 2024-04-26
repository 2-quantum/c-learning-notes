#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char colour[20];
    char place[20];
    char noun[20];
    char actor[40];

    printf("Enter your favourite colour: ");
    scanf("%s", colour);
    printf("Enter your favourite place: ");
    scanf("%s", place);
    printf("How is your weather(noun): ");
    scanf("%s", noun);
    while (getchar () != '\n');
    printf("Enter your favourite actor: ");
    fgets(actor, 40, stdin);
    actor[strcspn(actor, "\n")] = '\0';

    printf("Roses are %s.\n", colour);
    printf("%s is blue.\n", place);
    printf("Weather is %s.\n", noun);
    printf("My favourite actor is %s.\n", actor);
    return 0;
}