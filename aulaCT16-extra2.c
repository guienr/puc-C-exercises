#include <stdio.h>
#include <stdlib.h>
#define tam 5

void ler_mat(int m[tam][tam])
{
    int i = 0;
    int j = 0;

    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            printf("m[%d][%d] = ", i , j);
            scanf("%d", &m[i][j]);
        }
    }
}

void trocar(int m[tam][tam])
{
    int i;
    int aux;
    for(i = 0; i < tam; i++)
    {
        aux = m[2][i];
        m[2][i] = m[4][i];
        m[4][i] = aux;
    }
}

int main()
{
    int i = 0;
    int j = 0;
    int m[tam][tam];

    ler_mat(m);
    trocar(m);
    system("cls");
    
    for(i = 0; i < tam; i++)
    {
        printf("\n");
        for(j = 0; j < tam; j++)
        {
            printf("m[%d][%d] = %d\t", i , j, m[i][j]);
        }
    }
    return 0;
}