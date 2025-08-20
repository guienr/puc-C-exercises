#include <stdio.h>
#include <stdlib.h>

int main()
{
    int repet = 1;
    int resultado = 0;
    int termo = 0;
    int num1;
    int num2;
    printf("Digite quantos N primeiros termo da sequencia de Fibonnaci voce quer saber: ");
    scanf("%d", &repet);
    if(repet <=0)
    {
        printf("Erro");
        exit(0);
    }
    
    return 0;
}