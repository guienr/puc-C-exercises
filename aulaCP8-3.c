#include <stdio.h>
#include <stdlib.h>

void ler_numeros(int *num1, int *num2, int *num3)
{
    printf("Digite o primeiro numero: ");
    scanf("%d", num1);
    printf("Digite o segundo numero: ");
    scanf("%d", num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", num3);
}

int fatorial(int num)
{
    int fatorial = 1;
    for(fatorial = 1; num > 0; num--)
    {
        if(num == 0)
        {
            fatorial = 1;
            break;
        }
        fatorial = fatorial * num;
    }
    return fatorial;
}

int main()
{
    int num1;
    int num2;
    int num3;
    int fatorial1;
    int fatorial2;
    int fatorial3;
    ler_numeros(&num1, &num2, &num3);
    fatorial1 = fatorial(num1);
    fatorial2 = fatorial(num2);
    fatorial3 = fatorial(num3);
    system("cls");
    printf("Primeiro numero digitado: %d\n", num1);
    printf("Segundo numero digitado: %d\n", num2);
    printf("Terceiro numero digitado: %d\n", num3);
    printf("Fatorial do primeiro numero: %d\n", fatorial1);
    printf("Fatorial do segundo numero: %d\n", fatorial2);
    printf("Fatorial do terceiro numero: %d\n", fatorial3);
    return 0;
}