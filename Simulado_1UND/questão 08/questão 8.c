#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

int main() 

{

    double raio, area, volume;

    printf("Digite o valor do raio (R): ");
    scanf("%lf", &raio);

    area = 4.0 * PI * pow(raio, 2);
    volume = (4.0 / 3.0) * PI * pow(raio, 3);

    printf("Área da superfície: %.3lf\n", area);
    printf("Volume da esfera: %.3lf\n", volume);

    
    system("PAUSE");
    
    
    return 0;
}