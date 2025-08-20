#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cel = 0;
    float fah = 30;
    float aux;
    aux = 5.0 / 9.0;
    for(fah = 30; fah <= 50; fah += 2)
    {
        cel = (aux * (fah - 32));
        printf("Fahrenheit: %.0f\t|\tCelsius: %.2f\n", fah, cel);
    }
    return 0;
}