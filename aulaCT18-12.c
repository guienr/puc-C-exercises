#include <stdio.h>
#include <stdlib.h>
#define tam 101

void ler(char s[tam], char *l)
{
    printf("Digite a string: ");
    fgets(s, tam, stdin);
    printf("Digite a letra: ");
    scanf("%c", l);
}

int verificar(char s[tam], char l)
{
    int quant = 0;
    int i = 0;

    for(i = 0; i != '\n'; i++)
    {
        if(s[i] == l)
        {
            quant++;
        }
    }
    return quant;
}

int main()
{
    char s[tam];
    char l;
    int quant;

    ler(s, &l);
    quant = verificar(s, l);

    printf("\nQuantidade de vezes que a string aparece: %d\n", quant);
    return 0;
}