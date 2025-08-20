#include <stdio.h>
#include <stdlib.h>

int ler_num()
{
    int num;
    printf("Digite o numero: ");
    scanf("%d", &num);
    return num;
}

int binario(int num)
{
    int resto;
    if(num == 0)
    {
        return 0;
    }
    else
    {
        return (num % 2) + 10 * binario(num / 2);
    }
}

int inversao(int bin)
{
    int invbin = 0;
    while(bin > 0)
    {
        invbin = (invbin * 10) + (bin % 10);
        bin /= 10;
    }
    return invbin;
}

int main()
{
    int num;
    int bin;
    int invbin;
    num = ler_num();
    bin = binario(num);
    invbin = inversao(bin);

    printf("\nNumero digitado: %d\n", num);
    printf("Binario do numero: %d", invbin);
    return 0;
}