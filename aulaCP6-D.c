#include <stdio.h>
#include <stdlib.h>
#define tam 3

int main()
{
    int m[tam][tam];
    int n[tam][tam];
    int r[tam][tam] = {0};
    int i = 0;
    int j = 0;
    int k = 0;
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            printf("m[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    system("pause");
    system("cls");
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            printf("n[%d][%d] = ", i, j);
            scanf("%d", &n[i][j]);
        }
    }
    system("pause");
    system("cls");
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            for(k = 0; k < tam; k++)
            {
                r[i][j] += m[i][k] * n[k][j];
            }
        }
    }

    for(i = 0; i < tam; i++)
    {
        printf("\n");
        for(j = 0; j < tam; j++)
        {
            printf("r[%d][%d] = %d\t", i, j, r[i][j]);
        }
    }
    return 0;
}