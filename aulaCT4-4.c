#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, aux = 0, fatorial = 1;
    while(num >= 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num < 0)
        {
            break;
        }
        printf("Numero: %d\n", num);
        aux = num;
        fatorial = 1;
        while(aux > 0)
        {
            fatorial = fatorial * aux;
            aux = aux - 1;
        }
        printf("Fatorial do numero: %d\n", fatorial);
    }    
    return 0;
}