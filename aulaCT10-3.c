#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b = 12, c;
    int *p, *q;
    p = &a;
    q = &b;
    c = *p + *q;
    return 0;
}


/*  a   b   *p  *q  c
    5   12  ->a ->b 17
*/