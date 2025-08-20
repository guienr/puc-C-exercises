#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, resto5, resto3;
    printf("digite um numero para verificar se ele e divisivel por 5 e 3: ");
    scanf("%d", &num);
    resto5 = num % 5;
    resto3 = num % 3;
    if(resto5 == 0 && resto3 == 0)
    {
        printf("o numero e divisivel por 5 e 3");
    }
    else 
    {
        printf("o numero nao e divisivel por 5 e 3");
    }
    return 0;
}