#include <stdio.h>
#include <math.h>

int main()
{

    const float PI = 3.141593f;
    float raio, volE, areaE;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    areaE = 4 * PI * pow(raio, 2);
    volE = (4.0/3.0) * PI * pow(raio, 3);

    printf("Área da superfície da esfera: %.2f \nVolume da esfera: %.2f\n", areaE, volE);

    return 0;
}