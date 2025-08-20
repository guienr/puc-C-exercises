#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hor;
    float sal;
    float salh;
    float extra;
    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%f", &hor);
    printf("Digite o salario por hora: ");
    scanf("%f", &salh);
    sal = salh * hor;
    if(hor > 160)
    {
        extra = hor - 160;
        sal = sal + (extra * (salh * 0.5));
    }
    printf("Quantidade de horas trabalhadas no mes: %.0f\n", hor);
    printf("Salario por hora: %.2f\n", salh);
    printf("Salario do funcionario: %.2f", sal);
    return 0;
}