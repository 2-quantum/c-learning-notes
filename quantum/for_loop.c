#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckynumbers[] = {1,2,3,4,5,6,7,8,9,10};
    char names[][20] = {"ram", "shyam","sohan","mohan","dayanand","vivekanand","modi","national","party","random" };
    for (int i = 0 ; i<10 ; i++){
        printf("name : %s\n",names[i]);
        printf("luckynumbers : %d\n",luckynumbers[i]);
    }

}