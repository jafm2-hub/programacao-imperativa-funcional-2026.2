#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    
    float valor_produto, valor_final;
    int estado;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor_produto);
    
    printf("Escolha o estado de destino (1=MG, 2=SP, 3=RJ, 4=MS): ");
    scanf("%d", &estado);

    switch (estado)
    {
        case 1: 
            valor_final = valor_produto + (valor_produto * 0.07);
            printf("Preço final para MG: R$ %.2f\n", valor_final);
            break;
        case 2: 
            valor_final = valor_produto + (valor_produto * 0.12);
            printf("Preço final para SP: R$ %.2f\n", valor_final);
            break;
        case 3: 
            valor_final = valor_produto + (valor_produto * 0.15);
            printf("Preço final para RJ: R$ %.2f\n", valor_final);
            break;
        case 4: 
            valor_final = valor_produto + (valor_produto * 0.08);
            printf("Preço final para MS: R$ %.2f\n", valor_final);
            break;
        default:
            printf("Erro: Código de estado inválido!\n");
            break;
    }

    system("PAUSE");
    return 0;
}