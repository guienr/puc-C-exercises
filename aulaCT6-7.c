#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int i = 0;
    int media = 0;
    int contador = 0;
    for(i = 0; i < 10; i++)
    {
        printf("Digite as idades a[%d] = ", i);
        scanf("%d", &a[i]);
        if(a[i] < 0)
        {
            printf("Idade invalida");
            return 0;
        }
        media = media + a[i];
        if(a[i] < 18)
        {
            contador = contador + 1;
        }
    }
    media = media / 10;
    printf("Todas as idades digitadas: \n");
    for(i = 0; i < 10; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    printf("Media das idades: %d\n", media);
    printf("Numero de pessoas menores de idade: %d", contador);
    return 0;
}