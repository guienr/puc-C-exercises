#include <stdio.h>
#include <stdlib.h>
#define tam 20

void lerv(int v[tam])
{
    int i = 0;
    for(i = 0; i < tam; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }
}

void quant(int v[tam], int *p, int *div5)
{
    int i = 0;
    int contap;
    int conta5;
    *p = 0;
    *div5 = 0;
    for(i = 0; i < tam; i++)
    {
        contap = v[i] % 2;
        conta5 = v[i] % 5;
        if(contap == 0)
        {
            (*p)++;
        }
        if(conta5 == 0)
        {
            (*div5)++;
        }
    }
}

void mediav(int v[tam], float *media, int *maiores)
{
    int i = 0;
    *media = 0;
    *maiores = 0;
    for(i = 0; i < tam; i++)
    {
        *media += (float) v[i];
    }
    *media /= 20;
    for(i = 0; i < tam; i++)
    {
        if(v[i] > *media)
        {
            (*maiores)++;
        }
    }
}

int main()
{
    int i = 0;
    int v[tam];
    int p;
    int div5;
    float media;
    int maiores;
    lerv(v);
    quant(v, &p, &div5);
    mediav(v, &media, &maiores);
    system("cls");
    for(i = 0; i < tam; i++)
    {
        printf("v[%d] = %d\n", i, v[i]);
    }
    printf("Quantidade de pares: %d\n", p);
    printf("Quantidade de numero divisiveis por 5: %d\n", div5);
    printf("Media: %.2f\n", media);
    printf("Quantidade de numeros maiores que a media: %d\n", maiores);
    return 0;
}