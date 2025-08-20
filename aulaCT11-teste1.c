#include <stdio.h>
#include <stdlib.h>

int ler()
{
    int aux;
    printf("Digite um numero: ");
    scanf("%d", &aux);
    return aux;
}

void teste(int a, int b, int *c)
{
    a = a + 1;
    b = b - 2;
    if(a < b)
    {
        *c = 2 * a + b;
    }
    else
    {
        *c = a + 2 * b;
    }
}

int teste1(int x)
{
    int i = 1;
    int aux = 0;
    do
    {
        aux = aux + i;
        i = i + 2;
    }
    while(i < x);
    return x;
}

int main()
{
    int um;
    int dois;
    int tres;
    um = ler();
    dois = ler();
    tres = ler();
    teste(um, dois, &tres);
    dois = teste1(tres);
    printf("um = %d, dois = %d, tres = %d", um, dois, tres);
    return 0;
}


//entrada: 7 3 5

/*
a   b   c   i   aux x
7   3   5   1   0   10
8   1   10  3   1
7   3       5   2
    10      7   3
            9   4
            11  5
*/