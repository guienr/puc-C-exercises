#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int conta;
    printf("digite o numero a: ");
    scanf("%d", &a);
    printf("digite o numero b: ");
    scanf("%d", &b);
    if(a == b)
    {
        conta = a + b;
        c = conta;
    }
    else
    {
        conta = a * b;
        c = conta;
    }
    printf("c: %d", c);
    return 0;
}