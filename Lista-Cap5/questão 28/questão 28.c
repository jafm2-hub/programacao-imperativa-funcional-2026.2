#include <stdio.h>
#include <stdlib.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main()
{
    float preco, valorPago, subtotal, totalAPagar, troco;
    int quantidade, opcaoPagamento;
    
    system("cls");
    
    printf("Digite o preço unitário do produto: ");
    scanf("%f", &preco);
    
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    
    printf("Forma de pagamento (1 - À vista, 2 - Outro): ");
    scanf("%d", &opcaoPagamento);
    
    subtotal = calculaSubtotal(preco, quantidade);
    totalAPagar = aplicaDesconto(subtotal, opcaoPagamento);
    
    printf("\nSubtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", totalAPagar);
    
    printf("Digite o valor pago pelo cliente: ");
    scanf("%f", &valorPago);
    
    if (valorPago >= totalAPagar)
    {
        troco = calculaTroco(totalAPagar, valorPago);
        printf("Troco: R$ %.2f\n", troco);
    }
    else
    {
        printf("Valor pago insuficiente!\n");
    }
    
    system("PAUSE");
    return 0;
}

float calculaSubtotal(float preco, int quantidade)
{
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento)
{
    if (opcaoPagamento == 1)
    {
        return valor * 0.90;
    }
    return valor;
}

float calculaTroco(float total, float pago)
{
    return pago - total;
}