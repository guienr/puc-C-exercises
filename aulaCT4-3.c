#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, divisor = 1, conta = 0, numdivisores = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for(divisor = 1; num >= divisor; divisor++)
    {
        conta = num % divisor;
        if(conta == 0)
        {
            printf("O numero e divisivel por %d\n",divisor);
            numdivisores += 1;
        }
    }
    if(numdivisores == 2)
    {
        printf("O numero %d e primo", num);
    }
    else
    {
        printf("O numero %d nao e primo", num);
    }
    return 0;
}