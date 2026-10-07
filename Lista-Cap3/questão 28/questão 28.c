#include <stdio.h>
#include <stdlib.h>

int main() 

{

    int opcao;
    float salario, novo_salario, desconto;

    do
    {
        printf("\n========================================\n");
        printf("     SISTEMA DE FOLHA DE PAGAMENTO\n");
        printf("========================================\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retenção de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("\nDigite o salário atual do funcionário: R$ ");
                scanf("%f", &salario);
                
                if (salario <= 2000.0)
                {
                    novo_salario = salario + (salario * 0.15);
                    printf("Aumento de 15%% aplicado.\n");
                }
                else
                {
                    novo_salario = salario + (salario * 0.10);
                    printf("Aumento de 10%% aplicado.\n");
                }
                printf("Novo salário reajustado: R$ %.2f\n", novo_salario);
                break;

            case 2:
                printf("\nDigite o salário do funcionário: R$ ");
                scanf("%f", &salario);
                
                if (salario <= 3000.0)
                {
                    desconto = salario * 0.08;
                    printf("Retenção de 8%% aplicada.\n");
                }
                else
                {
                    desconto = salario * 0.15;
                    printf("Retenção de 15%% aplicada.\n");
                }
                printf("Valor descontado de Imposto de Renda: R$ %.2f\n", desconto);
                printf("Salário líquido após retenção: R$ %.2f\n", salario - desconto);
                break;

            case 3:
                printf("\nEncerrando o programa. Até logo!\n");
                break;

            default:
                printf("\nErro: Opção inválida! Por favor, escolha 1, 2 ou 3.\n");
                break;
        }

    } while (opcao != 3);

    
    system("PAUSE");
    
    
    return 0;
}