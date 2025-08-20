#include <stdio.h>
#include <stdlib.h>
#define tam 8
#define tam2 20

void ler_string(char str[tam])
{
    printf("Digite a string: ");
    fflush(stdin);
    gets(str);
    if(strlen(str) >= tam)
    {
        printf("Quantidade de caracteres invalido");
        exit(0);
    }
}

void duplicacao(char str[tam], char dup[tam2])
{
    int i = 0;
    int j = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        dup[j] = str[i];
        j++;
        dup[j] = str[i];
        j++;
    }
    dup[j] = '\0';
}

int main()
{
    char str[tam];
    char dup[tam2];
    ler_string(str);
    duplicacao(str, dup);
    printf("String: %s\n", str);
    printf("Gaga: %s\n", dup);
    return 0;
}