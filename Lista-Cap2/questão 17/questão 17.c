#include <stdio.h>
#include <math.h>

int main()
{
    float PI = 3.141593f;
    float raio, circunC, areaC;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    areaC = PI * pow(raio, 2);
    circunC = 2 * PI * raio;

    printf("Área do circulo: %.2f\nCircunferência do circulo: %.2f\n", areaC, circunC);

    return 0;
}