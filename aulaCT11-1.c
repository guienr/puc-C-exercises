#include <stdio.h>
#include <stdlib.h>

int numero()
{
    int r;
    int num = 0;
    int conta = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    conta = num % 2;
    if(conta == 0)
    {
        r = 1;
    }
    else
    {
        r = 0;
    }
    return r; 
}

int main()
{
    int retorno;
    retorno = numero();
    printf("Resultado: %d", retorno);
    return 0;
}