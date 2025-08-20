#include <stdio.h>
#include <stdlib.h>

int ler_numero()
{
    int num;
    printf("Digite ate que numero deseja imprimir: ");
    scanf("%d", &num);
    if(num <= 0)
    {
        printf("Numero invalido digitado");
        exit(0);
    }
    return num;
}

int imprimir_numeros(int i, int num)
{
    printf("%d\n", i);
    if(i == num)
    {
        return num;
    }
    else
    {
        return imprimir_numeros(i + 1, num);
    }
}

int main()
{
    int num;
    int i = 0;
    num = ler_numero();
    imprimir_numeros(i, num);
    return 0;
}