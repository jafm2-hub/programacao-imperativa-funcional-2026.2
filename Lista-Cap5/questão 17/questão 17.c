#include <stdio.h>
#include <stdlib.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main()
{
    int num;
    
    system("cls");
    
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &num);
    
    if (num >= 0)
    {
        printf("Fatorial Iterativo: %ld\n", fatorialIterativo(num));
        printf("Fatorial Recursivo: %ld\n", fatorialRecursivo(num));
    }
    else
    {
        printf("Número inválido.\n");
    }
    
    system("PAUSE");
    return 0;
}

long fatorialIterativo(int n)
{
    long fat = 1;
    int i;
    
    for (i = 1; i <= n; i++)
    {
        fat *= i;
    }
    
    return fat;
}

long fatorialRecursivo(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * fatorialRecursivo(n - 1);
}