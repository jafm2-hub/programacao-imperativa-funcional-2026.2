#include <stdio.h>

int main()
{
 
    float comprimento, largura, aramePreco, precoTotal, perimetro, arameQntd;
    

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);
    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);
    printf("Digite o preço do arame por metro: ");
    scanf("%f", &aramePreco);

    perimetro = comprimento + comprimento + largura + largura;
    arameQntd = perimetro * 3;
    precoTotal = arameQntd * aramePreco;
    
    printf("Quantidade de arame em metros: %.2f \nPreço Final: R$ %.2f \n",arameQntd, precoTotal);

    return 0;
}