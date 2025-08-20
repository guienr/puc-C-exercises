#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int aux = 0;
    int conta = 1;
    printf("Digite um numero: ");
    scanf("%d", &num);
    aux = num;
    if(num < 0)
    {
        printf("Erro");
        exit(0);
    }
    if(num == 0)
    {
        conta = 1;
        printf("Numero: %d\n", aux);
        printf("Fatorial: %d", conta);
        exit(0);
    }
    while(num > 0)
    {
        conta = conta * num;
        num--;
    }
    printf("Numero: %d\n", aux);
    printf("Fatorial: %d", conta);
    return 0;
}