#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int v[40];
    int par = 0;
    int conta;
    for(i = 0; i < 40; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
        conta = v[i] % 2;
        if(conta == 0)
        {
            par++;
        }
    }
    printf("O vetor possui %d numeros pares", par);
    return 0;
}