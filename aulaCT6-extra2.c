#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5];
    int b[5];
    int c[5];
    int i = 0;
    for(i = 0; i < 5; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 5; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    for(i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
    }
    printf("Vetor a: \n");
    for(i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    printf("Vetor b: \n");
    for(i = 0; i < 5; i++)
    {
        printf("b[%d] = %d\n", i, b[i]);
    }
    printf("Vetor c: \n");
    for(i = 0; i < 5; i++)
    {
        printf("c[%d] = %d\n", i, c[i]);
    }
    return 0;
}