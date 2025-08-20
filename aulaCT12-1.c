#include <stdio.h>
#include <stdlib.h>

int ler_numero()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num < 0)
    {
        printf("O numero deve ser positivo");
        exit(0);
    }
    return num;
}

void somadiv(int x, int *y)
{
    int i = 1;
    int conta;
    *y = 0;
    for(i = 1; i <= x; i++)
    {
        conta = x % i;
        if(conta == 0)
        {
            *y += i;
        }
    }
}

int main()
{
    int num;
    int sd;
    num = ler_numero();
    somadiv(num, &sd);
    printf("Numero digitado: %d\n", num);
    printf("Soma dos divisores: %d\n", sd);
    return 0;
}