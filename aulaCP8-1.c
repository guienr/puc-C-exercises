#include <stdio.h>
#include <stdlib.h>

void pares(int *num1, int *num2)
{
    int i = 0;
    int conta;
    for(i = *num1; i <= *num2; i++)
    {
        conta = i % 2;
        if(conta == 0)
        {
            printf("Numero pares no intervalo de %d e %d: %d\n", *num1, *num2, i);
        }
    }
}

int main()
{
    int num1;
    int num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    if(num1 > num2)
    {
        printf("O primeiro numero e maior que o segundo");
        exit(0);
    }
    pares(&num1, &num2);
    return 0;
}