#include <stdio.h> 
#include <stdlib.h>
#define maxtam 3

int main()
{
    int i = 0;
    int j = 0;
    int tam = 0;
    int m[maxtam][maxtam];
    int maiorl = 0;
    int menorl = 0;
    int maiorc;
    int menorc;
    int check = 0;
    while(check == 0)
    {
        printf("Tamanho da matriz: ");
        scanf("%d", &tam);
        if(tam > maxtam || tam < 0)
        {
            printf("Numero invalido\n");
        }
        else
        {
            check = 1;
        }
    }     
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            printf("m[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
            if(i == 1)
            {
                if(tam == 1)
                {
                    printf("O maior e o menor numero da linha 2 nao existem");
                    continue;
                }
                if(j == 0)
                {
                    maiorl = m[i][j];
                    menorl = m[i][j];
                }
                else
                {
                    if(maiorl < m[i][j])
                    {
                        maiorl = m[i][j];
                    }
                    if(menorl > m[i][j])
                    {
                        menorl = m[i][j];
                    }
                }
            }
            if(j == 0)
            {
                if(i == 0)
                {
                    maiorc = m[i][j];
                    menorc = m[i][j];
                }
                else
                {
                    if(maiorc < m[i][j])
                    {
                        maiorc = m[i][j];
                    }
                    if(menorc > m[i][j])
                    {
                        menorc = m[i][j];
                    }
                }
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
    printf("\nMaior numero da linha 2: %d", maiorl);
    printf("\nMenor numero da linha 2: %d", menorl);
    printf("\nMaior numero da coluna 1: %d", maiorc);
    printf("\nMenor numero da coluna 1: %d", menorc);
    return 0;
}