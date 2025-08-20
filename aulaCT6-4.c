#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[5];
    int y[5];
    int i = 0;
    int j = 0;
    for(i = 0; i < 5; i++)
    {
        printf("x[%d] = ", i);
        scanf("%d", &x[i]);
    }
    for(i = 4; i >= 0; i--)
    {
        y[j] = x[i];
        j++;
    }
    printf("Vetor x:\n");
    for(i = 0; i < 5; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }
    printf("Vetor y, inverso de x:\n");
    for(i = 0; i < 5; i++)
    {
        printf("y[%d] = %d\n", i, y[i]);
    }
    return 0;
}