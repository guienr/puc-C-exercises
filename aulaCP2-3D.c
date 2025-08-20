#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    int y;
    printf("Digite o numero x: ");
    scanf("%d", &x);
    if(x < 1)
    {
        y = x;
        printf("y: %d", y);
    }
    if(x == 1)
    {
        y = 0;
        printf("y: %d", y);
    }
    if(x > 1)
    {
        y = pow(x, 2);
        printf("y: %d", y);
    }
    return 0;
}