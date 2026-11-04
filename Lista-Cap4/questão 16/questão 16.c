#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    
    float distancia, litros, consumo;

    printf("Digite a distância percorrida (em km): ");
    scanf("%f", &distancia);
    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);

    consumo = distancia / litros;
    printf("Consumo calculado: %.2f km/l\n", consumo);

    if (consumo < 8.0)
    {
        printf("Mensagem: Venda o carro!\n");
    }
    else if (consumo >= 8.0 && consumo <= 14.0)
    {
        printf("Mensagem: Econômico!\n");
    }
    else
    {
        printf("Mensagem: Super econômico!\n");
    }

    system("PAUSE");
    return 0;
}