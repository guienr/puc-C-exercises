#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int inic = 1;
    int conta;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for(inic = 1; inic < num; inic++)
    {
        conta = inic % 4;
        if(conta == 0)
        {
            printf("O numero %d e divisivel por 4\n", inic);
        }
    }
    return 0;
}