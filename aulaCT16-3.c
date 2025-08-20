#include <stdio.h>
#include <stdlib.h>
#define maxtam 20

void lerv(float v[maxtam], int *tam)
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

    for(i = 0; i < *tam; i++)
    {
        printf("v[%d] = ", i);
        scanf("%f", &v[i]);
    }
    system("cls");
}

float somas(float v[maxtam], int tam)
{
    int i = 0;
    float soma = 0;

    for(i = 0; i < tam; i++)
    {
        soma = soma + v[i];
    }
    return soma;
}

int main()
{
    float v[maxtam];
    int tam;
    float soma;
    int i = 0;

    lerv(v, &tam);
    soma = somas(v, tam);

    for(i = 0; i < tam; i++)
    {
        printf("v[%d] = %.2f\n", i, v[i]);
    }
    printf("\n");
    printf("Soma: %.2f", soma);
    return 0;
}