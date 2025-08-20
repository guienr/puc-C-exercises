#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a;
    float b;
    float c;
    float delta;
    float r1;
    float r2;
    printf("Digite o numero a: ");
    scanf("%f", &a);
    printf("Digite o numero b: ");
    scanf("%f", &b);
    printf("Digite o numero c: ");
    scanf("%f", &c);
    delta = pow(b, 2) - (4 * a * c);
    if(delta < 0)
    {
        printf("nao existe solucao");
    }
    else
    {
        if(delta >= 0)
        {
        r1 = (-b + sqrt(delta)) /  (2 * a);
        r2 = (-b - sqrt(delta)) / (2 * a);
        printf(" a = %.2f\n", a); 
        printf(" b = %.2f\n", b); 
        printf(" c = %.2f\n", c);
        printf(" raiz 1 = %.2f\n", r1); 
        printf(" raiz 2 = %.2f", r2);
        }
    }
    return 0;
}
