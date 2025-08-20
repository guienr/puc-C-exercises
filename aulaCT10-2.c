#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 99, j;
    int *p;
    p = &i;
    j = *p + 100;
    return 0;
}

/*  i   j   *p
    99  199 ->i
*/