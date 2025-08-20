#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int fatorial;
    int aux;
    printf("Digite um numero: ");
    scanf("%d", &num);
    aux = num;
    if(num < 0)
    {
        printf("Erro");
        exit(0);
    }

    for(fatorial = 1; num > 0; num--)
    {
        fatorial = fatorial * num;
    }
    printf("Numero: %d\n", aux);
    printf("Fatorial: %d", fatorial);
    return 0;
}


//Elabore um programa que determine o fatorial de um numero inteiro nao negativo