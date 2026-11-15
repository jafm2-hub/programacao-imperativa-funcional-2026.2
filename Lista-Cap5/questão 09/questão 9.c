#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b);

int main()
{
    int num1, num2, resultado;
    
    system("cls");
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    resultado = maior(num1, num2);
    printf("O maior número é: %d\n", resultado);
    
    system("PAUSE");
    return 0;
}

int maior(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}