#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 101

void ler(char s[tam])
{
    printf("Digite a string: ");
    fgets(s, tam, stdin);
}

void palindromo(char s[tam])
{
    int i = 0;
    int j = 0;
    int ver = 0;

    j = strlen(s) - 2;

    for(i = 0; i < j; i++)
    {
        if(s[i] != s[j])
        {
            ver++;
        }
        j--;
    }

    if(ver == 0)
    {
        printf("\nA string e um palindromo\n");
    }
    else
    {
        printf("\nA string nao e um palindromo\n");
    }
}

int main()
{
    char s[tam];

    ler(s);
    palindromo(s);
    return 0;
}