#include <stdio.h>
#include <stdlib.h>

int ler_num()
{
    int num;
    printf("Digite o numero: ");
    scanf("%d", &num);
    if(num <= 0)
    {
        printf("Numero invalido");
        exit(0);
    }
    return num;
}

void somadiv(int x, int *y)
{
    int i = 1;
    int conta;
    *y = 0;
    for(i = 1; i <= x; i++)
    {
        conta = x % i;
        if(conta == 0)
        {
            *y += i;
        }
    }
}

int main()
{
    int x;
    int y;

    x = ler_num();
    somadiv(x, &y);
    printf("Soma: %d", y);

    return 0;
}