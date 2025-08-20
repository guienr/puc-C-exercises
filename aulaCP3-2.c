#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod;
    printf("Digite o codigo do produto: ");
    scanf("%d", &cod);
    if(cod < 1 || cod > 15)
    {
        printf("Codigo invalido");
    }
    switch(cod)
    {
    case 1:
        printf("Alimento nao perecivel");
        break;

    case 2:
        printf("Alimento perecivel");
        break;

    case 3:
        printf("Alimento perecivel");
        break;
        
    case 4:
        printf("Alimento perecivel");
        break;

    case 5:
        printf("Vestuario");
        break;

    case 6:
        printf("Vestuario");
        break;

    case 7:
        printf("Higiene pessoal");
        break;

    case 8:
        printf("Limpeza e utensilios domesticos");
        break;

    case 9:
        printf("Limpeza e utensilios domesticos");
        break;

    case 10:
        printf("Limpeza e utensilios domesticos");
        break;

    case 11:
        printf("Limpeza e utensilios domesticos");
        break;

    case 12:
        printf("Limpeza e utensilios domesticos");
        break;

    case 13:
        printf("Limpeza e utensilios domesticos");
        break;

    case 14:
        printf("Limpeza e utensilios domesticos");
        break;

    case 15:
        printf("Limpeza e utensilios domesticos");
        break;
    }
    return 0;
}