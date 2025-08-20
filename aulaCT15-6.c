#include <stdio.h>
#include <stdlib.h>

int ler_numero()
{
    int num;
    printf("Digite que numero ate zero deseja imprimir: ");
    scanf("%d", &num);
    if(num <= 0)
    {
        printf("Numero digitado invalido");
        exit(0);
    }
    return num;
}

int imprimir_numeros(int num)
{
    printf("%d\n", num);
    if(num == 0)
    {
        return 0;
    }
    else
    {
        return imprimir_numeros(num - 1);
    }
}

int main()
{
    int num;
    num = ler_numero();
    imprimir_numeros(num);
    return 0;
}