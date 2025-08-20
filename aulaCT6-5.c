#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10];
    int i = 0;
    int maior = 0;
    int menor = 0;
    printf("x[%d] = ", i);
    scanf("%d", &x[i]);
    maior = x[i];
    menor = x [i];
    for(i = 1; i < 10; i++)
    {
        printf("x[%d] = ", i);
        scanf("%d", &x[i]);
        if(x[i] > maior)
        {
            maior = x[i];
        }
        if(x[i] < menor)
        {
            menor = x[i];
        }
    }
    printf("Vetor x: \n");
    for(i = 0; i < 10; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }
    printf("Maior: %d\n", maior);
    printf("Menor: %d", menor);
    return 0;
}