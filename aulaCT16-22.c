#include <stdio.h>
#include <stdlib.h>

void ler_num(int *n1, int *n2, int *n3)
{
    printf("Digite o primeiro numero: ");
    scanf("%d", n1);
    printf("Digite o segundo numero: ");
    scanf("%d", n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", n3);
}

void rotacao(int *n1, int *n2, int *n3)
{
    int aux;

    aux = *n3;
    *n3 = *n1;
    *n1 = *n2;
    *n2 = aux;
}

int main()
{
    int n1;
    int n2;
    int n3;

    ler_num(&n1, &n2, &n3);
    rotacao(&n1, &n2, &n3);
    printf("Primeiro numero: %d\n", n1);
    printf("Segundo numero: %d\n", n2);
    printf("Terceiro numero: %d\n", n3);

    return 0;
}