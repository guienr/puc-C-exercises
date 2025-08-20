#include <stdio.h>

int main()
{
    int num;
    printf("\n\tDigite um número inteiro entre 1 e 799: ");
    scanf("%d",&num);
    if(num > 0)
    if(num >= 500)
    if(num>=700)
    printf("\n\t=>Número na 0a");
    else if(num >= 600) printf("\n\t=>Número na 1a");
    else printf("\n\t=>Número na 2a");
    else if(num >= 400) printf("\n\t=>Número na 3a");
    else if(num >= 300) printf("\n\t=>Número na 4a");
    else if(num >= 200) printf("\n\t=>Número na 5a");
    else if(num >= 100) printf("\n\t=>Número na 6a");
    else printf("\n\t=>Número na 7a");
    else printf("\n\tNenhum");
    printf("\n\n\t\t=>Eita!!!!\n\n\n");
    return 0;
}