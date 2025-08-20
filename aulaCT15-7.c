#include <stdio.h>
#include <stdlib.h>
#define tam 5

void lerv(int v[tam])
{
    int i = 0;
    for(i = 0; i < tam; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }
}

int somav(int v[tam], int i)
{
    if(i == tam - 1)
    {
        return v[i];
    }
    else
    {
        return v[i] + somav(v, i + 1);
    }
}

int main()
{
    int v[tam];
    int i = 0;
    int soma;
    lerv(v);
    soma = somav(v, i);
    printf("Soma: %d", soma);
    return 0;
}