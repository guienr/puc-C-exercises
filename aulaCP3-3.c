#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal;
    int plano;
    float novosal;
    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &sal);
    printf("Digite o plano de trabalho do funcionario: ");
    scanf("%d", &plano);
    if(plano != 1 && plano != 2 && plano != 3)
    {
        printf("Plano invalido");
        exit(0);
    }
    switch(plano)
    {
        case 1:
        novosal = sal * 1.1;
        break;

        case 2:
        novosal = sal * 1.15;
        break;

        case 3:
        novosal = sal * 1.2;
        break;
    }
    printf("Salario atual: R$%.2f\n", sal);
    printf("Plano de trabalho: %d\n", plano);
    printf("Novo salario: R$%.2f", novosal);
    return 0;
}