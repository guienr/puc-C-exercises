#include <stdio.h>
#include <stdlib.h>

int main()
{
    int area, base, altu;
    printf("digite o valor da base do triangulo: ");
    scanf("%d", &base);
    printf("digite o valor da altura do trangulo: ");
    scanf("%d", &altu);
    area = (base * altu) / 2;
    printf("base = %d\n", base);
    printf("altura = %d\n", altu);
    printf("area = %d", area);
    return 0;
}