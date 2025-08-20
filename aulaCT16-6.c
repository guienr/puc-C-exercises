#include <stdio.h>
#include <stdlib.h>
#define tam 10

void lerv(float v[tam], float *soma, float *neg)
{
    int i = 0;
    for(i = 0; i < tam; i++)
    {
        printf("v[%d] = ", i);
        scanf("%f", &v[i]);
        if(v[i] < 0)
        {
            (*neg)++;
        }
        if(v[i] > 0)
        {
            *soma = *soma + v[i];
        }
    }
}

int main()
{
    float v[tam];
    float soma = 0;
    float neg = 0;

    lerv(v, &soma, &neg);
    printf("\nSoma: %.2f\n", soma);
    printf("Quantidade de numeros negativos: %.0f\n", neg);
    return 0;
}