#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define tam 10

typedef struct equacao {
    float a;
    float b;
    float c;
} eq;

void preencher(eq coef[])
{
    int i = 0;
    for(i = 0; i < tam; i++)
    {
        printf("a = ");
        scanf("%f", &coef[i].a);
        printf("b = ");
        scanf("%f", &coef[i].b);
        printf("c = ");
        scanf("%f", &coef[i].c);
        system("cls");
    }
}

int main()
{
    eq coef[tam];
    float d;
    float r1;
    float r2;
    int i = 0;

    preencher(coef);

    for(i = 0; i < tam; i++)
    {
        printf("%.0fx2 + %.0fx + %.0f = 0\n", coef[i].a, coef[i].b, coef[i].c);
        d = (coef[i].b * coef[i].b) - 4 * coef[i].a * coef[i].c;
        if(d < 0)
        {
            printf("Nao possui raizes\n\n");
        }
        else
        {
            r1 = ((-coef[i].b) + sqrt(d)) / (2 * coef[i].a);
            r2 = ((-coef[i].b) - sqrt(d)) / (2 * coef[i].a);
            printf("raiz1: %.2f\n", r1);
            printf("raiz2: %.2f\n\n", r2);
        }
    }
    return 0;
}