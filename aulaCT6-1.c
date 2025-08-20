#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x[5];
    float y[5];
    int i;
    int j;
    float z[5];
    for(i = 0; i < 5; i++)
    {
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
    }
    for(j = 0; j < 5; j++)
    {
        printf("y[%d] = ", j);
        scanf("%f", &y[j]);
    }
    for(i = 0; i < 5; i++)
    {
        z[i] = x[i] * y[i];
    }
    printf("\nVetor x: \n");
    for(i = 0; i < 5; i++)
    {
        printf("x[%d] = %.0f\n", i, x[i]);
    }
    printf("Vetor y: \n");
    for(j = 0; j < 5; j++)
    {
        printf("y[%d] = %.0f\n", j, y[j]);
    }
    printf("Vetor z: \n");
    for(i = 0; i < 5; i++)
    {
        printf("z[%d] = %.0f\n ", i, z[i]);
    }
    return 0;
}