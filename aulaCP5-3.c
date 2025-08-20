#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int v[10];
    int maior;
    int menor;
    int posima;
    int posime;
    printf("v[%d] = ", i);
    scanf("%d", &v[i]);
    maior = v[i];
    posima = i;
    menor = v[i];
    posime = i;
    for(i = 1; i < 10; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
        if(v[i] > maior)
        {
            maior = v[i];
            posima = i;
        }
        if(v[i] < menor)
        {
            menor = v[i];
            posime = i;
        }
    }
    system("cls");
    for(i = 0; i < 10; i++)
    {
        printf("v[%d] = %d\n", i, v[i]);
    }
    printf("Maior elemento do vetor: %d\n", maior);
    printf("Posicao do maior elemento do vetor: v[%d]\n", posima);
    printf("Menor elemento do vetor: %d\n", menor);
    printf("Posicao do menor elemento do vetor: v[%d]\n", posime);
    return 0;
}