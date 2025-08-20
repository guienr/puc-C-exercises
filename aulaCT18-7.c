#include <stdio.h>
#include <stdlib.h>
#define tam 3

int main()
{
    int i = 0;
    int j = 0;
    int m[tam][tam];
    int soma = 0;

    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            printf("m[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            if(i < j)
            {
                soma += m[i][j];
            }
        }
    }

    for(i = 0; i < tam; i++)
    {
        printf("\n");
        for(j = 0; j < tam; j++)
        {
            printf("m[%d][%d] = %d\t", i, j, m[i][j]);
        }
    }
    printf("\n\nSoma: %d", soma);
    return 0;
}