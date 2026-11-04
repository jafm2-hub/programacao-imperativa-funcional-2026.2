#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    
    int opcao;
    float temperatura, resultado;

    printf("=== Menu de Conversão de Temperatura ===\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Kelvin para Celsius\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    if (opcao >= 1 && opcao <= 4)
    {
        printf("Digite a temperatura a ser convertida: ");
        scanf("%f", &temperatura);
    }

    switch (opcao)
    {
        case 1:
            resultado = (temperatura * 1.8) + 32.0;
            printf("Resultado: %.2f Fahrenheit\n", resultado);
            break;
        case 2:
            resultado = temperatura + 273.15;
            printf("Resultado: %.2f Kelvin\n", resultado);
            break;
        case 3:
            resultado = (temperatura - 32.0) / 1.8;
            printf("Resultado: %.2f Celsius\n", resultado);
            break;
        case 4:
            resultado = temperatura - 273.15;
            printf("Resultado: %.2f Celsius\n", resultado);
            break;
        default:
            printf("Erro: Opção inválida!\n");
            break;
    }

    system("PAUSE");
    return 0;
}