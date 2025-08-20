#include <stdio.h>
#include <stdlib.h>
#define tam 100


void ler_nome(char nome[tam], char sobrenome[tam])
{
    printf("Digite o seu nome: ");
    gets(nome);
    printf("Digite o seu sobrenome: ");
    gets(sobrenome);
}

void juntando_inteiro(char nome[tam], char sobrenome[tam], char inteiro[tam])
{
    int i = 0;
    int j = 0;
    for(i = 0; nome[i] != '\0'; i++)
    {
        inteiro[i] = nome[i];
    }
    inteiro[i] = ' ';
    for(j = 0; sobrenome[j] != '\0'; j++)
    {
        i++;
        inteiro[i] = sobrenome[j];
    }
    inteiro [i + 1] = '\0';
}

void primeiro_ultimo(char inteiro[tam], char *p, char *u)
{
    *p = inteiro[0];
    *u = inteiro[strlen(inteiro) - 1];
}

int main()
{
    char nome[tam];
    char sobrenome[tam];
    char inteiro[tam];
    char primeira;
    char ultima;

    ler_nome(nome, sobrenome);
    juntando_inteiro(nome, sobrenome, inteiro);
    primeiro_ultimo(inteiro, &primeira, &ultima);
    printf("Nome e sobrenome: %s\n", inteiro);
    printf("%d\n", strlen(inteiro));
    printf("Primeira letra: %c\n", primeira);
    printf("Ultima letra: %c\n", ultima);
    return 0;
}