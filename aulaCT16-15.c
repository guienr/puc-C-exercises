#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 101

void lers(char s[tam])
{
    printf("Digite a string: ");
    fflush(stdin);
    gets(s);
}

void palindromo(char s[tam])
{
    int i = 0;
    int j = strlen(s) - 1;
    int ver = 0;


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

    lers(s);
    palindromo(s);
    return 0;
}