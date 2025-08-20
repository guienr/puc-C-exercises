#include <stdio.h>
#include <stdlib.h>

int main()
{
    int comp;
    int larg;
    int preco;
    int custo;
    printf("digite o comprimento da sala: ");
    scanf("%d", &comp);
    printf("digite a largura da sala: ");
    scanf("%d", &larg);
    printf("informe o preco do metro quadrado do carpete: ");
    scanf("%d", &preco);
    custo = (comp * larg) * preco;
    printf("comprimento: %dm\n", comp);
    printf("largura: %dm\n", larg);
    printf("preco do metro quadrado do carpete: %d reais/m^2\n", preco);
    printf("custo total: %d reais", custo);
    return 0;
}