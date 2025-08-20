#include <stdio.h>
#include <stdlib.h>

int ler_inteiro()
{
    int num = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    return num;
}

int qtd_3(int a, int b, int c)
{
    int contador = 0;
    if(a % 3 == 0)
    {
        contador++;
    }
    if( b % 3 == 0)
    {
        contador++;
    }
    if(c % 3 == 0)
    {
        contador++;
    }
    return contador;
}

int main()
{
    int a = ler_inteiro();
    int b = ler_inteiro();
    int c = ler_inteiro();
    int contador = qtd_3(a, b, c);
    printf("Primeiro numero digitado: %d\n", a);
    printf("Segundo numero digitado: %d\n", b);
    printf("Terceiro numero digitado: %d\n", c);
    printf("Quantidade de numeros divisiveis por 3: %d\n", contador);
    return 0;
}