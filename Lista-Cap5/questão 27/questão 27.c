#include <stdio.h>
#include <stdlib.h>

float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main()
{
    int opcao;
    float temp, resultado;
    
    system("cls");
    
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    
    printf("Digite a temperatura: ");
    scanf("%f", &temp);
    
    switch (opcao)
    {
        case 1:
            resultado = celsiusParaFahrenheit(temp);
            printf("Resultado: %.2f F\n", resultado);
            break;
        case 2:
            resultado = celsiusParaKelvin(temp);
            printf("Resultado: %.2f K\n", resultado);
            break;
        case 3:
            resultado = fahrenheitParaCelsius(temp);
            printf("Resultado: %.2f C\n", resultado);
            break;
        case 4:
            resultado = kelvinParaCelsius(temp);
            printf("Resultado: %.2f C\n", resultado);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
    
    system("PAUSE");
    return 0;
}

float celsiusParaFahrenheit(float c)
{
    return (c * 9.0 / 5.0) + 32.0;
}

float celsiusParaKelvin(float c)
{
    return c + 273.15;
}

float fahrenheitParaCelsius(float f)
{
    return (f - 32.0) * 5.0 / 9.0;
}

float kelvinParaCelsius(float k)
{
    return k - 273.15;
}