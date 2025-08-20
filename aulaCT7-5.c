#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    int anos;
    int mes;
    int dias;
    int anoatual;
    printf("Digite o ano que voce nasceu: ");
    scanf("%d", &ano);
    printf("Digite o ano atual: ");
    scanf("%d", &anoatual);
    anos = anoatual - ano;
    mes = anos * 12;
    dias = anos * 365;
    printf("Quantidade de anos que voce ja viveu: %d\n", anos);
    printf("Quantidade de meses que voce ja viveu: %d\n", mes);
    printf("Quantidade de dias que voce ja viveu: %d", dias);
    return 0;
}