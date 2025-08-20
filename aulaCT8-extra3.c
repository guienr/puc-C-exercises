#include <stdio.h>
#include <stdlib.h>
#define l 4
#define c 4

int main()
{
    int x[l][c];
    int y[l][c];
    int z[l][c];
    int i = 0;
    int j = 0;
    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("x[%d][%d] = ", i, j);
            scanf("%d", &x[i][j]);
        }
    }
    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("y[%d][%d] = ", i, j);
            scanf("%d", &y[i][j]);
        }
    }
    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            z[i][j] = x[i][j] + y[i][j];
        }
    }

    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("z[%d][%d] = %d\n", i, j, z[i][j]);
        }
    }
    return 0;
}