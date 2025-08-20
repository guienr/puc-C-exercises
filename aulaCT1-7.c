#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float prec;
    float porc;
    float nov;
    printf("digite o preco do produto: ");
    scanf("%f", &prec);
    printf("digite a porcentagem do desconto: ");
    scanf("%f", &porc);
    nov = prec - (prec * (porc / 100));
    printf("preco: %.2f\n", prec);
    printf("porcentagem: %.0f%%\n", porc);
    printf("novo preco: %.2f", nov);
    return 0;
}