#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 100

int main()
{
    char nome[tam];
    char sobre[tam];
    char ns[tam];
    int i = 0;
    int j = 0;
    char prim;
    char ulti;
    int tamanho = 0;
    printf("Digite o seu nome: ");
    gets(nome);
    printf("Digite o seu sobrenome: ");
    gets(sobre);
    for(i = 0; nome[i] != '\0'; i++)
    {
        ns[i] = nome[i];
    }
    ns[i] = ' ';
    i++;
    while(sobre[j] != '\0')
    {
        ns[i] = sobre[j];
        i++;
        j++;
    }
    ns[i] = '\0';
    ulti = ns[i - 1];
    prim = ns[0];
    tamanho = strlen(ns);
    system("cls");
    printf("Nome e sobrenome: %s\n", ns);
    printf("Primeira letra: %c\n", prim);
    printf("Ultima letra: %c\n", ulti);
    printf("Tamanho da string com nome e sobrenome: %d\n", tamanho);
    return 0;
}