#include <stdio.h>
#include <stdlib.h>
#define tam 11

void ler_strings(char s1[tam], char s2[tam], char s3[tam])
{
    printf("Digite a primeira string: ");
    gets(s1);
    if(strlen(s1) > tam)
    {
        printf("Quantidade de caracteres acima do limite");
        exit(0);
    }
    printf("Digite a segunda string: ");
    fflush(stdin);
    gets(s2);
    if(strlen(s2) > tam)
    {
        printf("Quantidade de caracteres acima do limite");
        exit(0);
    }
    printf("Digite a terceira string: ");
    fflush(stdin);
    gets(s3);
    if(strlen(s3) > tam)
    {
        printf("Quantidade de caracteres acima do limite");
        exit(0);
    }
}

void alfabetica(char s1[tam], char s2[tam], char s3[tam])
{
    int i = 0;
    while(t == 0)
    {
        if(s2[i] == s3[i])
        {
            i++;
            continue;
        }
        if(s2[i] < s3[i])
        {
            t++;
        }
        else
        {
            s2 = aux;
            s2 = s3;
            s3 = aux;
            t++;
        }
    }
    i = 0;
    if(s1[i] == s2[i])
    {
        i++;
    }
    if(s1[i] < s2[i])
    {
        i = 0;
        if(s1[i] == s3[i])
        {
            i++;
        }        
        if(s1[i] < s3[i])
        {
            
        }
    }
    i = 0;
    t = 0;
    while(t == 0)
    {
        if(s2[i] == s3[i])
        {
            i++;
            continue;
        }
        if(s2[i] < s3[i])
        {
            t++;
        }
        else
        {
            s2 = aux;
            s2 = s3;
            s3 = aux;
            t++;
        }
    }
}

int main()
{
    char s1[tam];
    char s2[tam];
    char s3[tam];
    ler_strings(s1, s2, s3);
    alfabetica(s1, s2, s3);
    return 0;
}