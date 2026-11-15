#include <stdio.h>
#include <stdlib.h>

int ehPar(int n);

int main()
{
    int numero;
    
    system("cls");
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    if (ehPar(numero))
    {
        printf("O número é par.\n");
    }
    else
    {
        printf("O número é ímpar.\n");
    }
    
    system("PAUSE");
    return 0;
}

int ehPar(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    return 0;
}