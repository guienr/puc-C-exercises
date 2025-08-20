#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vet[10];
    int i = 0;
    int posicao;
    float maior = 0;
    printf("vet[%d] = ", i);
    scanf("%f", &vet[i]);
    maior = vet[i];
    for(i = 1; i < 10; i++)
    {
        printf("vet[%d] = ", i);
        scanf("%f", &vet[i]);
        if(vet[i] > maior)
        {
            maior = vet[i];
            posicao = i;
        }
    }
    for(i = 0; i < 10; i++)
    {
        printf("vet[%d] = %.0f\n", i, vet[i]);
    }
    printf("Valor do maior elemento: %.0f\n", maior);
    printf("Posicao: %d", posicao);
    return 0;
}