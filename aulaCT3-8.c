#include <stdio.h>

int main() 
{
    int a, b, c, d;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    if(a < b)
    {
        if(a < c)
        {
            d = a;
        }
        else
        {
            d = c;
        }
    }
    else
    {
        if(b < c)
        {
            d = b;
        }
        else
        {
            d = c;
        }
    }
    printf("\n\t a: %d, b : %d", a, b);
    printf("\n\t c: %d, d: %d", c, d);
    return 0;
}


/* entrada: a = 6, b = 4, c = 5
    a   b   c   d
    6   4   5   4
*/