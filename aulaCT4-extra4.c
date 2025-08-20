#include <stdio.h>
#include <stdlib.h>

int main()
{
        int num = 0;
        int div = 1;
        int conta = 0;
        printf("Digite um numero: ");
        scanf("%d", &num);
        while(div > 0)
        {
            conta = num % div;
            if(conta == 0)
            {
                printf("Divisores dos numeros digitados: %d\n", div);
            }
            div++;
            if(div > num)
            {
                exit(0);
            }
        }
        return 0;
    }


//Elabore um programa que imprima os divisores de um numero inteiro