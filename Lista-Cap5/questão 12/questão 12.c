#include <stdio.h>
#include <stdlib.h>

void exibeMenu(void);

int main()
{
    int opcao;
    
    system("cls");
    
    exibeMenu();
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
        case 1:
            printf("Você escolheu: Cadastrar\n");
            break;
        case 2:
            printf("Você escolheu: Listar\n");
            break;
        case 3:
            printf("Você escolheu: Remover\n");
            break;
        case 0:
            printf("Você escolheu: Sair\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
    
    system("PAUSE");
    return 0;
}

void exibeMenu(void)
{
    printf("1 - Cadastrar\n");
    printf("2 - Listar\n");
    printf("3 - Remover\n");
    printf("0 - Sair\n");
}