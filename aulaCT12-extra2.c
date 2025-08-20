#include <stdio.h>
#include <stdlib.h>

void ler_numeros(float *a, float *b, float *c)
{
    printf("Digite o primeiro numero: ");
    scanf("%f", a);
    printf("Digite o segundo numero: ");
    scanf("%f", b); 
    printf("Digite o segundo numero: ");
    scanf("%f", c);
    if(a == b || a == c || b == c)
    {
        printf("Nao e permitido digitar numeros iguais");
    }
}

void maior_menor(float a, float b, float c, float *maior, float *menor)
{
    if(a > b && a > c)
    {
        *maior = a;
    }
    if(a < b && a < c)
    {
        *menor = a;
    }
    if(b > a && b > c)
    {
        *maior = b;
    }
    if(b < a && b < c)
    {
        *menor = b;
    }
    if(c > a && c > b)
    {
        *maior = c;
    }
    if(c < a && c < b)
    {
        *menor = c;
    }
}

int main()
{
    float a;
    float b;
    float c;
    float maior;
    float menor;
    ler_numeros(&a, &b, &c);
    maior_menor(a, b, c, &maior, &menor);
    printf("Maior numero: %.2f\n", maior);
    printf("Menor numero: %.2f\n", menor);
    return 0;
}