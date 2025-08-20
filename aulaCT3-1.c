#include <stdio.h>
#include <stdlib.h>

int main()
    {
        int a = 5;
        int b = 4;
        int c = 3;
        int d = 6;
        if(a > c && c <= d)
        {
            printf("verdadeiro\n");
        }
        else
        {
            printf("falso");
        }
        if(a + b > 10 || a + b == c + d)
        {
            printf("verdadeiro\n");
        }
        else 
        {
            printf("falso");
        }
        if(a  >= c && d >= c)
        {
            printf("verdadeiro");
        }
        else
        {
            printf("falso");
        }
        return 0;
    }