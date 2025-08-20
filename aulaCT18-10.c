#include <stdio.h>
#include <stdlib.h>
#define tam 21

void lers(char s[tam])
{
    printf("Digite a string: ");
    fgets(s, tam, stdin);
}

int quant_letras(char s[tam])
{
    int letras = 0;
    int i = 0;
    while(s[i] != '\n')
    {
        if(s[i] == ' ')
        {
            i++;
            continue;
        }
        else
        {
            letras++;
            i++;
        }
    }
    if(letras > 20)
    {
        printf("Quantidade de caracteres invalido");
        exit(0);
    }
    return letras;
}

int main()
{
    char s[tam];
    int letras;
    lers(s);
    letras = quant_letras(s);
    printf("\nQuantidade de letras: %d\n", letras);
    return 0;
}