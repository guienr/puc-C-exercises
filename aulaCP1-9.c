#include <stdio.h>
#include <stdlib.h>

float val = 0, pag = 0, tro = 0;
int nota20 = 0, nota10 = 0, nota5 = 0, nota1 = 0;

int main()
{ 
    printf("digite o valor da compra: ");
    scanf("%f", &val);
    printf("digite o valor do pagamento: ");
    scanf("%f", &pag);
    tro = pag - val;
    printf("valor de compra = %.2f\nvalor do pagamento: %.2f\ntroco = %.2f\n", val, pag, tro);

    if(tro > 20) {
       nota20 = (int)tro / 20;
       tro = tro - (nota20 * 20);
    }
    if(tro > 10) {
        nota10 = (int)tro / 10;
        tro = tro - (nota10 * 10);
    }
    if(tro > 5) {
        nota5 = (int)tro / 5;
        tro = tro - (nota5 * 5);
    }
    if(tro > 1) {
        nota1 = (int)tro / 1;
        tro = tro - (nota1 * 1);
    }
    printf("20 = %d \n", nota20);
    printf("10 = %d \n", nota10);
    printf("5 = %d \n", nota5);
    printf("1 = %d \n", nota1);
    return 0;
}