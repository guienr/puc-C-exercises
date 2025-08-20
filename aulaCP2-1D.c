#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1;
    float n2;
    float p1;
    float p2;
    float media;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite o segundo nota: ");
    scanf("%f", &n2);
    printf("Digite o peso da primeira nota: ");
    scanf("%f", &p1);
    printf("Digite o peso da segunda nota: ");
    scanf("%f", &p2);
    media = ((n1 * p1) + (n2 * p2)) / (p1 + p2);
    if(media == 10)
    {
        printf("aprovado com distincao");
    }
    else
    {
        if(media >= 7)
        {
        printf("aprovado");
        }
        if(media < 7)
        {
        printf("reprovado");
        }
    }
    return 0;
}