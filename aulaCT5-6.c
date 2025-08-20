#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h = 0;
    float n = 0;
    float deno = 1;
    float soma = 0;
    printf("Digite o numero de termos a serem somados: ");
    scanf("%f", &n);
    if(n <= 0)
    {
        printf("Numero invalido");
        exit(0);
    }
    for(deno = 1; deno <= n; deno++)
    {
        printf("Numero a ser somado: 1 / %0.f\n", deno);
        soma = soma + (1 / deno);
    }
    printf("Soma: %.2f\n", soma);
    system("pause");
    return 0;
}