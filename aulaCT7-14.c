#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int x[10];
    int y[10];
    for(i = 0; i < 10; i++)
    {
        printf("x[%d] = ", i);
        scanf("%d", &x[i]);
    }
    for(i = 0; i < 10; i++)
    {
        y[i] = x[i] * x[i];
    }
    system("cls");
    for(i = 0; i < 10; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }
    for(i = 0; i < 10; i++)
    {
        printf("y[%d] = %d\n", i, y[i]);
    }
    return 0;
}