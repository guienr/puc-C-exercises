#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam1 2
#define tam2 52

typedef struct dados
{
    int mat;
    char nome[tam2];
    int idade;
    int alt;
    float peso;
} dad;

void ler(dad atletas[])
{
    int i = 0;
    int ver = 0;

    for(i = 0; i < tam1; i++)
    {
        do 
        {
            printf("Digite a matricula(4 digitos): ");
            scanf("%d", &atletas[i].mat);
            if(atletas[i].mat < 1000 || atletas[i].mat > 9999)
            {
                printf("Matricula invalida digitada\n");
                system("pause");
                system("cls");
            }
            else
            {
                ver++;
                system("cls");
            }
        }
        while (ver == 0);
        
        ver = 0;
        do
        {
            printf("Digite o nome do atleta: ");
            fgets(atletas[i].nome, tam2, stdin);
            if(strlen(atletas[i].nome) > tam2)
            {
                printf("Quantidade de caracteres invalido digitado\n");
                system("pause");
                system("cls");
            }
            else
            {
                ver++;
                system("cls");
            }
        } 
        while(ver == 0);
        
        ver = 0;
        do 
        {
            printf("Digite a idade do atleta: ");
            scanf("%d", &atletas[i].idade);
            if(atletas[i].idade < 0 || atletas[i].idade > 150)
            {
                printf("Idade invalida digitada\n");
                system("pause");
                system("cls");
            }
            else
            {
                ver++;
                system("cls");
            }
        }
        while (ver == 0);

        ver = 0;
        do 
        {
            printf("Digite a altura do atleta em cm: ");
            scanf("%d", &atletas[i].alt);
            if(atletas[i].alt < 0 || atletas[i].alt > 300)
            {
                printf("Altura invalida digitada\n");
                system("pause");
                system("cls");
            }
            else
            {
                ver++;
                system("cls");
            }
        }
        while (ver == 0);

        ver = 0;
        do 
        {
            printf("Digite o peso do atleta: ");
            scanf("%f", &atletas[i].peso);
            if(atletas[i].peso < 0 || atletas[i].peso > 300)
            {
                printf("Peso invalida digitada\n");
                system("pause");
                system("cls");
            }
            else
            {
                ver++;
                system("cls");
            }
        }
        while (ver == 0);
    }
}

float media_idade(dad atletas[])
{
    float mediai = 0;
    int i = 0;
    for(i = 0; i < tam1; i++)
    {
       mediai += (float) atletas[i].idade; 
    }
    mediai /= tam1;
    return mediai;
}

float media_altura(dad atletas[])
{
    float mediaa = 0;
    int i = 0;
    for(i = 0; i < tam1; i++)
    {
       mediaa += (float) atletas[i].alt; 
    }
    mediaa /= tam1;
    return mediaa;
}

int main()
{
    int i = 0;
    dad atletas[tam1];
    float mediai;
    float mediaa;
    
    ler(atletas);
    mediai = media_idade(atletas);
    mediaa = media_altura(atletas);
    system("cls");

    for(i = 0; i < tam1; i++)
    {
        printf("Matricula: %d\n", atletas[i].mat);
        printf("Nome: %s\n", atletas[i].nome);
        printf("Idade: %d\n", atletas[i].idade);
        printf("Altura: %d\ncm", atletas[i].alt);
        printf("Peso: %.2f\n\n", atletas[i].peso);
    }

    printf("Media das idades: %.2f\n", mediai);
    printf("Media das alturas: %.2f\n", mediaa);
    return 0;
}