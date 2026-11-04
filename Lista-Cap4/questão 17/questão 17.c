#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    
    float valor_compra, valor_desconto, valor_parcela, comissao;
    int opcao;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valor_compra);
    
    printf("Escolha a opção de pagamento:\n");
    printf("1 = À Vista (10%% de desconto)\n");
    printf("2 = Parcelado em 3x sem juros\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        valor_desconto = valor_compra * 0.90; 
        comissao = valor_desconto * 0.05;     
        
        printf("Valor final a pagar (à vista): R$ %.2f\n", valor_desconto);
        printf("Comissão do vendedor: R$ %.2f\n", comissao);
    }
    else if (opcao == 2)
    {
        valor_parcela = valor_compra / 3.0;
        comissao = valor_compra * 0.05;       
        
        printf("Valor de cada parcela (3x): R$ %.2f\n", valor_parcela);
        printf("Valor total a pagar: R$ %.2f\n", valor_compra);
        printf("Comissão do vendedor: R$ %.2f\n", comissao);
    }
    else
    {
        printf("Erro: Opção de pagamento inválida!\n");
    }

    system("PAUSE");
    return 0;
}