#include <stdio.h>

int main()
{
    float quadL, retanH, retanB, quadArea, retanArea, TriRetH, TriRetB, TriRetArea;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &quadL);
    printf("\nDigite a altura do retângulo: ");
    scanf("%f", &retanH);
    printf("\nDigite a base do retângulo: ");
    scanf("%f", &retanB);
    printf("\nDigite a altura do triângulo retângulo: ");
    scanf("%f", &TriRetH);
    printf("\nDigite a base do triângulo retângulo: ");
    scanf("%f", &TriRetB);

    quadArea = quadL * quadL;
    retanArea = retanB * retanH;
    TriRetArea = (TriRetB * TriRetH) / 2;


    printf("Área do quadrado: %.2f \nArea do Retângulo: %.2f \nÁrea do triângulo retângulo: %.2f \n", quadArea, retanArea, TriRetArea );
    return 0;
}