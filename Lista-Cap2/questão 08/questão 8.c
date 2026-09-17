#include <stdio.h>

int main()
{
    
    int num, quadrado;
    float decimaP;
    printf("Digite um número inteiro: ");
    scanf("%d", &num );
    quadrado = num * num;
    decimaP = (float)num / 10;
    
    printf("\nQuadrado: %d\nDécima Parte: %.2f12", quadrado, decimaP);


    return 0;
}