#include <stdio.h>
#include <stdlib.h>

void ler(float *x, float *y, float *z)
{
    printf("Digite o valor de x: ");
    scanf("%f", x);
    printf("Digite o valor de y: ");
    scanf("%f", y);
    printf("Digite o valor de z: ");
    scanf("%f", z);
}

/*
float calculo(float x, float y, float z)
{
    float resultado;
    resultado = (x * x) + y + z;
    return resultado;
}
*/

/*
void calculo(float x, float y, float z, float *r)
{
    *r = (x * x) + y + z;
}
*/

int main()
{
    float n1;
    float n2;
    float n3;
    float r;

    ler(&n1, &n2, &n3);

    /*
    r = calculo(n1, n2, n3);
    printf("Resultado: %.2f", r);
    */

    /*
    calculo(n1, n2, n3, &r);
    printf("Resultado: %.2f", r);
    */
    return 0;
}