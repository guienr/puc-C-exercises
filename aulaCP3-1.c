#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;
    int escolha;
    float resultado;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("Escolha um numero de 1 a 4: ");
    scanf("%d", &escolha);
    if(escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4)
    {
        printf("Erro");
        exit(0);
    }
    switch(escolha)
    {
    case 1:
    resultado = (num1 + num2) / 2;
    break;

    case 2:
        if(num1 > num2)
        {
            resultado = num1 - num2;
        }
        else
        {
            resultado = num2 - num1;
        }
        break;

    case 3:
        resultado = num1 * num2;
        break;

    case 4:
        resultado = num1 / num2;
        break;
    }
    printf("Primeiro numero: %.0f\n", num1);
    printf("Segundo numero: %.0f\n", num2);
    printf("Resultado: %.0f", resultado);
    return 0;
}