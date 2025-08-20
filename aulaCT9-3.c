#include <stdio.h>
#include <string.h>
#define tam 6

int main()
{
    char str[tam];
    char inv[tam];
    int i = 0;
    printf("Digite a string: ");
    gets(str);
    getchar();
    if(strlen(str) > tam)
    {
        printf("Erro");
        exit();
    }
    for(i = 0; i < tam; i++)
    {
        inv[i] = str[4 - i];
    }
    system("cls");
    printf("String: %s\n", str);
    printf("String invertida: %s\n", inv);
    return 0;
}