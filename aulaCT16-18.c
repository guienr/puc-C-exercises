#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void lerc(float *cat1, float *cat2)
{
    printf("Digite o valor do cateto 1: ");
    scanf("%f", cat1);
    printf("Digite o valor do cateto 2: ");
    scanf("%f", cat2);
}

/*
float hipotenusa(float cat1, float cat2)
{
    float r;
    r = sqrt((cat1 * cat1) + (cat2 * cat2));
    return r;
}
*/

/*
void hipotenusa(float cat1, float cat2, float *r)
{
    *r = sqrt((cat1 * cat1) + (cat2 * cat2));
}
*/

int main()
{
    float cat1;
    float cat2;
    float r;

    lerc(&cat1, &cat2);

    /*
    r = hipotenusa(cat1, cat2);
    printf("Hipotenusa: %.2f", r);
    */

    /*
    hipotenusa(cat1, cat2, &r);
    printf("Hipotenusa: %.2f", r);
    */
    
    return 0;
}