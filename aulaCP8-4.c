#include <stdio.h>
#include <stdlib.h>

void ler_numero(int *num1, int *num2)
{
    printf("Digite o primeiro numero: ");
    scanf("%d", num1);
    printf("Digite o segundo numero: ");
    scanf("%d", num2);
}

int quad(int *num1, int *num2)
{
    int resultado = 0;
    resultado = ((*num1 * *num1) + (*num2 * *num2));
    return resultado;
}

int main()
{
    int num1;
    int num2;
    int resultado;
    ler_numero(&num1, &num2);
    resultado = quad(&num1, &num2);
    system("cls");
    printf("Primeiro numero digitado: %d\n", num1);
    printf("Segudo numero digitado: %d\n", num2);
    printf("Resultado: %d\n", resultado);
    return 0;
}