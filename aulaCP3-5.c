#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 100;
    int resultado = 0;
    for(num = 100; num <= 450; num++)
    {
        resultado = num % 7;
        if(resultado == 0)
        {
            printf("Numeros entre 100 e 450 que sao multiplos de 7: %d\n", num);
        }
    }
    return 0;
}