#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 0, num2 = 0;
    printf("digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("digite o segundo numero: ");
    scanf("%d", &num2);
    if(num1 > num2)
    {
        printf("%d", num1);
    }
    else 
    {
        printf("%d", num2);
    }
    return 0;
}