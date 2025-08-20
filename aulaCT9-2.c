#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 11

int main()
{
    char c = 'a';
    char str[11];
    int i = 0;
    int num = 0;
    printf("Digite a string: ");
    gets(str);
    getchar();
    if(strlen(str) > tam)
    {
        printf("Erro");
        exit(0);
    }
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == c)
        {
            num++;
        }
    }
    system("cls");
    printf("String: %s\n", str);
    printf("QUantidade de vezes que a letra A apareceu: %d\n", num);
    return 0;
}