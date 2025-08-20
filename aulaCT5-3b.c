#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    int k;
    int d;
    int val;
    printf("Digite o valor: ");
    scanf("%d", &val);
    k = 0;
    d = 0;
    do
    {
        printf("Digite o valor de n1: ");
        scanf("%d", &n1);
        if(n1 % 3 == 0)
        {
            d++;
            if(n1 % 2 == 0)
            {
                d++;
            }
        }
        printf("d = %d\n", d);
        k = k + 3;
        printf("k = %d\n", k);
    }
    while(k < val);
    return 0;
}