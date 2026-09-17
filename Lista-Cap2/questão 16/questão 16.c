#include <stdio.h>
#include <math.h>

int main()
{
    float degrauH, escadaH, escadaHcm, totalDegraus;

    printf("Digite a altura do degrau em centímetros: ");
    scanf("%f", &degrauH);
    printf("Digite a altura da escada em metros: ");
    scanf("%f", &escadaH);

    escadaHcm = escadaH * 100;
    
    totalDegraus = ceil(escadaHcm / degrauH);

    printf("\nQuantidade mínima de degraus: %.0f\n", totalDegraus);
    
    return 0;
}