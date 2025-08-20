#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int a, b, c;
    float x, y;
    a = 11;
    b = 2;
    c = a / b;
    x = a / b;
    y = (float) a / b;
    printf("\na = %d", a);
    printf("\nb = %d", b);
    printf("\nc = %d", c);
    printf("\nx = %f", x);
    printf("\ny = %.2f", y);
    printf("\n\n\n\n");
    return 0;
}

/* a   b   c   x   y
  11   2   
  11   2   5   5  5,5
  11   2   5   5.000000  5.50
*/