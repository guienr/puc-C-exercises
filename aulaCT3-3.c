#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    c = 2 * a;
    d = b % a;
    if((a > 10) && (b > 20))
    {
        a = 2 * a / 3;
        b = 3 * (b / 2);
    }
    else
    {
        a = 2 * (a / 3);
        b = 3 * (b / 2);
    }
    if(a < b)
    {
        d++;
        if((d > (a + b)) || (c < 10))
        {
            c+=d;
        }
        else{
            d+=c;
        }
    }
    else
    {
        c++;
        if((d > (a + b)) && (c < 10))
        {
            c+=d;
        }
        else
        {
            d+=c;
        }
    }
    printf("\n\ta: %d, b: %d", a, b);
    printf("\n\tc: %d, d: %d", c, d);
}

/* entradas a = 6, b = 12
   a  b  c  d
   6 12 12  0
   4 18 12  1
            13
   4 18 12  13 */