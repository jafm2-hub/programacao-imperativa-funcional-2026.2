#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int n);

int main()
{
    int num, i;
    
    system("cls");
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    if (ehPrimo(num))
    {
        printf("O número %d é primo.\n\n", num);
    }
    else
    {
        printf("O número %d não é primo.\n\n", num);
    }
    
    printf("Números primos de 1 até 50:\n");
    for (i = 1; i <= 50; i++)
    {
        if (ehPrimo(i))
        {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    system("PAUSE");
    return 0;
}

int ehPrimo(int n)
{
    int i;
    
    if (n <= 1)
    {
        return 0;
    }
    
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}