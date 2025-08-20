#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    float x[5];
    float soma = 0;
    for(i = 0; i < 5; i++)
    {
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
        soma = soma + x[i];
    }
    for(i = 0; i < 5; i++)
    {
        printf("x[%d] = %.0f\n", i, x[i]);
    }
    printf("Soma dos elementos do vetor: %.0f", soma);
    return 0;
}