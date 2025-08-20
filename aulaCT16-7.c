#include <stdio.h>
#include <stdlib.h>
#define maxtam 15

int main()
{
    int v[maxtam];
    int tam;
    int i = 0;
    int conta = 0;
    int pares = 0;
    int mult5 = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    for(i = 0; i < tam; i++)
    {
        do
        {
            printf("v[%d] = ", i);
            scanf("%d", &v[i]);  
            if(v[i] < 0)
            {
                printf("Numero invalido digitado");
                system("pause");
                system("cls");
            }      
        } 
        while(v[i] < 0);
        
        conta = v[i] % 2;
        if(conta == 0)
        {
            pares++;
        }

        conta = v[i] % 5;
        if(conta == 0)
        {
            mult5++;
        }
    }
    system("cls");

    for(i = 0; i < tam; i++)
    {
        printf("v[%d] = %d\n", i, v[i]);
    }
    printf("\nQuantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros multiplos de 5: %d\n", mult5);
    return 0;
}