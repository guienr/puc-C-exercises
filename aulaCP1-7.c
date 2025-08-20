#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso;
    float altu;
    float imc;
    printf("informe o seu peso: ");
    scanf("%f", &peso);
    printf("informe a sua altura: ");
    scanf("%f", &altu);
    imc = peso / (altu * altu);
    printf("seu peso: %.2fkg\n", peso);
    printf("sua altura: %.2fm\n", altu);
    printf("imc = %.2f", imc);
    return 0;
}