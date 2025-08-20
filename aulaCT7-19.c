#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i= 0;
    int v[20];
    int x;
    int cont = 0;
    for(i = 0; i < 20; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    for(i = 0; i < 20; i++)
    {
        if(x == v[i])
        {
            printf("O valor de x foi encontrado na posicao v[%d]\n", i);
            cont++;
        }
    }
    if(cont == 0)
    {
        printf("O valor de x nao foi encontrado em nenhuma posicao");
    }
    return 0;
}