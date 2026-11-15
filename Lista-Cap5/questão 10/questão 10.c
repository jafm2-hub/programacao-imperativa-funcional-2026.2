#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

float area(float r);

int main()
{
    float raio, resultado;
    
    system("cls");
    
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    
    resultado = area(raio);
    printf("A área da esfera é: %.2f\n", resultado);
    
    system("PAUSE");
    return 0;
}

float area(float r)
{
    return 4 * PI * r * r;
}