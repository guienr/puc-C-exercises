#include <stdio.h>
#include <stdlib.h>
#define maxtam 20

void tamanho_preenchimento(int v[maxtam], int *tam)
{
    int i = 0;
    printf("Digite o tamanho do vetor(1 - 20): ");
    scanf("%d", tam);
    if(*tam > 20 || *tam <= 0)
    {
        printf("Tamanho invalido!");
        exit(0);
    }
    for(i = 0; i < *tam; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }
}

void somav(int v[maxtam], int *tam, int *soma)
{
    int i = 0;
    *soma = 0;
    for(i = 0; i < *tam; i++)
    {
        *soma += v[i];
    }
}

int main()
{
    int i = 0;
    int v[maxtam];
    int tam;
    int soma;
    tamanho_preenchimento(v, &tam);
    somav(v, &tam, &soma);
    system("cls");
    for(i = 0; i < tam; i++)
    {
        printf("v[%d] = %d\n", i, v[i]);
    }
    printf("Soma: %d\n", soma);
    return 0;
}