#include <stdio.h>
#include <stdlib.h>

int ler_numero()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num < 0)
    {
        printf("Numero invalido");
        exit(0);
    }
    return num;
}

int soma_digit(int a)
{
    int soma = 0;
    while(a > 0)
    {
        soma = soma + (a % 10);
        a /= 10;
    }
    return soma;
}

void maior_digit(int n, int *m)
{
    int conta;
    while(n > 0)
    {
        conta = n % 10;
        if(conta > *m)
        {
            *m = conta;
        }
        n /= 10;
    }
}

int main()
{
    int num;
    int soma;
    int maior;
    num = ler_numero();
    soma = soma_digit(num);
    maior_digit(num, &maior);
    printf("Numero: %d\n", num);
    printf("Soma dos digitos: %d\n", soma);
    printf("Maior digito: %d\n", maior);
    return 0;
}