#include <stdio.h>
#include <stdlib.h>
#define tam 251

void lers(char s[tam])
{
    printf("Digite a string: ");
    fgets(s, tam, stdin);
    if(strlen(s) > tam)
    {
        printf("Quantidade de caracteres invalido");
        exit(0);
    }
}

int branco(char s[tam])
{
    int i = 0;
    int espb = 0;

    for(i = 0; s[i] != '\n'; i++)
    {
        if(s[i] == ' ')
        {
            espb++;
        }
    }

    return espb;
}

int main()
{
    char s[tam];
    int espb;
    
    lers(s);
    espb = branco(s);

    printf("\nQuantidade de espaços em branco: %d\n", espb);
    return 0;
}