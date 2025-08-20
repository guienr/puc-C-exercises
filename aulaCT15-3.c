#include <stdio.h>
#include <stdlib.h>

int teste(int num, int tr)
{
    int a = num % 10;
    num = num / 10;
    if(num == 0)
    {
        return a + tr;
    }
    tr = (tr + a) * 10;
    return (teste(num, tr));
}

//num = 3459, tr = 0

/*
a   num     tr
9   3459    0   
5   345     90
4   34      950
3   3       9540
0   0       95430
*/