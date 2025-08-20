#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano, conta1, conta2, conta3;
    printf("digite o ano: ");
    scanf("%d", &ano);
    conta1 = ano % 4;
    conta2 = ano % 100;
    conta3 = ano % 400;
    if(conta1 == 0 && conta2 != 0 || conta2 == 0 && conta3 == 0)
    {
    printf("este ano e bissexto");
    }
    else
    {
    printf("este ano nao e bissexto");
    }
    return 0;
}