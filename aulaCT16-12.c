#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 21

void lers(char s[tam], char *c)
{
    printf("Digite a string: ");
    fflush(stdin);
    gets(s);
    if(strlen(s) > tam)
    {
        printf("Quantidade de caracteres invalido");
        exit(0);
    }

    printf("\nDigite o caracter que deseja analisar na string: ");
    scanf("%c", c);
}

void verificar(char s[tam], char c, int *num)
{
    int i = 0;
    
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == c)
        {
            (*num)++;
        }
    }
}

int main()
{
    char s[tam];
    char c;
    int num = 0;

    lers(s, &c);
    verificar(s, c, &num);

    printf("\nQuantidade de vezes que o caracter %c aparece: %d\n", c, num);

    return 0;
}