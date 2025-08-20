#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, *p;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    x--;
    (*p) += x;
    return 0;
}

/* x    y   *p
   0    0   ->y
   4    1
   3    4
*/