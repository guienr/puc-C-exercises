#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    int n = 0;
    int aux = 0;
    int resultado = 1;
    printf("Digite um numero para x: ");
    scanf("%d", &x);
    printf("Digite um numero para n: ");
    scanf("%d", &n);
    aux = n;
    if(n < 0)
    {
        printf("Erro");
        exit(0);
    }
    while(n > 0)
    {
        n = n - 1;
        resultado = resultado * x;
    }
    n = aux;
    if(n == 0)
    {
       resultado = 1;
    }
    printf("Base: %d\n", x);
    printf("Expoente: %d\n", n);
    printf("Resultado: %d", resultado);
    return 0;
}