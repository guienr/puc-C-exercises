#include <stdio.h>
#include <stdlib.h>
#define tam 4

int main()
{
    int i = 0;
    int j = 0;
    int m[tam][tam];
    int maior;
    int mi;
    int mj;

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
            if(i == 0 && j == 0)
            {
                maior = m[i][j];
                mi = i;
                mj = j;
            }
            if(maior < m[i][j])
            {
                maior = m[i][j];
                mi = i;
                mj = j;
            }
        }
    }

    system("cls");
    for(i = 0; i < tam; i++)
    {
        printf("\n");
        for(j = 0; j < tam; j++)
        {
            printf("m[%d][%d] = %d\t", i, j, m[i][j]);
        }
    }
    printf("\n\nMaior: %d\n", maior);
    printf("Posicao i: %d\n", mi);
    printf("Posicao j: %d\n", mj);
    return 0;
}