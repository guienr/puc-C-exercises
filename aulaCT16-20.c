#include <stdio.h>
#include <stdlib.h>

void ler_num(int *n1, int *n2)
{
    printf("Digite o primeiro numero: ");
    scanf("%d", n1);
    printf("Digite o segundo numero: ");
    scanf("%d", n2);
}

int quad(int n1, int n2)
{
    int soma;
    soma = (n1 * n1) + (n2 * n2);
    return soma;
}

int main()
{
    int n1;
    int n2;
    int soma;

    ler_num(&n1, &n2);
    soma = quad(n1, n2);
    printf("Soma: %d", soma);
    return 0;
}