#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 11

void lers(char s[tam])
{
    printf("Digite a string: ");
    fflush(stdin);
    gets(s);
    if(strlen(s) > tam)
    {
        printf("Quantidade de caracteres invalido");
        exit(0);
    }
}

void vogais(char s[tam])
{
    int i = 0;
    int j = 0;

    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            for(j = i; s[j] != '\0'; j++)
            {
                s[j] = s[j + 1]; 
            }
            i--;
        }
    }
}

int main()
{
    char s[tam];

    lers(s);
    vogais(s);

    printf("String sem as vogais: %s", s);
    return 0;
}