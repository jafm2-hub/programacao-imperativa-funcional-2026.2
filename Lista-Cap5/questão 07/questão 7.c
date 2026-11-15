#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b);

int main()
{
    int num1, num2, resultado;
    
    system("cls");
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    resultado = soma(num1, num2);
    printf("A soma é: %d\n", resultado);
    
    system("PAUSE");
    return 0;
}

int soma(int a, int b)
{
    return a + b;
}