#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int fav_num = 1;
    printf("My 1st fav_num is %d.\n", fav_num);
    const int FAV_NUM = 3;
    printf("My 2nd FAV_NUM is %d.\n", FAV_NUM);
    return 0;
}

//OUTPUT
/*
My 1st fav_num is 1.
My 2nd FAV_NUM is 3.
*/

/*
By using const we declare it as a constant value which cant be changed further.
When using const writing letters in capital is recognised as best practice.(Refer to line number 8)
*/