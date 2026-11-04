#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("cls");
    
    char operador;
    double num1, num2, resultado;

    printf("Escolha a operação (+, -, *, /, ^): ");
    scanf(" %c", &operador); 

    printf("Digite o primeiro operando: ");
    scanf("%lf", &num1);
    printf("Digite o segundo operando: ");
    scanf("%lf", &num2);

    switch (operador)
    {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
            
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
            
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
            
        case '/':
            if (num2 != 0)
            {
                resultado = num1 / num2;
                printf("Resultado: %.2lf\n", resultado);
            }
            else
            {
                printf("Erro: Divisão por zero não é permitida!\n");
            }
            break;
            
        case '^':
            resultado = pow(num1, num2);
            printf("Resultado: %.2lf\n", resultado);
            break;
            
        default:
            printf("Erro: Operação inválida!\n");
            break;
    }

    system("PAUSE");
    return 0;
}