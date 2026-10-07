
#include <stdio.h>
#include <stdlib.h>

int main() 

{

    float valor, soma = 0.0, media = 0.0;
    int quantidade = 0;

    printf("Digite um valor real positivo (digite um número negativo para encerrar): ");
    scanf("%f", &valor);

    while (valor >= 0.0) {
        soma += valor;
        quantidade++;

        printf("Digite um valor real positivo (digite um número negativo para encerrar): ");
        scanf("%f", &valor);
    }

    if (quantidade > 0)
    {
        media = soma / quantidade;
        printf("\n--- RESULTADOS ---\n");
        printf("Quantidade de valores válidos: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Média aritmética: %.2f\n", media);
    }
    else
    {
        printf("\nNenhum valor válido foi digitado.\n");
    }

    
    system("PAUSE");
    
    
    return 0;
}