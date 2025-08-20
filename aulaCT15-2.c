#include <stdio.h>
#include <stdlib.h>

int misterio(int a, int b)
{
    if(b == 1)
    {
        return a;
    }
    else
    {
        return a + misterio(a, b - 1);
    }
}

//a = 2, b = 4

/*
a   b   misterio
2   4   4
2   3   6
2   2   8
2   1
*/