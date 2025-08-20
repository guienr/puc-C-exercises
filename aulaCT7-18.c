#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[7];
    int b[7];
    int i = 0;
    int j = 0;
    int iguais = 0;
    for(i = 0; i < 7; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 7; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
        for(j = 0; j < 7; j++)
        {
            if(a[i] == b[j])
            {
                iguais++;
            }
        }
    } 
    printf("Os vetores possuem %d elementos iguais", iguais);
    return 0;
}