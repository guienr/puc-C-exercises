#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1;
    while(num != 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        printf("numero: %d\n", num);
    }
    return 0;
}