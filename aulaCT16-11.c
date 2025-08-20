#include <stdio.h>
#include <stdlib.h>
#define tam 5

void ler_matriz(int m[tam][tam])
{
    int i = 0;
    int j = 0;
    
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            printf("m[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    system("cls");
}

void simetria(int m[tam][tam], int *ver)
{
    int i = 0;
    int j = 0;

    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            if(m[i][j] != m[j][i])
            {
                (*ver)++;
            }
        }
    }
}

int main()
{
    int i = 0;
    int j = 0;
    int m[tam][tam];
    int ver = 0;

    ler_matriz(m);
    simetria(m, &ver);
    system("cls");

    for(i = 0; i < tam; i++)
    {
        printf("\n");
        for(j = 0; j < tam; j++)
        {
            printf("m[%d][%d] = %d\t", i, j, m[i][j]);
        }
    }
    printf("\n\n");
    if(ver > 0)
    {
        printf("A matriz nao e simetrica");
    }
    else
    {
        printf("A matriz e simetrica");
    }
    return 0;
}