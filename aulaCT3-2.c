#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A = 20;
    float B = 0;
    float C = 1;
    float D = 10;
    if((A - B + D) >= (C))
    {
        printf("verdadeiro\n");
    }
    else{
        printf("falso\n");
    }


    if((A > (A + D)) || (C > B))
    {
        printf("verdadeiro\n");
    }
    else{
        printf("falso\n");
    }


    if(((A * D) > (C + A)) && (A > B))
    {
        printf("verdadeiro\n");
    }
    else{
        printf("falso\n");
    }


    if((A + B) / C >= 0.9 && (B * D) < 0)
    {
        printf("verdadeiro\n");
    }
    else
    {
        printf("falso\n");
    }


    if(((( A + C)/D) > 0.3) && (((B -C)<0) || ((C+A) > D)))
    {
        printf("verdadeiro\n");
    }
    else
    {
        printf("falso\n");
    }


    if((((A + C)/D) > 0.3) && ((B -C)<0) || ((C+A) > D))
    {
        printf("verdadeiro");
    }
    else{
        printf("falso");
    }
    return 0;
}