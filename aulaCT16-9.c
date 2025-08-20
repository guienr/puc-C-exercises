#include <stdio.h>
#include <stdlib.h>
#define tam 10

int main()
{
    float v[tam];
    int i = 0;
    int neg = 0;
    float soma = 0;

    for(i = 0; i < tam; i++)
    {
        printf("v[%d] = ", i);
        scanf("%f", &v[i]);  
        
        if(v[i] < 0)
        {
            neg++;
        }

        if(v[i] >= 0)
        {
            soma = soma + v[i];
        }
    }
    system("cls");

    for(i = 0; i < tam; i++)
    {
        printf("v[%d] = %.2f\n", i, v[i]);
    }
    printf("\nQuantidade de numeros negativos: %d\n", neg);
    printf("Soma dos numeros positivos: %.2f\n", soma);
    return 0;
}