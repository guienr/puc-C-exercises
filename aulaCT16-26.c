#include <stdio.h>
#include <stdlib.h>
#define maxtam 100

void lerv(int v[maxtam], int *tam, int i)
{
    printf("Digite o tamanho do vetor: ");
    scanf("%d", tam);
    if(tam <= 0)
    {
        printf("Numero invalido");
        exit(0);
    }
    
    for(i = 0; i < *tam; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }
}

int medias(int v[maxtam], int tam, int i)
{
    if(i == tam - 1)
    {
        return v[i] / tam;
    }
    else
    {
        return v[i] / tam + medias(v, tam, i + 1);
    }
}

int main()
{
    int v[maxtam];
    int tam;
    int i = 0;
    int media;

    lerv(v, &tam, i);
    media = medias(v, tam, i);

    printf("\nMedia: %d", media);
    return 0;
}