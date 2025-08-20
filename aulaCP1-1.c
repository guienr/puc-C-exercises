#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, ant, suc;
    printf("digite um numero: ");
    scanf("%d", &num);
    ant = num - 1;
    suc = num + 1;
    printf("numero: %d\n", num);
    printf("antecessor: %d\n", ant);
    printf("sucessor: %d", suc);
    return 0;
}