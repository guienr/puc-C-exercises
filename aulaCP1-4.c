#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vol, lado;
    printf("digite o valor do lado do cubo: ");
    scanf("%d", &lado);
    vol = lado * lado * lado;
    printf("valor do lado: %d\n", lado);
    printf("valor do volume: %d", vol);
    return 0;
}