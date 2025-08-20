#include <stdio.h>

int main()
{
    int original, num, valor, res = 0;
    scanf("%d", &original);
    num = original;
    while(num > 0)
    {
        valor = num % 10;
        res += valor;
        num /= 10;
    }
    printf("\n\n\tNumero: %d Resultado: %d", original, res);
    return 0;
}

/*  entrada = 5013
original  num  valor  res
5013      5013 3      3
          501  1      4
          50   0      4
          5    5      9
          0
*/