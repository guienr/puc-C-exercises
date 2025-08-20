#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s = 0;
    int num1 = 1;
    float num2 = 1;
    float aux = 1;
    int conta = 0;
    while(num1 <= 10)
    {
        conta = num1 % 2;
        if(conta == 0)
        {
            s = s - (float)(num1 / num2);
        }
        else
        {
            s = s + (float)(num1 / num2);
        }
        num1 += 1;
        aux += 1;
        num2 = aux * aux;
    }
    printf("S = %.2f", s);
    return 0;
}