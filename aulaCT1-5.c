#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int hor;
    int min;
    int seg;
    printf("digite os segundos: ");
    scanf("%d", &seg);
    min = seg / 60;
    hor = seg / 3600;
    printf("segundos: %d\n", seg);
    printf("minutos: %d\n", min);
    printf("horas: %d", hor);
    return 0;
}