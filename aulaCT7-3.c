#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int num3;
    int maior1;
    int maior2;
    int maior3;
    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o valor do terceiro numero: ");
    scanf("%d", &num3);
    if(num1 == num2 || num2 == num3 || num3 == num1)
    {
        printf("Erro, nao e permitido digitar numeros iguais");
        exit(0);
    }
    else
    {
        if(num1 > num2 && num1 > num3)
        {
            maior1 = num1;
            if(num2 > num3)
            {
                maior2 = num2;
                maior3 = num3;
            }
            else
            {
                maior2 = num3;
                maior3 = num2;
            }
        }
        if(num2 > num1 && num2 > num3)
            {
                maior1 = num2;
                if(num1 > num3)
                {
                    maior2 = num1;
                    maior3 = num3;
                }
                else
                {
                    maior2 = num3;
                    maior3 = num1;
                }
            }
        if(num3 > num1 && num3 > num2)
        {
            maior1 = num3;
            if(num1 > num2)
            {
                maior2 = num1;
                maior3 = num2;
            }
            else
            {
                maior2 = num2;
                maior3 = num1;
            }
        }
    }
    printf("%d, %d, %d\n", maior1, maior2, maior3);
    return 0;
}