#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int soma;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    soma = a + b;
    printf("Soma: %d\n", soma);
    if(soma < c)
    {
        printf("O valor %d e menor que %d", soma, c);
    }
    else
    {
        printf("O valor %d e maior que %d", soma, c);
    }
    return 0;
}