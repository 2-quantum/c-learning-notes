#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[3][2][20] = {{"ram","shyam"},
    {"mohan","sohan"},{"alfred","vivekanand"}};
    // printf("%s",name[0][0]);
    int num[3][2] = {{1, 2},{3,4},{5,6}};
    for (int i=0; i<3; i++){
        for (int j=0; j<2;j++){
            printf("%d\n",num[i][j]);
            printf("%s\n",name[i][j]);
        }
    }
}

/*
0,0  0,1  1,0  1,1  2,0  2,1
*/