#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int a = 4, b = 6, c = 9, d, f, g;
    printf("\ta\tb\tc\td\tf\tg\n");
    printf("\t%d\t%d\t%d\n", a , b, c);
    a--;
    printf("\t%d\t%d\t%d\n", a , b, c);
    c /= a;
    printf("\t%d\t%d\t%d\n", a , b, c);
    b += 3;
    printf("\t%d\t%d\t%d\n", a , b, c);
    d = ++a - c;
    printf("\t%d\t%d\t%d\t%d\n", a , b, c, d);
    f = c--;
    printf("\t%d\t%d\t%d\t%d\t%d\n", a , b, c, d, f);
    g = --b;
    printf("\t%d\t%d\t%d\t%d\t%d\t%d\n", a , b, c, d, f, g);
    g += d++;
    printf("\t%d\t%d\t%d\t%d\t%d\t%d\n", a , b, c, d, f, g);
    
    printf("\n\t%3d", a);
    printf("\n\t%3d", b);
    printf("\n\t%3d", c);
    printf("\n\t%3d", d);
    printf("\n\t%3d", f);
    printf("\n\t%3d\n", g);
    system ("pause");
    return 0;
}

/* a   b   c   d   f   g
   4   6   9
   3   9   3
   4   9   3   1
   4   9   2    1    3 
*/