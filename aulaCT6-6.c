#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[15];
    int i = 0;
    int conta1;
    int conta2;
    int contador1 = 0;
    int contador2 = 0;
    for(i = 0; i < 15; i++)
    {
        printf("x[%d] = ", i);
        scanf("%d", &x[i]);
        if(x[i] < 0)
        {
            printf("Numero invalido");
            return 0;
        }
        conta1 = x[i] % 2;
        conta2 = x[i] % 5;
        if(conta1 == 0)
        {
            contador1 = contador1 + 1;
        }
        if(conta2 == 0)
        {
            contador2 = contador2 + 1;
        }
    }
    printf("Vetor x: \n");
    for(i = 0; i < 15; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }
    printf("Quantidade de numeros pares: %d\n", contador1);
    printf("Quantidade de numeros multiplos de 5: %d", contador2);
    return 0;
}