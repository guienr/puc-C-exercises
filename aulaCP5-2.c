#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int v[5];
    int maiores = 0;
    for(i = 0; i < 5; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
        if(v[i] > 30)
        {
            maiores++;
        }
    }
    for(i = 0; i < 5; i++)
    {
        printf("v[%d] = %d\n", i, v[i]);
    }
    printf("Quantidade de numeros maiores que 30: %d", maiores);
    return 0;
}