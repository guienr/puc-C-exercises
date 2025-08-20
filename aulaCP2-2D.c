#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int num3;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);
    if(num1 > num2 && num1 > num3)
    {
        printf("O maior numero e %d", num1);
    }
    else 
    {
        if(num2 > num1 && num2 > num3)
        {
            printf("O maior numero e %d", num2);
        }
        else
        {
            printf("O maior numero e %d", num3);
        }
    }
    return 0;
}