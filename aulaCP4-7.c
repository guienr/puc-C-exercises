#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1;
    int mediap = 0;
    int mediag = 0;
    int conta = 0;
    int par = 0;
    int divp = 0;
    int imp = 0;
    int rep = 0;
    while(num != 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num == 0)
        {
            break;
        }
        if(num < 0)
        {
            printf("Numero invalido\n");
            continue;
        }
        conta = num % 2;
        if(conta == 0)
        {
            par += 1;
            mediap += num;
            divp += 1;
        }
        else
        {
        imp += 1;
        }
        mediag += num;
        rep += 1;
    }
    if(divp == 0)
    {
        divp = 1;
    }
    mediag /= rep;
    mediap /= divp;
    printf("Quantidade de pares digitados: %.d\n", par);
    printf("Quantidade de impares digitados: %.d\n", imp);
    printf("Media dos numeros pares: %.d\n", mediap);
    printf("Media de todos os valores digitados: %d\n", mediag);
    return 0;
}