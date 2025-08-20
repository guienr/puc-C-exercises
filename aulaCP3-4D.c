#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int aux = 0;
    int fatorial = 1;
    while(num >= 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        aux = num;
        if(num < 0)
        {
            exit(0);
        }
        if(num == 0)
        {
            fatorial = 1;
        }
        else
        {
            while(num > 0)
            {
                fatorial = fatorial * num;
                num = num - 1;
            }
        }
        printf("Numero: %d\n", aux);
        printf("Fatorial: %d\n", fatorial);
    }
    return 0;
}