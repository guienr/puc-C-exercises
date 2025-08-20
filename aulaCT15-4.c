#include <stdio.h>
#include <stdlib.h>

int num_termos()
{
    int termos;
    printf("Digite quantos termos deseja somar: ");
    scanf("%d", &termos);
    if(termos <= 0)
    {
        printf("Numero invalido digitado");
        exit(0);
    }
    return termos;
}

int soma(int termos)
{
    if(termos == 1)
    {
        return 1;
    }
    else
    {
        return (termos * termos) + soma(termos - 1);
    }
}

int main()
{
    int termos;
    int somas;
    termos = num_termos();
    somas = soma(termos);
    printf("Soma dos %d termos: %d", termos, somas);
    return 0;
}