#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int x[5];
    int y[5];
    int k;
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    for(i = 0; i < 5; i++)
    {
        printf("x[%d] = ", i);
        scanf("%d", &x[i]);
    }
    for(i = 0; i < 5; i++)
    {
        y[i] = x[i] * k;
    }
    printf("Vetor x: \n");
    for(i = 0; i < 5; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }
    printf("Valor de k: %d\n", k);
    printf("Vetor de y: \n");
    for(i = 0; i < 5; i++)
    {
        printf("y[%d] = %d\n", i, y[i]);
    }
    return 0;
}