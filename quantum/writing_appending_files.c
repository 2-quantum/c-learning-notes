#include <stdio.h>
#include <stdlib.h>

int main(){
    // FILE * fpointer = fopen("fileopenedbyc.txt", "w");
    FILE * fpointer = fopen("fileopenedbyc.txt", "a");
    fprintf(fpointer, "This is quantum.\nWriting in file from another file.\n");
    fclose(fpointer);
}