#include <stdio.h>
#include <stdlib.h>
#define l 5
#define c 3

int main()
{
    int i = 0;
    int j = 0;
    int m[l][c];
    int t[c][l];
    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("m[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    for(i = 0; i < c; i++)
    {
        for(j = 0; j < l; j++)
        {
            t[i][j] = m[j][i];
        }
    }
    system("cls");
    for(i = 0; i < l; i++)
    {
        printf("\n");
        for(j = 0; j < c; j++)
        {
            printf("m[%d][%d] = %d\t", i, j, m[i][j]);
        }
    }
    printf("\n");
    for(i = 0; i < c; i++)
    {
        printf("\n");
        for(j = 0; j < l; j++)
        {
            printf("t[%d][%d] = %d\t", i, j, t[i][j]);
        }
    }
    return 0;
}