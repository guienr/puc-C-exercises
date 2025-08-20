#include <stdio.h>
#include <stdlib.h>
#define tam 100

void ler_strings(char s1[tam], char s2[tam])
{
    printf("Digite a primeira string: ");
    fflush(stdin);
    gets(s1);
    printf("Digite a segunda string: ");
    fflush(stdin);
    gets(s2);
}

void anagrama(char s1[tam], char s2[tam])
{
    int i = 0;
    int j = 0;
    int ls1 = 0;
    int ls2 = 0;
    int v = 0;
    for(i = 0; s1[i] != '\0'; i++)
    {
        ls1 = 0;
        ls2 = 0;
        for(j = 0; s1[j] != '\0'; j++)
        {
            if(s1[i] == s1[j])
            {
                ls1++;
            }
        }
        for(j = 0; s2[j] != '\0'; j++)
        {
            if(s1[i] == s2[j])
            {
                ls2++;
            }
        }
        if (ls2 > ls1 || ls1 > ls2)
            {
                v++;
            } 
    }
    if(v == 0)
    {
        printf("As palavras sao anagramas");
    }
    else
    {
        printf("As palavras nao sao anagramas");
    }
}

int main()
{
    char s1[tam];
    char s2[tam];
    ler_strings(s1, s2);
    anagrama(s1, s2);
    return 0;
}