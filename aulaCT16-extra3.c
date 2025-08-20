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
            printf("m[%d][%d] = ", i , j);
            scanf("%d", &m[i][j]);
        }
    }
}

void maiorc(int m[tam][tam], int v[tam])
{
    int i = 0;
    int j = 0;

    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            if(j == 0)
            {
                v[i] = m[j][i];
            }
            if(v[i] < m[j][i])
            {
                v[i] = m[j][i];
            }
        }
    }
}

int main()
{
    int m[tam][tam]; 
    int v[tam];
    int i = 0;
    int j = 0;

    ler_mat(m);
    maiorc(m, v);
    system("cls");
    
    for(i = 0; i < tam; i++)
    {
        printf("\n");
        for(j = 0; j < tam; j++)
        {
            printf("m[%d][%d] = %d\t", i , j, m[i][j]);
        }
    }
    printf("\n\n");
    for(i = 0; i < tam; i++)
    {
        printf("v[%d] = %d\t", i, v[i]);
    }
    return 0;
}