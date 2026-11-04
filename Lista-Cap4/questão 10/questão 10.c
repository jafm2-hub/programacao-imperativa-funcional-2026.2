#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("O número é PAR e ");
    }
    else
    {
        printf("O número é ÍMPAR e ");
    }

    if (numero > 0)
    {
        printf("POSITIVO.\n");
    }
    else if (numero < 0)
    {
        printf("NEGATIVO.\n");
    }
    else
    {
        printf("ZERO.\n");
    }

    system("PAUSE");
    return 0;
}