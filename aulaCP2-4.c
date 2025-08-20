#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal;
    float reaj;
    printf("digite o salario do funcionario: ");
    scanf("%f", &sal);
    if(sal < 500)
    {
        reaj = sal * 1.15;
    }
    if(500 <= sal && sal <= 1000)
    {
        reaj = sal * 1.1;
    }
    if(sal > 1000)
    {
        reaj = sal * 1.05;
    }
    printf("salario do funcionario: R$%.2f\n", sal);
    printf("salario reajustado: R$%.2f", reaj);
    return 0;
}