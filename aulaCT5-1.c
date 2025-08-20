#include <stdio.h>

int main()
{
    int num, p1, p2, p3, p4, res1, res2;
    printf("Digite um numero: ");
    scanf("%d", &num);
    p1 = num / 100; 
    p2 = num % 100;
    p3 = p2 / 10;
    p4 = p1 % 10;
    if(p1 > p2)
    {
        res1 = p1 - p2;
        res2 = p3 + p4;
    }
    else
    {
        res1 = p1 + p2;
        res2 = p4 - p3;
    }
    printf("\n\tp1 = %d, p2 = %d, p3 = %d, p4 = %d", p1, p2, p3, p4);
    printf("\n\tres1 = %d, res2 = %d", res1, res2);
    return 0;
}

/*  entrada = 5913
p1  p2  p3  p4  res1  res2
59  13  1   9   46    10  */