#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int v[15];
    int par = 0;
    int mult5 = 0;
    int contap;
    int conta5;
    for(i = 0; i < 15; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
        if(v[i] < 0)
        {
            printf("Numero invalido");
            exit(0);
        }
        contap = v[i] % 2;
        conta5 = v[i] % 5;
        if(contap == 0)
        {
            par++;
        }
        if(conta5 == 0)
        {
            mult5++;
        }
    }
    system("cls");
    for(i = 0; i < 15; i++)
    {
        printf("v[%d] = %d\n", i, v[i]);
    }
    printf("Quantidade de numeros pares: %d\n", par);
    printf("Quantidade de multiplos de 5: %d\n", mult5);
    return 0;
}