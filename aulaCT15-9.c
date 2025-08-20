#include <stdio.h>
#include <stdlib.h>
#define tam 5

void lerv(int v[tam], int i)
{
    for(i = 0; i < tam; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }
}

int mediav(int v[tam], int i, int tamanho)
{
    if(i == tam - 1)
    {
        return v[i] / tamanho;
    }
    else
    {
        return v[i] / tamanho + mediav(v, i + 1, tamanho);
    }
}

int main()
{
    int v[tam];
    int i = 0;
    int tamanho = tam;
    int media;
    lerv(v, i);
    media = mediav(v, i, tamanho);
    printf("Media dos valores do vetor: %d\n", media);
    return 0;
}