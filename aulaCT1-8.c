#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int num;
    int dez;
    int uni;
    int soma;
    printf("digite um numero de 2 digitos: ");
    scanf("%d", &num);
    dez = num / 10;
    uni = num % 10;
    soma = dez + uni;
    printf("a soma dos digitos e igual a %d", soma);
    return 0;
}