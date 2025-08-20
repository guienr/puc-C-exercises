#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, soma = 0, divisor = 10;
    printf("Digite um numero: ");
    scanf("%d", &num);
    do 
    {
        soma += num % 10;
        num = num / 10;
    }
    while(num > 0);
    printf("%d", soma);
    return 0;
}