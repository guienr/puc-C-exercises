#include <stdio.h>
#include <stdlib.h>
#define l 4
#define c 3

int main()
{
    int i = 0;
    int j = 0;
    float m[l][c];
    float t[c][l];
    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("m[%d][%d] = ", i, j);
            scanf("%f", &m[i][j]);
        }
    }
    for(j = 0; j < c; j++)
    {
        for(i = 0; i < l; i++)
        {
            t[j][i] = m[i][j];
        }
    }
    system("cls");
    for(i = 0; i < l; i++)
    {
        printf("\n");
        for(j = 0; j < c; j++)
        {
            printf("m[%d][%d] = %.0f\t", i, j, m[i][j]);
        }
    }
    printf("\n\n");
    for(j = 0; j < c; j++)
    {
        printf("\n");
        for(i = 0; i < l; i++)
        {
            printf("t[%d][%d] = %.0f\t", i, j, t[j][i]);
        }
    }
    return 0;
}
