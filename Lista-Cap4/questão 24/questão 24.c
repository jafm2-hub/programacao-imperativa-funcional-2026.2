#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int a1, a2, a3;

    printf("Digite os três ângulos internos do triângulo: ");
    scanf("%d %d %d", &a1, &a2, &a3);

    if (a1 + a2 + a3 == 180 && a1 > 0 && a2 > 0 && a3 > 0)
    {
        printf("Triângulo válido! Classificação: ");
        
        if (a1 == 90 || a2 == 90 || a3 == 90)
        {
            printf("Triângulo Retângulo.\n");
        }
        else if (a1 > 90 || a2 > 90 || a3 > 90)
        {
            printf("Triângulo Obtusângulo.\n");
        }
        else
        {
            printf("Triângulo Acutângulo.\n");
        }
    }
    else
    {
        printf("Erro: Os valores informados não formam um triângulo válido (A soma deve ser 180 graus)!\n");
    }

    system("PAUSE");
    return 0;
}