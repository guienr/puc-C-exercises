#include <stdio.h>
#include <stdlib.h>

int main()
{
	float not1, not2, media, freq;
	printf("digite a primeira nota do aluno: ");
    scanf("%f", &not1);
    printf("digite a segunda nota do aluno: ");
    scanf("%f", &not2);
    printf("digite a frequencia do aluno: ");
    scanf("%f", &freq);
    media = (not1 + not2) / 2;
    if(media >= 5 && freq >= 75)
    {
        printf("aprovado");
    }
    else {
        printf("reprovado");
    }
	return 0;
}
