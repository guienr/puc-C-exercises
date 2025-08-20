#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num = 0;
    int rep = 1;
    float media = 0;
    while(rep <= 10)
    {
        printf("Digite um numero: ");
        scanf("%f", &num);
        media = media + num;
        rep++;
    }
    media = media / 10;
    printf("Media aritmetica desses valores: %.2f", media);
    return 0;
}