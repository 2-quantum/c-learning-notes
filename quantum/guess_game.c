#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int seed;
    printf("Please enter a number: ");
    scanf("%d", &seed);
    srand(seed);
    int randomnum = rand() % 11;
    int guess = 1;
    int iguess;
    // printf("%d", randomnum);
    printf("You have got only 3 guesses.\n");
    do
    {
        if (guess < 4)
        {
            printf("Guess a number between 1 to 10: ");
            scanf("%d", &iguess);
            guess++;
        }else{
            printf("You have exhausted your limit.\n");
            iguess = randomnum;
        }
    } while (randomnum != iguess);
}



/*
In C seed value decides the random number whatever is passed in srand.
if we pass same seed value the random number will be same.

*/