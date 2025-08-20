#include <stdio.h>
#include <stdlib.h>
#define l 5
#define c 7

int main()
{
    int i = 0;
    int j = 0;
    int m[l][c];
    int n[l][c];
    int s[l][c];

    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("m[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("n[%d][%d] = ", i, j);
            scanf("%d", &n[i][j]);
        }
    }

    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            s[i][j] = m[i][j] + n[i][j];
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
    printf("\n\n");
    for(i = 0; i < l; i++)
    {
        printf("\n");
        for(j = 0; j < c; j++)
        {
            printf("n[%d][%d] = %d\t", i, j, n[i][j]);
        }
    }
    printf("\n\n");
    for(i = 0; i < l; i++)
    {
        printf("\n");
        for(j = 0; j < c; j++)
        {
            printf("s[%d][%d] = %d\t", i, j, s[i][j]);
        }
    }
    return 0;
}