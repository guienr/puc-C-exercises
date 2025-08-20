#include <stdio.h>
#include <stdlib.h>
#define tam 5

int main()
{
    int i = 0;
    int j = 0;
    float m[tam][tam];
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
            if(m[i][j] > maior)
            {
                maior = m[i][j];
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
    printf("\nMaior = %.0f", maior);
    return 0;
}