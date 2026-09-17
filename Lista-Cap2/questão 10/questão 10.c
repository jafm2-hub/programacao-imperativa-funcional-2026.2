#include <stdio.h>

int main()
{
    
    float C, F, K;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &C );

    F = (C * 9/5) + 32;
    K = C + 273.15;
    
    printf("\nFahrenheit: %.2f\nKelvin: %.2f", F, K );

    return 0;
}