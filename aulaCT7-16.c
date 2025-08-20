#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int v[10];
    int maior;
    int menor;
    printf("v[%d] = ", i);
    scanf("%d", &v[i]);
    maior = v[i];
    menor = v[i];
    for(i = 1; i < 10; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
        if(v[i] > maior)
        {
            maior = v[i];
        }
        if(v[i] < menor)
        {
            menor = v[i];
        }
    }
    for(i = 0; i < 10; i++)
    {
        printf("v[%d] = %d\n", i, v[i]);
    }
    printf("Maior elemento do vetor: %d\n", maior);
    printf("Menor elemento do vetor: %d\n", menor);
    return 0;
}