#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 10;
    int num2 = 100;
    for(num1 = 10; num1 <= 15; num1++)
    {
        printf("%d\n", num1);
    }
    for(num2 = 100; num2 >= 95; num2--)
    {
        printf("%d\n", num2);
    }
    return 0;
}