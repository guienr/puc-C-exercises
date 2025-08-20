#include <stdio.h>
#include <stdlib.h>

void numero_termos(int *n)
{
    printf("Digite quantos termos deseja somar: ");
    scanf("%d", n);
}

void soma(int n, float *res)
{
    int i = 1;
    *res = 0;
    for(i = 1; i <= n; i++)
    {
        *res = *res + (700 - 3 * (float) i)/(3 * (float) i);
    }
}

int main()
{
    int n;
    float res;
    numero_termos(&n);
    soma(n, &res);
    printf("Resultado: %f", res);
    return 0;
}