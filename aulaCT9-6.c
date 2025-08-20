#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 11

int main()
{
    int i = 0;
    int j = 0;
    char str[tam];
    printf("Digite a string: ");
    gets(str);
    if(strlen(str) > tam)
    {
        printf("Numero de caracteres digitados acima do limite permitido");
        exit(0);
    }
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            for(j = i + 1; str[j] != '\0'; j++)
            {
                str[j - 1] = str[j];
            }
            str[j - 1] = '\0';
        }
    }
    system("cls");
    printf("String sem as vogais: %s", str);
    return 0;
}