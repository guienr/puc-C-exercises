#include <stdio.h>
#include <stdlib.h>

int func(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n + func(n - 1);
}

//entrada: 5

/*
n   func
5   5
4   9
3   12
2   14
1   15
0
*/