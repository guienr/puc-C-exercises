#include <stdio.h>
#include <stdlib.h>

int ler()
{
    int aux;
    printf("Digite um valor: ");
    scanf("%d", &aux);
    return aux;
}

int teste(int x, int y)
{
    int aux;
    if(x > y)
    {
        x *= 2;
        y *= 3;
    }
    else
    {
        x *= 3;
        y *= 2;
    }
    aux = x + y;
    return aux;
}

int main()
{
    int x, y, res;
    x = ler();
    y = ler();
    res = teste(x, y);
    printf("x = %d, y = %d, res = %d", x, y, res);
    printf("\n\n");
    return 0;
}

//entrada: 2 3;

/*
x   y   aux res
2   3   12  12
6   6   
2   3
*/