#include <stdio.h>
#include <stdlib.h>

void ler_num(int *x)
{
    printf("Digite um numero: ");
    scanf("%d", x);
}

int fatorial(int n)
{
    int fat = 1;
    for(fat = 1; n > 0; n--)
    {
        fat = fat * n;
    }
    return fat;
}

void divisores(int valor)
{
    int div = 1;
    int conta;
    for(div = 1; div <= valor; div++)
    {
        conta = valor % div;
        if(conta == 0)
        {
            printf("Divisores do numero: %d\n", div);
        }
    }
}

int main()
{
    int num;
    int fat;
    int q = 1;
    do
    {
        system("cls");
        ler_num(&num);
        fat = fatorial(num);
        printf("Fatorial: %d\n", fat);
        divisores(num);
        printf("Deseja digitar mais um numero?\n");
        printf("\tSim(1)   Nao(0)\n");
        printf("--> ");
        scanf("%d", &q);
    }
    while(q == 1);
    return 0;
}