#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, resultado = 0;
    printf("digite o numero: ");
    scanf("%d", &num);
    resultado = num % 2;
    if(resultado == 0) 
    {
        printf("par");
    }
    else
    {
        printf("impar");
    }
    return 0;
}