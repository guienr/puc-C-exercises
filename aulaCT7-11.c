#include <stdio.h>
#include <stdlib.h>

int main()
{
    int termo;
    int penul;
    int antip;
    int i = 1;
    int soma = 0;
    int num = 0;
    printf("Digite qual termo da sequencia deseja saber: ");
    scanf("%d", &num);
    if(num == 1)
    {
        soma++;
    }
    if(num == 2)
    {
        termo = 2;
        soma = 3;
    }
    if(num >= 3)
    {
        soma = 3;
        penul = 2;
        antip = 1;
        for(i = 3; i <= num; i++)
        {
            termo = ((2 * penul) + antip);
            soma = soma + termo;
            antip = penul;
            penul = termo;
        }
    }
    printf("O termo %d da sequencia e %d\n", num, termo);
    printf("A soma dos %d elementos da sequencia e %d\n", num, soma);
    return 0;
}