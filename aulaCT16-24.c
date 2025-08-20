#include <stdio.h>
#include <stdlib.h>

int ler_num()
{
    int num;
    int conta;

    do
    {
        printf("Digite um numero par positivo: ");
        scanf("%d", &num);
        conta = num % 2;
        if(conta != 0)
        {
            printf("Numero invalido\n");
            system("pause");
            system("cls");
        }
    }
    while(conta != 0 || num < 0);

    return num;
}

int pares(int num, int i)
{
    int conta;

    if(i == num)
    {
        printf("Numeros pares de 0 ate %d: %d\n", num, i);
        return 0;
    }
    else
    {
        conta = i % 2;
        if(conta == 0)
        {
            printf("Numeros pares de 0 ate %d: %d\n", num, i);
        }
        return pares(num, i + 1);
    }
}

int main()
{
    int num;
    int i = 0;
    num = ler_num();
    pares(num, i);
    return 0;
}