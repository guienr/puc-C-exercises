#include <stdio.h>
#include <stdlib.h>
/*
float calculo(float x, float y, float z)
{
    float r;
    r = (x * x) + y + z;
    return r;
}
*/
/*
void calculo(float x, float y, float z, float *r)
{
    *r = (x * x) + y + z;
    printf("%f", *r);
}
*/
int main()
{
    float x;
    float y;
    float z;
    float r;
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);
    printf("Digite o valor de z: ");
    scanf("%f", &z);
    /*r = calculo(x, y, z);
    printf("Resultado: %f\n", r);
    calculo(x, y, z, &r);*/
    return 0;
}