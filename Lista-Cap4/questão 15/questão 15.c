#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    
    int idade, tempo_servico;

    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);
    printf("Digite o tempo de serviço (em anos): ");
    scanf("%d", &tempo_servico);

    if (idade >= 65 || tempo_servico >= 30 || (idade >= 60 && tempo_servico >= 25))
    {
        printf("O trabalhador PODE se aposentar.\n");
    }
    else
    {
        printf("O trabalhador NÃO PODE se aposentar.\n");
    }

    system("PAUSE");
    return 0;
}