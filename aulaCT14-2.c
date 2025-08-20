#include <stdio.h>
#include <stdlib.h>
#define tam 3

typedef struct dados {
    int idade;
    int filhos;
    float salarios;
    int sexo;
} dad;

void ler_dados(dad dados[])
{
    int i = 0;
    int ver = 0;
    for(i = 0; i < tam; i++)
    {
        ver = 0;
        do
        {
            printf("Digite a idade do habitante[%d]: ", i);
            scanf("%d", &dados[i].idade);
            if(dados[i].idade > 200 || dados[i].idade < 0)
            {
                printf("Idade invalida\n");
                system("pause");
                system("cls");
                continue;
            }
            if(dados[i].idade <= 200 || dados[i].idade >= 0)
            {
                ver++;
            }
        } 
        while(ver == 0);
        system("cls");

        ver = 0;
        do
        {
            printf("Digite a quantidade de filhos que o habitante[%d] possui: ", i);
            scanf("%d", &dados[i].filhos);
            if(dados[i].filhos < 0)
            {
                printf("Numero invalido digitado\n");
                system("pause");
                system("cls");
            }
            else
            {
                ver++;
            }
        }
        while(ver == 0);
        system("cls");

        ver = 0;
        do
        {
            printf("Digite o salario do habitante[%d]: ", i);
            scanf("%f", &dados[i].salarios);
            if(dados[i].salarios <= 0)
            {
                printf("Salario digitado invalido\n");
                system("pause");
                system("cls");
            }
            else
            {
                ver++;
            }
        } 
        while(ver == 0);
        system("cls");

        ver = 0;
        do
        {
            printf("Digite o sexo do habitante[%d](1 - para feminino, 0 para masculino): ", i);
            scanf("%d", &dados[i].sexo);
            if(dados[i].sexo != 0 && dados[i].sexo != 1)
            {
                printf("Numero invalido digitado\n");
                system("pause");
                system("cls");
            }
            else
            {
                ver++;
            }
        } 
        while(ver == 0);
        system("cls");
    }
}

void media_menor(dad dados[], int *mediaim, float *medias, int *mediaf, int *menorf)
{
    int i = 0;
    int msi = 0;
    *mediaim = 0;
    *medias = 0; 
    *mediaf = 0; 
    *menorf = 0;

    for(i = 0; i < tam; i++)
    {
        if(dados[i].salarios < 1500 && dados[i].sexo == 1)
        {
            *mediaim += dados[i].idade;
            msi++;
        }

        *medias += dados[i].salarios;

        if(dados[i].filhos != 0)
        {
            *mediaf += dados[i].filhos;
        }

        if(*menorf == 0 && dados[i].sexo == 1)
        {
            *menorf = dados[i].idade;
        }
        if(*menorf > dados[i].idade && dados[i].sexo == 1)
        {
                *menorf = dados[i].idade;
        }
    }
    if(msi != 0)
    {
        *mediaim /= msi;
    }
    else
    {
        *mediaim = 0;
    }
    *medias /= tam;
    *mediaf /= tam;
}

int main()
{
    dad dados[tam];
    int mediaim;
    int mediaf;
    int menorf;
    float medias;

    ler_dados(dados);
    media_menor(dados, &mediaim, &medias, &mediaf, &menorf);
    system("cls");
    printf("Media da idade das mulheres com salario inferior ao minimo: %d\n", mediaim);
    printf("Media de salario da populacao: %.2f\n", medias);
    printf("Media do numero de filhos: %d\n", mediaf);
    printf("Menor idade do sexo feminino: %d\n", menorf);
    return 0;
}