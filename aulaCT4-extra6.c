#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int div;
    int aux;
    int conta;
    int contador = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    aux = num;
    for(div = 1; div <= num; div++)
    {
        conta = num % div;
        if(conta == 0)
        {
            printf("Numeros divisores do numero digitados: %d\n", div);
            contador = contador + 1;
            if(contador == 2)
            {
                printf("O numero %d e primo", aux);
            }
            else
            {
                printf("O numero %d nao e primo", aux);
            }
        }
    }
    return 0;
}

//Elabore um programa que determine se um numero e primo