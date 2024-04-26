#include <stdio.h>
#include <stdlib.h>

int main(){
    char lines[1000];
    FILE * fpointer = fopen("fileopenedbyc.txt", "r");
    while(fgets(lines, 1000, fpointer) != NULL){
        printf("%s",lines);
    }
    fclose(fpointer);
    return 0;
}