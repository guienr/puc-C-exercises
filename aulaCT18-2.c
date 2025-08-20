#include <stdio.h>
#include <stdlib.h>
#define tam 16

int main()
{
    int v[tam];
    int i = 0;
    int j = 8;
    int aux;

    for(i = 0; i < tam; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 8; i++)
    {
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
        j++;
    }

    printf("\n");
    for(i = 0; i < tam; i++)
    {
        printf("v[%d] = %d\n", i, v[i]);
    }
    return 0;
}