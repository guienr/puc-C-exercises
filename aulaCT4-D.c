#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha = 4850, num = 0, tentativas = 0;
    for(tentativas = 0; tentativas <= 3; tentativas++)
    {
        if(tentativas == 3)
        {
            break;
        }
        printf("Digite uma senha de 4 digitos: ");
        scanf("%d", &num);
        if(num == senha)
        {
            printf("Acesso liberado\n");
            break;
        }
        else
        {
            printf("Acesso negado\n");
        }
    }
    return 0;
}