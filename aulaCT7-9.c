#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alu = 0;
    float aux = 0;
    float notas = 0;
    float media = 0;
    printf("Digite o numero de alunos: ");
    scanf("%f", &alu);
    aux = alu;
    while(alu > 0)
    {
        printf("Digite as notas dos alunos: ");
        scanf("%f", &notas);
        media = media + notas;
        alu--;
    }
    media = media / aux;
    printf("Media aritmetica das notas lidas: %.2f", media);
    return 0;
}