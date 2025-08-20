#include <stdio.h>
#include <stdlib.h>
#define tam 10

void lerv(int x[tam], int y[tam])
{
    int i = 0;
    for(i = 0; i < tam; i++)
    {
        printf("x[%d] = ", i);
        scanf("%d", &x[i]);
    }
    system("cls");
    for(i = 0; i < tam; i++)
    {
        printf("y[%d] = ", i);
        scanf("%d", &y[i]);
    }
    system("cls");
}

void somas(int x[tam], int y[tam], int soma[tam])
{
    int i = 0;
    for(i = 0; i < tam; i++)
    {
        soma[i] = x[i] + y[i];
    }
}

int main()
{
    int x[tam];
    int y[tam];
    int soma[tam];
    int i = 0;

    lerv(x, y);
    somas(x, y, soma);

    for(i = 0; i < tam; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }
    printf("\n");
    for(i = 0; i < tam; i++)
    {
        printf("y[%d] = %d\n", i, y[i]);
    }
    printf("\n");
    for(i = 0; i < tam; i++)
    {
        printf("soma[%d] = %d\n", i, soma[i]);
    }
    return 0;
}