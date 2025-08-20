#include <stdio.h>
#include <stdlib.h>
#define tam 3

typedef struct cadastro {
    int mat;
    int cod;
    int dep;
    float sal;
} cad;

void cadastro_func(cad cadastro[])
{
    int ver = 0;
    int i = 0;
    int j;

    for(i = 0; i < tam; i++)
    {
        do
        {
            printf("Digite a matricula do funcionario: ");
            scanf("%d", &cadastro[i].mat);
            if(cadastro[i].mat < 1000 || cadastro[i].mat > 9999)
            {
                printf("Numero digitado invalido\n");
                printf("Digite um numero de 4 digitos\n");
                system("pause");
                system("cls");
                continue;
            }
            if(i == 0)
            {
                break;
            }
            if(i != 0)
            {
                for(j = i - 1; j >= 0; j--)
                {
                    if(cadastro[i].mat == cadastro[j].mat)
                    {
                        printf("A matricula digitada ja existe!\n");
                        system("pause");
                        system("cls");
                        ver = 0;
                        break;
                    }
                    else
                    {
                        ver++;
                    }
                }
            }
        } 
        while(ver == 0);
        system("cls");

        ver = 0;
        do
        {
            printf("Digite o codigo de cargo do funcionario: ");
            scanf("%d", &cadastro[i].cod);
            if(cadastro[i].cod < 10 || cadastro[i].cod > 99)
            {
                printf("Numero digitado invalido\n");
                printf("Digite um numero de 2 digitos\n");
                system("pause");
                system("cls");
                continue;
            }
            if(i == 0)
            {
                break;
            }
            ver++;
        } 
        while(ver == 0);
        system("cls");

        ver = 0;
        do
        {
            printf("Digite a quantidade de depentes: ");
            scanf("%d", &cadastro[i].dep);
            if(cadastro[i].dep < 0 || cadastro[i].dep > 99)
            {
                printf("Numero digitado invalido\n");
                printf("Digite um numero de 2 digitos\n");
                system("pause");
                system("cls");
                continue;
            }
            ver++;
        } 
        while(ver == 0);
        system("cls");

        ver = 0;
        do
        {
            printf("Digite o salario do funcionario: R$");
            scanf("%d", &cadastro[i].sal);
            if(cadastro[i].sal <= 0)
            {
                printf("Salario digitado invalido\n");
                system("pause");
                system("cls");
                continue;
            }
            ver++;
        }
        while(ver == 0);
        system("cls");
    }
}

float sal_medio(cad cadastro[])
{
    float media = 0;
    int i = 0;
    for(i = 0; i < tam; i++)
    {
        media = media + cadastro[i].sal;
    }
    media /= tam;
    return media;
}

void maior_dep(cad cadastro[], int maiormc[2])
{
    int i = 0;
    int pos;
    for(i = 0; i < tam; i++)
    {
        if(i == 0)
        {
            maiormc[0] = cadastro[i].mat;
            maiormc[1] = cadastro[i].cod;
            pos = i;
        }
        if(i > 0)
        {
            if(cadastro[i].dep > cadastro[pos].dep)
            {
                maiormc[0] = cadastro[i].mat;
                maiormc[1] = cadastro[i].cod;
            }
        }
    }
}

