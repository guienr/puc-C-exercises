#include <stdio.h>
#include <stdlib.h>
#define tam 10

void lerv(int v[tam], int i)
{
    for(i = 0; i < tam; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }
}

int maximo(int v[tam], int i, int max)
{
    if(i == tam - 1)
    {
        if(v[i] > max)
        {
            max = v[i];
        }
        return max;
    }
    else
    {
        if(v[i] > max)
        {
            max = v[i];
        }
        return maximo(v, i + 1, max);
    }
}

int main()
    {
        int v[tam];
        int i = 0;
        int max;

        lerv(v, i);
        max = v[0];
        max = maximo(v, i, max);

        printf("Valor maximo do vetor: %d", max);
        return 0;
    }