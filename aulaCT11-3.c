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

int main()
{
    int fatorial;
    int numero;
    numero = ler_numero();
    fatorial = conta_fatorial(numero);
    printf("Fatorial do numero digitado: %d", fatorial);
    return 0;
}