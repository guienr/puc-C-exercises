#include <stdio.h>
#include <stdlib.h>

int ler_numero()
{
    int num = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    return num;
}

int conta_fatorial(int a)
{
    int fat = 1;
    if(a < 0)
    {
        printf("Numero invalido");
        exit(0);
    }
    for(fat = 1; a > 0; a--)
    {
        fat = fat * a;
    }
    return fat;
}

void divisor_numero(int b)
{
    int div = 1;
    int conta = 0;
    for(div = 1; div <= b; div++)
    {
        conta = b % div;
        if(conta == 0)
        {
            printf("Divisores do numero digitado: %d", div);
            printf("\n");
        }
    }
}

int main()
{
    int fatorial;
    int numero;
    numero = ler_numero();
    fatorial = conta_fatorial(numero);
    printf("Fatorial do numero digitado: %d\n", fatorial);
    divisor_numero(numero);
    return 0;
}