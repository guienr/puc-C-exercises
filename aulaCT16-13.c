#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 101

void lers(char s[tam])
{
    printf("Digite a string: ");
    fflush(stdin);
    gets(s);

    if(strlen(s) > tam)
    {
        printf("Numero invalido");
        exit(0);
    }
}

void iniciais(char s[tam], char in[tam])
{
    int i = 0;
    int j = 0;

    for(i = 0; i < tam; i++)
    {
        if(i == 0)
        {
            in[j] = s[i];
            j++;
            continue;
        }
        if(s[i] == ' ')
        {
            i++;
            in[j] = s[i];
            j++;
        }
    }
    in[j] = '\0';
}

int main()
{
    char s[tam];
    char in[tam];

    lers(s);
    iniciais(s, in);

    printf("Iniciais: %s", in);
    return 0;
}