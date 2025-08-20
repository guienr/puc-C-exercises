#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal, reaj, perc;
    printf("digite o valor do salario do funcionario: ");
    scanf("%f", &sal);
    printf("digite o percentual de reajuste: ");
    scanf("%f", &perc),
    reaj = sal * (perc / 100);
    reaj = sal + reaj;
    printf("salario: %.0f\n", sal);
    printf("percentual: %.0f\n", perc);
    printf("reajuste do salario: %.0f", reaj);
    return 0;
}