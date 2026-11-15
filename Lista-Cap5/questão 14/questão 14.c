#include <stdio.h>
#include <stdlib.h>

int somaDigitos(int n);

int main()
{
    int numero, resultado;
    
    system("cls");
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    
    resultado = somaDigitos(numero);
    printf("A soma dos dígitos é: %d\n", resultado);
    
    system("PAUSE");
    return 0;
}

int somaDigitos(int n)
{
    if (n == 0)
    {
        return 0;
    }
    
    return (n % 10) + somaDigitos(n / 10);
}