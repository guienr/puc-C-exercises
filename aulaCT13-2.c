#include <stdio.h>
#include <stdlib.h>
#define maxtam 20

void tamanho_preenchimento(int v[maxtam], int *tam)
{
    int i = 0;
    printf("Digite o tamanho do vetor(1 - 20): ");
    scanf("%d", tam);
    if(*tam > 20 || *tam <= 0)
    {
        printf("Tamanho invalido");
        exit(0);
    }
    for(i = 0; i < *tam; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }
}

void ocorrencias(int v[maxtam], int tam, int *oco)
{
    int i = 0;
    int num;
    *oco = 0;
    printf("Digite o numero que deseja verificar as ocorrencias no vetor: ");
    scanf("%d", &num);
    for(i = 0; i < tam; i++)
    {
        if(v[i] == num)
        {
            (*oco)++;
        }
    }
}

int main()
{
    int i = 0;
    int v[maxtam];
    int tam;
    int oco;
    tamanho_preenchimento(v, &tam);
    ocorrencias(v, tam, &oco);
    printf("Quantidade de ocorrencias do numero digitado: %d\n", oco);
    return 0;
}