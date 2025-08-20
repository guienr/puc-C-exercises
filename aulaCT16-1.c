#include <stdio.h>
#include <stdlib.h>
#define maxtam 20

void lerv(float x[maxtam], float y[maxtam], int *tam)
{
    int i = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", tam);
    system("cls");
    if(*tam > 20 || *tam < 1)
    {
        printf("Numero invalido digitado");
        exit(0);
    }

    for(i = 0; i < tam; i++)
    {
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
    }
    system("cls");
    for(i = 0; i < tam; i++)
    {
         printf("y[%d] = ", i);
        scanf("%f", &y[i]);
    }
    system("cls");
}

void multiplicacao(float x[maxtam], float y[maxtam], float z[maxtam], int tam)
{
    int i = 0;
    for(i = 0; i < tam; i++)
    {
        z[i] = x[i] * y[i];
    }
}


int main()
{
    float x[maxtam];
    float y[maxtam];
    float z[maxtam];
    int tam;
    int i = 0;

    lerv(x, y, &tam);
    multiplicacao(x, y, z, tam);

    for(i = 0; i < tam; i++)
    {
        printf("x[%d] = %.2f\n", i, x[i]);
    }
    printf("\n");
    for(i = 0; i < tam; i++)
    {
        printf("y[%d] = %.2f\n", i, y[i]);
    }
    printf("\n");
    for(i = 0; i < tam; i++)
    {
        printf("z[%d] = %.2f\n", i, z[i]);
    }
    return 0;
}