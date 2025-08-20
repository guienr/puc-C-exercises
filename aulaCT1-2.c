#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int A = 5, B = 13, aux;
    aux = A;
    A = B;
    B = aux;
    printf("A = %d\n", A);
    printf("B = %d", B);
    return 0;
}