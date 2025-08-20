#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int conta = 0;
    int inv = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num < 0)
    {
        printf("Numero invalido");
        exit(0);
    }
    while(num != 0)
    {
        conta = num % 10;
        num /= 10;
        if(num == 0)
        {
            inv += conta;
        }
        else 
        {
            inv = ((inv * 10) + (conta * 10));
        }
    }
    printf("Numero digitado invertido: %d\n", inv);
    return 0;
}