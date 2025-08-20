#include <stdio.h>
#include <stdlib.h>
#define tam 4

int main()
{
    int i = 0;
    int j = 0;
    int m[tam][tam];
    int maiores = 0;

    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            printf("m[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
            if(m[i][j] > 10)
            {
                maiores++;
            }
        }
    }
    printf("\nQuantidades de numeros digitados maiores que 10: %d\n", maiores);
    return 0;
}