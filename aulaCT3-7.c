#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
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
            c += d;
        }
    }
    else{
        c++;
        if((d > (a + b)) &&(c < 10))
        {
            c += d;
        }
        else
        {
            d += c;
        }
    printf("\n\ta= %d, b: %d", a, b);
    printf("\n\tc: %d, d: %d", c, d);
    return 0;
    }
}


/* entrada: a = 18, b = 24
    a   b   c   d
    18  24  36  6
    12  36      7
    12  36  36  7
*/