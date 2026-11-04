#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int valor_total, valor_entregue, troco, notas;

    printf("Digite o valor total da compra: R$ ");
    scanf("%d", &valor_total);
    printf("Digite o valor entregue ao caixa: R$ ");
    scanf("%d", &valor_entregue);

    if (valor_entregue < valor_total)
    {
        printf("Erro: O valor entregue é insuficiente!\n");
    }
    else
    {
        troco = valor_entregue - valor_total;
        printf("Troco a devolver: R$ %d\n\n", troco);
        printf("--- Decomposição em Cédulas ---\n");

        if (troco >= 100)
        {
            notas = troco / 100;
            printf("%d nota(s) de R$ 100\n", notas);
            troco = troco % 100;
        }
        if (troco >= 50)
        {
            notas = troco / 50;
            printf("%d nota(s) de R$ 50\n", notas);
            troco = troco % 50;
        }
        if (troco >= 20)
        {
            notas = troco / 20;
            printf("%d nota(s) de R$ 20\n", notas);
            troco = troco % 20;
        }
        if (troco >= 10)
        {
            notas = troco / 10;
            printf("%d nota(s) de R$ 10\n", notas);
            troco = troco % 10;
        }
        if (troco >= 5)
        {
            notas = troco / 5;
            printf("%d nota(s) de R$ 5\n", notas);
            troco = troco % 5;
        }
        if (troco >= 2)
        {
            notas = troco / 2;
            printf("%d nota(s) de R$ 2\n", notas);
            troco = troco % 2; 
        }
        
        if (troco == 1)
        {
            printf("1 moeda(s) de R$ 1\n");
        }
    }

    system("PAUSE");
    return 0;
}