#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s = 0;
    float num1 = 1;
    float num2 = 1;
    while(num2 <= 50)
    {
        s = s + (num1 / num2);
        num1 += 2;
        num2 += 1;
    }
    printf("S = %.2f", s);
    return 0;
}