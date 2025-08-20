#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int inverso = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num < 0)
    {
        printf("Numero invalido");
        exit(0);
    }
    while (num != 0)
    {
        inverso = (inverso * 10) + (num % 10);
        num /= 10;
    }
    printf("Numero invertido: %d\n", inverso);
    system("pause");
    return 0;
}