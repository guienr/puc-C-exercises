#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 21

int main()
    {
        int i = 0;
        char str[tam];
        char c = '0';
        int num = 0;
    
        printf("Digite o caractere que sera analisado: ");
        scanf("%c", &c);
        getchar();
        printf("Digite o que voce quer escrever na string: ");
        gets(str);
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
        printf("Caractere: %c\n", c);
        printf("String: %s\n", str);
        printf("Quantidade de vezes que o caracter aparece na string: %d", num);
        return 0;
    }