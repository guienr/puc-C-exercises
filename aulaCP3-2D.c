#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    int n = 0;
    int aux = 0;
    int maior = 0;
    int menor = 0;
    printf("Digite o numero de leituras consecutivas que o programa ira fazer que seja maior ou igual a 10: ");
    scanf("%d", &n);
    aux = n;
    if(n < 10)
    {
        printf("Numero invalido");
        exit(0);
    }
    while(n != 0)
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &x);
        if(x > maior)
        {
            maior = x;
        }
        if(x < menor)
        {
            menor = x;
        }
        n = n - 1;
    }
    printf("Numero de leituras consecutivas: %d\n", aux);
    printf("Maior numero digitado: %d\n", maior);
    printf("Menor numero digitado: %d", menor);
    return 0;
}