#include <stdio.h>
#include <stdlib.h>

void pares(int a, int b)
{
    int i;
    int conta; 

    if(a < b)
    {
        for(i = a; i <= b; i++)
        {
            conta = i % 2;
            if(conta == 0)
            {
                printf("Numeros pares no intervalo de a e b: %d\n", i);
            }
        }
    }

    if(a > b)
    {
        for(i = b; i <= a; i++)
        {
            conta = i % 2;
            if(conta == 0)
            {
                printf("Numeros pares no intervalo de a e b: %d\n", i);
            }
        }
    }
}

int main()
{
    int a;
    int b;
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    pares(a, b);
    return 0;
}