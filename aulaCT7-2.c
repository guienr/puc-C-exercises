#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;
    float media;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    if(num1 < 15 || num1 > 100 || num2 < 15 || num2 > 100)
    {
        printf("Erro");
        exit(0);
    }
    media = (num1 + num2) / 2;
    printf("Media = %.2f", media);
    return 0;
}