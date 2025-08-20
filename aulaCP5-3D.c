#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5];
    int i;
    int j; 
    int aux;
    for(i = 0; i < 5; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
        
        if(v[i] < 0)
        {
            printf("Numero invalido\n");
            exit(0);
        }
        for(j = i; j > 0 && v[j] < v[j - 1]; j--)
        {
            aux = v[j];
            v[j] = v[j - 1];
            v[j - 1] = aux;
        }
    }
    printf("\nVetor ordenado:\n");
    for(i = 0; i < 5; i++)
    {
        printf("v[%d] = %d\n", i, v[i]);
    }
    return 0;
}
