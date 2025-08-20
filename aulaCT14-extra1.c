#include <stdio.h>
#include <stdlib.h>
#define tam 3

typedef struct cadastro {
    int ra;
    char nome[31];
    float nota[2];
} cad;

void ler(cad alunos[])
{
    int i = 0;
    int j = 0;
    int ver = 0;
    for(i = 0; i < tam; i++)
    {
        printf("Alunos %d:\n", i);

        ver = 0;
        do
        {
            printf("Digite o ra do aluno: ");
            scanf("%d", &alunos[i].ra);
            if(alunos[i].ra > 9999 || alunos[i].ra < 1000)
            {
                printf("\n\tO ra invalido digitado\n");
                system("pause");
                system("cls");
                continue;
            }
            if(i == 0)
            {
                ver++;
            }
            for(j = 0; j < i; j++)
            {
                if(alunos[j].ra == alunos[i].ra)
                {
                    printf("\n\tO ra digitado ja existe!\n");
                    system("pause");
                    system("cls");
                    break;
                }
                else
                {
                    ver++;
                }
            }
        }
        while(ver == 0);
        system("cls");
        
        ver = 0;
        do
        {
            printf("Digite o nome do aluno: ");
            getchar();
            gets(alunos[i].nome);
            if(strlen(alunos[i].nome) > tam)
            {
                printf("\n\tQuantidade de caracteres acima do limite permitido\n");
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

        for(j = 0; j < 2; j++)
        {
            printf("Digite a nota %d: ", j + 1);
            scanf("%f", &alunos[i].nota[j]);
            if(alunos[i].nota[j] > 10 || alunos[i].nota[j] < 0)
            {
                printf("\n\tNota invalida!!\n");
                system("pause");
                system("cls");
                j--;
            }
        }
        system("cls");
    }
}

void maior_media(cad alunos[], float *maiorm, float media[tam], int *p)
{
    int i = 0;
    float mnotas;
    for(i = 0; i < tam; i++)
    {
        mnotas = (alunos[i].nota[0] + alunos[i].nota[1]) / 2;
        media[i] = mnotas;
        if(i == 0)
        {
            *maiorm = mnotas;
            *p = i;
        }
        if(*maiorm < mnotas)
        {
            *maiorm = mnotas;
            *p = i;;
        }
    }
}

void recuperacao(cad alunos[], int *quantrec, float media[tam])
{
    int i = 0;
    *quantrec = 0;
    for(i = 0; i < tam; i++)
    {
        if(media[i] < 5)
        {
            (*quantrec)++;
        }
    }
}

int main()
{
    int i = 0;
    int j = 0;
    int nn = 1;
    cad alunos[tam];
    float maiorm;
    float media[tam];
    int p;
    int quantrec;
    ler(alunos);
    maior_media(alunos, &maiorm, media, &p);
    recuperacao(alunos, &quantrec, media);
    system("cls");
    for(i = 0; i < tam; i++)
    {
        printf("RA: %d\t", alunos[i].ra);
        printf("Nome: %s\t", alunos[i].nome);
        for(j = 0; j < 2; j++)
        {
            printf("Nota %d: %.2f\t", nn, alunos[i].nota[j]);
            nn++;
        }
        printf("\n");
        nn = 1;
    }\
        printf("\n");
    printf("Maior media: %.2f\n", maiorm);
    printf("Aluno com a maior media: \n");
    printf("RA: %d\t", alunos[p].ra);
    printf("Nome: %s\t", alunos[p].nome);
    for(j = 0; j < 2; j++)
    {
        printf("Nota %d: %.2f\t", nn, alunos[p].nota[j]);
    }
    printf("\n");
    printf("Quantidade de alunos em recuperacao: %d\n", quantrec);
    return 0;
}