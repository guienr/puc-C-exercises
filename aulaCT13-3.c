#include <stdio.h>
#include <stdlib.h>
#define tam 10

void lerv(int v[tam])
{
    int i = 0;
    for(i = 0; i < tam; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }
}

void somatoria(int v[tam], int *soma)
{
    int i = 0;
    int num1;
    int num2;
    *soma = 0;
    printf("Digite um numero(entre 0 e 9): ");
    scanf("%d", &num1);
    if(num1 > 9 || num1 < 0)
    {
        printf("Deve ser um numero entre 0 e 9");
        exit(0);
    }
    printf("Digite outro numero(entre 0 e 9): ");
    scanf("%d", &num2);
    if(num2 > 9 || num2 < 0)
    {
        printf("Deve ser um numero entre 0 e 9");
        exit(0);
    }
    for(i = 0; i < tam; i++)
    {
        if(num1 > num2)
        {
            if(v[i] > num2 && v[i] < num1)
            {
                *soma = *soma + v[i];
            }
        }
        if(num2 > num1)
        {
            if(v[i] < num2 && v[i] > num1)
            {
                *soma = *soma + v[i];
            }
        }
    }
}

int main()
{
    int v[tam];
    int soma;
    lerv(v);
    somatoria(v, &soma);
    printf("Soma dos valores entre os numero digitados: %d\n", soma);
    return 0;
}