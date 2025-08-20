#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int n = 0;
    int conta = 0;
    int soma = 0;
    int contador = 0;
    int aux = 0;
    printf("Digite quantos numeros voce ira digitar: ");
    scanf("%d", &n);
    aux = n;
    if(n <= 0)
    {
        printf("Erro");
        exit(0);
    }
    while(n > 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        conta = num % 2;
        if(conta == 0)
        {
            soma = soma + num;
        }
        else
        {
            contador = contador + 1;
        }
        n--;
    }
    printf("Quantidade de numeros digitados: %d\n", aux);
    printf("Soma dos numeros pares: %d\n", soma);
    printf("Quantidade de numero impares digitados: %d", contador);
    return 0;
}