#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int j = 0;
    int v[20];
    for(i = 0; i < 20; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
        for(j = i; j >= 0; j--)
        {
            if(i == j)
            {
                continue;
            }
            else
            {
                if(v[i] == v[j])
                {
                    v[i] = 0;
                }
            }
        }
    }
    system("cls");
    for(i = 0; i < 20; i++)
    {
        printf("v[%d] = %d\n", i, v[i]);
    }
    return 0;
}