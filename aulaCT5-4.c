#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int mult = 1;
    int resultado = 0;
    printf("Digite um numero para saber a tabuada dele: ");
    scanf("%d", &num);
    printf("Tabuada de %d\n", num);
    for(mult = 1; mult <= 10; mult++)
    {
        resultado = num * mult;
        printf("%d x %d = %d\n", num, mult, resultado);
    }
    system("pause");
    return 0;
}