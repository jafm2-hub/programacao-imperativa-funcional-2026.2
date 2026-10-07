#include <stdio.h>
#include <stdlib.h>

int main() 

{

    int dias;
    float salario_bruto, gratificacao, imposto, salario_liquido;

    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &dias);

    salario_bruto = dias * 45.0;
    gratificacao = salario_bruto * 0.05;
    imposto = salario_bruto * 0.08;
    salario_liquido = salario_bruto + gratificacao - imposto;

    printf("\n--- HOLERITE DETALHADO ---\n");
    printf("Salaáio Bruto: R$ %.2f\n", salario_bruto);
    printf("Gratificação (5%%): R$ %.2f\n", gratificacao);
    printf("Imposto de Renda (8%%): R$ %.2f\n", imposto);
    printf("Salário Líquido a Receber: R$ %.2f\n", salario_liquido);

    
    system("PAUSE");
    
    
    return 0;
}