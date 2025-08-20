#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int a[6];
    int soma;
    for(i = 0; i < 6; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    //atribuir 1, 0, 5, -2, -5, 7
    soma = a[0] + a[1] + a[5];
    a[4] = 100;
    for(i = 0; i < 6; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    printf("Soma: %d\n", soma);
    return 0;
}