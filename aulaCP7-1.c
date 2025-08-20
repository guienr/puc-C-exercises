#include <stdio.h>
#include <stdlib.h>
#define tam 6

void ler_string(char string[tam])
{
    printf("Digite a string: ");
    gets(string);
    if(strlen(string) > tam)
    {
        printf("Número de caracteres invalido!");
        exit(0);
    }
}

void inverter(char string[tam], char invertida[tam])
{
    int i = 0;
    int j = strlen(string) - 1;
    for(i = 0; string[i] != '\0'; i++)
    {
        invertida[j] = string[i];
        j--;
    }
    invertida[i] = '\0';
}

int main()
{
    char string[tam];
    char invertida[tam];
    ler_string(string);
    inverter(string, invertida);
    printf("String: %s\n", string);
    printf("%d\n", strlen(string));
    printf("String invertida: %s\n", invertida);
    return 0;
}