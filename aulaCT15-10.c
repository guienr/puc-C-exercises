#include <stdio.h>
#include <stdlib.h>

int ler_numero()
{
    int num;
    printf("Digite um numero em base decimal: ");
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

int inverter(int bin)
{
    int invbin = 0;
    while(bin > 0) 
    {
        invbin = invbin * 10 + (bin % 10);
        bin /= 10;
    }
    return invbin;
}

int main()
{
    int num;
    int bin = 0;
    int invbin = 0;

    num = ler_numero();
    bin = binario(num);
    invbin = inverter(bin);
    
    printf("Numero digitado: %d\n", num);
    printf("Numero binario: %d", invbin);
    return 0;
}