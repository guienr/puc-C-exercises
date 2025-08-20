#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = 1;
    float b = 1;
    float c = 1;
    float d = 1;
    float e = 0;
    float f = 0;
    float x = 0;
    float y = 0;
    float aux = 0;
    while(a != 0 && b != 0 && c != 0 && d != 0)
    {
        printf("Digite o valor de a: ");
        scanf("%f", &a);
        printf("Digite o valor de b: ");
        scanf("%f", &b);
        printf("Digite o valor de c: ");
        scanf("%f", &c);
        printf("Digite o valor de d: ");
        scanf("%f", &d);
        printf("Digite o valor de e: ");
        scanf("%f", &e);
        printf("Digite o valor de f: ");
        scanf("%f", &f);
        if(a == 0 && b == 0 && c == 0 && d == 0)
        {
            exit(0);
        }
        aux = ((a * e) - (b * d));
        x = ((c * e) - (b * f)) / ((a * e) - (b * d));
        y = ((a * f) - (c * d)) / ((a * e) - (b * d));
        if(aux == 0)
        {
            printf("O sistema nao tem solucao\n");
        }
        else
        {
            printf("x = %.2f\n", x);
            printf("y = %.2f\n", y);
        }
    }
    return 0;
}