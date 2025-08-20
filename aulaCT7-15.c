#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int v[10];
    int a = 0;
    int b = 0;
    int c = 0;
    int quanta = 0;
    int quantb = 0;
    int quantc = 0;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    for(i = 0; i < 10; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
        if(v[i] == a)
        {
            quanta++;
        }
        if(v[i] == b)
        {
            quantb++;
        }
        if(v[i] == c)
        {
            quantc++;
        }
    }
    printf("O numero a aparece no vetor %d vezes\n", quanta);
    printf("O numero b aparece no vetor %d vezes\n", quantb);
    printf("O numero c aparece no vetor %d vezes\n", quantc);
    return 0;
}