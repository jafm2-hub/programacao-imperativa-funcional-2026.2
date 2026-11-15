#include <stdio.h>
#include <stdlib.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main()
{
    int opcao;
    float num1, num2, resultado;
    
    system("cls");
    
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro operando: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo operando: ");
    scanf("%f", &num2);

    switch (opcao)
    {
        case 1:
            resultado = soma(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = subtrai(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = multiplica(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (num2 == 0)
            {
                printf("Erro: Não é possível dividir por zero!\n");
            }
            else
            {
                resultado = divide(num1, num2);
                printf("Resultado: %.2f\n", resultado);
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
    
    system("PAUSE");
    return 0;
}

float soma(float a, float b)
{
    return a + b;
}

float subtrai(float a, float b)
{
    return a - b;
}

float multiplica(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}