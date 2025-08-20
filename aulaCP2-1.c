#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l1;
    int l2;
    int l3;
    int l4;
    printf("digite o lado 1 do quadrilatero: ");
    scanf("%d", &l1);
    printf("digite o lado 2 do quadrilatero: ");
    scanf("%d", &l2);
    printf("digite o lado 3 do quadrilatero: ");
    scanf("%d", &l3);
    printf("digite o lado 4 do quadrilatero: ");
    scanf("%d", &l4);
    if(l1 == l3 && l2 == l4)
    {
        if(l1 == l2 && l1 == l4)
        {
            printf("o quadrilatero e um quadrado");
        }
        else
        {
            printf("o quadrilatero e um retangulo");
        }
    }
    else
    {
        printf("o quadrilatero nao e nem um quadrado nem um retangulo");
    }
    return 0;
}