#include <stdio.h>
#include <stdlib.h>
#define maxtam 20

void lervk(int v[maxtam], int *k, int *tam)
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
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }
    system("cls");

    printf("Digite o valor de k: ");
    scanf("%d", k);
    system("cls");
}

void multiplicacao(int v[maxtam], int k, int vk[maxtam], int tam)
{
    int i = 0;

    for(i = 0; i < tam; i++)
    {
        vk[i] = v[i] * k;
    }
}

int main()
{
    int i = 0;
    int v[maxtam];
    int k; 
    int vk[maxtam];
    int tam;

    lervk(v, &k, &tam);
    multiplicacao(v, k, vk, tam);

    for(i = 0; i < tam; i++)
    {
        printf("v[%d] = %d\n", i, v[i]);
    }
    printf("\nk = %d\n\n", k);

    for(i = 0; i < tam; i++)
    {
        printf("vk[%d] = %d\n", i, vk[i]);
    }
    return 0;
}