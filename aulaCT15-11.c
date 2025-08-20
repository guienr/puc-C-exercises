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

int menorv(int v[tam], int i, int menor)
{
    if(i == tam)
    {
        return menor;
    }
    if(v[i] < menor)
    {
    menor = v[i];
    return menorv(v, i + 1, menor);
    }
    return menorv(v, i + 1, menor);
}

int main()
{
    int v[tam];
    int menor;
    
    lerv(v, 0);
    menor = menorv(v, 0, v[0]);
    printf("Menor: %d\n", menor);
    return 0;
}