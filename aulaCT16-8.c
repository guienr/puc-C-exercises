#include <stdio.h>
#include <stdlib.h>
#define tam 8

void lerv(int v[tam], int *maiores)
{
    int i = 0;
    for(i = 0; i < tam; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
        if(v[i] > 30)
        {
            (*maiores)++;
        }
    }
}

int main()
{
    int v[tam];
    int maiores = 0;

    lerv(v, &maiores);
    printf("\nQUantidade de numeros maiores que 30: %d\n", maiores);
    return 0;
}