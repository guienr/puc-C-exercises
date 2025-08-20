#include <stdio.h>
#include <stdlib.h>
#define l 3
#define c 3

int main()
{
    int m[l][c];
    int i = 0;
    int j = 0;
    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            m[j][i] = j + i;
        }
    }
    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("m[%d][%d] = %d\n", i, j, m[i][j]);
        }
    }
    return 0;
}