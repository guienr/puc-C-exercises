#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dist;
    int gast;
    int cons;
    printf("digite a distancia percorrida: ");
    scanf("%d", &dist);
    printf("digite o total de combustivel gasto: ");
    scanf("%d", &gast);
    cons = dist / gast;
    printf("distancia percorrida: %dm\n", dist);
    printf("total de combustivel gasto: %dL\n", gast);
    printf("consumo do veiculo: %dm/L", cons);
    return 0;
}