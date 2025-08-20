#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    float v[15];
    float media = 0;
    float porc = 0;
    for(i = 0; i < 15; i++)
    {
        printf("v[%d] = ", i);
        scanf("%f", &v[i]);
        if(v[i] < 0)
        {
            printf("Numero invalido");
            exit(0);
        }
        media += v[i];
    }
    media /= 15;
    for(i = 0; i < 15; i++)
    {
        if(v[i] > media)
        {
            porc++;
        }
        porc = (porc / 15) * 100;
    }
    system("cls");
    for(i = 0; i < 15; i++)
    {
        printf("v[%d] = %.0f\n", i, v[i]);
    }
    printf("Media dos numeros digitados: %.2f\n", media);
    printf("Porcentagem dos valores do vetor maiores que a media: %.2f", porc);
    return 0;
}