#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    printf("digite um numero: ");
    scanf("%d", &num);
    if(num > 0)
    {
        printf("positivo");
    }
    if(num < 0)
    {
        printf("negativo");
    }
    if(num == 0) 
    {
        printf("nulo");
    }
    return 0;
}