#include <stdio.h>
#include <stdlib.h>
#define tam 20

int main()
{
    int v[tam];
    int i = 0;
    int x;
    int numx = 0;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    system("cls");

    for(i = 0; i < tam; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);  
        
        if(v[i] == x)
        {
            numx++;
        }
    }
    printf("\n");

    for(i = 0; i < tam; i++)
    {
        if(v[i] == x)
        {
            printf("Posicao em que o numero x aparece no vetor: %d\n", i);
        }
    }

    if(numx == 0)
    {
        printf("O numero x nao apareceu nenhuma vez no vetor");
    }
    
    return 0;
}