#include <stdio.h>
#include <stdlib.h>
#include "areas.h"

int main()
{
    float raio, base, altura;
    
    system("cls");
    
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    printf("Área do círculo: %.2f\n\n", A_CIRC(raio));

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);
    printf("Área do retângulo: %.2f\n\n", A_RET(base, altura));

    printf("Digite a base do triângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);
    printf("Área do triângulo: %.2f\n", A_TRI(base, altura));
    
    system("PAUSE");
    return 0;
}