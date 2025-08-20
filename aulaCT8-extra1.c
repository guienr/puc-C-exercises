#include <stdio.h>
#include <stdlib.h>
#define l 2
#define c 2

int main()
{
    int m[l][c];
    int i = 0;
    int j = 0;
    for(i = 0; i <= l; i++)
    {
        for(j = 0; j <= c; j++)
        {
            m[i][j] = (2 * i) + j;
        }
    }
    for(i = 0; i <= l; i++)
    {
        for(j = 0; j <= c; j++)
        {
            printf("m[%d][%d] = %d\n", i, j, m[i][j]);
        }
    }
    return 0;
}