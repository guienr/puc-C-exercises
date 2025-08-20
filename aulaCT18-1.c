#include <stdio.h>
#include <stdlib.h>
#define tam1 20
#define tam2 10

int main()
{
    int v[tam1];
    int s[tam2];
    int i = 0;
    int j = 0;

    for(i = 0; i < tam1; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    i = 0;
    for(j = 0; j < tam2; j++)
    {
        s[j] = v[i] + v[i + 1];
        i += 2;
    }

    system("cls");
    for(i = 0; i < tam1; i++)
    {
        printf("v[%d] = %d\n", i, v[i]);
    }
    printf("\n");
    for(i = 0; i < tam2; i++)
    {
        printf("s[%d] = %d\n", i, s[i]);
    }
    return 0;
}