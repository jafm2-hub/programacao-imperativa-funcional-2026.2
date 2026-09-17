#include <stdio.h>

int main()
{
    float kmh, ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);

    ms = kmh / 3.6f;

    printf("Velocidade em m/s: %.2f m/s\n", ms);

    return 0;
}