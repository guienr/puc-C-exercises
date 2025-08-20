#include <stdio.h>
#include <stdlib.h>

int ler_numero()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num < 0)
    {
        printf("Numero invalido");
        exit(0);
    }
    return num;
}

int fatoracao(int num)
{
    int fatorial = 1;
    for(fatorial = 1; num > 0; num--)
    {
        fatorial = fatorial * num;
    }
    return fatorial;
}

void divisores(int num)
{
    int div = 1;
    int conta;
    for(div = 1; div <= num; div++)
    {
        conta = num % div;
        if(conta == 0)
        {
            printf("Divisores: %d\n", div);
        }
    }
}

int main()
{
    int num;
    int fatorial;

    num = ler_numero();
    fatorial = fatoracao(num);
    system("cls");
    printf("Numero digitado: %d\n", num);
    printf("Fatorial do numero: %d\n", fatorial);
    divisores(num);
    return 0;
}