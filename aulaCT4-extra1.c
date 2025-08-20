#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int contagem = 0;
    int conta = 0;
    int soma = 0;
    int menor = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    menor = num;
    while(num >= 0)
    {
        printf("Numero: %d\n", num);
        conta = num % 2;
        if(conta == 0 && num >= 0)
        {
            soma += num;
        }
        contagem += 1;
        if(num < menor)
        {
            menor = num;
        }
        printf("Digite um numero: ");
        scanf("%d", &num);
    }
    printf("Contagem: %d\n", contagem);
    printf("Soma dos pares: %d\n", soma);
    printf("Menor numero digitado: %d\n", menor);
    return 0;
}

/*leia quantos os números inteirosnate o número não ser positivo. imprima o menor numero digitado e a 
soma dos pares quantos numeros foram lidos*/