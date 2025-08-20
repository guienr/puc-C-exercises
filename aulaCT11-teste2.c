#include <stdio.h>
#include <stdlib.h>

void ler_numero(int *num)
{
    printf("Digite um numero: ");
    scanf("%d", num);
    if(*num < 0)
    {
        printf("Numero invalido");
        exit(0);
    }
}

void q2(int n, int *res)
{
    int num = 0;
    int i = 1;
    int conta = 0;
    *res = 0;
    for(i = 1; num < n; i++)
    {
        conta = i % 2;
        if(conta != 0)
        {
            *res = *res + i;
            num++;
        }
    }
}

int main()
{
    int n;
    int res;
    ler_numero(&n);
    q2(n, &res);
    printf("Resultado: %d", res);
    return 0;
}