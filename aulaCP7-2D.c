#include <stdio.h>
#include <stdlib.h>
#define tam 100

void ler_string(char s[tam])
{
    printf("Digite a string: ");
    fflush(stdin);
    gets(s);
}

void palindroma(char s[tam])
{
    int i = 0;
    int v = 0;
    for(i = 0; i <= strlen(s) - i - 1; i++)
    {
        if(s[i] != s[strlen(s) - i - 1])
        {
            v++;
        }
    }
    if(v == 0)
    {
        printf("A string e um palindromo");
    }
    else
    {
        printf("A string nao e um palindromo");
    }
}

int main()
{
    char s[tam];
    ler_string(s);
    palindroma(s);
    return 0;
}