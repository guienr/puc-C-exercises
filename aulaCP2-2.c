#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int conta;
    printf("digite um numero: ");
    scanf("%d", &num);
    conta = num % 5;
    if(conta == 0)
    {
        printf("o numero e multiplo de 5");
    }
    else
    {
        printf("o numero nao e multiplo de 5");
    }
    return 0;
}