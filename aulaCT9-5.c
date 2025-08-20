#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 101

int main()
{
    char nc[tam];
    int i = 0;
    int j = 0;
    char iniciais[tam];
    printf("Digite seu nome completo: ");
    gets(nc);
    if(strlen(nc) > tam)
    {
        printf("Numero de caracteres maior que o permitido");
        exit(0);
    }
    iniciais[0] = nc[0];
    for(i = 0; nc[i] != '\0'; i++)
    {
        if(nc[i] == ' ')
        {
            j++;
            iniciais[j] = nc[i + 1];
        }
    }
    j++;
    iniciais[j] = '\0';
    system("cls");
    printf("Nome completo: %s\n", nc);
    printf("Iniciais: %s\n", iniciais);
    return 0;
}