#include <stdio.h>
#include <stdlib.h>
#define tam 5

int main()
{
    int i = 0;
    int j = 0;
    float m[tam][tam];
    float soma = 0;
    float menor = 0;
    float maior = 0;
    printf("m[%d][%d] = ", i, j);
    scanf("%f", &m[i][j]); 
    maior = m[i][j];
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            if(i == 0 && j == 0)
            {
                continue;
            }
            printf("m[%d][%d] = ", i, j);
            scanf("%f", &m[i][j]);
            if(i == j && m[i][j] > maior)
            {
                maior = m[i][j];
            }
            if(i == 3)
            {
                soma += m[i][j];
            }
            if(j == 4)
            {
                if(i == 0)
                {
                    menor = m[i][j];
                }
                else
                {
                    if(m[i][j] < menor)
                    {
                        menor = m[i][j];
                    }
                }
            }
        }
    }
    system("cls");
    for(i = 0; i < tam; i++)
    {
        printf("\n");
        for(j = 0; j < tam; j++)
        {
            printf("m[%d][%d] = %.0f\t", i, j, m[i][j]);
        }
    }
    printf("\nSoma da linha 4 = %.0f", soma);
    printf("\nMaior elemento da diagonal principal = %.0f", maior);
    printf("\nMenor elemento da coluna 5 = %.0f", menor);
    return 0;
}