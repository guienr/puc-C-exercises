#include <stdio.h>
#include <stdlib.h>
#define tam 5

int main()
{
    int i = 0;
    int j = 0;
    int l = 0;
    int c = 0;
    int m[tam][tam];
    int ver = 0;
    int v = 1;
    int x;
    int xi;
    int xj;

    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            do
            {
                v = 1;
                printf("m[%d][%d] = ", i, j);
                scanf("%d", &m[i][j]);
                if(i == 0 && j == 0)
                {
                    break;
                }
                else
                {
                    for(l = 0; l < i; l++)
                    {
                        for(c = 0; c < j; c++)
                        {
                            if(m[i][j] == m[l][c])
                            {
                                printf("O numero digitado ja existe\n");
                                system("pause");
                                system("cls");
                                
                            }
                            else
                            {
                                v--;
                            }
                        }
                    }
                }
            }
            while(v > 0);
        }
    }

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            if(x == m[i][j])
            {
                xi = i;
                xj = j;
                ver++;
            }
        }
    }

    if(ver == 0)
    {
        printf("\nNao encontrado");
    }
    else
    {
        printf("\nPosicao i: %d\n", xi);
        printf("Posicao j: %d\n", xj);
    }

    return 0;
}