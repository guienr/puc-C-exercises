#include <stdio.h>
#include <stdlib.h>

int ler_par()
{
    int num;
    printf("Digite um numero par: ");
    scanf("%d", &num);
    if(num % 2 != 0 || num < 0)
    {
        printf("O numero nao e par\n");
        exit(0);
    }
    return num;
}

int imprimir_pares(int num, int i)
{
    printf("%d\n", i);
    if(i == num)
    {
        return num;
    }
    else
    {
        return i + imprimir_pares(num, i + 2);
    }
}

int main()
{
    int num;
    int i = 0;
    num = ler_par();
    imprimir_pares(num, i);
    return 0;
}