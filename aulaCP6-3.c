#include <stdio.h>
#include <stdlib.h>
#define maxtam 4

int main()
{
    int i = 0;
    int j = 0;
    int check = 0;
    int tam = 0;
    int m[maxtam][maxtam];
    int t[maxtam][maxtam];
    int c[maxtam][maxtam];
    int s[maxtam];
    int n[maxtam];
    int pares = 0;
    int conta = 0;
    int somad = 0;
    int somal = 0;
    int maiorc = 0;
    int maiors = 0;

    //tamanho matriz
    while(check == 0)
    {
        printf("Digite o tamanho da matriz: ");
        scanf("%d", &tam);
        if(tam > maxtam || tam < 0)
        {
            printf("Numero invalido\n");
        }
        else
        {
            check++;
        }
    }

    //preenchendo a matriz
    for(i = 0; i < tam; i++)
    {
        somal = 0;
        for(j = 0; j < tam; j++)
        {
            printf("m[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
            //par
            conta = m[i][j] % 2;
            if(conta == 0)
            {
                pares++;
            }
            //diagonal principal
            if(i == j)
            {
                somad += m[i][j];
            }
            //soma de linha
            somal += m[i][j];
        }
        s[i] = somal;
    }

    //maior de cada coluna
    for(j = 0; j < tam; j++)
    {
        maiorc = m[0][j];
        for(i = 1; i < tam; i++)
        {
            if(maiorc < m[i][j])
            {
                maiorc = m[i][j];
            }
        }
        n[j] = maiorc;
    }

    //maior valor da diagonal secundaria
    maiors = m[0][tam - 1];
    for(i = 1; i < tam; i++)
    {
        if(m[i][tam - 1 - i] > maiors)
            {
                maiors = m[i][tam - 1 - i];
            }
    }

    //matriz transposta
    for(j = 0; j < tam; j++)
    {
        for(i = 0; i < tam; i++)
        {
            t[j][i] = m[i][j];
        }
    }

    //matriz troca de coluna
    for(i = 0; i < tam; i++)
    {
        if(tam < 4)
        {
            break;
        }
        for(j = 0; j < tam; j++)
        {
            if(j == 0)
            {
                c[i][0] = m[i][3];
            }
            else
            {
                if(j == 3)
                {
                c[i][3] = m[i][0];
                }
                else
                {
                    c[i][j] = m[i][j];
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
            printf("m[%d][%d] = %d\t", i, j, m[i][j]);
        }
    }

    printf("\n\n");

    for(j = 0; j < tam; j++)
    {
        printf("\n");
        for(i = 0; i < tam; i++)
        {
            printf("t[%d][%d] = %d\t", i, j, t[j][i]);
        }
    }

    printf("\n\n");

    for(i = 0; i < tam; i++)
    {
        if(tam != 4)
        {
            break;
        }
        printf("\n");
        for(j = 0; j < tam; j++)
        {
            printf("c[%d][%d] = %d\t", i, j, c[i][j]);
        }
    }

    printf("\n\n");

    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Soma dos elementos da diagonal principal: %d\n", somad);
    printf("Maior valor da diagonal secundaria: %d\n", maiors);

    printf("Soma das linhas 0, 1, 2 e 3 respectivamente: \n");
    for(i = 0; i < tam; i++)
    {
        printf("s[%d] = %d\t", i, s[i]);
    }

    printf("\n\nMaior numero das colunas 0, 1, 2 e 3 respectivamente: \n");
    for(i = 0; i < tam; i++)
    {
        printf("n[%d] = %d\t", i, n[i]);
    }

    return 0;
}