#include <stdio.h>
#include <stdlib.h>
#define tam 10
typedef struct dados {
    int ra;
    int cod;
    float notas[2];
} dad;

void ler_dados(dad dados[])
{
    int i = 0;
    int j = 0;
    int ver = 0;
    for(i = 0; i < tam; i++)
    {
        system("cls");
        do
        {
            printf("Digite o RA do aluno(%d): ", i, dados[i].ra);
            scanf("%d", &dados[i].ra);
            if(dados[i].ra > 10000 || dados[i].ra < 1000 && i == 0)
            {
                printf("Digite um numero de 4 digitos\n");
                system("pause");
                system("cls");
            }
            if(dados[i].ra < 10000 && dados[i].ra > 1000 && i == 0)
            {
                ver++;
            }
            for(j = i - 1; j >= 0 && i > 0; j--)
            {
                ver = 0;
                if(dados[j].ra == dados[i].ra)
                {
                    printf("O RA digitado ja existe\n");
                    system("pause");
                    system("cls");
                    break;
                }
                if(dados[i].ra > 10000 || dados[i].ra < 1000)
                {
                    printf("Digite um numero de 4 digitos\n");
                    system("pause");
                    system("cls");
                    break;
                }
                if(dados[i].ra < 10000 && dados[i].ra > 1000 && j == 0)
                {
                    ver++;
                }
            }
        }
        while(ver == 0);

        ver = 0;
        do
        {
            printf("Digite o codigo da disciplina: ");
            scanf("%d", &dados[i].cod);
            if(dados[i].cod > 10000 || dados[i].cod < 1000)
            {
                printf("Codigo invalido\n");
                system("pause");
                system("cls");
                continue;
            }
            if(dados[i].cod < 10000 && dados[i].cod >= 1000)
            {
                ver++;
            }
        }
        while(ver == 0);

        j = 0;
        ver = 0;
        while(ver != 2)
        {
            printf("Digite a nota %d: ", j+1);
            scanf("%f", &dados[i].notas[j]);
            if(dados[i].notas[j] > 10 || dados[i].notas[j] < 0)
            {
                printf("Nota invalida");
                system("pause");
                system("cls");
                continue;
            }
            ver++;
            j++;
        }
    }
}

void media_ponderada(dad dados[], float m[tam])
{
    int i = 0;
    for(i = 0; i < tam; i++)
    {
        m[i] = ((dados[i].notas[0] * 1) + (dados[i].notas[1] * 2)) / 3;
    }
}

int main()
{
    int i = 0;
    dad dados[tam];
    float m[tam];

    ler_dados(dados);
    media_ponderada(dados, m);
    system("cls");

    for(i = 0; i < tam; i++)
    {
        printf("RA do aluno %d: %d\n", i, dados[i].ra);
        printf("Codigo da disciplina: %d\n", dados[i].cod);
        printf("Nota 1: %.2f\tNota 2: %.2f\n", dados[i].notas[0], dados[i].notas[1]);
        printf("Media: %.2f\n\n", m[i]);
    }
    return 0;
}