#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float fixo = 1500;
    float com;
    float carros;
    float val;
    float tot;
    float adic;
    float sal;
    printf("digite o numero total de carros vendidos no mes: ");
    scanf("%f", &carros);
    printf("digite o valor dos carros: ");
    scanf("%f", &val);
    com = 200 * carros;
    adic = (carros * val * 0.05);
    tot = carros * val;
    sal = fixo + com + adic;
    printf("salario base: %.2f reais\n", fixo);
    printf("numero de carros vendidos: %.0f carros\n", carros);
    printf("total de vendas: %.2f reais\n", tot);
    printf("total de comissao: %.2f reais\n", com);
    printf("total do adicional: %.2f reais\n", adic);
    printf("salario a receber: %.2f", sal);
    return 0;
}