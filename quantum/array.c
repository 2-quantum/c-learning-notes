#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    char names[][20] = {"name", "lame", "fame","dame","soon","alfred"};
    printf("%d %s", arr[1], names[2]);
    return 0;
}