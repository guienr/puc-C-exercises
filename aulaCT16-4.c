#include <stdio.h>
#include <stdlib.h>
#define maxtam 15

void lerv(int v[maxtam], int *tam, int *maiores)
{
    int i = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", tam);
    system("cls");
    if(*tam > 15 || *tam < 1)
    {
        printf("Numero invalido digitado");
        exit(0);
    }

    for(i = 0; i < *tam; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
        if(v[i] > 30)
        {
            (*maiores)++;
        }
    }
    system("cls");
}

int main()
{
    int i = 0;
    int v[maxtam];
    int tam;
    int maiores = 0;

    lerv(v, &tam, &maiores);
    for(i = 0; i < tam; i++)
    {
        printf("v[%d] = %d\n", i, v[i]);
    }
    printf("\n");
    printf("Quantidade de numeros maiores que 30: %d", maiores);
    return 0;
}