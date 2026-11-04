#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int opcao;

    printf("=== Menu de Atendimento do Banco ===\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferência\n");
    printf("4 - Falar com Atendente\n");
    printf("====================================\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            printf("Você selecionou: Consultar Saldo. Direcionando para o seu saldo atual...\n");
            break;
        case 2:
            printf("Você selecionou: Efetuar Extrato. Preparando os lançamentos da sua conta...\n");
            break;
        case 3:
            printf("Você selecionou: Fazer Transferência. Informe os dados bancários do destinatário...\n");
            break;
        case 4:
            printf("Aguarde na linha. Transferindo para o próximo atendente disponível...\n");
            break;
        default:
            printf("Erro: Opção inválida! Por favor, selecione um número de 1 a 4.\n");
            break;
    }

    system("PAUSE");
    return 0;
}