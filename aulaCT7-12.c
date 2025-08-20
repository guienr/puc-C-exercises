#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pes = 1;
    float alt = 0;
    float ida = 0;
    float peso = 0;
    float quant5 = 0;
    float media = 0;
    float porc = 0;
    for(pes = 1; pes <= 25; pes++)
    {
        printf("Digite a idade: ");
        scanf("%f", &ida);
        printf("Digite a altura: ");
        scanf("%f", &alt);
        printf("Digite o peso: ");
        scanf("%f", &peso);
        if(ida < 0 || alt <= 0 || peso <=0)
        {
            printf("Valores invalidos");
            exit(0);
        }
        if(ida > 50)
        {
            quant5++;
        }
        if(10 < ida < 20)
        {
            media = media + alt;
        }
        if(peso < 40)
        {
            porc++;
        }
    }
    media = media / 25;
    porc = (porc / 25) * 100;
    printf("Quantidade de pessoas com idade superior a 50 anos: %.0f\n", quant5);
    printf("Média das alturas das pessoas com idade entre 10 e 20 anos: %.2f\n", media);
    printf("Porcentagem das pessoas com peso inferior a 40 quilos: %.0f\n", porc);
    return 0;
}