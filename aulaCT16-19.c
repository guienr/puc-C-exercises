#include <stdio.h>
#include <stdlib.h>

void ler_num(int *n1, int *n2, int *n3)
{
    printf("Digie o valor do primeiro numero: ");
    scanf("%d", n1);
    printf("Digie o valor do segundo numero: ");
    scanf("%d", n2);
    printf("Digie o valor do segundo numero: ");
    scanf("%d", n3);
}

int fatorial(int n)
{
    int fat = 1;
    int i;
    for(i = n; i > 0; i--)
    {
        fat = fat * i;
    }
    return fat;
}

int main()
{
    int n1;
    int n2;
    int n3;
    int fat1;
    int fat2;
    int fat3;

    ler_num(&n1, &n2, &n3);
    fat1 = fatorial(n1);
    fat2 = fatorial(n2);
    fat3 = fatorial(n3);

    printf("Fatorial do primeiro numero: %d\n", fat1);
    printf("Fatorial do segundo numero: %d\n", fat2);
    printf("Fatorial do terceiro numero: %d\n", fat3);
    return 0;
}