#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prod1 = 0; 
    int prod2 = 0;
    int prod3 = 0;

    printf("digite o valor do primeiro produto: ");
    scanf("%d", &prod1);
    printf("digite o valor do segundo produto: ");
    scanf("%d", &prod2);
    printf("digite o valor do terceiro produto: ");
    scanf("%d", &prod3);
    if(prod1 < prod2 && prod1 < prod3)
    {
        printf("compre o primeiro produto");
    }
    if(prod2 < prod3)
    {
        printf("compre o segundo produto");
    }
    else
    {
        printf("compre o terceiro produto");

    }
    return 0;
}