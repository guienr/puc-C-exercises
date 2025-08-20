#include <stdio.h>
#include <stdlib.h>
#define tam 3

void ler_mat(int m[tam][tam])
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
}

int soma_diag(int m[tam][tam])
{
    int i = 0;
    int soma = 0;
    for(i = 0; i < tam; i++)
    {
        soma = soma + m[i][i];
    }
    return soma;
}

int main()
{
    int m[tam][tam];
    int soma;
    ler_mat(m);
    soma = soma_diag(m);
    printf("%d", soma);
    return 0;
}