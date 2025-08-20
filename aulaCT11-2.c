#include <stdio.h>
#include <stdlib.h>

float ler_numero()
{
    float num;
    printf("Digite um numero: ");
    scanf("%f", &num);
    return num;
}

float parte_fracionaria(float a)
{
    float frac;
    frac = a - (int)a;
    return frac;
}

int main()
{
    float numero = ler_numero();
    float pfracao = parte_fracionaria(numero);
    printf("Numero digitado: %f\n", numero);
    printf("Parte fracionaria: %f\n", pfracao);
    return 0;
}