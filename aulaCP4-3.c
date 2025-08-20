#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int repet = 3;
    int maior1;
    int maior2;
    printf("Digite um numero: ");
    scanf("%d", &num);
    maior1 = num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num > maior1)
    {
        maior2 = maior1;
        maior1 = num;
    }
    else
    {
        maior2 = num;
    }
    for(repet = 3; repet <= 10; repet++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num > maior1)
        {
            maior2 = maior1;
            maior1 = num;
        }
    }
    printf("Primeiro maior numero: %d\n", maior1);
    printf("Segundo maior numero: %d", maior2);
    return 0;
}