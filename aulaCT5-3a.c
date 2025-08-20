#include <stdio.h>

int main()
{
    int n = 0;
    int i = 1;
    int acum = 1;
    scanf("%d", &n);
    while(i <= n)
    {
        acum = acum * i;
        i++;
    }
    printf("%d", acum);
    return 0;
}

---

#include <stdio.h>

int main()
{
    int n = 0;
    int i = 1;
    int acum = 1;
    scanf("%d", &n);
    do
    {
        acum = acum * i;
        i++;
    }
    while(i <= n);
    printf("%d", acum);
    return 0;
}