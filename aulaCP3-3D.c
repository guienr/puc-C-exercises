#include <stdio.h>
#include <stdlib.h>

int main()
{
    float chi = 1.5;
    float ze = 1.1;
    float anos = 0;
    while(chi >= ze)
    {
        anos++;
        chi = chi + 0.02;
        ze = ze + 0.03;
    }
    printf("Altura Chico: %.2f\n", chi);
    printf("Altura Ze: %.2f\n", ze);
    printf("Anos passados: %.0f", anos);
    return 0;
}