#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int inter1 = 0;
    int inter2 = 0;
    int inter3 = 0;
    int inter4 = 0;
    while(num >= 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num <= 25)
        {
            inter1++;
        }
        else
        {
            if(num <= 50)
            {
                inter2++;
            }
            else
            {
                if(num <= 75)
                {
                    inter3++;
                }
                else
                {
                    if(num <= 100)
                    {
                        inter4++;
                    }
                    else
                    {
                        if(num > 100)
                        {
                            printf("Numero invalido");
                        }
                    }
                }
            }
        }
    }
    printf("Quantidade de numeros entre o intervalo 1: %d\n", inter1);
    printf("Quantidade de numeros entre o intervalo 2: %d\n", inter2);
    printf("Quantidade de numeros entre o intervalo 3: %d\n", inter3);
    printf("Quantidade de numeros entre o intervalo 4: %d\n", inter4);
    return 0;
}