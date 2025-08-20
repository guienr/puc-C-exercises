#include <stdio.h>
#include <stdlib.h>

int quant_termos()
{
    int num;
    printf("Digite quantos termos deseja somar: ");
    scanf("%d", &num);
    if(num <= 0)
    {
        printf("Numero de termos invalido\n");
        exit(0);
    }
    return num;
}

int soma_termos(int num, int i)
{
    if(i == num)
    {
        return (num * num * num);
    }
    else
    {
        return (i * i * i) + soma_termos(num, i + 1);
    }
}

int main()
{
    int num;
    int i = 1;
    int soma;
    num = quant_termos();
    soma = soma_termos(num, i);
    printf("Soma: %d\n", soma);
    return 0;
}