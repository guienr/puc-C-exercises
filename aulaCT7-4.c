#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal;
    float desc;
    float aul;
    float val;
    printf("Digite o valor da hora aula: ");
    scanf("%f", &val);
    printf("Digite o numeros de aulas dadas em um mes: ");
    scanf("%f", &aul);
    printf("Digite o desconto em porcentagem do INSS: ");
    scanf("%f", &desc);
    sal = (val * aul);
    sal = sal - (sal * (desc / 100));
    printf("Valor da hora aula: %.0f\n", val);
    printf("Numero de aulas dadas em um mes: %.0f\n", aul);
    printf("Desconto em porcentagem do INSS: %.2f\n", desc);
    printf("Salario liquido: %.2f", sal);
    return 0;
}