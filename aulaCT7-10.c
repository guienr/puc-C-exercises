#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pop = 0;
    float sal = 0;
    float fil = 0;
    float mediaf = 0;
    float medias = 0;
    float maiors = 0;
    float perc = 0;
    while(sal >= 0)
    {
        printf("Digite o salario: ");
        scanf("%f", &sal);
        if(sal < 0)
        {
            if(medias == 0)
            {
                printf("Erro");
                exit(0);
            }
        else
        {
            break;
        }
        }
        printf("Digite a quantidade de filhos: ");
        scanf("%f", &fil);
        medias = medias + sal;
        mediaf = mediaf + fil;
        if(sal > maiors)
        {
            maiors = sal;
        }
        if(sal < 1500)
        {
            perc++;
        }
        pop++;
    }
    medias = medias / pop;
    mediaf = mediaf / pop;
    perc = (perc / pop) * 100;
    printf("Media de salario da populacao: %.2f\n", medias);
    printf("Media do numero de filhos: %.2f\n", mediaf);
    printf("Maior salario dos habitantes: %.2f\n", maiors);
    printf("Percentual da populacao que ganha menos de R$1500: %.2f\n", perc);
    return 0;
}