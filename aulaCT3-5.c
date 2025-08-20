#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int lado1;
    int lado2;
    int lado3;
    printf("digite o lado 1 do triangulo: ");
    scanf("%d", &lado1);
    printf("digite o lado 2 do triangulo: ");
    scanf("%d", &lado2);
    printf("digite o lado 3 do triangulo: ");
    scanf("%d", &lado3);
    if((lado1 + lado2) > lado3 && (lado2 + lado3) > lado1 && (lado3 + lado1) > lado2)
    {
        if(lado1 == lado2 && lado1 == lado3)
        {
        printf("o triangulo e equilatero");
        }
        else{
            if(lado1 == lado2 || lado2 == lado3 || lado3 == lado1)
            {
            printf("o triangulo e isosceles");
            }
            else
            {
            printf("o triangulo e escaleno");
            }
        }
    }
    else {
        printf("os lados nao formam um triangulo");
    }
    return 0;
}