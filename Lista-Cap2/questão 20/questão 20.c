#include <stdio.h>
#include <math.h>

int main()
{
 
    float catetoA, catetoB, hipotenusa;
    

    printf("Digite o tamanho do cateto A: ");
    scanf("%f", &catetoA);
    printf("Digite o tamanho do cateto B: ");
    scanf("%f", &catetoB);

    hipotenusa = sqrt(pow(catetoA, 2) + pow(catetoB, 2));
    
    printf("Comprimento da Hipotenusa: %.0f \n", hipotenusa);

    return 0;
}