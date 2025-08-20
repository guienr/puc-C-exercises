#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;
    return 0;
}


/*  i   j   *p  *q
    3   5   ->i ->j

p == &i Verdadeiro
*p - *q = -2
*/