#include <stdio.h>
#include <stdlib.h>

int main()
{
    float importancia;
    float gan1;
    float gan2;
    float gan3;
    printf("digite o valor da importancia: ");
    scanf("%f", &importancia);
    gan1 = importancia * 0.46;
    gan2 = importancia * 0.32;
    gan3 = importancia - gan1 - gan2;
    printf("importancia = %.2f reais\n", importancia);
    printf("primeiro ganhador = %.2f reais\n", gan1);
    printf("segundo ganhador = %.2f reais\n", gan2);
    printf("terceiro ganhador = %.2f reais", gan3);
    return 0;
}