#include <stdio.h>
#include <stdlib.h>
#include "GitStuff.h"
int main()
{
    int x,y;
    x=54;
    y=34;
    printf("SUM IS %d\n",sum(x,y));
    printf("\nEVEN = %d, ODD = %d\n",!is_even(sum(x,y)), is_even(sum(x,y)));
    palindrome(312);
    return 0;
}
