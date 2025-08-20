#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10];
    int y[10];
    int i = 0;
    int j = 0;
    for(i = 0; i < 10; i++)
    {
        printf("x[%d] = ", i);
        scanf("%d", &x[i]);
    }
    i = 0;
    for(j = 9; j >= 0; j--)
    {
        y[j] = x[i];
        i++;
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