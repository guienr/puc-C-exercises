#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 100;
    int conta = 0;
    for(num = 100; num <= 300; num++)
    {
        conta = num % 11;
        if(conta == 3)
        {
            printf("Numero entre 100 e 300 que produz resto 3 ao ser dividido por 11: %d\n", num);
        }
    }
    return 0;
}

//elabore um programa que imprima todos os numeros entre 100 e 300 que quando dividos por 11 produzem resto 3